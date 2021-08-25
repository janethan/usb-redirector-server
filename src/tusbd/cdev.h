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

#ifndef IIlIIlIIl
#define IIlIIlIIl
struct lIIIllll;struct IIIlll{struct{ssize_t(*read)(void*,char __user*,size_t);
ssize_t(*write)(void*,const char __user*,size_t);long(*unlocked_ioctl)(void*,
unsigned int,unsigned long);long(*compat_ioctl)(void*,unsigned int,unsigned long
);int(*open)(void*,int);int(*release)(void*,int);unsigned int(*poll)(void*,
struct file*lIlllI,poll_table*);int(*mmap)(void*,struct vm_area_struct*llIIIlI);
void(*IlIIlIII)(void*);void(*IlIllIII)(void*);}ops;int llIllI;int IIIIIlI;struct
 mutex mutex;
#if KERNEL_GT_EQ((0x9c9+1437-0xf64),(0xa96+1957-0x1235),(0x14d6+113-0x152d)) 
struct device*dev;
#else 
struct class_device*dev;
#endif
struct lIIIllll*IlllIIII;void*context;};

struct lIIIllll{const char*name;const char*lIIlllII;const char*(*lIIIIIII)(void*
);
};int lIIlllllI(void);int IIIIIIIll(void);int IllllIlI(struct IIIlll*lllll,int 
IlIlllII,int lIlIIlII);void lllIllII(struct IIIlll*lllll);dev_t lIIIIIllI(struct
 IIIlll*lllll);int IIIllIlI(struct IIIlll*lllll);void lIlllIIll(struct IIIlll*
lllll);void IlIIIIlll(struct IIIlll*lllll);
#endif 

