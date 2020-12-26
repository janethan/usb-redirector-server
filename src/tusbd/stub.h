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
struct lllll{struct list_head IIIIll;struct IIIlll*IIlII;struct kref IIllII;u16 
vid;u16 IIlllII;u16 lIlIlll;char bus_id[BUS_ID_SIZE];struct usb_device*lIIlI;
char*IIIIIlIl;int llIllll;int llIlIIIl;int lIIllIlI;int IIllIIl;int IIIIlII;int 
lIIIIIll;int lIlIllII;
int lIIIlIll[(0x71a+7619-0x24cd)];int llIlIIll[(0x175+6348-0x1a31)];int 
IlIIIlllI[(0x97+3433-0xdf0)];int IlIIIIIII[(0x2303+385-0x2474)];
wait_queue_head_t lIIllI;spinlock_t IIlIlI;struct list_head IlIIlII;spinlock_t 
lIIIIll;struct list_head llllIlll;struct list_head IIIllIIl;
int llIIIlII;int lllIlIIl;int IIlIlIII;
int IIlIlII;int IlIllllI;int IIIlllII;int llIlIlIl;int lIlIlI;
spinlock_t lIIlIl;struct lIlIII*llIIIIl;};int lIlIlIlll(void);void llIllIIll(
void);struct lllll*IIlIIllIl(struct usb_device*llIII);void lIllIlIl(struct lllll
*lIlII);const char*IllIIllII(void*context);const char*llIIlIIII(void*context);
int IllllIll(struct usb_device*llIII);int lIllIllI(struct usb_device*llIII);int 
IIIlIIIl(struct usb_device*llIII);int IIlIIIIII(struct usb_interface*IIIIII,int 
lIlIIllIIl);void IIllIlIll(struct usb_interface*IIIIII);struct lllll*IIIIllIl(
struct usb_device*llIII);void IIlIIllll(struct lllll*lIlII);void lIlIIIllI(
struct lllll*lIlII);int lIlllllIl(struct lllll*lIlII);void llIlIIIlI(struct 
lllll*lIlII);void lIIlIIlII(struct lllll*lIlII,int IIIllIl);void llllIIlII(
struct lllll*lIlII,int IIIllIl);int lllllllll(struct lllll*lIlII,int pipe);int 
IIIlIllI(struct lllll*lIlII,int pipe);void lIIllllII(struct lllll*lIlII,int pipe
);int lllIlllI(struct lllll*lIlII,int pipe);void IIllIlIl(struct lllll*lIlII,int
 pipe,int llllIII);int lIlIllIII(struct usb_device*lIIlI,lIllIl endpoint);void 
IlIllIIll(struct lllll*lIlII,struct usb_interface*llIlII,struct lIlIl*IIlIIIl,
int lIIIIII);void llIIlIIll(struct lllll*lIlII,int endpoint,struct lIlIl*IIlIIIl
);void lIlIllll(struct lllll*lIlII,struct lIlIl*IIlIIIl,int IlllIlIlI,int 
lIIIIII);void IlllIIlII(struct lllll*lIlII,IlIIlI lllIl,struct lIlIl*IIlIIIl);
void IllIlIIII(struct kref*lllIlIl);static inline struct lllll*IlIIllII(struct 
lllll*lIlII){kref_get(&lIlII->IIllII);return lIlII;}static inline void lllllIll(
struct lllll*lIlII){kref_put(&lIlII->IIllII,IllIlIIII);}


#pragma pack(push,1)


struct llIlIIII{__le32 lllIIlIll;__u32 lIIlIllIII;__le32 IllIIlIII;__u8 
lIIIlIIII;__u8 lIIIlllIll;__u8 lIllIllIII;__u8 IIIIIllIII[(0x932+5552-0x1ed2)];}
__attribute__((packed));

struct IIIIIlIll{__le32 llllIllIIl;__u32 lIIIIIlllI;__le32 IIIIIlIllI;__u8 
IIIIIllIlI;}__attribute__((packed));
#pragma pack(pop)
#define IIlIlllII (0xa7a+5077-0x1c4f)
struct lIlIII{struct lllll*lIlII;int ep_in;int ep_out;IlIIlI IlIlllIII;IlIIlI 
lllllIlII;IlIIlI lIIlllIII;struct lIlIl*IlllII;struct lIlIl*IlIlll;IIIIl 
lIIIIlII;int IIlIIIII;int status;struct kref IIllII;struct urb*lIlll;void*IlIIl;
int IlIllIll;
int IlllllI;int lIIIIII;};enum llIIllllll{IIIllIll=(0x2110+1225-0x25d9),
lIIlIIIlI,llllIIlI,llIIIIlll,IIlIllIl,lllIIII};int lIllIlll(struct lllll*lIlII);
int lllIlllIl(struct lIlIl*IlllI,gfp_t llIlI);
#endif 
#endif 

