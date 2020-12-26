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

#ifndef lIIIlllII
#define lIIIlllII
#if KERNEL_GT_EQ((0x10df+3705-0x1f56),(0x556+5131-0x195b),(0xf4c+2116-0x1771))
#include <linux/scatterlist.h>
struct lIlIIlIl{
#if KERNEL_LT_EQ((0x908+2905-0x145f),(0x135+6304-0x19cf),(0x91f+3706-0x1777)) 
struct usb_sg_request*lIIlIIl;
#else
struct scatterlist*lIIlIIl;
#endif
struct scatterlist*sg;int num_sgs;};int IlIlIlIIl(struct lIlIIlIl*sg,size_t 
length,int llIIIIlI);void IlllllIIl(struct lIlIIlIl*sg);size_t llllIllII(struct 
lIlIIlIl*sg,const void __user*IIIlI,size_t length);size_t llIlIlIII(struct 
lIlIIlIl*sg,void __user*IIIlI,size_t length);
#endif 
#endif 

