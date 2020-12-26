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

#ifndef llIlIllII
#define llIlIllII
#ifdef _USBD_ENABLE_VHCI_
#include "vhci_hcd.h"


#if KERNEL_LT((0xc5+8609-0x2264),(0x614+4464-0x177e),(0x1a3d+1732-0x20ed))
#  define llIlIlI	(0x12ca+4062-0x2299)
#else
#  if USB_MAXCHILDREN < (0x800+6000-0x1f61)
#    define llIlIlI USB_MAXCHILDREN
#  else
#    define llIlIlI (0x681+1627-0xccd)
#  endif
#endif

#define lIIIIIlI ((llIlIlI / (0x974+7310-0x25fa)) + (0xa61+6529-0x23e1))
struct lIlIIl{struct list_head IIIIll;struct IIIlll*IIlII;struct kref IIllII;int
 lIllI;int llIIlll;int speed;int IIlIIllI;u16 vid;u16 IIlllII;u16 lIlIlll;struct
 usb_hcd*parent;wait_queue_head_t lIIllI;spinlock_t IllIll;struct list_head 
IlIIlII;struct list_head IIlllll;struct list_head Illlllll;void*IIlIIlIl;
size_t lIIllIll;void*lllIllll;
size_t IIlIIIIl;};struct IIIlIll{struct list_head IIIIll;struct urb*lIlll;};

struct lllIIl{struct list_head llllIl;struct lIlIIl*llllI;IlIIlI lllIl;struct 
list_head IIIIlIl;struct IIIlIll urb;IIIII IlIlI;};struct lIIIII{spinlock_t lock
;struct lIlIIl*llIlIll[llIlIlI];int lllllIIl[llIlIlI];int lIlIlII[llIlIlI];
unsigned short lIIlIlI[llIlIlI];unsigned short IIIlllI[llIlIlI];unsigned long 
IlllIII[llIlIlI];struct usb_hcd*IllIl;struct usb_hcd*llllllll;unsigned llIIlllll
:(0x39c+4002-0x133d);};enum lIlIlIllII{IIlllllI=(0x840+4881-0x1b51),
llIlllIl,
lllIIll,
llIlIII,
lIIllIIl,
lllIllI,
IIIllIllI,
lIIlllIl,
};enum lIllIIllII{llllIIll,
lIllIIll,
IlIlIIII,
lllIIlIl,
IIIIlIll,
IIIlIlII,
IlIIIlll,
IIlIIlll,
IIlIllll,
llllIlIIl,
IIlIlIIlI,
lIIllllIl,
lIlIlIIl,
IlIIIIll,
llIIlIlI,
lIlllIlIl,
IllIIIlll,
lllIlIll,
IIIIIIlIl,
lIIlIlllI,
};int IlIIlIlII(void);void IIllllll(void);struct lIlIIl*llIIIIlIl(u16 vid,u16 
IIlllII,u16 lIlIlll,int speed);void lIlIlIll(struct lIlIIl*llllI);void lIlllllII
(void);int lllIIlllI(struct lIlIIl*llllI);void IIIIIllII(struct lIlIIl*llllI);
struct lIlIIl*lIlIIIIll(int lIllllIlI);struct lIlIIl*IlIIlIIll(struct usb_hcd*
IllIl,int llIIlll);struct lIlIIl*IIIIIllIl(struct usb_hcd*IllIl,int lIllI);void 
IIllllIII(struct lIlIIl*llllI);struct lllIIl*lIlllIIIl(struct lIlIIl*llllI,gfp_t
 llIlI);void IIlIlllI(struct lllIIl*IIlIl);int lIlIIIlII(struct lllIIl*IIlIl);
void lllllIIIl(struct lIlIIl*llllI,int status);void IllIIllI(struct lllIIl*IIlIl
,int status);int IIIIlIIIl(struct lIlIIl*llllI,struct lllIIl*llIlIIIIll,void*
IlIIl,size_t IlIIIl);int IIlIlIIIl(struct lIlIIl*llllI,struct lllIIl*IIlIl,IIIII
 IlIlI,int*status);int IIllIlllI(struct lIlIIl*llllI,struct lllIIl**lIllIIlI,
struct urb*lIlll);int lIIIIIIl(struct lllIIl*IIlIl);void IllIlIlII(struct lIlIIl
*llllI,IIIIl*busnum,IIIIl*devnum);void lIIIlllIl(struct kref*lllIlIl);static 
inline struct lIlIIl*IlllllII(struct lIlIIl*llllI){kref_get(&llllI->IIllII);
return llllI;}static inline void IlIllIIl(struct lIlIIl*llllI){kref_put(&llllI->
IIllII,lIIIlllIl);}
#endif 
#endif 

