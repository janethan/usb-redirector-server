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

#if KERNEL_LT((0x103d+504-0x1233),(0xc6a+4804-0x1f28),(0x744+3499-0x14e0))
#error This module requires kernel version 2.6.15 or newer
#endif

#if !defined(CONFIG_USB) && !defined(CONFIG_USB_MODULE)
#error This module requires kernel to be compiled with USB support (CONFIG_USB)
#endif

#if KERNEL_LT((0x112b+4917-0x245d),(0x501+246-0x5ef),(0x335+7706-0x214f)) && !\
defined(CONFIG_HOTPLUG)
#error\
 This module requires kernel to be compiled with hotplug support (CONFIG_HOTPLUG)
#endif

#if !defined(CONFIG_NET) && !defined(CONFIG_NET_MODULE)
#error\
 This module requires kernel to be compiled with networking support (CONFIG_NET)
#endif

#if KERNEL_LT_EQ((0x1a7a+2530-0x245a),(0xdca+3452-0x1b40),(0x17f5+916-0x1b7a)) \
&& !defined(CONFIG_KOBJECT_UEVENT)
#error\
 This module requires kernel to be compiled with uevent support (CONFIG_KOBJECT_UEVENT)
#endif

#if !defined(CONFIG_UNIX) && !defined(CONFIG_UNIX_MODULE)
#error\
 This module requires kernel to be compiled with Unix domain sockets support (CONFIG_UNIX)
#endif
#ifdef _USBD_DEBUG_MEMORY_
atomic_t IlIlIllII=ATOMIC_INIT((0x11e5+1994-0x19af));atomic_t IlllIllIl=
ATOMIC_INIT((0xb5c+6958-0x268a));atomic_t lIIlIIll=ATOMIC_INIT(
(0x1dac+227-0x1e8f));atomic_t IIIlIIIll=ATOMIC_INIT((0x2073+1500-0x264f));
#ifdef ATOMIC64_INIT
atomic64_t lllIIlII=ATOMIC64_INIT((0xcad+1371-0x1208));
#endif
atomic_t lllllllI=ATOMIC_INIT((0x1f3+3964-0x116f));atomic_t llIlllIII=
ATOMIC_INIT((0xe6b+498-0x105d));atomic_t lllIlIlIl=ATOMIC_INIT(
(0x1128+695-0x13df));atomic_t llllIllIl=ATOMIC_INIT((0x1515+2559-0x1f14));
atomic_t lIlIlIIIl=ATOMIC_INIT((0x1748+2813-0x2245));atomic_t llIIlIIIl=
ATOMIC_INIT((0x92b+1669-0xfb0));atomic_t IlIllllII=ATOMIC_INIT(
(0x608+5696-0x1c48));atomic_t llIIlIllI=ATOMIC_INIT((0x810+567-0xa47));atomic_t 
IllllIII=ATOMIC_INIT((0x2d5+2103-0xb0c));atomic_t lllllIIII=ATOMIC_INIT(
(0xb95+6377-0x247e));atomic_t IlIlIIllI=ATOMIC_INIT((0x1569+3982-0x24f7));
atomic_t IlIIlllI=ATOMIC_INIT((0x7c7+1058-0xbe9));atomic_t IIlIlIIll=ATOMIC_INIT
((0x255a+138-0x25e4));
#endif 

