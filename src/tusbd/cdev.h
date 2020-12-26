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
struct lllIIIlI;struct IIIlll{struct{ssize_t(*read)(void*,char __user*,size_t);
ssize_t(*write)(void*,const char __user*,size_t);long(*unlocked_ioctl)(void*,
unsigned int,unsigned long);long(*compat_ioctl)(void*,unsigned int,unsigned long
);int(*open)(void*,int);int(*release)(void*,int);unsigned int(*poll)(void*,
struct file*lIlllI,poll_table*);int(*mmap)(void*,struct vm_area_struct*llIIIlI);
void(*IlIllIII)(void*);void(*llIIllll)(void*);}ops;int llIllI;int IIIIIlI;struct
 mutex mutex;
#if KERNEL_GT_EQ((0x1527+245-0x161a),(0x1108+459-0x12cd),(0x10d1+2623-0x1af6)) 
struct device*dev;
#else 
struct class_device*dev;
#endif
struct lllIIIlI*IIllllIl;void*context;};

struct lllIIIlI{const char*name;const char*IlllIIII;const char*(*lllIIIIl)(void*
);
};int lIIlllllI(void);int lIllIIII(void);int IllllIlI(struct IIIlll*IIlII,int 
IlIlllII,int llIIlIII);void lllIllII(struct IIIlll*IIlII);dev_t lIIIIIllI(struct
 IIIlll*IIlII);int IIIIllII(struct IIIlll*IIlII);void lllIlllll(struct IIIlll*
IIlII);void lllIlIIII(struct IIIlll*IIlII);
#endif 

