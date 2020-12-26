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

#define llllIlIl		(0x8d+6147-0x1890)
#define lIlIIIl		(0xe5d+2605-0x1889)
#define IIIlIlI		(0x94c+317-0xa87)
#define llIlIIIll	(0x1b79+2851-0x2699)
#define IlIIlll		(0x1a4+4686-0x13ee)

#define IllIIlI		(0x1049+2476-0x19f5) 
#define lIlllll	(0xbdf+6727-0x2625) 
#if KERNEL_GT_EQ((0x10f3+3842-0x1ff3),(0x1438+3280-0x2102),(0x5cb+665-0x845))
#define IIlIIII			(0x5f7+1354-0xb3f) 
#endif
struct lIlIl{size_t IlIll;struct kref IIllII;atomic_t state;IlIIlI lllIl;int 
lIllll;
llIlIllIl IlIIIlI;lIllIl endpoint;
struct list_head llllIl;struct lllll*lIlII;union{struct{struct urb*lIlll;
void*IlIIl;
}lIIIll;struct{struct IlIlII*llllIll;
struct lIIIllI*lIIlll;
}lIllII;
#if KERNEL_GT_EQ((0x201+3215-0xe8e),(0xd95+1539-0x1392),(0x13f6+2573-0x1de4))
struct{struct urb*lIlll;
struct lIlIIlIl sg;}lIllIll;
#endif
};char IlllllI:(0x75d+337-0x8ad);
char lIIIIII:(0xa0d+7376-0x26dc);



};struct llIlIllI{struct list_head IIIIll;
IlIIlI lllIl;int IIIllIlll;int IlIlIIIII;};
#ifdef _USBD_DEBUG_MEMORY_
extern atomic_t IlIlIllII;extern atomic_t IlllIllIl;extern atomic_t lIIlIIll;
extern atomic_t IIIlIIIll;
#ifdef ATOMIC64_INIT
extern atomic64_t lllIIlII;
#endif
static inline struct urb*IIIIIIIl(int IlIlIllIl,gfp_t llIlI){atomic_inc(&
IlIlIllII);return usb_alloc_urb(IlIlIllIl,llIlI);}static inline void lllllIlI(
struct urb*urb){atomic_inc(&IlllIllIl);usb_free_urb(urb);}static inline void*
IllIllI(size_t IlIll,int flags){atomic_inc(&lIIlIIll);
#ifdef ATOMIC64_INIT
atomic64_add(IlIll,&lllIIlII);
#endif
return kmalloc(IlIll,flags);}static inline void*lIllllI(size_t IlIll,int flags){
atomic_inc(&lIIlIIll);
#ifdef ATOMIC64_INIT
atomic64_add(IlIll,&lllIIlII);
#endif
return kzalloc(IlIll,flags);}static inline void lIlIll(const void*llIIlllII){
atomic_inc(&IIIlIIIll);return kfree(llIIlllII);}
#else 
#define	IIIIIIIl	usb_alloc_urb
#define	lllllIlI	usb_free_urb
#define	IllIllI		kmalloc
#define	lIllllI		kzalloc
#define	lIlIll			kfree
#endif 
#ifdef _USBD_ENABLE_STUB_
struct lIlIl*IlIIIIIlI(struct lllll*lIlII,const void __user*IIIlI,size_t lllIlll
);int IIIIlllIl(struct lIlIl*IlllI,void __user*IIIlI,size_t lllIlll);struct 
lIlIl*IllIIlIlI(struct lIlIl*IlllI,gfp_t llIlI);void lIIIIlI(struct lIlIl*IlllI)
;void IllIIlII(struct kref*lllIlIl);
#endif
void IIlllIlIl(struct usb_device*llIII,u8*IIlllIll,u8*IIIIllll,u8*IlIIIlIl);
const char*lllllIlll(unsigned long IlIlllI);const char*llIllllII(unsigned long 
IlIlllI);void llIIllIII(struct urb*lIlll,IlIIlI lllIl);void llIlIIl(IIIII IlIlI)
;
#ifdef _USBD_ENABLE_VHCI_
int llIlIlllI(struct list_head*llllllI,IlIIlI lllIl,void*IlIIl,size_t IlIIIl);
int lIlIlllII(IIIII IlIlI,struct list_head*llllllI,int*status);
#endif
int lllIIIll(IIIIl status);int lIIIIIIII(void*llIlIIlIl,struct vm_area_struct*
llIIIlI);IlIIlI lIllIIlll(void);size_t IlIIIllI(struct usb_iso_packet_descriptor
*lIlllIl,int IlIII,void*IIIIIll,void*lllIll,int IIlIlIlI);size_t IlIlllIlI(
struct usb_iso_packet_descriptor*lIlllIl,int IlIII,int IIlIlIlI);void IlIIIIlll(
dma_addr_t IIIIIll,void*lllIll,unsigned long IIlIIl);void llIlllIlI(void*IIIIIll
,dma_addr_t lllIll,unsigned long IIlIIl);char*llIlllII(struct kobject*kobj,gfp_t
 IIIIlIIII);void IlIIlIlll(char*IIlIlll);int IlIIIIlIl(struct device*dev);int 
IIllIlIIl(struct device*dev);int IllllllIl(struct device*dev);
#if KERNEL_GT_EQ((0x183b+2856-0x2361),(0x13c2+4492-0x2548),(0xeb+6690-0x1af7))
void llIllllI(struct device*dev,int lIlllIll);int lIIlIllI(struct device*dev);
#endif
#if KERNEL_GT_EQ((0xe46+4286-0x1f02),(0x5df+5024-0x1979),(0x119f+1625-0x17da))
#define llIIIl(IIIlIllll) dev_name((IIIlIllll))
#else
#define llIIIl(IIIlIllll) (IIIlIllll)->bus_id
#endif
#if KERNEL_GT_EQ((0xf76+1946-0x170c),(0xd3b+4790-0x1fe5),(0x14b+8050-0x20bd))
#define IlIllIlI(lIIIllIl) ((lIIIllIl)->bus->controller->driver ? \
			(lIIIllIl)->bus->controller->driver->name : (lIIIllIl)->bus->sysdev->driver->\
name)
#else
#define IlIllIlI(lIIIllIl) ((lIIIllIl)->bus->controller->driver->name)
#endif
#if KERNEL_LT_EQ((0x990+3232-0x162e),(0xc7d+1298-0x1189),(0xcbf+1454-0x125e))
#include <asm/semaphore.h>
struct mutex{struct semaphore lIIlIIIll;};static inline void mutex_init(struct 
mutex*mutex){sema_init(&mutex->lIIlIIIll,(0x15c8+2516-0x1f9b));}static inline 
void mutex_lock(struct mutex*mutex){down(&mutex->lIIlIIIll);}static inline void 
mutex_unlock(struct mutex*mutex){up(&mutex->lIIlIIIll);}
#endif
#endif 

