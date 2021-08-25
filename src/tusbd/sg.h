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

#ifndef lllllllII
#define lllllllII
#if KERNEL_GT_EQ((0xb14+5345-0x1ff3),(0xbf6+6112-0x23d0),(0x15c3+833-0x18e5))
#include <linux/scatterlist.h>
struct IIIlllIl{
#if KERNEL_LT_EQ((0xdb4+6216-0x25fa),(0xb7+5999-0x1820),(0x1bd6+500-0x1da8)) 
struct usb_sg_request*lIIlIIl;
#else
struct scatterlist*lIIlIIl;
#endif
struct scatterlist*sg;int num_sgs;};int IlIlIlIIl(struct IIIlllIl*sg,size_t 
length,int Illlllll);void llIIllIII(struct IIIlllIl*sg);size_t llllIllII(struct 
IIIlllIl*sg,const void __user*IllIl,size_t length);size_t llIlIlIII(struct 
IIIlllIl*sg,void __user*IllIl,size_t length);
#endif 
#endif 

