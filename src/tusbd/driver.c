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

#include "usbd.h"

#if KERNEL_LT((0xeef+1688-0x1585),(0x16aa+3063-0x229b),(0x1aa+8123-0x2156))
#error This module requires kernel version 2.6.15 or newer
#endif

#if !defined(CONFIG_USB) && !defined(CONFIG_USB_MODULE)
#error This module requires kernel to be compiled with USB support (CONFIG_USB)
#endif

#if KERNEL_LT((0x4b+4521-0x11f1),(0x895+5095-0x1c74),(0x541+3713-0x13c2)) && !\
defined(CONFIG_HOTPLUG)
#error\
 This module requires kernel to be compiled with hotplug support (CONFIG_HOTPLUG)
#endif

#if !defined(CONFIG_NET) && !defined(CONFIG_NET_MODULE)
#error\
 This module requires kernel to be compiled with networking support (CONFIG_NET)
#endif

#if KERNEL_LT_EQ((0x14c9+4096-0x24c7),(0x5f5+7768-0x2447),(0x87b+7733-0x26a1)) \
&& !defined(CONFIG_KOBJECT_UEVENT)
#error\
 This module requires kernel to be compiled with uevent support (CONFIG_KOBJECT_UEVENT)
#endif

#if !defined(CONFIG_UNIX) && !defined(CONFIG_UNIX_MODULE)
#error\
 This module requires kernel to be compiled with Unix domain sockets support (CONFIG_UNIX)
#endif
#ifdef _USBD_DEBUG_MEMORY_
atomic_t llIlllllI=ATOMIC_INIT((0x1f5+2701-0xc82));atomic_t IlllIIlll=
ATOMIC_INIT((0x1870+1158-0x1cf6));atomic_t lIIlllIl=ATOMIC_INIT(
(0x1382+3891-0x22b5));atomic_t llIlllIlI=ATOMIC_INIT((0x10f+3941-0x1074));
#ifdef ATOMIC64_INIT
atomic64_t IlIlIIIl=ATOMIC64_INIT((0x73d+3361-0x145e));
#endif
atomic_t llIIIIII=ATOMIC_INIT((0x4a4+5293-0x1951));atomic_t IIIllIllI=
ATOMIC_INIT((0x9e8+5611-0x1fd3));atomic_t IIIllllIl=ATOMIC_INIT(
(0xbdd+4097-0x1bde));atomic_t llIllIIll=ATOMIC_INIT((0xcb3+5799-0x235a));
atomic_t lllllllll=ATOMIC_INIT((0x1741+143-0x17d0));atomic_t lIlIIlIIl=
ATOMIC_INIT((0x151b+3560-0x2303));atomic_t IllllllIl=ATOMIC_INIT(
(0x269+8855-0x2500));atomic_t lllIIIIll=ATOMIC_INIT((0xfb2+363-0x111d));atomic_t
 IIIIllII=ATOMIC_INIT((0x10b1+3425-0x1e12));atomic_t lIIlIIlII=ATOMIC_INIT(
(0x1364+5-0x1369));atomic_t Illllllll=ATOMIC_INIT((0x4bc+2595-0xedf));atomic_t 
IlIIlllI=ATOMIC_INIT((0x1492+1639-0x1af9));atomic_t IIlIlIIll=ATOMIC_INIT(
(0xf2b+3059-0x1b1e));
#endif 

