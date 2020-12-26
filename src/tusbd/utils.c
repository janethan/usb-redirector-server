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
#include <linux/highmem.h>
#include <asm/page.h>
int IllIlIlll(const IIIII IlIlI,size_t*IlIll,size_t*llIlIl,lIllIl*flags,lIllIl*
endpoint){switch(IlIlI->lllII.llIIlIl){case llllllIl:*IlIll=sizeof(IlIlI->IIlllI
);*flags=IIIllI;*llIlIl=IlIlI->IIlllI.lllllI;*endpoint=(0x1c7+7790-0x1fb5);break
;case lllIlIII:*IlIll=sizeof(IlIlI->IIlllI);*flags=(0x1da9+2113-0x25ea);*llIlIl=
IlIlI->IIlllI.lllllI;*endpoint=(0x220+7823-0x20af);break;case IlIIlIll:*IlIll=
sizeof(IlIlI->lIIllII)-sizeof(IlIlI->lIIllII.llIIlII[(0x830+1374-0xd8e)])+IlIlI
->lIIllII.IlllllIl*sizeof(IlIlI->lIIllII.llIIlII[(0xe25+1828-0x1549)]);*flags=
(0x11ab+2800-0x1c9b);*llIlIl=(0x864+1625-0xebd);*endpoint=(0x67f+3279-0x134e);
break;case lIIIIllI:*IlIll=sizeof(IlIlI->IlIIIIl);*flags=(0x10c+5770-0x1796);*
llIlIl=(0x10c9+3301-0x1dae);*endpoint=(0x1aec+2843-0x2607);break;case IlIIlIII:*
IlIll=sizeof(IlIlI->llIIII);*flags=IlIlI->llIIII.Flags;*llIlIl=IlIlI->llIIII.
lllllI;*endpoint=IlIlI->llIIII.Endpoint|((*flags&IIIllI)?(0x13f+8007-0x2006):
(0x7dc+6334-0x209a));break;case IIllIIIl:*IlIll=sizeof(IlIlI->IllllI);*llIlIl=
IlIlI->IllllI.lllllI;*flags=IlIlI->IllllI.Flags;*endpoint=IlIlI->IllllI.Endpoint
|((*flags&IIIllI)?(0xbe1+459-0xd2c):(0x14b1+252-0x15ad));break;case llIIlllI:*
IlIll=IlIlIlll(IlIlI);*flags=IlIlI->llIIl.Flags;*llIlIl=IlIlI->llIIl.lllllI;*
endpoint=IlIlI->llIIl.Endpoint|((*flags&IIIllI)?(0xd81+2975-0x18a0):
(0x630+6332-0x1eec));break;case lIlllIIl:*IlIll=sizeof(IlIlI->llIIlI);*flags=
IlIlI->llIIlI.Flags;*llIlIl=IlIlI->llIIlI.lllllI;*endpoint=IlIlI->llIIlI.
Endpoint|((*flags&IIIllI)?(0xc5+5766-0x16cb):(0x334+5334-0x180a));break;case 
IIIIlIII:*IlIll=sizeof(IlIlI->IlIIIll);*flags=IlIlI->IlIIIll.Flags;*llIlIl=
(0xb2a+6063-0x22d9);*endpoint=IlIlI->IlIIIll.Endpoint|((*flags&IIIllI)?
(0x1166+1626-0x1740):(0x14ed+1317-0x1a12));break;case lllllIII:*IlIll=sizeof(
IlIlI->llIllIII);*flags=(0x2264+31-0x2283);*llIlIl=(0x15aa+1937-0x1d3b);*
endpoint=(0x1b6f+1495-0x2047);break;case llIIIIIIl:return-EINVAL;case IIlllIIl:*
IlIll=sizeof(IlIlI->lIlIIIIl);*flags=(0x14c+1531-0x747);*llIlIl=
(0xa37+6880-0x2517);*endpoint=(0x6e9+3425-0x134b);break;case IllllllI:*IlIll=
sizeof(IlIlI->lllIIlIII);*flags=(0x17d+4924-0x14b9);*llIlIl=(0x1ef8+1127-0x235f)
;*endpoint=(0x13b5+4051-0x2289);break;case llIIlIll:*IlIll=sizeof(IlIlI->
IIIIIIllI);*flags=(0x10c5+5680-0x26f5);*llIlIl=(0xd35+3933-0x1c92);*endpoint=
(0x244+1213-0x602);break;case lIIIlllI:*IlIll=sizeof(IlIlI->IlIlllll);*flags=
IlIlI->IlIlllll.Flags;*llIlIl=(0x1777+2563-0x217a);*endpoint=IlIlI->IlIlllll.
Endpoint|((*flags&IIIllI)?(0x3a9+9027-0x266c):(0x995+1221-0xe5a));break;default:
return-EINVAL;}return(0xfd5+777-0x12de);}
struct usb_host_config*IIllIIIII(struct usb_device*llIII){if(llIII->actconfig)
return llIII->actconfig;if(llIII->descriptor.bNumConfigurations&&llIII->config)
return&llIII->config[(0x12e0+4775-0x2587)];return NULL;}
struct usb_host_interface*IlIIIIIll(struct usb_host_config*config){if(config->
desc.bNumInterfaces>(0x627+7325-0x22c4)){if(config->interface[
(0x1725+858-0x1a7f)]){if(config->interface[(0x208+6064-0x19b8)]->cur_altsetting)
return config->interface[(0x138+2001-0x909)]->cur_altsetting;if(config->
interface[(0x106b+4447-0x21ca)]->num_altsetting&&config->interface[
(0xaf1+5319-0x1fb8)]->altsetting)return&config->interface[(0x36c+8200-0x2374)]->
altsetting[(0x10b7+1425-0x1648)];}if(config->intf_cache[(0x1a6a+641-0x1ceb)]&&
config->intf_cache[(0x745+1316-0xc69)]->num_altsetting)return&config->intf_cache
[(0x5f6+1294-0xb04)]->altsetting[(0x1455+2616-0x1e8d)];}return NULL;}
void IIlllIlIl(struct usb_device*llIII,u8*IIlllIll,u8*IIIIllll,u8*IlIIIlIl){
struct usb_host_config*config;struct usb_host_interface*IIIIII;config=IIllIIIII(
llIII);if(config==NULL){if(IIlllIll)*IIlllIll=(0xaea+5921-0x220b);if(IIIIllll)*
IIIIllll=(0x1b1c+2788-0x2600);if(IlIIIlIl)*IlIIIlIl=(0x1cc8+731-0x1fa3);return;}
IIIIII=IlIIIIIll(config);

















if((config->desc.bNumInterfaces>(0xca9+1432-0x1240))&&((llIII->descriptor.
bDeviceClass==(0xe47+2743-0x18fe))||
((llIII->descriptor.bDeviceClass==(0xfaf+418-0x1062))&&
(llIII->descriptor.bDeviceSubClass==(0x1776+1968-0x1f24))&&(llIII->descriptor.
bDeviceProtocol==(0x1495+1433-0x1a2d))))){

if(IIlllIll)*IIlllIll=(0x947+5113-0x1d40);if(IIIIllll)*IIIIllll=
(0x865+5145-0x1c7e);if(IlIIIlIl)*IlIIIlIl=(0x99+6450-0x19cb);}else if(config->
desc.bNumInterfaces>(0xe82+3707-0x1cfd)&&IIIIII){
if(IIlllIll)*IIlllIll=IIIIII->desc.bInterfaceClass;if(IIIIllll)*IIIIllll=IIIIII
->desc.bInterfaceSubClass;if(IlIIIlIl)*IlIIIlIl=IIIIII->desc.bInterfaceProtocol;
}else
{
if(IIlllIll)*IIlllIll=llIII->descriptor.bDeviceClass;if(IIIIllll)*IIIIllll=llIII
->descriptor.bDeviceSubClass;if(IlIIIlIl)*IlIIIlIl=llIII->descriptor.
bDeviceProtocol;}}
#ifdef _USBD_ENABLE_STUB_
#ifdef _USBD_DEBUG_MEMORY_
extern atomic_t lllllllI;extern atomic_t llIlllIII;extern atomic_t lllIlIlIl;
#endif 

