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

#ifndef lIIllllll
#define lIIllllll
#ifdef _USBD_ENABLE_STUB_
struct IIlll{struct list_head IIIIll;struct IIIlll*lllll;struct kref IllIll;u16 
vid;u16 IlIlIII;u16 lIlIlll;char bus_id[BUS_ID_SIZE];struct usb_device*llIII;
char*IIIIIlIl;int lIlllIl;int llIllIIl;int lllIIlIl;int lIIllIl;int IIllIIl;int 
IIllllIl;int lllIlIlI;
int lIIlllll[(0x187b+1605-0x1eb0)];int IlIIlIll[(0x523+6558-0x1eb1)];int 
llIIIIIll[(0x14d4+2574-0x1ed2)];int IlIIIIIII[(0x58d+6921-0x2086)];
wait_queue_head_t lIIllI;spinlock_t IIlIlI;struct list_head IllIIlI;spinlock_t 
lIIIIll;struct list_head llIlIlIl;struct list_head IIIllIIl;
int lIlIIII;int IIIIIIIl;int IIIlIlIl;
int llllIIl;int IlIlIllI;int lIlIIIll;int lIllllII;int lIlIlI;
spinlock_t lIIlIl;struct llIIll*IlIllII;};int lIIlIllll(void);void llIIlIllI(
void);struct IIlll*IIlIIllIl(struct usb_device*IlIIl);void lIIIlIIl(struct IIlll
*IIIll);const char*IllIIllII(void*context);const char*llIIlIIII(void*context);
int IIIIIIll(struct usb_device*IlIIl);int lIIllIll(struct usb_device*IlIIl);int 
IIIlIIIl(struct usb_device*IlIIl);int IlIIlIIIl(struct usb_interface*IIIIII,int 
IlIllllIII);void IIllIlIll(struct usb_interface*IIIIII);struct IIlll*IIIIllIl(
struct usb_device*IlIIl);void IIlIIllll(struct IIlll*IIIll);void IIllIIllI(
struct IIlll*IIIll);int lIlllllIl(struct IIlll*IIIll);void llIlIIIlI(struct 
IIlll*IIIll);void IIIlIlIll(struct IIlll*IIIll,int IIIllIl);void llllIIlII(
struct IIlll*IIIll,int IIIllIl);int IIIlIllll(struct IIlll*IIIll,int pipe);int 
IIIlIllI(struct IIlll*IIIll,int pipe);void lIIllllII(struct IIlll*IIIll,int pipe
);int llllIllI(struct IIlll*IIIll,int pipe);void IlllIIlI(struct IIlll*IIIll,int
 pipe,int llllIII);int IIllllIII(struct usb_device*llIII,lIllIl endpoint);void 
llIIllIll(struct IIlll*IIIll,struct usb_interface*llIlII,struct lIIll*IIlIIIl,
int IIIIlIl);void llIIlIIll(struct IIlll*IIIll,int endpoint,struct lIIll*IIlIIIl
);void IllllIII(struct IIlll*IIIll,struct lIIll*IIlIIIl,int lIIIIIIlI,int 
IIIIlIl);void IlllIIlII(struct IIlll*IIIll,llIIII lIlIl,struct lIIll*IIlIIIl);
void IllIlIIII(struct kref*IIllIlI);static inline struct IIlll*lIIlIlll(struct 
IIlll*IIIll){kref_get(&IIIll->IllIll);return IIIll;}static inline void lIIIllII(
struct IIlll*IIIll){kref_put(&IIIll->IllIll,IllIlIIII);}


#pragma pack(push,1)


struct llIlIIII{__le32 lllIIlIll;__u32 IIlllIIlll;__le32 IllIIlIII;__u8 
IIIllIIII;__u8 llIIIlIllI;__u8 lIIIIlllIl;__u8 IIIlllllII[(0xd3d+4049-0x1cfe)];}
__attribute__((packed));

struct IIIIIlIll{__le32 lIlIIllIlI;__u32 lllIIllIII;__le32 lllIllIIll;__u8 
lIIllIllII;}__attribute__((packed));
#pragma pack(pop)
#define IIlIlllII (0x22c7+837-0x240c)
struct llIIll{struct IIlll*IIIll;int ep_in;int ep_out;llIIII IlIlllIII;llIIII 
llllIllIl;llIIII IIIIIllll;struct lIIll*IlllII;struct lIIll*IlIlll;lllII 
lllIIIIl;int IlIIIIII;int status;struct kref IllIll;struct urb*IlllI;void*llIIl;
int IlIllIll;
int IlllllI;int IIIIlIl;};enum IlIIllIlll{IllllIIl=(0x87c+5470-0x1dda),lIIlIIIlI
,IlllIlII,llIIIIlll,llIIIllI,llIIIll};int lIllIlll(struct IIlll*IIIll);int 
lIlIIIIII(struct lIIll*lIlII,gfp_t llllI);
#endif 
#endif 

