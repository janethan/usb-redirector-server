/*
 *
 *  Copyright (C) 2007-2020 SimplyCore, LLC
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 *
 */

#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/slab.h>
#include <linux/ioctl.h>
#include <linux/usb.h>
#include <linux/types.h>
#include <linux/fs.h>
#include <linux/cdev.h>
#include <linux/poll.h>
#include <linux/spinlock.h>
#include <linux/list.h>
#include <linux/version.h>
#include <linux/kref.h>
#include <linux/device.h>
#include <linux/compat.h>
#include <linux/mm.h>
#include <linux/vmalloc.h>
#include <linux/module.h>
#include <asm/uaccess.h>
#define KERNEL_GT(IIIlllI,IIIIIII,IlIIIlIl)			(LINUX_VERSION_CODE > \
KERNEL_VERSION((IIIlllI),(IIIIIII),(IlIIIlIl)))
#define KERNEL_LT(IIIlllI,IIIIIII,IlIIIlIl)			(LINUX_VERSION_CODE < \
KERNEL_VERSION((IIIlllI),(IIIIIII),(IlIIIlIl)))
#define KERNEL_EQ(IIIlllI,IIIIIII,IlIIIlIl)			(LINUX_VERSION_CODE == \
KERNEL_VERSION((IIIlllI),(IIIIIII),(IlIIIlIl)))
#define KERNEL_GT_EQ(IIIlllI,IIIIIII,IlIIIlIl)			(LINUX_VERSION_CODE >= \
KERNEL_VERSION((IIIlllI),(IIIIIII),(IlIIIlIl)))
#define KERNEL_LT_EQ(IIIlllI,IIIIIII,IlIIIlIl)			(LINUX_VERSION_CODE <= \
KERNEL_VERSION((IIIlllI),(IIIIIII),(IlIIIlIl)))
#if defined(RHEL_RELEASE_CODE) 
#define RHEL_RELEASE_GT(IIIlllI,IIIIIII) 		(RHEL_RELEASE_CODE > \
RHEL_RELEASE_VERSION((IIIlllI),(IIIIIII)))
#define RHEL_RELEASE_LT(IIIlllI,IIIIIII)		(RHEL_RELEASE_CODE < \
RHEL_RELEASE_VERSION((IIIlllI),(IIIIIII)))
#define RHEL_RELEASE_EQ(IIIlllI,IIIIIII)		(RHEL_RELEASE_CODE == \
RHEL_RELEASE_VERSION((IIIlllI),(IIIIIII)))
#define RHEL_RELEASE_GT_EQ(IIIlllI,IIIIIII)		(RHEL_RELEASE_CODE >= \
RHEL_RELEASE_VERSION((IIIlllI),(IIIIIII)))
#define RHEL_RELEASE_LT_EQ(IIIlllI,IIIIIII)		(RHEL_RELEASE_CODE <= \
RHEL_RELEASE_VERSION((IIIlllI),(IIIIIII)))
#else
#define RHEL_RELEASE_GT(IIIlllI,IIIIIII) 		(0x1d44+1638-0x23aa)
#define RHEL_RELEASE_LT(IIIlllI,IIIIIII)		(0x17b7+3410-0x2509)
#define RHEL_RELEASE_EQ(IIIlllI,IIIIIII)		(0x868+1481-0xe31)
#define RHEL_RELEASE_GT_EQ(IIIlllI,IIIIIII)		(0x460+5536-0x1a00)
#define RHEL_RELEASE_LT_EQ(IIIlllI,IIIIIII)		(0x1612+4052-0x25e6)
#endif

#ifndef BUS_ID_SIZE
#define BUS_ID_SIZE (0x24+5359-0x14ff)
#endif
#include "../public/pubstt2.h"
#include "../public/apitypes.h"
#include "../public/pubuniprotocol.h"
#include "../public/interface.h"
#include "../public/public_devices.h"
#include "utils.h"
#include "driver.h"
#include "cdev.h"
#include "stub.h"
#include "vhci.h"
#include "minor_loader.h"
#include "minor_stub.h"
#include "minor_vbus.h"
#include "minor_vstub.h"
#include "urb_chain.h"
#include "sg.h"

#if KERNEL_LT_EQ((0x60+6435-0x1981),(0x1847+2004-0x2015),(0x4d+2899-0xb91))
#define IIIIIlIlI __stringify(KBUILD_MODNAME)
#else
#define IIIIIlIlI KBUILD_MODNAME
#endif

#ifndef CONFIG_PRINTK_TIME
#define llIlIlII(IIlIllI, lIIllll...) printk(KERN_DEBUG \
"\x5b\x25\x30\x39\x75\x5d\x20\x25\x73\x3a\x20" IIlIllI, jiffies_to_msecs(jiffies\
), IIIIIlIlI, ## lIIllll)
#else
#define llIlIlII(IIlIllI, lIIllll...) printk(KERN_DEBUG "\x25\x73\x3a\x20" \
IIlIllI, IIIIIlIlI, ## lIIllll)
#endif

#ifdef _USBD_DEBUG_
#define lIlll(IIlIllI, lIIllll...) llIlIlII(IIlIllI, ##lIIllll)
#define lIIIl(IIlIllI, lIIllll...) llIlIlII("\x25\x73\x3a\x20" IIlIllI, __func__\
, ##lIIllll)
#else
#define lIlll(IIlIllI, lIIllll...) do {} while((0x28c+7200-0x1eac))
#define lIIIl(IIlIllI, lIIllll...) do {} while((0x77+2143-0x8d6))
#endif

#define IIllIl(IIlIllI, lIIllll...) llIlIlII(IIlIllI, ##lIIllll)
extern size_t IIlIIlI;
#if KERNEL_LT_EQ((0x1a8b+745-0x1d72),(0xf4d+5821-0x2604),(0x200c+304-0x2125))
typedef unsigned long uintptr_t;
#endif
#if KERNEL_LT_EQ((0x4a7+1227-0x970),(0x461+4449-0x15bc),(0x720+3833-0x160a))
#define atomic_xchg(lllIIIIIl, new) (xchg(&((lllIIIIIl)->counter), new))
#endif
#if KERNEL_LT((0x9+9078-0x237c),(0xdcd+262-0xec1),(0x1046+4386-0x2168))




#undef strncasecmp
#define strncasecmp strnicmp
#endif

