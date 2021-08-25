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

#ifndef IlIIlllII
#define IlIIlllII
struct IlIlII;typedef void(*urb_chain_complete_t)(struct IlIlII*);struct IlIlII{
spinlock_t lock;struct usb_device*IlIIll;int pipe;int IIllIIl;int IIIlIIII;int 
status;size_t lIIlIlIlI;atomic_t lIlIIIII;void*context;urb_chain_complete_t 
complete;size_t IIIIl;
struct urb*IIIlII[(0x4eb+7823-0x237a)];};struct IllIl{void*transfer_buffer;
size_t transfer_buffer_length;
size_t actual_length;
unsigned int number_of_packets;
};struct lIIIllI{size_t IIIIl;
struct IllIl IllIIl[(0xc32+2496-0x15f2)];};struct IlIlII*lllIlIIII(int pipe,int 
interval,int IIIlIIII,int IIllIIl,struct usb_device*IlIIll,struct lIIIllI*lIIlll
,void*context,urb_chain_complete_t complete,gfp_t llllI);void lIIIIlIIl(struct 
IlIlII*IIIlI);int IlllIllIl(struct IlIlII*IIIlI);int lIlIIIlIl(struct IlIlII*
IIIlI);int IIIIIIllI(struct IlIlII*IIIlI);int lIIlIIIII(struct IlIlII*IIIlI);int
 IllllIlll(struct IlIlII*IIIlI);int IlIlllllI(struct IlIlII*IIIlI,struct urb*
IlllI);struct lIIIllI*IIIIIIIIl(size_t length,int Illlllll);struct lIIIllI*
lIIIIIIIl(size_t length,IllIlIII*llIIlllI,lllII IlIllIlll);size_t IIIIlIlIl(
struct lIIIllI*IIIlI,const void*IllIl,size_t length);size_t IlIIllIlI(struct 
lIIIllI*IIIlI,void*IllIl,size_t length);void IlIlIIIlI(struct lIIIllI*IIIlI);
size_t lIlIIlllll(struct lIIIllI*IIIlI,IllIlIII*llIIlllI,lllII IlIllIlll);size_t
 IlllIlllll(struct lIIIllI*IIIlI,IllIlIII*llIIlllI,lllII IlIllIlll);
#endif 

