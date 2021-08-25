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


#if KERNEL_LT((0x83b+1786-0xf33),(0x3ba+174-0x462),(0x911+4069-0x18e2))
#  define IllIIIl	(0xa3c+309-0xb62)
#else
#  if USB_MAXCHILDREN < (0xeff+5689-0x2529)
#    define IllIIIl USB_MAXCHILDREN
#  else
#    define IllIIIl (0x111b+4351-0x220b)
#  endif
#endif

#define lIIIIIlI ((IllIIIl / (0x664+4833-0x193d)) + (0x3e0+4626-0x15f1))
struct lIlIIl{struct list_head IIIIll;struct IIIlll*lllll;struct kref IllIll;int
 lIIlI;int IllIlIl;int speed;int IlIlIIll;u16 vid;u16 IlIlIII;u16 lIlIlll;struct
 usb_hcd*parent;wait_queue_head_t lIIllI;spinlock_t IIllII;struct list_head 
IllIIlI;struct list_head llIllIl;struct list_head lllIlllI;void*IIlIIlIl;
size_t llIlllll;void*lllIllll;
size_t IIlIIIIl;};struct lllllII{struct list_head IIIIll;struct urb*IlllI;};

struct lllIIl{struct list_head llllIl;struct lIlIIl*lIllI;llIIII lIlIl;struct 
list_head lllIlll;struct lllllII urb;IIlII IIlIl;};struct lIIIII{spinlock_t lock
;struct lIlIIl*IlIIlII[IllIIIl];int lllllIIl[IllIIIl];int IlIIIll[IllIIIl];
unsigned short lIIIIIl[IllIIIl];unsigned short lIIlIII[IllIIIl];unsigned long 
IlllIII[IllIIIl];struct usb_hcd*lllIl;struct usb_hcd*llllllll;unsigned IllllIlII
:(0x10e5+2363-0x1a1f);};enum llIlIIIlIl{IIlllllI=(0x148d+1437-0x1a2a),
llIlIIIl,
lllIIll,
llIlIII,
IIIlIIll,
lllIllI,
IlIlIlIlI,
lIIllIlI,
};enum lllIlIllll{IlIllllI,
lIllIlII,
IIlIIlII,
lIIIIlll,
IIIIlIll,
lIIlIllI,
IIIlllII,
IIlIIlll,
llllIlII,
llllIlIIl,
IIlIlIIlI,
llIIIllIl,
lIlIlIIl,
IlIIIIll,
lllllIII,
lIlllIlIl,
IIllllllI,
lllIlIll,
IIIIIIlIl,
lIIlIlllI,
};int IlIIlIlII(void);void IllIIIlI(void);struct lIlIIl*llIIIIlIl(u16 vid,u16 
IlIlIII,u16 lIlIlll,int speed);void IlIIllII(struct lIlIIl*lIllI);void lIlllllII
(void);int lllIIlllI(struct lIlIIl*lIllI);void IlllIIIll(struct lIlIIl*lIllI);
struct lIlIIl*lIlIIIIll(int lIllllIlI);struct lIlIIl*IlIIlIIll(struct usb_hcd*
lllIl,int IllIlIl);struct lIlIIl*IIIIIlIII(struct usb_hcd*lllIl,int lIIlI);void 
llIIIlIIl(struct lIlIIl*lIllI);struct lllIIl*IIIIlllll(struct lIlIIl*lIllI,gfp_t
 llllI);void IIlIlllI(struct lllIIl*IllII);int lIllIIIll(struct lllIIl*IllII);
void lllllIIIl(struct lIlIIl*lIllI,int status);void IllIIllI(struct lllIIl*IllII
,int status);int IIIIlIIIl(struct lIlIIl*lIllI,struct lllIIl*IIlIIIIlIl,void*
llIIl,size_t IlIIIl);int IlIIlIllI(struct lIlIIl*lIllI,struct lllIIl*IllII,IIlII
 IIlIl,int*status);int IIllIlllI(struct lIlIIl*lIllI,struct lllIIl**lIllIIlI,
struct urb*IlllI);int lIIIlIII(struct lllIIl*IllII);void IllIlIlII(struct lIlIIl
*lIllI,lllII*busnum,lllII*devnum);void lIlIllIlI(struct kref*IIllIlI);static 
inline struct lIlIIl*IlllllII(struct lIlIIl*lIllI){kref_get(&lIllI->IllIll);
return lIllI;}static inline void IlIllIIl(struct lIlIIl*lIllI){kref_put(&lIllI->
IllIll,lIlIllIlI);}
#endif 
#endif 

