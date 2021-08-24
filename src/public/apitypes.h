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
typedef int8_t IIlllIllII;typedef int16_t IIIIIllllI;typedef int32_t llllllIlll;
typedef int64_t IlIlIlIlII;typedef uint8_t lIllIl;typedef uint16_t lIllll;
typedef uint32_t lllII;typedef uint64_t llIIII;typedef int BOOL;
#ifndef __KERNEL__
#include <semaphore.h>
typedef sem_t*lIIIllllII;
#endif
#ifndef TRUE
#define TRUE (0x81+9538-0x25c2)
#endif
#ifndef FALSE
#define FALSE (0x1052+4081-0x2043)
#endif
#ifndef __KERNEL__
#include <endian.h>
#include <byteswap.h>
#if __BYTE_ORDER == __BIG_ENDIAN
#define lIIIIlIII(IIIIlI) lIIlIIlll((IIIIlI))
#define lIllIIllI(IIIIlI) llllIIlllI((IIIIlI))
#define IIlllIlII(IIIIlI) lllIIIIII((IIIIlI))
#define IIllIIIlI(IIIIlI) lIIlIIlll((IIIIlI))
#define IIlIIlllI(IIIIlI) llllIIlllI((IIIIlI))
#define lllIIlIlI(IIIIlI) lllIIIIII((IIIIlI))
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