int IIIIlllIl(struct lIlIl*IlllI,void __user*IIIlI,size_t lllIlll){int IIIll=
(0x16d2+3872-0x25f2);Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x65\x78\x74\x72\x61\x63\x74\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x2b\x2b" "\n"
);do{IIIII IlIlI=(IIIII)(IlllI+(0x1b9+2057-0x9c1));lIllIl flags,endpoint;size_t 
llllIIl,llIlIl,lllIlI;if(IllIlIlll(IlIlI,&llllIIl,&llIlIl,&flags,&endpoint)<
(0x10b7+859-0x1412)){Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x65\x78\x74\x72\x61\x63\x74\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x69\x6e\x76\x61\x6c\x69\x64\x20\x64\x61\x74\x61" "\n"
);IIIll=-EFAULT;break;}lllIlI=min((size_t)IlIlI->lllII.IIllI,lllIlll);
#if KERNEL_GT_EQ((0xc3+4086-0x10b4),(0x7df+146-0x871),(0xc10+2146-0x1472))
if(!access_ok(IIIlI,lllIlI))
#else
if(!access_ok(VERIFY_WRITE,IIIlI,lllIlI))
#endif
{Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x65\x78\x74\x72\x61\x63\x74\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x6d\x65\x6d\x6f\x72\x79\x20\x61\x63\x63\x65\x73\x73\x20\x63\x68\x65\x63\x6b\x20\x66\x61\x69\x6c\x65\x64" "\n"
);IIIll=-EINVAL;break;}lllIlI=min(llllIIl,lllIlll);if(__copy_to_user(IIIlI,IlIlI
,lllIlI)){Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x65\x78\x74\x72\x61\x63\x74\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x63\x61\x6e\x6e\x6f\x74\x20\x63\x6f\x70\x79\x20\x74\x6f\x20\x75\x73\x65\x72\x20\x62\x75\x66\x66\x65\x72\x28\x31\x29" "\n"
);IIIll=-EFAULT;break;}if(lllIlI<llllIIl){Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x65\x78\x74\x72\x61\x63\x74\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x6e\x6f\x74\x20\x65\x6e\x6f\x75\x67\x68\x20\x62\x75\x66\x66\x65\x72\x28\x31\x29" "\n"
);IIIll=-EMSGSIZE;break;}lllIlll-=lllIlI;IIIlI+=lllIlI;if(lllIlll<llIlIl){Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x65\x78\x74\x72\x61\x63\x74\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x6e\x6f\x74\x20\x65\x6e\x6f\x75\x67\x68\x20\x62\x75\x66\x66\x65\x72\x28\x32\x29" "\n"
);IIIll=-EMSGSIZE;break;}if((flags&IIIllI)&&llIlIl){if(IlllI->lIllll==IllIIlI){


if(__copy_to_user(IIIlI,IlllI->lIIIll.IlIIl,llIlIl)){Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x65\x78\x74\x72\x61\x63\x74\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x63\x61\x6e\x6e\x6f\x74\x20\x63\x6f\x70\x79\x20\x74\x6f\x20\x75\x73\x65\x72\x20\x62\x75\x66\x66\x65\x72\x28\x32\x29" "\n"
);IIIll=-EFAULT;break;}}else if(IlllI->lIllll==lIlllll){


if(IlIIllIlI(IlllI->lIllII.lIIlll,IIIlI,llIlIl)<llIlIl){Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x65\x78\x74\x72\x61\x63\x74\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x63\x61\x6e\x6e\x6f\x74\x20\x63\x6f\x70\x79\x20\x74\x6f\x20\x75\x73\x65\x72\x20\x62\x75\x66\x66\x65\x72\x28\x33\x29" "\n"
);IIIll=-EFAULT;break;}}
#if KERNEL_GT_EQ((0x1146+4011-0x20ef),(0x889+7125-0x2458),(0x1f3b+1469-0x24d9))
else if(IlllI->lIllll==IIlIIII){


if(llIlIlIII(&IlllI->lIllIll.sg,IIIlI,llIlIl)<llIlIl){Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x65\x78\x74\x72\x61\x63\x74\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x63\x61\x6e\x6e\x6f\x74\x20\x63\x6f\x70\x79\x20\x74\x6f\x20\x75\x73\x65\x72\x20\x62\x75\x66\x66\x65\x72\x28\x34\x29" "\n"
);IIIll=-EFAULT;break;}}
#endif
else{Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x65\x78\x74\x72\x61\x63\x74\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x69\x6e\x74\x65\x72\x6e\x61\x6c\x20\x65\x72\x72\x6f\x72\x21" "\n"
);IIIll=-EFAULT;break;}}}while((0xa9d+6025-0x2226));Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x65\x78\x74\x72\x61\x63\x74\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x2d\x2d\x20\x72\x65\x73\x75\x6c\x74\x3d\x25\x64" "\n"
,IIIll);return IIIll;}struct lIlIl*IlIIIIIlI(struct lllll*lIlII,const void 
__user*IIIlI,size_t lllIlll){IIIII IIIIlllI;IIlllIIIlI lIIllIl;struct lIlIl*
IlllI=NULL;size_t llllIIl,llIlIl,IIlllIII;lIllIl flags,endpoint;int IIIll=-
(0x350+5057-0x1710);int lIllll;do{if(copy_from_user(&lIIllIl,IIIlI,min(sizeof(
lIIllIl),lllIlll))){Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x63\x72\x65\x61\x74\x65\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x63\x61\x6e\x6e\x6f\x74\x20\x63\x6f\x70\x79\x20\x66\x72\x6f\x6d\x20\x75\x73\x65\x72\x20\x62\x75\x66\x66\x65\x72\x20\x28\x32\x29" "\n"
);break;}
#if KERNEL_GT_EQ((0x1709+1744-0x1dd4),(0x2db+377-0x454),(0x810+2663-0x1277))
if(!access_ok(IIIlI,lIIllIl.lllII.IIllI))
#else
if(!access_ok(VERIFY_READ,IIIlI,lIIllIl.lllII.IIllI))
#endif
{Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x63\x72\x65\x61\x74\x65\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x6d\x65\x6d\x6f\x72\x79\x20\x61\x63\x63\x65\x73\x73\x20\x63\x68\x65\x63\x6b\x20\x66\x61\x69\x6c\x65\x64" "\n"
);IIIll=-EFAULT;break;}if(IllIlIlll(&lIIllIl,&llllIIl,&llIlIl,&flags,&endpoint)<
(0x670+8125-0x262d)){Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x63\x72\x65\x61\x74\x65\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x69\x6e\x76\x61\x6c\x69\x64\x20\x64\x61\x74\x61" "\n"
);IIIll=-EINVAL;break;}


if((llIlIl==(0xc5+1399-0x63c))||((sizeof(struct lIlIl)+llllIIl+llIlIl+
(0x1c07+1493-0x219c))<=IIlIIlI)){
lIllll=IllIIlI;}else if(lIIllIl.lllII.llIIlIl==IIllIIIl){
lIllll=lIlII->llIIIlII;}else if(lIIllIl.lllII.llIIlIl==lIlllIIl){
lIllll=lIlII->lllIlIIl;}else if(lIIllIl.lllII.llIIlIl==llIIlllI){
lIllll=lIlII->IIlIlIII;}else{
lIllll=IllIIlI;}

if(lIllll==IllIIlI){IIlllIII=sizeof(struct lIlIl)+llllIIl+llIlIl+
(0x749+4512-0x18a9);}else{IIlllIII=sizeof(struct lIlIl)+llllIIl;}IlllI=IllIllI(
IIlllIII,GFP_KERNEL);if(!IlllI){Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x63\x72\x65\x61\x74\x65\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x63\x61\x6e\x6e\x6f\x74\x20\x61\x6c\x6c\x6f\x63\x61\x74\x65\x20\x72\x65\x71\x75\x65\x73\x74\x2c\x20\x75\x6e\x72\x62\x73\x69\x7a\x65\x3d\x25\x6c\x75\x20\x2b\x20\x25\x6c\x75" "\n"
,(unsigned long)llllIIl,(unsigned long)sizeof(struct lIlIl));break;}
#ifdef _USBD_DEBUG_MEMORY_
atomic_inc(&lllllllI);
#endif


memset(IlllI,(0x181+8890-0x243b),sizeof(*IlllI));INIT_LIST_HEAD(&IlllI->llllIl);
IlllI->IlIll=IIlllIII;atomic_set(&IlllI->state,llllIlIl);IlllI->lIlII=IlIIllII(
lIlII);IlllI->lIllll=lIllll;IlllI->IlllllI=(0xd2b+2044-0x1527);IlllI->endpoint=
endpoint;IlllI->lllIl=lIIllIl.lllII.IlIIll;IlllI->IlIIIlI.llIllIll=lIIllIl.lllII
.IllllII;kref_init(&IlllI->IIllII);IIIIlllI=(IIIII)(IlllI+(0x3e7+5716-0x1a3a));


