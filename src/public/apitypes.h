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

#ifndef lIlllIllI
#define lIlllIllI

#ifdef __KERNEL__
#include <linux/types.h>
#else
#include <stdint.h>
#endif
typedef int8_t llIIIlllII;typedef int16_t lIIIllllII;typedef int32_t llllIlllII;
typedef int64_t IlIIlllllI;typedef uint8_t lIllIl;typedef uint16_t IlllIl;
typedef uint32_t IIIIl;typedef uint64_t IlIIlI;typedef int BOOL;
#ifndef __KERNEL__
#include <semaphore.h>
typedef sem_t*IlIlIlIlll;
#endif
#ifndef TRUE
#define TRUE (0x83d+4759-0x1ad3)
#endif
#ifndef FALSE
#define FALSE (0x13c3+12-0x13cf)
#endif
#ifndef __KERNEL__
#include <endian.h>
#include <byteswap.h>
#if __BYTE_ORDER == __BIG_ENDIAN
#define lIIIIlIII(IIIIlI) lIIlIIlll((IIIIlI))
#define lIllIIllI(IIIIlI) IllllIIIlI((IIIIlI))
#define IIlllIlII(IIIIlI) IIIlIlIlI((IIIIlI))
#define IIllIIIlI(IIIIlI) lIIlIIlll((IIIIlI))
#define IIlIIlllI(IIIIlI) IllllIIIlI((IIIIlI))
#define lllIIlIlI(IIIIlI) IIIlIlIlI((IIIIlI))
#else
#define lIIIIlIII(IIIIlI) (IIIIlI)
#define lIllIIllI(IIIIlI) (IIIIlI)
#define IIlllIlII(IIIIlI) (IIIIlI)
#define IIllIIIlI(IIIIlI) (IIIIlI)
#define IIlIIlllI(IIIIlI) (IIIIlI)
#define lllIIlIlI(IIIIlI) (IIIIlI)
#endif
# endif
#endif 

