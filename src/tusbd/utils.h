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

#ifndef IIIlllIII
#define IIIlllIII
#include "urb_chain.h"
#include "sg.h"

#define IIlllIIl		(0xdc9+2797-0x18b6)
#define IIIIlll		(0x8fb+3870-0x1818)
#define IIIlIlI		(0x2032+1326-0x255e)
#define lllIlllIl	(0x799+6968-0x22ce)
#define IllIlII		(0xd8c+3919-0x1cd7)

#define lIlIIlI		(0x1372+285-0x148f) 
#define IlIIIlI	(0x16a+5314-0x162b) 
#if KERNEL_GT_EQ((0x454+3213-0x10df),(0xc1b+5062-0x1fdb),(0x68+8517-0x218e))
#define IIlIIII			(0xaf1+3443-0x1862) 
#endif
struct lIIll{size_t IlIll;struct kref IllIll;atomic_t state;llIIII lIlIl;int 
IlllIl;
llIlIllIl lIlIlII;lIllIl endpoint;
struct list_head llllIl;struct IIlll*IIIll;union{struct{struct urb*IlllI;
void*llIIl;
}lIIIll;struct{struct IlIlII*llIIlIl;
struct lIIIllI*lIIlll;
}lIllII;
#if KERNEL_GT_EQ((0xe7a+1773-0x1565),(0x59+4217-0x10cc),(0x9e5+6620-0x23a2))
struct{struct urb*IlllI;
struct IIIlllIl sg;}IlIIIII;
#endif
};char IlllllI:(0x789+1090-0xbca);
char IIIIlIl:(0x622+3711-0x14a0);



};struct llIlIllI{struct list_head IIIIll;
llIIII lIlIl;int llllllIll;int IlIlIIIII;};
#ifdef _USBD_DEBUG_MEMORY_
extern atomic_t llIlllllI;extern atomic_t IlllIIlll;extern atomic_t lIIlllIl;
extern atomic_t llIlllIlI;
#ifdef ATOMIC64_INIT
extern atomic64_t IlIlIIIl;
#endif
static inline struct urb*lIlIIlIl(int IIlIIIIll,gfp_t llllI){atomic_inc(&
llIlllllI);return usb_alloc_urb(IIlIIIIll,llllI);}static inline void lllllIlI(
struct urb*urb){atomic_inc(&IlllIIlll);usb_free_urb(urb);}static inline void*
IllIllI(size_t IlIll,int flags){atomic_inc(&lIIlllIl);
#ifdef ATOMIC64_INIT
atomic64_add(IlIll,&IlIlIIIl);
#endif
return kmalloc(IlIll,flags);}static inline void*lIllllI(size_t IlIll,int flags){
atomic_inc(&lIIlllIl);
#ifdef ATOMIC64_INIT
atomic64_add(IlIll,&IlIlIIIl);
#endif
return kzalloc(IlIll,flags);}static inline void lIlIll(const void*llIIlllII){
atomic_inc(&llIlllIlI);return kfree(llIIlllII);}
#else 
#define	lIlIIlIl	usb_alloc_urb
#define	lllllIlI	usb_free_urb
#define	IllIllI		kmalloc
#define	lIllllI		kzalloc
#define	lIlIll			kfree
#endif 
#ifdef _USBD_ENABLE_STUB_
struct lIIll*llIlIIllI(struct IIlll*IIIll,const void __user*IllIl,size_t lIlllII
);int IIIIlllIl(struct lIIll*lIlII,void __user*IllIl,size_t lIlllII);struct 
lIIll*IllIIlIlI(struct lIIll*lIlII,gfp_t llllI);void IllIlll(struct lIIll*lIlII)
;void lIlIIIIl(struct kref*IIllIlI);
#endif
void IIlllIlIl(struct usb_device*IlIIl,u8*IIlIllll,u8*IllIllIl,u8*IlIIIlll);
const char*lllllIlll(unsigned long IlIlllI);const char*llIIlIIlI(unsigned long 
IlIlllI);void IIIlIIIll(struct urb*IlllI,llIIII lIlIl);void llIlIIl(IIlII IIlIl)
;
#ifdef _USBD_ENABLE_VHCI_
int llIlIlllI(struct list_head*llllllI,llIIII lIlIl,void*llIIl,size_t IlIIIl);
int IIIllIlIl(IIlII IIlIl,struct list_head*llllllI,int*status);
#endif
int lIllllIl(lllII status);int lIIIIIIII(void*llIlIIIIl,struct vm_area_struct*
llIIIlI);llIIII lIllIIlll(void);size_t IlIIIllI(struct usb_iso_packet_descriptor
*lllllIll,int IIIIl,void*IIIIIll,void*lllIll,int IIlIlIlI);size_t IlIIIllll(
struct usb_iso_packet_descriptor*lllllIll,int IIIIl,int IIlIlIlI);void lIIIlIlII
(dma_addr_t IIIIIll,void*lllIll,unsigned long IIlIIl);void llIlIIlIl(void*
IIIIIll,dma_addr_t lllIll,unsigned long IIlIIl);char*lIllIIII(struct kobject*
kobj,gfp_t lIlllIlII);void IlIlIllII(char*IIlIlll);int llIlllIII(struct device*
dev);int IIIIlIlII(struct device*dev);int IIIIlIIII(struct device*dev);
#if KERNEL_GT_EQ((0xf82+2097-0x17b1),(0x5f1+1879-0xd42),(0xe2+8704-0x22cc))
void llIllllI(struct device*dev,int llIllIlI);int IIlIIllI(struct device*dev);
#endif
#if KERNEL_GT_EQ((0x1231+342-0x1385),(0x6e9+4681-0x192c),(0x1277+2709-0x1cee))
#define llIIIl(llIllllII) dev_name((llIllllII))
#else
#define llIIIl(llIllllII) (llIllllII)->bus_id
#endif
#if KERNEL_GT_EQ((0x2ab+1041-0x6b8),(0x3e0+7597-0x2181),(0x7f3+7173-0x23f8))
#define IlIllIlI(lIIIllIl) ((lIIIllIl)->bus->controller->driver ? \
			(lIIIllIl)->bus->controller->driver->name : (lIIIllIl)->bus->sysdev->driver->\
name)
#else
#define IlIllIlI(lIIIllIl) ((lIIIllIl)->bus->controller->driver->name)
#endif
#if KERNEL_LT_EQ((0x11c6+3892-0x20f8),(0x1012+128-0x108c),(0x21f1+905-0x256b))
#include <asm/semaphore.h>
struct mutex{struct semaphore IIlIllIlI;};static inline void mutex_init(struct 
mutex*mutex){sema_init(&mutex->IIlIllIlI,(0x16e7+1454-0x1c94));}static inline 
void mutex_lock(struct mutex*mutex){down(&mutex->IIlIllIlI);}static inline void 
mutex_unlock(struct mutex*mutex){up(&mutex->IIlIllIlI);}
#endif
#endif 