if(__copy_from_user(IIIIlllI,IIIlI,llllIIl)){Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x63\x72\x65\x61\x74\x65\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x63\x61\x6e\x6e\x6f\x74\x20\x63\x6f\x70\x79\x20\x66\x72\x6f\x6d\x20\x75\x73\x65\x72\x20\x62\x75\x66\x66\x65\x72\x20\x28\x33\x29" "\n"
);break;}IIIlI+=llllIIl;lllIlll-=llllIIl;

if(lIllll==IllIIlI){Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x63\x72\x65\x61\x74\x65\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x73\x6f\x6c\x69\x64\x20\x75\x6e\x72\x62" "\n"
);
IlllI->lIIIll.IlIIl=(void*)(((unsigned long)IIIIlllI+llllIIl+(0x22fd+641-0x253e)
)&(~(unsigned long)((0xb74+6298-0x23ce)-(0x119a+2950-0x1d1f))));
if(llIlIl&&!(flags&IIIllI)){if(llIlIl>lllIlll){Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x63\x72\x65\x61\x74\x65\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x69\x6e\x76\x61\x6c\x69\x64\x20\x73\x69\x7a\x65\x20\x28\x34\x29" "\n"
);IIIll=-(0x6dc+2453-0x1070);break;}if(__copy_from_user(IlllI->lIIIll.IlIIl,
IIIlI,llIlIl)){Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x63\x72\x65\x61\x74\x65\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x63\x61\x6e\x6e\x6f\x74\x20\x63\x6f\x70\x79\x20\x66\x72\x6f\x6d\x20\x75\x73\x65\x72\x20\x62\x75\x66\x66\x65\x72\x20\x28\x34\x29" "\n"
);IIIll=-(0x573+7999-0x24b1);break;}IIIlI+=llIlIl;lllIlll-=llIlIl;}}else if(
lIllll==lIlllll){Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x63\x72\x65\x61\x74\x65\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x70\x61\x72\x74\x69\x74\x69\x6f\x6e\x65\x64" "\n"
);
if(IIIIlllI->lllII.llIIlIl==llIIlllI){IlllI->lIllII.lIIlll=llIlIIllI(llIlIl,
IIIIlllI->llIIl.IlllIlI,IIIIlllI->llIIl.IlIllIl);if(!IlllI->lIllII.lIIlll){Illll
(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x63\x72\x65\x61\x74\x65\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x75\x73\x62\x64\x5f\x62\x63\x5f\x61\x6c\x6c\x6f\x63\x5f\x66\x6f\x72\x5f\x69\x73\x6f\x20\x66\x61\x69\x6c\x65\x64" "\n"
);IIIll=-(0x855+353-0x9b5);break;}}else{int lllIIllI=lIlIllIII(lIlII->lIIlI,
endpoint);if(lllIIllI<(0x1113+4569-0x22ec)){Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x63\x72\x65\x61\x74\x65\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x6e\x6f\x20\x65\x6e\x64\x70\x6f\x69\x6e\x74" "\n"
);IIIll=lllIIllI;break;}IlllI->lIllII.lIIlll=llIlIIIII(llIlIl,lllIIllI);if(!
IlllI->lIllII.lIIlll){Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x63\x72\x65\x61\x74\x65\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x75\x73\x62\x64\x5f\x62\x63\x5f\x61\x6c\x6c\x6f\x63\x20\x66\x61\x69\x6c\x65\x64" "\n"
);IIIll=-(0x874+211-0x946);break;}}
if(llIlIl&&!(flags&IIIllI)){if(llIlIl>lllIlll){Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x63\x72\x65\x61\x74\x65\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x69\x6e\x76\x61\x6c\x69\x64\x20\x73\x69\x7a\x65\x20\x28\x35\x29" "\n"
);IIIll=-(0xb9c+717-0xe68);break;}if(IIIIlIlIl(IlllI->lIllII.lIIlll,IIIlI,llIlIl
)<llIlIl){Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x63\x72\x65\x61\x74\x65\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x63\x61\x6e\x6e\x6f\x74\x20\x63\x6f\x70\x79\x20\x66\x72\x6f\x6d\x20\x75\x73\x65\x72\x20\x62\x75\x66\x66\x65\x72\x20\x28\x35\x29" "\n"
);IIIll=-(0x17e4+1989-0x1fa8);break;}IIIlI+=llIlIl;lllIlll-=llIlIl;}}
#if KERNEL_GT_EQ((0x13b+5867-0x1824),(0x968+2620-0x139e),(0xf1c+4113-0x1f0e))
else if(lIllll==IIlIIII){


int lllIIllI=lIlIllIII(lIlII->lIIlI,endpoint);Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x63\x72\x65\x61\x74\x65\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x73\x67" "\n"
);if(lllIIllI<(0xc72+4757-0x1f07)){IIIll=lllIIllI;Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x63\x72\x65\x61\x74\x65\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x6e\x6f\x20\x65\x6e\x64\x70\x6f\x69\x6e\x74" "\n"
);break;}IIIll=IlIlIlIIl(&IlllI->lIllIll.sg,llIlIl,lllIIllI);if(IIIll<
(0xc9b+3562-0x1a85)){Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x63\x72\x65\x61\x74\x65\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x75\x73\x62\x64\x5f\x73\x67\x5f\x61\x6c\x6c\x6f\x63\x20\x66\x61\x69\x6c\x65\x64" "\n"
);break;}if(llIlIl&&(flags&IIIllI)==(0x171+8811-0x23dc)){if(llIlIl>lllIlll){
Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x63\x72\x65\x61\x74\x65\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x69\x6e\x76\x61\x6c\x69\x64\x20\x73\x69\x7a\x65\x20\x28\x36\x29" "\n"
);IIIll=-(0x464+7096-0x201b);break;}if(llllIllII(&IlllI->lIllIll.sg,IIIlI,llIlIl
)<llIlIl){Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x63\x72\x65\x61\x74\x65\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x63\x61\x6e\x6e\x6f\x74\x20\x63\x6f\x70\x79\x20\x66\x72\x6f\x6d\x20\x75\x73\x65\x72\x20\x62\x75\x66\x66\x65\x72\x20\x28\x36\x29" "\n"
);IIIll=-(0x1f66+344-0x20bd);break;}IIIlI+=llIlIl;lllIlll-=llIlIl;}}
#endif 
else{IIIll=-EINVAL;break;}IIIll=(0xb55+2292-0x1449);}while((0x14ca+1174-0x1960))
;
if(IIIll<(0x1ac0+596-0x1d14)){if(IlllI){lIIIIlI(IlllI);IlllI=NULL;}return NULL;}
return IlllI;}


