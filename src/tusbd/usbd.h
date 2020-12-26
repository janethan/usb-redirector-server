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
#define KERNEL_GT(lIlIIlI,IIIIIII,llllIlII)			(LINUX_VERSION_CODE > \
KERNEL_VERSION((lIlIIlI),(IIIIIII),(llllIlII)))
#define KERNEL_LT(lIlIIlI,IIIIIII,llllIlII)			(LINUX_VERSION_CODE < \
KERNEL_VERSION((lIlIIlI),(IIIIIII),(llllIlII)))
#define KERNEL_EQ(lIlIIlI,IIIIIII,llllIlII)			(LINUX_VERSION_CODE == \
KERNEL_VERSION((lIlIIlI),(IIIIIII),(llllIlII)))
#define KERNEL_GT_EQ(lIlIIlI,IIIIIII,llllIlII)			(LINUX_VERSION_CODE >= \
KERNEL_VERSION((lIlIIlI),(IIIIIII),(llllIlII)))
#define KERNEL_LT_EQ(lIlIIlI,IIIIIII,llllIlII)			(LINUX_VERSION_CODE <= \
KERNEL_VERSION((lIlIIlI),(IIIIIII),(llllIlII)))
#if defined(RHEL_RELEASE_CODE) 
#define RHEL_RELEASE_GT(lIlIIlI,IIIIIII) 		(RHEL_RELEASE_CODE > \
RHEL_RELEASE_VERSION((lIlIIlI),(IIIIIII)))
#define RHEL_RELEASE_LT(lIlIIlI,IIIIIII)		(RHEL_RELEASE_CODE < \
RHEL_RELEASE_VERSION((lIlIIlI),(IIIIIII)))
#define RHEL_RELEASE_EQ(lIlIIlI,IIIIIII)		(RHEL_RELEASE_CODE == \
RHEL_RELEASE_VERSION((lIlIIlI),(IIIIIII)))
#define RHEL_RELEASE_GT_EQ(lIlIIlI,IIIIIII)		(RHEL_RELEASE_CODE >= \
RHEL_RELEASE_VERSION((lIlIIlI),(IIIIIII)))
#define RHEL_RELEASE_LT_EQ(lIlIIlI,IIIIIII)		(RHEL_RELEASE_CODE <= \
RHEL_RELEASE_VERSION((lIlIIlI),(IIIIIII)))
#else
#define RHEL_RELEASE_GT(lIlIIlI,IIIIIII) 		(0x1626+325-0x176b)
#define RHEL_RELEASE_LT(lIlIIlI,IIIIIII)		(0x123a+2368-0x1b7a)
#define RHEL_RELEASE_EQ(lIlIIlI,IIIIIII)		(0x1035+5544-0x25dd)
#define RHEL_RELEASE_GT_EQ(lIlIIlI,IIIIIII)		(0xa87+2238-0x1345)
#define RHEL_RELEASE_LT_EQ(lIlIIlI,IIIIIII)		(0x1602+3403-0x234d)
#endif

#ifndef BUS_ID_SIZE
#define BUS_ID_SIZE (0x381+5122-0x176f)
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

#if KERNEL_LT_EQ((0x2bf+280-0x3d5),(0x1982+2303-0x227b),(0x15df+291-0x16f3))
#define llIlIIIIl __stringify(KBUILD_MODNAME)
#else
#define llIlIIIIl KBUILD_MODNAME
#endif

#ifndef CONFIG_PRINTK_TIME
#define IllIIIIl(IIllIlI, IllIlII...) printk(KERN_DEBUG \
"\x5b\x25\x30\x39\x75\x5d\x20\x25\x73\x3a\x20" IIllIlI, jiffies_to_msecs(jiffies\
), llIlIIIIl, ## IllIlII)
#else
#define IllIIIIl(IIllIlI, IllIlII...) printk(KERN_DEBUG "\x25\x73\x3a\x20" \
IIllIlI, llIlIIIIl, ## IllIlII)
#endif

#ifdef _USBD_DEBUG_
#define Illll(IIllIlI, IllIlII...) IllIIIIl(IIllIlI, ##IllIlII)
#define IIlll(IIllIlI, IllIlII...) IllIIIIl("\x25\x73\x3a\x20" IIllIlI, __func__\
, ##IllIlII)
#else
#define Illll(IIllIlI, IllIlII...) do {} while((0x2c5+6438-0x1beb))
#define IIlll(IIllIlI, IllIlII...) do {} while((0xe76+3809-0x1d57))
#endif

#define IIllIl(IIllIlI, IllIlII...) IllIIIIl(IIllIlI, ##IllIlII)
extern size_t IIlIIlI;
#if KERNEL_LT_EQ((0xdfc+3822-0x1ce8),(0xc30+5385-0x2133),(0x316+1712-0x9af))
typedef unsigned long uintptr_t;
#endif
#if KERNEL_LT_EQ((0x1547+846-0x1893),(0x1cba+2567-0x26bb),(0x1c9+2406-0xb20))
#define atomic_xchg(lllIIIIIl, new) (xchg(&((lllIIIIIl)->counter), new))
#endif
#if KERNEL_LT((0x51+2593-0xa6f),(0x126a+3530-0x2022),(0x36a+589-0x5b7))




#undef strncasecmp
#define strncasecmp strnicmp
#endif