size_t IIlIIlI=32768;static int IIIIlIIl=(0x61c+7986-0x254e);module_param(
IIIIlIIl,int,(0x1fd7+1334-0x250d));static int __init IIlllllll(void){int IIIll;
int IlIlIIIlI=(0xfc+4219-0x1177);
#ifdef _USBD_ENABLE_STUB_
int lIllIlIll=(0x85a+2672-0x12ca);
#endif
#ifdef _USBD_ENABLE_VHCI_
int lIllIlIlI=(0x979+5675-0x1fa4);
#endif
Illll("\x75\x73\x62\x64\x5f\x69\x6e\x69\x74\x3a\x20\x2b\x2b" "\n");do{struct 
sysinfo llllIlI;if(IIIIlIIl){Illll(
"\x75\x73\x62\x64\x5f\x69\x6e\x69\x74\x3a\x20\x70\x72\x6f\x62\x65\x2d\x6f\x6e\x6c\x79\x20\x6d\x6f\x64\x65" "\n"
);IIIll=(0x6db+7909-0x25c0);break;}si_meminfo(&llllIlI);


if(llllIlI.totalram*llllIlI.mem_unit<=1LL*1024LL*1024LL*1024LL)
{IIlIIlI=(0xca0+2510-0x164e)*(0x147b+4533-0x2230);}else if(llllIlI.totalram*
llllIlI.mem_unit<=2LL*1024LL*1024LL*1024LL)
{IIlIIlI=(0x5d3+6474-0x1eed)*(0x173b+2329-0x1c54);}else if(llllIlI.totalram*
llllIlI.mem_unit<=4LL*1024LL*1024LL*1024LL)
{IIlIIlI=(0x11c0+4379-0x229b)*(0x10da+2208-0x157a);}else
{IIlIIlI=(0x15a8+3499-0x22d3)*1024;}Illll(
"\x75\x73\x62\x64\x5f\x69\x6e\x69\x74\x3a\x20\x73\x75\x67\x67\x65\x73\x74\x65\x64\x20\x6d\x61\x78\x20\x61\x6c\x6c\x6f\x63\x61\x74\x69\x6f\x6e\x20\x73\x69\x7a\x65\x20\x25\x6c\x75\x4b\x42" "\n"
,(unsigned long)IIlIIlI/(0x7f4+6757-0x1e59));IIIll=lIIlllllI();if(IIIll!=
(0xd49+3538-0x1b1b)){Illll(
"\x75\x73\x62\x64\x5f\x69\x6e\x69\x74\x3a\x20\x75\x73\x62\x64\x5f\x63\x64\x65\x76\x5f\x69\x6e\x69\x74\x5f\x6d\x6f\x64\x75\x6c\x65\x20\x66\x61\x69\x6c\x65\x64\x2e\x20\x45\x72\x72\x6f\x72\x20\x6e\x75\x6d\x62\x65\x72\x20\x25\x64" "\n"
,IIIll);break;}IlIlIIIlI=(0xa64+7147-0x264e);
#ifdef _USBD_ENABLE_STUB_
IIIll=lIlIlIlll();if(IIIll!=(0x7e1+4020-0x1795)){Illll(
"\x75\x73\x62\x64\x5f\x69\x6e\x69\x74\x3a\x20\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x69\x6e\x69\x74\x5f\x6d\x6f\x64\x75\x6c\x65\x20\x66\x61\x69\x6c\x65\x64\x2e\x20\x45\x72\x72\x6f\x72\x20\x6e\x75\x6d\x62\x65\x72\x20\x25\x64" "\n"
,IIIll);break;}lIllIlIll=(0x7c8+5557-0x1d7c);
#endif
#ifdef _USBD_ENABLE_VHCI_
IIIll=IlIIlIlII();if(IIIll!=(0x706+7411-0x23f9)){Illll(
"\x75\x73\x62\x64\x5f\x69\x6e\x69\x74\x3a\x20\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x69\x6e\x69\x74\x5f\x6d\x6f\x64\x75\x6c\x65\x20\x66\x61\x69\x6c\x65\x64\x2e\x20\x45\x72\x72\x6f\x72\x20\x6e\x75\x6d\x62\x65\x72\x20\x25\x64" "\n"
,IIIll);break;}lIllIlIlI=(0x513+1417-0xa9b);
#endif
}while((0x10c0+1721-0x1779));if(IIIll!=(0xbdf+4511-0x1d7e)){
#ifdef _USBD_ENABLE_VHCI_
if(lIllIlIlI)IIllllll();
#endif
#ifdef _USBD_ENABLE_STUB_
if(lIllIlIll)llIllIIll();
#endif
if(IlIlIIIlI)lIllIIII();}Illll(
"\x75\x73\x62\x64\x5f\x69\x6e\x69\x74\x3a\x20\x2d\x2d" "\n");return IIIll;}
static void __exit usbd_exit(void){if(IIIIlIIl){Illll(
"\x75\x73\x62\x64\x5f\x65\x78\x69\x74\x3a\x20\x70\x72\x6f\x62\x65\x2d\x6f\x6e\x6c\x79\x20\x6d\x6f\x64\x65" "\n"
);return;}
#ifdef _USBD_ENABLE_VHCI_
IIllllll();
#endif
#ifdef _USBD_ENABLE_STUB_
llIllIIll();
#endif
lIllIIII();
#ifdef _USBD_DEBUG_MEMORY_
IIllIl("\x73\x74\x61\x74\x73\x3a" "\n");IIllIl(
"\x75\x72\x62\x20\x61\x6c\x6c\x6f\x63\x3a\x20\x25\x64" "\n",atomic_read(&
IlIlIllII));IIllIl("\x75\x72\x62\x20\x66\x72\x65\x65\x3a\x20\x25\x64" "\n",
atomic_read(&IlllIllIl));IIllIl(
"\x6d\x65\x6d\x20\x61\x6c\x6c\x6f\x63\x3a\x20\x25\x64" "\n",atomic_read(&
lIIlIIll));IIllIl("\x6d\x65\x6d\x20\x66\x72\x65\x65\x3a\x20\x25\x64" "\n",
atomic_read(&IIIlIIIll));
#ifdef ATOMIC64_INIT
IIllIl("\x6d\x65\x6d\x20\x73\x69\x7a\x65\x3a\x20\x25\x6c\x6c\x64" "\n",(long 
long)atomic64_read(&lllIIlII));
#endif
IIllIl("\x75\x72\x65\x71\x20\x63\x72\x65\x61\x74\x65\x3a\x20\x25\x64" "\n",
atomic_read(&lllllllI));IIllIl(
"\x75\x72\x65\x71\x20\x66\x72\x65\x65\x3a\x20\x25\x64" "\n",atomic_read(&
llIlllIII));IIllIl(
"\x75\x72\x65\x71\x20\x64\x65\x73\x74\x72\x6f\x79\x3a\x20\x25\x64" "\n",
atomic_read(&lllIlIlIl));IIllIl(
"\x74\x72\x61\x6e\x73\x61\x63\x74\x69\x6f\x6e\x20\x61\x6c\x6c\x6f\x63\x3a\x20\x25\x64" "\n"
,atomic_read(&llllIllIl));IIllIl(
"\x74\x72\x61\x6e\x73\x61\x63\x74\x69\x6f\x6e\x20\x64\x65\x73\x74\x72\x6f\x79\x3a\x20\x25\x64" "\n"
,atomic_read(&lIlIlIIIl));IIllIl(
"\x76\x72\x65\x71\x20\x63\x72\x65\x61\x74\x65\x3a\x20\x25\x64" "\n",atomic_read(
&llIIlIIIl));IIllIl("\x76\x72\x65\x71\x20\x66\x72\x65\x65\x3a\x20\x25\x64" "\n",
atomic_read(&IlIllllII));IIllIl(
"\x73\x74\x75\x62\x20\x63\x72\x65\x61\x74\x65\x3a\x20\x25\x64" "\n",atomic_read(
&llIIlIllI));IIllIl(
"\x73\x74\x75\x62\x20\x72\x65\x6d\x6f\x76\x65\x3a\x20\x25\x64" "\n",atomic_read(
&IllllIII));IIllIl(
"\x73\x74\x75\x62\x20\x64\x65\x73\x74\x72\x6f\x79\x3a\x20\x25\x64" "\n",
atomic_read(&lllllIIII));IIllIl(
"\x76\x73\x74\x75\x62\x20\x63\x72\x65\x61\x74\x65\x3a\x20\x25\x64" "\n",
atomic_read(&IlIlIIllI));IIllIl(
"\x76\x73\x74\x75\x62\x20\x72\x65\x6d\x6f\x76\x65\x3a\x20\x25\x64" "\n",
atomic_read(&IlIIlllI));IIllIl(
"\x76\x73\x74\x75\x62\x20\x64\x65\x73\x74\x72\x6f\x79\x3a\x20\x25\x64" "\n",
atomic_read(&IIlIlIIll));
#endif 
Illll("\x75\x73\x62\x64\x5f\x65\x78\x69\x74" "\n");}module_init(IIlllllll);
module_exit(usbd_exit);MODULE_LICENSE("\x47\x50\x4c");