struct lIlIl*IllIIlIlI(struct lIlIl*IlllI,gfp_t llIlI){struct lIlIl*lIIIlll;if(
IlllI->lIllll!=IllIIlI)
return NULL;lIIIlll=IllIllI(IlllI->IlIll,llIlI);if(lIIIlll){memset(lIIIlll,
(0x1e99+2076-0x26b5),sizeof(*lIIIlll));
memcpy(lIIIlll+(0x1350+4425-0x2498),IlllI+(0x21cb+16-0x21da),IlllI->IlIll-sizeof
(*IlllI));
INIT_LIST_HEAD(&lIIIlll->llllIl);lIIIlll->IlIll=IlllI->IlIll;lIIIlll->lllIl=
IlllI->lllIl;lIIIlll->IlIIIlI=IlllI->IlIIIlI;atomic_set(&lIIIlll->state,llllIlIl
);lIIIlll->lIlII=IlIIllII(IlllI->lIlII);lIIIlll->endpoint=IlllI->endpoint;
lIIIlll->lIIIll.IlIIl=(void*)lIIIlll+((unsigned long)IlllI->lIIIll.IlIIl-(
unsigned long)IlllI);lIIIlll->lIllll=IlllI->lIllll;kref_init(&lIIIlll->IIllII);
#ifdef _USBD_DEBUG_MEMORY_
atomic_inc(&lllllllI);
#endif
}return lIIIlll;}void IllIIlII(struct kref*lllIlIl){struct lIlIl*IlllI=
container_of(lllIlIl,struct lIlIl,IIllII);Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x64\x65\x73\x74\x72\x6f\x79\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x75\x6e\x69\x71\x75\x65\x5f\x69\x64\x3d\x30\x78\x25\x6c\x6c\x78" "\n"
,IlllI->lllIl);
#ifdef _USBD_DEBUG_MEMORY_
atomic_inc(&lllIlIlIl);
#endif
if(IlllI->lIllll==IllIIlI){if(IlllI->lIIIll.lIlll){if(IlllI->lIIIll.lIlll->
setup_packet)lIlIll(IlllI->lIIIll.lIlll->setup_packet);lllllIlI(IlllI->lIIIll.
lIlll);}


}else if(IlllI->lIllll==lIlllll){if(IlllI->lIllII.llllIll){lIIIIlIIl(IlllI->
lIllII.llllIll);}if(IlllI->lIllII.lIIlll){llllIIIII(IlllI->lIllII.lIIlll);}}
#if KERNEL_GT_EQ((0xd53+1281-0x1252),(0x1bc4+2580-0x25d2),(0x1756+292-0x185b))
else if(IlllI->lIllll==IIlIIII){if(IlllI->lIllIll.lIlll){if(IlllI->lIllIll.lIlll
->setup_packet)lIlIll(IlllI->lIllIll.lIlll->setup_packet);lllllIlI(IlllI->
lIllIll.lIlll);}IlllllIIl(&IlllI->lIllIll.sg);}
#endif
if(IlllI->lIlII){lllllIll(IlllI->lIlII);}lIlIll(IlllI);}void lIIIIlI(struct 
lIlIl*IlllI){
#ifdef _USBD_DEBUG_MEMORY_
atomic_inc(&llIlllIII);
#endif
kref_put(&IlllI->IIllII,IllIIlII);}
#endif 
IlIIlI lIllIIlll(void){static IlIIlI IlIIll=(0x1ee1+1673-0x256a);return(++IlIIll
);}int lIIIIIIII(void*llIlIIlIl,struct vm_area_struct*llIIIlI){int IIIll=
(0x99f+7361-0x2660);unsigned long start=llIIIlI->vm_start;unsigned long IIlIIl=
llIIIlI->vm_end-llIIIlI->vm_start;unsigned long lIlIllIll;Illll(
"\x75\x73\x62\x64\x5f\x6d\x61\x70\x5f\x76\x6d\x65\x6d\x3a\x20\x2b\x2b" "\n");
while(IIlIIl>(0x1b9c+491-0x1d87)){lIlIllIll=vmalloc_to_pfn(llIlIIlIl);IIIll=
remap_pfn_range(llIIIlI,start,lIlIllIll,PAGE_SIZE,PAGE_SHARED);if(IIIll<
(0x9fa+2439-0x1381)){Illll(
"\x75\x73\x62\x64\x5f\x6d\x61\x70\x5f\x76\x6d\x65\x6d\x3a\x20\x63\x61\x6e\x6e\x6f\x74\x20\x6d\x61\x70\x20\x74\x68\x65\x20\x70\x61\x67\x65" "\n"
);break;}start+=PAGE_SIZE;llIlIIlIl+=PAGE_SIZE;IIlIIl-=PAGE_SIZE;}Illll(
"\x75\x73\x62\x64\x5f\x6d\x61\x70\x5f\x76\x6d\x65\x6d\x3a\x20\x2d\x2d\x20\x72\x65\x73\x75\x6c\x74\x3d\x25\x64" "\n"
,IIIll);return IIIll;}void IlIIIIlll(dma_addr_t IIIIIll,void*lllIll,unsigned 
long IIlIIl){void*llllll;struct page*IIIlIlll;unsigned long flags;unsigned long 
IIlIIll;unsigned long IlIllll,IllllIl;local_irq_save(flags);while(IIlIIl){

IlIllll=IIIIIll&(PAGE_SIZE-(0x26b6+7-0x26bc));IllllIl=PAGE_SIZE-IlIllll;IIlIIll=
(IllllIl<IIlIIl)?IllllIl:IIlIIl;
IIIlIlll=pfn_to_page(IIIIIll>>PAGE_SHIFT);
#if KERNEL_GT_EQ((0x728+4370-0x1838),(0x1965+1179-0x1dfa),(0xdcf+599-0x1001))
llllll=kmap_atomic(IIIlIlll);
#else
llllll=kmap_atomic(IIIlIlll,KM_IRQ0);
#endif
memcpy(llllll+IlIllll,lllIll,IIlIIll);
#if KERNEL_GT_EQ((0x98+8485-0x21bb),(0x1327+4085-0x2316),(0x99d+4883-0x1c8b))
kunmap_atomic(llllll);
#else
kunmap_atomic(llllll,KM_IRQ0);
#endif

IIIIIll+=IIlIIll;lllIll+=IIlIIll;IIlIIl-=IIlIIll;}local_irq_restore(flags);}void
 llIlllIlI(void*IIIIIll,dma_addr_t lllIll,unsigned long IIlIIl){struct page*
IIIlIlll;unsigned char*llllll;unsigned long flags;unsigned long IIlIIll;unsigned
 long IlIllll,IllllIl;local_irq_save(flags);while(IIlIIl){

IlIllll=lllIll&(PAGE_SIZE-(0x2b9+5917-0x19d5));IllllIl=PAGE_SIZE-IlIllll;IIlIIll
=(IllllIl<IIlIIl)?IllllIl:IIlIIl;
IIIlIlll=pfn_to_page(lllIll>>PAGE_SHIFT);
#if KERNEL_GT_EQ((0x1903+1288-0x1e09),(0xf66+3133-0x1b9d),(0x147b+3754-0x2300))
llllll=kmap_atomic(IIIlIlll);
#else
llllll=kmap_atomic(IIIlIlll,KM_IRQ0);
#endif
memcpy(IIIIIll,llllll+IlIllll,IIlIIll);
#if KERNEL_GT_EQ((0x16f1+1728-0x1daf),(0x1d81+1528-0x2373),(0x1829+3625-0x262d))
kunmap_atomic(llllll);
#else
kunmap_atomic(llllll,KM_IRQ0);
#endif

lllIll+=IIlIIll;IIIIIll+=IIlIIll;IIlIIl-=IIlIIll;}local_irq_restore(flags);}int 
lllIIIll(IIIIl status){int IIIll;switch(status){case IlllIIllll:IIIll=
(0x1353+3579-0x214e);break;case IIIIllllII:IIIll=-EINPROGRESS;break;case 
IIlIIIlll:IIIll=-ECONNRESET;break;case lIIlllIll:IIIll=-EXDEV;break;case 
llIIlIlll:IIIll=-ETIMEDOUT;break;case IlIIlllIlI:IIIll=-EINVAL;break;case 
llIlllIIl:IIIll=-ENODEV;break;case IIlIlIIII:IIIll=-EREMOTEIO;break;case 
IIllIllll:IIIll=-EOVERFLOW;break;case IIlIllIlIl:IIIll=-ENOSR;break;case 
lllIIllII:IIIll=-ECOMM;break;case lIlllIIII:IIIll=-EPIPE;break;case IIIIlIIIIl:
IIIll=-EILSEQ;break;case llIllIlIl:IIIll=-EPROTO;break;case lIIIlIlll:IIIll=-
ENOMEM;break;case lIllIIIIl:IIIll=-EPROTO;break;case IllIlIlIl:default:IIIll=-
EPROTO;break;}return IIIll;}
size_t IlIIIllI(struct usb_iso_packet_descriptor*lIlllIl,int IlIII,void*IIIIIll,
void*lllIll,int IIlIlIlI){lIllIl*IlIIlIlI;size_t IIIll;IIIll=(0x65b+2887-0x11a2)
;IlIIlIlI=IIIIIll;for(;IlIII;IlIII--){lIllIl*IIllllIlI=lllIll+lIlllIl->offset;
unsigned int length=IIlIlIlI?lIlllIl->actual_length:lIlllIl->length;if(length&&
IlIIlIlI!=IIllllIlI)
memmove(IlIIlIlI,IIllllIlI,length);IlIIlIlI+=length;IIIll+=length;lIlllIl++;}
Illll(
"\x75\x73\x62\x64\x5f\x70\x61\x63\x6b\x5f\x69\x73\x6f\x5f\x62\x75\x66\x66\x65\x72\x3a\x20\x70\x61\x63\x6b\x65\x64\x3d\x25\x6c\x75" "\n"
,(unsigned long)IIIll);return IIIll;}
size_t IlIlllIlI(struct usb_iso_packet_descriptor*lIlllIl,int IlIII,int IIlIlIlI
){size_t IIIll;IIIll=(0xc61+5433-0x219a);for(;IlIII>(0xbe4+4644-0x1e08);IlIII--)
{IIIll+=IIlIlIlI?lIlllIl->actual_length:lIlllIl->length;lIlllIl++;}Illll(
"\x75\x73\x62\x64\x5f\x63\x6f\x75\x6e\x74\x5f\x69\x73\x6f\x5f\x62\x75\x66\x66\x65\x72\x3a\x20\x70\x61\x63\x6b\x65\x64\x3d\x25\x6c\x75" "\n"
,(unsigned long)IIIll);return IIIll;}char*llIlllII(struct kobject*kobj,gfp_t 
IIIIlIIII){
#if KERNEL_GT_EQ((0x10c0+327-0x1205),(0x7e6+6265-0x2059),(0x10b6+2334-0x19c1))
return kobject_get_path(kobj,IIIIlIIII);
#else
char*IIlIlll;int length;struct kobject*IIllll;
for(IIllll=kobj,length=(0x1cd4+1791-0x23d3);IIllll&&kobject_name(IIllll);IIllll=
IIllll->parent){length+=strlen(kobject_name(IIllll));length+=(0xc6b+2695-0x16f1)
;
}if(IIllll)
return NULL;
IIlIlll=IllIllI(length+(0x5cd+3714-0x144e),IIIIlIIII);if(IIlIlll==NULL)return 
NULL;*(IIlIlll+length)='\0';
for(IIllll=kobj;IIllll&&length>(0x136b+312-0x14a3);IIllll=IIllll->parent){int l=
strlen(kobject_name(IIllll));strncpy(IIlIlll+length-l,kobject_name(IIllll),l);*(
IIlIlll+length-l-(0xc3+4123-0x10dd))=((char)(0x2da+3637-0x10e0));length-=l+
(0x185d+1723-0x1f17);}
if(length!=(0x116+6878-0x1bf4)||IIllll){lIlIll(IIlIlll);return NULL;}return 
IIlIlll;
#endif
}void IlIIlIlll(char*IIlIlll){
#if KERNEL_GT_EQ((0x10fa+3590-0x1efe),(0xfa2+1461-0x1551),(0xe3f+1414-0x13b2))
kfree(IIlIlll);
#else
lIlIll(IIlIlll);
#endif
}int IlIIIIlIl(struct device*dev){



if(dev->bus&&!strcmp(dev->bus->name,"\x75\x73\x62"))return(0xdd3+3719-0x1c59);
return(0xfaf+1306-0x14c9);}int IllllllIl(struct device*dev){if(IlIIIIlIl(dev)){
#if KERNEL_LT_EQ((0x174c+137-0x17d3),(0xf67+1988-0x1725),(0x60a+1387-0xb60))

if(!strchr(llIIIl(dev),((char)(0x10d1+674-0x1339))))return(0x165+1833-0x88d);
#else




if(dev->type&&!strcmp(dev->type->name,
"\x75\x73\x62\x5f\x69\x6e\x74\x65\x72\x66\x61\x63\x65"))return
(0x8f7+3479-0x168d);
#endif
}return(0x917+1851-0x1052);}int IIllIlIIl(struct device*dev){if(IlIIIIlIl(dev)){
#if KERNEL_LT_EQ((0x15bd+1666-0x1c3d),(0x2256+1078-0x2686),(0xba9+4425-0x1cdd))


if(strchr(llIIIl(dev),((char)(0x89d+2436-0x11e7))))return(0x12dc+2953-0x1e64);
#else




if(dev->type&&!strcmp(dev->type->name,"\x75\x73\x62\x5f\x64\x65\x76\x69\x63\x65"
))return(0x174a+3655-0x2590);
#endif
}return(0x554+3189-0x11c9);}
#if KERNEL_GT_EQ((0x12f6+3558-0x20da),(0x44c+1546-0xa50),(0x16c2+4085-0x26a1))












