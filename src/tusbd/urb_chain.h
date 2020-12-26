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
spinlock_t lock;struct usb_device*IIIlIl;int pipe;int IIIIlII;int IIIlIIII;int 
status;size_t lIIlIlIlI;atomic_t lIlIIIII;void*context;urb_chain_complete_t 
complete;size_t IlIII;
struct urb*IIIlII[(0x620+2296-0xf18)];};struct IIIlI{void*transfer_buffer;
size_t transfer_buffer_length;
size_t actual_length;
unsigned int number_of_packets;
};struct lIIIllI{size_t IlIII;
struct IIIlI IllIIl[(0x7d6+6999-0x232d)];};struct IlIlII*lIIlIIIIl(int pipe,int 
interval,int IIIlIIII,int IIIIlII,struct usb_device*IIIlIl,struct lIIIllI*lIIlll
,void*context,urb_chain_complete_t complete,gfp_t llIlI);void lIIIIlIIl(struct 
IlIlII*lIIIl);int llIIIlIlI(struct IlIlII*lIIIl);int lIlIIIlIl(struct IlIlII*
lIIIl);int llIIlIlIl(struct IlIlII*lIIIl);int lIIlIIIII(struct IlIlII*lIIIl);int
 IllllIlll(struct IlIlII*lIIIl);int IlIlllllI(struct IlIlII*lIIIl,struct urb*
lIlll);struct lIIIllI*llIlIIIII(size_t length,int llIIIIlI);struct lIIIllI*
llIlIIllI(size_t length,IIIlIIll*lllIIlll,IIIIl IIIIllIlI);size_t IIIIlIlIl(
struct lIIIllI*lIIIl,const void*IIIlI,size_t length);size_t IlIIllIlI(struct 
lIIIllI*lIIIl,void*IIIlI,size_t length);void llllIIIII(struct lIIIllI*lIIIl);
size_t lllIIllIII(struct lIIIllI*lIIIl,IIIlIIll*lllIIlll,IIIIl IIIIllIlI);size_t
 llIIIIlIlI(struct lIIIllI*lIIIl,IIIlIIll*lllIIlll,IIIIl IIIIllIlI);
#endif 