size_t IIlIIlI=32768;static int IIIIlIIl=(0x1c9a+2414-0x2608);module_param(
IIIIlIIl,int,(0x120+9453-0x260d));static int __init IllIIIlIl(void){int IlIlI;
int lIlIlIlll=(0x169f+3801-0x2578);
#ifdef _USBD_ENABLE_STUB_
int lIIIlIIll=(0xdab+287-0xeca);
#endif
#ifdef _USBD_ENABLE_VHCI_
int lIllIlIlI=(0x15a0+2321-0x1eb1);
#endif
lIlll("\x75\x73\x62\x64\x5f\x69\x6e\x69\x74\x3a\x20\x2b\x2b" "\n");do
{struct sysinfo lIlIIll;if(IIIIlIIl){lIlll(
"\x75\x73\x62\x64\x5f\x69\x6e\x69\x74\x3a\x20\x70\x72\x6f\x62\x65\x2d\x6f\x6e\x6c\x79\x20\x6d\x6f\x64\x65" "\n"
);IlIlI=(0x5dd+6303-0x1e7c);break;}si_meminfo(&lIlIIll);


if(lIlIIll.totalram*lIlIIll.mem_unit<=1LL*1024LL*1024LL*1024LL)
{IIlIIlI=(0x9fb+5162-0x1e05)*(0x14ba+2720-0x1b5a);}else if(lIlIIll.totalram*
lIlIIll.mem_unit<=2LL*1024LL*1024LL*1024LL)
{IIlIIlI=(0x8dc+6067-0x205f)*(0x2271+1283-0x2374);}else if(lIlIIll.totalram*
lIlIIll.mem_unit<=4LL*1024LL*1024LL*1024LL)
{IIlIIlI=(0x846+6911-0x2305)*(0x1703+1860-0x1a47);}else
{IIlIIlI=(0x23d+5458-0x170f)*(0x97b+7512-0x22d3);}lIlll(
"\x75\x73\x62\x64\x5f\x69\x6e\x69\x74\x3a\x20\x73\x75\x67\x67\x65\x73\x74\x65\x64\x20\x6d\x61\x78\x20\x61\x6c\x6c\x6f\x63\x61\x74\x69\x6f\x6e\x20\x73\x69\x7a\x65\x20\x25\x6c\x75\x4b\x42" "\n"
,(unsigned long)IIlIIlI/(0x5a0+182-0x256));IlIlI=lIIlllllI();if(IlIlI!=
(0x270+9336-0x26e8)){lIlll(
"\x75\x73\x62\x64\x5f\x69\x6e\x69\x74\x3a\x20\x75\x73\x62\x64\x5f\x63\x64\x65\x76\x5f\x69\x6e\x69\x74\x5f\x6d\x6f\x64\x75\x6c\x65\x20\x66\x61\x69\x6c\x65\x64\x2e\x20\x45\x72\x72\x6f\x72\x20\x6e\x75\x6d\x62\x65\x72\x20\x25\x64" "\n"
,IlIlI);break;}lIlIlIlll=(0x14cf+3925-0x2423);
#ifdef _USBD_ENABLE_STUB_
IlIlI=lIIlIllll();if(IlIlI!=(0x6f0+176-0x7a0)){lIlll(
"\x75\x73\x62\x64\x5f\x69\x6e\x69\x74\x3a\x20\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x69\x6e\x69\x74\x5f\x6d\x6f\x64\x75\x6c\x65\x20\x66\x61\x69\x6c\x65\x64\x2e\x20\x45\x72\x72\x6f\x72\x20\x6e\x75\x6d\x62\x65\x72\x20\x25\x64" "\n"
,IlIlI);break;}lIIIlIIll=(0x1c72+2163-0x24e4);
#endif
#ifdef _USBD_ENABLE_VHCI_
IlIlI=IlIIlIlII();if(IlIlI!=(0x1835+3263-0x24f4)){lIlll(
"\x75\x73\x62\x64\x5f\x69\x6e\x69\x74\x3a\x20\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x69\x6e\x69\x74\x5f\x6d\x6f\x64\x75\x6c\x65\x20\x66\x61\x69\x6c\x65\x64\x2e\x20\x45\x72\x72\x6f\x72\x20\x6e\x75\x6d\x62\x65\x72\x20\x25\x64" "\n"
,IlIlI);break;}lIllIlIlI=(0x7a+8949-0x236e);
#endif
}while((0xce0+4794-0x1f9a));if(IlIlI!=(0x9c1+4502-0x1b57)){
#ifdef _USBD_ENABLE_VHCI_
if(lIllIlIlI){IllIIIlI();}
#endif
#ifdef _USBD_ENABLE_STUB_
if(lIIIlIIll){llIIlIllI();}
#endif
if(lIlIlIlll){IIIIIIIll();}}lIlll(
"\x75\x73\x62\x64\x5f\x69\x6e\x69\x74\x3a\x20\x2d\x2d" "\n");return IlIlI;}
static void __exit usbd_exit(void){if(IIIIlIIl){lIlll(
"\x75\x73\x62\x64\x5f\x65\x78\x69\x74\x3a\x20\x70\x72\x6f\x62\x65\x2d\x6f\x6e\x6c\x79\x20\x6d\x6f\x64\x65" "\n"
);return;}
#ifdef _USBD_ENABLE_VHCI_
IllIIIlI();
#endif
#ifdef _USBD_ENABLE_STUB_
llIIlIllI();
#endif
IIIIIIIll();
#ifdef _USBD_DEBUG_MEMORY_
IIllIl("\x73\x74\x61\x74\x73\x3a" "\n");IIllIl(
"\x75\x72\x62\x20\x61\x6c\x6c\x6f\x63\x3a\x20\x25\x64" "\n",atomic_read(&
llIlllllI));IIllIl("\x75\x72\x62\x20\x66\x72\x65\x65\x3a\x20\x25\x64" "\n",
atomic_read(&IlllIIlll));IIllIl(
"\x6d\x65\x6d\x20\x61\x6c\x6c\x6f\x63\x3a\x20\x25\x64" "\n",atomic_read(&
lIIlllIl));IIllIl("\x6d\x65\x6d\x20\x66\x72\x65\x65\x3a\x20\x25\x64" "\n",
atomic_read(&llIlllIlI));
#ifdef ATOMIC64_INIT
IIllIl("\x6d\x65\x6d\x20\x73\x69\x7a\x65\x3a\x20\x25\x6c\x6c\x64" "\n",(long 
long)atomic64_read(&IlIlIIIl));
#endif
IIllIl("\x75\x72\x65\x71\x20\x63\x72\x65\x61\x74\x65\x3a\x20\x25\x64" "\n",
atomic_read(&llIIIIII));IIllIl(
"\x75\x72\x65\x71\x20\x66\x72\x65\x65\x3a\x20\x25\x64" "\n",atomic_read(&
IIIllIllI));IIllIl(
"\x75\x72\x65\x71\x20\x64\x65\x73\x74\x72\x6f\x79\x3a\x20\x25\x64" "\n",
atomic_read(&IIIllllIl));IIllIl(
"\x74\x72\x61\x6e\x73\x61\x63\x74\x69\x6f\x6e\x20\x61\x6c\x6c\x6f\x63\x3a\x20\x25\x64" "\n"
,atomic_read(&llIllIIll));IIllIl(
"\x74\x72\x61\x6e\x73\x61\x63\x74\x69\x6f\x6e\x20\x64\x65\x73\x74\x72\x6f\x79\x3a\x20\x25\x64" "\n"
,atomic_read(&lllllllll));IIllIl(
"\x76\x72\x65\x71\x20\x63\x72\x65\x61\x74\x65\x3a\x20\x25\x64" "\n",atomic_read(
&lIlIIlIIl));IIllIl("\x76\x72\x65\x71\x20\x66\x72\x65\x65\x3a\x20\x25\x64" "\n",
atomic_read(&IllllllIl));IIllIl(
"\x73\x74\x75\x62\x20\x63\x72\x65\x61\x74\x65\x3a\x20\x25\x64" "\n",atomic_read(
&lllIIIIll));IIllIl(
"\x73\x74\x75\x62\x20\x72\x65\x6d\x6f\x76\x65\x3a\x20\x25\x64" "\n",atomic_read(
&IIIIllII));IIllIl(
"\x73\x74\x75\x62\x20\x64\x65\x73\x74\x72\x6f\x79\x3a\x20\x25\x64" "\n",
atomic_read(&lIIlIIlII));IIllIl(
"\x76\x73\x74\x75\x62\x20\x63\x72\x65\x61\x74\x65\x3a\x20\x25\x64" "\n",
atomic_read(&Illllllll));IIllIl(
"\x76\x73\x74\x75\x62\x20\x72\x65\x6d\x6f\x76\x65\x3a\x20\x25\x64" "\n",
atomic_read(&IlIIlllI));IIllIl(
"\x76\x73\x74\x75\x62\x20\x64\x65\x73\x74\x72\x6f\x79\x3a\x20\x25\x64" "\n",
atomic_read(&IIlIlIIll));
#endif 
lIlll("\x75\x73\x62\x64\x5f\x65\x78\x69\x74" "\n");}module_init(IllIIIlIl);
module_exit(usbd_exit);MODULE_LICENSE("\x47\x50\x4c");