void llIllllI(struct device*dev,int lIlllIll){
#if KERNEL_LT_EQ((0xa7c+2373-0x13bf),(0xbc1+3995-0x1b56),(0x19cb+793-0x1cc7))
dev->uevent_suppress=lIlllIll;
#elif KERNEL_GT_EQ((0x374+7696-0x2182),(0xa7d+6747-0x24d2),(0x1adb+848-0x1e0d))
dev_set_uevent_suppress(dev,lIlllIll);
#endif
}int lIIlIllI(struct device*dev){
#if KERNEL_LT_EQ((0xf49+2367-0x1886),(0x7f0+6396-0x20e6),(0x25b+6122-0x1a28))
return dev->uevent_suppress;
#elif KERNEL_GT_EQ((0x464+6158-0x1c70),(0xff9+1694-0x1691),(0xa12+2359-0x132b))
return dev_get_uevent_suppress(dev);
#endif
}
#endif 
#ifndef _USBD_DEBUG_
const char*lllllIlll(unsigned long IlIlllI){return"";}const char*llIllllII(
unsigned long IlIlllI){return"";}void llIIllIII(struct urb*lIlll,IlIIlI lllIl){}
#else
const char*lllllIlll(unsigned long IlIlllI){switch(IlIlllI){
#if KERNEL_GT_EQ((0x4cb+1045-0x8de),(0x1ac6+111-0x1b2f),(0x103d+3194-0x1ca3))
case BUS_NOTIFY_ADD_DEVICE:return
"\x42\x55\x53\x5f\x4e\x4f\x54\x49\x46\x59\x5f\x41\x44\x44\x5f\x44\x45\x56\x49\x43\x45"
;case BUS_NOTIFY_DEL_DEVICE:return
"\x42\x55\x53\x5f\x4e\x4f\x54\x49\x46\x59\x5f\x44\x45\x4c\x5f\x44\x45\x56\x49\x43\x45"
;case BUS_NOTIFY_BOUND_DRIVER:return
"\x42\x55\x53\x5f\x4e\x4f\x54\x49\x46\x59\x5f\x42\x4f\x55\x4e\x44\x5f\x44\x52\x49\x56\x45\x52"
;case BUS_NOTIFY_UNBIND_DRIVER:return
"\x42\x55\x53\x5f\x4e\x4f\x54\x49\x46\x59\x5f\x55\x4e\x42\x49\x4e\x44\x5f\x44\x52\x49\x56\x45\x52"
;
#endif
#if KERNEL_GT_EQ((0x12fa+4738-0x257a),(0xefc+4940-0x2242),(0x1165+3166-0x1da4))
case BUS_NOTIFY_UNBOUND_DRIVER:return
"\x42\x55\x53\x5f\x4e\x4f\x54\x49\x46\x59\x5f\x55\x4e\x42\x4f\x55\x4e\x44\x5f\x44\x52\x49\x56\x45\x52"
;
#endif
#if KERNEL_GT_EQ((0x2f+9802-0x2677),(0x8e4+3148-0x152a),(0x14c6+1393-0x1a13))
case BUS_NOTIFY_BIND_DRIVER:return
"\x42\x55\x53\x5f\x4e\x4f\x54\x49\x46\x59\x5f\x42\x49\x4e\x44\x5f\x44\x52\x49\x56\x45\x52"
;
#endif
#if KERNEL_GT_EQ((0xf1b+1433-0x14b1),(0xd00+2490-0x16a8),(0xd03+3649-0x1b44))
case BUS_NOTIFY_REMOVED_DEVICE:return
"\x42\x55\x53\x5f\x4e\x4f\x54\x49\x46\x59\x5f\x52\x45\x4d\x4f\x56\x45\x44\x5f\x44\x45\x56\x49\x43\x45"
;
#endif
default:break;}return"\x75\x6e\x6b\x6e\x6f\x77\x6e";}const char*llIllllII(
unsigned long IlIlllI){switch(IlIlllI){case USB_DEVICE_ADD:return
"\x55\x53\x42\x5f\x44\x45\x56\x49\x43\x45\x5f\x41\x44\x44";case 
USB_DEVICE_REMOVE:return
"\x55\x53\x42\x5f\x44\x45\x56\x49\x43\x45\x5f\x52\x45\x4d\x4f\x56\x45";case 
USB_BUS_ADD:return"\x55\x53\x42\x5f\x42\x55\x53\x5f\x41\x44\x44";case 
USB_BUS_REMOVE:return"\x55\x53\x42\x5f\x42\x55\x53\x5f\x52\x45\x4d\x4f\x56\x45";
default:break;}return"\x75\x6e\x6b\x6e\x6f\x77\x6e";}void llIIllIII(struct urb*
lIlll,IlIIlI lllIl){const char*lIlIIlllI[]={"\x69\x73\x6f","\x69\x6e\x74",
"\x63\x74\x72\x6c","\x62\x75\x6c\x6b"};if(!lIlll)return;Illll(
"\x2b\x2b\x2b\x2b\x20\x55\x52\x42\x20\x53\x54\x41\x52\x54\x20\x2b\x2b\x2b\x2b" "\n"
);Illll("\x20\x20\x55\x52\x42\x3d\x30\x78\x25\x70" "\n",lIlll);Illll(
"\x20\x20\x50\x69\x70\x65\x3d\x30\x78\x25\x30\x38\x58\x20\x28\x64\x65\x76\x3a\x20\x25\x64\x20\x65\x6e\x64\x70\x3a\x20\x25\x64\x20\x64\x69\x72\x3a\x20\x25\x73\x20\x74\x79\x70\x65\x3a\x20\x25\x73\x29" "\n"
,lIlll->pipe,usb_pipedevice(lIlll->pipe),usb_pipeendpoint(lIlll->pipe),
usb_pipein(lIlll->pipe)?"\x69\x6e":"\x6f\x75\x74",lIlIIlllI[usb_pipetype(lIlll->
pipe)]);Illll("\x20\x20\x53\x74\x61\x74\x75\x73\x3d\x25\x64" "\n",lIlll->status)
;Illll(
"\x20\x20\x54\x72\x61\x6e\x73\x66\x65\x72\x46\x6c\x61\x67\x73\x3d\x30\x78\x25\x30\x38\x58" "\n"
,lIlll->transfer_flags);Illll(
"\x20\x20\x42\x75\x66\x66\x65\x72\x3d\x30\x78\x25\x70" "\n",lIlll->
transfer_buffer);Illll(
"\x20\x20\x42\x75\x66\x66\x65\x72\x4c\x65\x6e\x67\x74\x68\x3d\x25\x64" "\n",
lIlll->transfer_buffer_length);Illll(
"\x20\x20\x41\x63\x74\x75\x61\x6c\x4c\x65\x6e\x67\x74\x68\x3d\x25\x64" "\n",
lIlll->actual_length);Illll(
"\x20\x20\x54\x72\x61\x6e\x73\x66\x65\x72\x44\x6d\x61\x3d\x30\x78\x25\x30\x38\x58" "\n"
,(u32)lIlll->transfer_dma);Illll(
"\x20\x20\x53\x65\x74\x75\x70\x44\x6d\x61\x3d\x30\x78\x25\x30\x38\x58" "\n",(u32
)lIlll->setup_dma);if(usb_pipecontrol(lIlll->pipe)){Illll(
"\x20\x20\x53\x65\x74\x75\x70\x50\x61\x63\x6b\x65\x74\x3d\x25\x30\x32\x58\x20\x25\x30\x32\x58\x20\x25\x30\x32\x58\x20\x25\x30\x32\x58\x20\x25\x30\x32\x58\x20\x25\x30\x32\x58\x20\x25\x30\x32\x58\x20\x25\x30\x32\x58" "\n"
,lIlll->setup_packet[(0x1ce0+1178-0x217a)],lIlll->setup_packet[
(0x600+6605-0x1fcc)],lIlll->setup_packet[(0xe4f+5111-0x2244)],lIlll->
setup_packet[(0x15d+3776-0x101a)],lIlll->setup_packet[(0x16f+4298-0x1235)],lIlll
->setup_packet[(0x1d6b+2029-0x2553)],lIlll->setup_packet[(0x521+7627-0x22e6)],
lIlll->setup_packet[(0xf8d+2964-0x1b1a)]);}else if(usb_pipeisoc(lIlll->pipe)){
int i;Illll("\x20\x20\x53\x74\x61\x72\x74\x46\x72\x61\x6d\x65\x3d\x25\x64" "\n",
lIlll->start_frame);Illll(
"\x20\x20\x4e\x75\x6d\x62\x65\x72\x4f\x66\x50\x61\x63\x6b\x65\x74\x73\x3d\x25\x64" "\n"
,lIlll->number_of_packets);Illll(
"\x20\x20\x49\x6e\x74\x65\x72\x76\x61\x6c\x3d\x25\x64" "\n",lIlll->interval);
Illll("\x20\x20\x45\x72\x72\x6f\x72\x43\x6f\x75\x6e\x74\x3d\x25\x64" "\n",lIlll
->error_count);Illll("\x20\x20\x49\x73\x6f\x46\x72\x61\x6d\x65\x73\x3d" "\n");
for(i=(0x9d8+7009-0x2539);i<lIlll->number_of_packets;i++){Illll(
"\x20\x20\x20\x20\x5b\x25\x64\x5d\x20\x4f\x66\x66\x73\x65\x74\x3d\x25\x64\x20\x4c\x65\x6e\x67\x74\x68\x3d\x25\x64\x20\x41\x63\x74\x75\x61\x6c\x4c\x65\x6e\x67\x74\x68\x3d\x25\x64\x20\x53\x74\x61\x74\x75\x73\x3d\x25\x64" "\n"
,i,lIlll->iso_frame_desc[i].offset,lIlll->iso_frame_desc[i].length,lIlll->
iso_frame_desc[i].actual_length,lIlll->iso_frame_desc[i].status);}}else if(
usb_pipeint(lIlll->pipe)){Illll(
"\x20\x20\x49\x6e\x74\x65\x72\x76\x61\x6c\x3d\x25\x64" "\n",lIlll->interval);}
Illll(
"\x2d\x2d\x2d\x2d\x20\x55\x52\x42\x20\x45\x4e\x44\x20\x2d\x2d\x2d\x2d" "\n");}
#endif 
#ifndef _USBD_DEBUG_
void llIlIIl(IIIII IlIlI){}
#else
static void IIIIllI(IIIII IlIlI);void llIlIIl(IIIII IlIlI){int i;
if(!IlIlI)return;Illll(
"\x2d\x2d\x2d\x2d\x20\x55\x4e\x52\x42\x20\x53\x54\x41\x52\x54" "\n");switch(
IlIlI->lllII.llIIlIl){case llllllIl:Illll(
"\x55\x4e\x52\x42\x5f\x46\x55\x4e\x43\x54\x49\x4f\x4e\x5f\x47\x45\x54\x5f\x44\x45\x53\x43\x52\x49\x50\x54\x4f\x52" "\n"
);IIIIllI(IlIlI);Illll(
"\x20\x20\x44\x65\x73\x63\x72\x69\x70\x74\x6f\x72\x52\x65\x71\x75\x65\x73\x74" "\n"
);Illll(
"\x20\x20\x20\x20\x52\x65\x71\x75\x65\x73\x74\x54\x79\x70\x65\x3d\x25\x64" "\n",
IlIlI->IIlllI.IIllIll);Illll(
"\x20\x20\x20\x20\x52\x65\x71\x75\x65\x73\x74\x52\x65\x63\x69\x70\x69\x65\x6e\x74\x3d\x25\x64" "\n"
,IlIlI->IIlllI.IllIlIll);Illll(
"\x20\x20\x20\x20\x44\x65\x73\x63\x54\x79\x70\x65\x3d\x25\x64" "\n",IlIlI->
IIlllI.lIIIIlll);Illll(
"\x20\x20\x20\x20\x44\x65\x73\x63\x49\x6e\x64\x65\x78\x3d\x25\x64" "\n",IlIlI->
IIlllI.IIIlllll);Illll(
"\x20\x20\x20\x20\x4c\x61\x6e\x67\x49\x64\x3d\x25\x64" "\n",IlIlI->IIlllI.
IIIIIIII);Illll(
"\x20\x20\x20\x20\x42\x75\x66\x66\x65\x72\x53\x69\x7a\x65\x3d\x25\x64" "\n",
IlIlI->IIlllI.lllllI);break;case lllIlIII:Illll(
"\x55\x4e\x52\x42\x5f\x46\x55\x4e\x43\x54\x49\x4f\x4e\x5f\x53\x45\x54\x5f\x44\x45\x53\x43\x52\x49\x50\x54\x4f\x52" "\n"
);IIIIllI(IlIlI);Illll(
"\x20\x20\x44\x65\x73\x63\x72\x69\x70\x74\x6f\x72\x52\x65\x71\x75\x65\x73\x74" "\n"
);Illll("\x20\x20\x20\x20\x44\x65\x73\x63\x54\x79\x70\x65\x3d\x25\x64" "\n",
IlIlI->IIlllI.lIIIIlll);Illll(
"\x20\x20\x20\x20\x44\x65\x73\x63\x49\x6e\x64\x65\x78\x3d\x25\x64" "\n\n",IlIlI
->IIlllI.IIIlllll);Illll(
"\x20\x20\x20\x20\x4c\x61\x6e\x67\x49\x64\x3d\x25\x64" "\n",IlIlI->IIlllI.
IIIIIIII);Illll(
"\x20\x20\x20\x20\x42\x75\x66\x66\x65\x72\x53\x69\x7a\x65\x3d\x25\x64" "\n",
IlIlI->IIlllI.lllllI);break;case IlIIlIll:Illll(
"\x55\x4e\x52\x42\x5f\x46\x55\x4e\x43\x54\x49\x4f\x4e\x5f\x53\x45\x4c\x45\x43\x54\x5f\x43\x4f\x4e\x46\x49\x47\x55\x52\x41\x54\x49\x4f\x4e" "\n"
);IIIIllI(IlIlI);Illll(
"\x20\x20\x53\x65\x6c\x65\x63\x74\x43\x6f\x6e\x66\x69\x67\x75\x72\x61\x74\x69\x6f\x6e" "\n"
);Illll(
"\x20\x20\x20\x20\x43\x6f\x6e\x66\x69\x67\x75\x72\x61\x74\x69\x6f\x6e\x3d\x25\x64" "\n"
,IlIlI->lIIllII.IIllIIlI);Illll(
"\x20\x20\x20\x20\x4e\x75\x6d\x41\x6c\x74\x65\x72\x6e\x61\x74\x65\x73\x3d\x25\x64" "\n"
,IlIlI->lIIllII.IlllllIl);for(i=(0x28b+1092-0x6cf);i<IlIlI->lIIllII.IlllllIl;i++
){Illll(
"\x20\x20\x20\x20\x20\x20\x25\x2e\x33\x64\x3a\x20\x49\x6e\x74\x65\x72\x66\x61\x63\x65\x4e\x75\x6d\x3d\x25\x64" "\n"
,i,IlIlI->lIIllII.llIIlII[i].lIlllII);Illll(
"\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x41\x6c\x74\x65\x72\x6e\x61\x74\x65\x4e\x75\x6d\x3d\x25\x64" "\n"
,IlIlI->lIIllII.llIIlII[i].llIlllI);}break;case lIIIIllI:Illll(
"\x55\x4e\x52\x42\x5f\x46\x55\x4e\x43\x54\x49\x4f\x4e\x5f\x53\x45\x4c\x45\x43\x54\x5f\x49\x4e\x54\x45\x52\x46\x41\x43\x45" "\n"
);IIIIllI(IlIlI);Illll(
"\x20\x20\x53\x65\x6c\x65\x63\x74\x49\x6e\x74\x65\x72\x66\x61\x63\x65" "\n");
Illll("\x20\x20\x20\x20\x49\x6e\x74\x65\x72\x66\x61\x63\x65\x3d\x25\x64" "\n",
IlIlI->IlIIIIl.lIlllII);Illll(
"\x20\x20\x20\x20\x41\x6c\x74\x65\x72\x6e\x61\x74\x65\x3d\x25\x64" "\n",IlIlI->
IlIIIIl.llIlllI);break;case IlIIlIII:Illll(
"\x55\x4e\x52\x42\x5f\x46\x55\x4e\x43\x54\x49\x4f\x4e\x5f\x43\x4f\x4e\x54\x52\x4f\x4c\x5f\x54\x52\x41\x4e\x53\x46\x45\x52" "\n"
);IIIIllI(IlIlI);Illll(
"\x20\x20\x43\x6f\x6e\x74\x72\x6f\x6c\x54\x72\x61\x6e\x73\x66\x65\x72" "\n");
Illll("\x20\x20\x20\x20\x45\x6e\x64\x70\x6f\x69\x6e\x74\x3d\x25\x64" "\n",IlIlI
->llIIII.Endpoint);Illll(
"\x20\x20\x20\x20\x46\x6c\x61\x67\x73\x3d\x30\x78\x25\x2e\x32\x58" "\n",IlIlI->
llIIII.Flags);Illll(
"\x20\x20\x20\x20\x52\x65\x71\x75\x65\x73\x74\x54\x79\x70\x65\x3d\x30\x78\x25\x2e\x32\x58" "\n"
,IlIlI->llIIII.IIllIll);Illll(
"\x20\x20\x20\x20\x52\x65\x71\x75\x65\x73\x74\x3d\x30\x78\x25\x2e\x32\x58" "\n",
IlIlI->llIIII.IlIlIIlII);Illll(
"\x20\x20\x20\x20\x56\x61\x6c\x75\x65\x3d\x30\x78\x25\x2e\x34\x58" "\n",IlIlI->
llIIII.llIllIll);Illll(
"\x20\x20\x20\x20\x49\x6e\x64\x65\x78\x3d\x30\x78\x25\x2e\x34\x58" "\n",IlIlI->
llIIII.IIIlIIllI);Illll(
"\x20\x20\x20\x20\x42\x75\x66\x65\x72\x53\x69\x7a\x65\x3d\x25\x64" "\n",IlIlI->
llIIII.lllllI);break;case IIllIIIl:Illll(
"\x55\x4e\x52\x42\x5f\x46\x55\x4e\x43\x54\x49\x4f\x4e\x5f\x42\x55\x4c\x4b\x5f\x54\x52\x41\x4e\x53\x46\x45\x52" "\n"
);IIIIllI(IlIlI);Illll(
"\x20\x20\x42\x75\x6c\x6b\x54\x72\x61\x6e\x73\x66\x65\x72" "\n");Illll(
"\x20\x20\x20\x20\x45\x6e\x64\x70\x6f\x69\x6e\x74\x3d\x25\x64" "\n",IlIlI->
IllllI.Endpoint);Illll(
"\x20\x20\x20\x20\x46\x6c\x61\x67\x73\x3d\x30\x78\x25\x2e\x32\x58" "\n",IlIlI->
IllllI.Flags);Illll(
"\x20\x20\x20\x20\x42\x75\x66\x65\x72\x53\x69\x7a\x65\x3d\x25\x64" "\n",IlIlI->
IllllI.lllllI);break;case lIlllIIl:Illll(
"\x55\x4e\x52\x42\x5f\x46\x55\x4e\x43\x54\x49\x4f\x4e\x5f\x49\x4e\x54\x45\x52\x52\x55\x50\x54\x5f\x54\x52\x41\x4e\x53\x46\x45\x52" "\n"
);IIIIllI(IlIlI);Illll(
"\x20\x20\x49\x6e\x74\x65\x72\x72\x75\x70\x74\x54\x72\x61\x6e\x73\x66\x65\x72" "\n"
);Illll("\x20\x20\x20\x20\x45\x6e\x64\x70\x6f\x69\x6e\x74\x3d\x25\x64" "\n",
IlIlI->llIIlI.Endpoint);Illll(
"\x20\x20\x20\x20\x46\x6c\x61\x67\x73\x3d\x30\x78\x25\x2e\x32\x58" "\n",IlIlI->
llIIlI.Flags);Illll(
"\x20\x20\x20\x20\x49\x6e\x74\x65\x72\x76\x61\x6c\x3d\x25\x64" "\n",IlIlI->
llIIlI.Interval);Illll(
"\x20\x20\x20\x20\x42\x75\x66\x65\x72\x53\x69\x7a\x65\x3d\x25\x64" "\n",IlIlI->
llIIlI.lllllI);break;case llIIlllI:Illll(
"\x55\x4e\x52\x42\x5f\x46\x55\x4e\x43\x54\x49\x4f\x4e\x5f\x49\x53\x4f\x43\x48\x5f\x54\x52\x41\x4e\x53\x46\x45\x52" "\n"
);IIIIllI(IlIlI);Illll(
"\x20\x20\x49\x73\x6f\x63\x68\x54\x72\x61\x6e\x73\x66\x65\x72" "\n");Illll(
"\x20\x20\x20\x20\x45\x6e\x64\x70\x6f\x69\x6e\x74\x3d\x25\x64" "\n",IlIlI->llIIl
.Endpoint);Illll(
"\x20\x20\x20\x20\x46\x6c\x61\x67\x73\x3d\x30\x78\x25\x2e\x32\x58" "\n",IlIlI->
llIIl.Flags);Illll(
"\x20\x20\x20\x20\x42\x75\x66\x65\x72\x53\x69\x7a\x65\x3d\x25\x64" "\n",IlIlI->
llIIl.lllllI);Illll(
"\x20\x20\x20\x20\x49\x6e\x74\x65\x72\x76\x61\x6c\x3d\x25\x64" "\n",IlIlI->llIIl
.Interval);Illll(
"\x20\x20\x20\x20\x53\x74\x61\x72\x74\x46\x72\x61\x6d\x65\x3d\x25\x64" "\n",
IlIlI->llIIl.IIlIlIIl);Illll(
"\x20\x20\x20\x20\x4e\x75\x6d\x62\x65\x72\x4f\x66\x50\x61\x63\x6b\x65\x74\x73\x3d\x25\x64" "\n"
,IlIlI->llIIl.IlIllIl);Illll(
"\x20\x20\x20\x20\x45\x72\x72\x6f\x72\x43\x6f\x75\x6e\x74\x3d\x25\x64" "\n",
IlIlI->llIIl.llIIIIIl);Illll(
"\x20\x20\x20\x20\x49\x73\x6f\x63\x68\x50\x61\x63\x6b\x65\x74\x73\x3a" "\n");for
(i=(0x19eb+1945-0x2184);i<IlIlI->llIIl.IlIllIl;i++){Illll(
"\x20\x20\x20\x20\x20\x20\x25\x2e\x33\x64\x3a\x20\x4f\x66\x66\x73\x65\x74\x3d\x25\x64" "\n"
,i,IlIlI->llIIl.IlllIlI[i].Offset);Illll(
"\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x4c\x65\x6e\x67\x74\x68\x3d\x25\x64" "\n"
,IlIlI->llIIl.IlllIlI[i].Length);Illll(
"\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x53\x74\x61\x74\x75\x73\x3d\x25\x64" "\n"
,IlIlI->llIIl.IlllIlI[i].Status);}break;case IIIIlIII:Illll(
"\x55\x4e\x52\x42\x5f\x46\x55\x4e\x43\x54\x49\x4f\x4e\x5f\x43\x4c\x45\x41\x52\x5f\x53\x54\x41\x4c\x4c" "\n"
);IIIIllI(IlIlI);Illll("\x20\x20\x43\x6c\x65\x61\x72\x53\x74\x61\x6c\x6c" "\n");
Illll("\x20\x20\x20\x20\x45\x6e\x64\x70\x6f\x69\x6e\x74\x3d\x25\x64" "\n",IlIlI
->IlIIIll.Endpoint);Illll(
"\x20\x20\x20\x20\x46\x6c\x61\x67\x73\x3d\x30\x78\x25\x2e\x32\x58" "\n",IlIlI->
IlIIIll.Flags);break;case lllllIII:Illll(
"\x55\x4e\x52\x42\x5f\x46\x55\x4e\x43\x54\x49\x4f\x4e\x5f\x47\x45\x54\x5f\x43\x55\x52\x52\x45\x4e\x54\x5f\x46\x52\x41\x4d\x45\x5f\x4e\x55\x4d\x42\x45\x52" "\n"
);IIIIllI(IlIlI);Illll(
"\x20\x20\x47\x65\x74\x43\x75\x72\x72\x65\x6e\x74\x46\x72\x61\x6d\x65\x4e\x75\x6d\x62\x65\x72" "\n"
);Illll(
"\x20\x20\x20\x20\x46\x72\x61\x6d\x65\x4e\x75\x6d\x62\x65\x72\x3d\x25\x64" "\n",
IlIlI->llIllIII.lIIIIlIlI);break;case IIlllIIl:Illll(
"\x55\x4e\x52\x42\x5f\x46\x55\x4e\x43\x54\x49\x4f\x4e\x5f\x47\x45\x54\x5f\x50\x4f\x52\x54\x5f\x53\x54\x41\x54\x55\x53" "\n"
);IIIIllI(IlIlI);Illll(
"\x20\x20\x47\x65\x74\x50\x6f\x72\x74\x53\x74\x61\x74\x75\x73" "\n");switch(
IlIlI->lIlIIIIl.IIllIIll){case lllIlIllI:Illll(
"\x20\x20\x20\x20\x50\x6f\x72\x74\x53\x74\x61\x74\x75\x73\x3d\x45\x4e\x41\x42\x4c\x45\x44" "\n"
);break;case IlllIlIII:Illll(
"\x20\x20\x20\x20\x50\x6f\x72\x74\x53\x74\x61\x74\x75\x73\x3d\x43\x4f\x4e\x4e\x45\x43\x54\x45\x44" "\n"
);break;default:Illll(
"\x20\x20\x20\x20\x50\x6f\x72\x74\x53\x74\x61\x74\x75\x73\x3d\x75\x6e\x6b\x6e\x6f\x77\x6e" "\n"
);break;}break;case IllllllI:Illll(
"\x55\x4e\x52\x42\x5f\x46\x55\x4e\x43\x54\x49\x4f\x4e\x5f\x52\x45\x53\x45\x54\x5f\x50\x4f\x52\x54" "\n"
);IIIIllI(IlIlI);break;case llIIlIll:Illll(
"\x55\x4e\x52\x42\x5f\x46\x55\x4e\x43\x54\x49\x4f\x4e\x5f\x43\x41\x4e\x43\x45\x4c" "\n"
);IIIIllI(IlIlI);break;case lIIIlllI:Illll(
"\x55\x4e\x52\x42\x5f\x46\x55\x4e\x43\x54\x49\x4f\x4e\x5f\x41\x42\x4f\x52\x54\x5f\x45\x4e\x44\x50\x4f\x49\x4e\x54" "\n"
);IIIIllI(IlIlI);Illll(
"\x20\x20\x41\x62\x6f\x72\x74\x45\x6e\x64\x70\x6f\x69\x6e\x74" "\n");Illll(
"\x20\x20\x20\x20\x45\x6e\x64\x70\x6f\x69\x6e\x74\x3d\x25\x64" "\n",IlIlI->
IlIlllll.Endpoint);Illll(
"\x20\x20\x20\x20\x46\x6c\x61\x67\x73\x3d\x30\x78\x25\x2e\x32\x58" "\n",IlIlI->
IlIlllll.Flags);break;default:Illll(
"\x55\x4e\x52\x42\x5f\x46\x55\x4e\x43\x54\x49\x4f\x4e\x5f\x75\x6e\x6b\x6e\x6f\x77\x6e" "\n"
);IIIIllI(IlIlI);break;}Illll(
"\x2d\x2d\x2d\x2d\x20\x55\x4e\x52\x42\x20\x45\x4e\x44" "\n");}static void 
IIIIllI(IIIII IlIlI){Illll("\x20\x20\x48\x65\x61\x64\x65\x72" "\n");Illll(
"\x20\x20\x20\x20\x55\x6e\x69\x71\x75\x65\x49\x64\x3d\x30\x78\x25\x2e\x38\x58\x25\x2e\x38\x58" "\n"
,(IIIIl)(IlIlI->lllII.IlIIll>>(0x679+2875-0x1194)),(IIIIl)(IlIlI->lllII.IlIIll))
;Illll(
"\x20\x20\x20\x20\x53\x63\x72\x69\x70\x74\x3d\x30\x78\x25\x2e\x34\x58" "\n",(
IlllIl)IlIlI->lllII.IllllII);Illll(
"\x20\x20\x20\x20\x53\x69\x7a\x65\x3d\x25\x64" "\n",IlIlI->lllII.IIllI);Illll(
"\x20\x20\x20\x20\x46\x75\x6e\x63\x74\x69\x6f\x6e\x3d\x25\x64" "\n",IlIlI->lllII
.llIIlIl);Illll("\x20\x20\x20\x20\x53\x74\x61\x74\x75\x73\x3d\x25\x64" "\n",
IlIlI->lllII.Status);Illll(
"\x20\x20\x20\x20\x43\x6f\x6e\x74\x65\x78\x74\x3d\x30\x78\x25\x2e\x38\x58" "\n",
IlIlI->lllII.Context);}
#endif 

