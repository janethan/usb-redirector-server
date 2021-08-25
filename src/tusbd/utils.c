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
int IllIlIlll(const IIlII IIlIl,size_t*IlIll,size_t*llIlIl,lIllIl*flags,lIllIl*
endpoint){switch(IIlIl->IlIII.IIIlIIl){case llIIllll:*IlIll=sizeof(IIlIl->IIlllI
);*flags=IIIllI;*llIlIl=IIlIl->IIlllI.IllllI;*endpoint=(0x749+6207-0x1f08);break
;case lIlIllll:*IlIll=sizeof(IIlIl->IIlllI);*flags=(0x480+3335-0x1187);*llIlIl=
IIlIl->IIlllI.IllllI;*endpoint=(0x13b6+4469-0x252b);break;case llIlllIl:*IlIll=
sizeof(IIlIl->lIllIll)-sizeof(IIlIl->lIllIll.llIIlII[(0x671+4830-0x194f)])+IIlIl
->lIllIll.IlllllIl*sizeof(IIlIl->lIllIll.llIIlII[(0x1289+1782-0x197f)]);*flags=
(0x1175+3864-0x208d);*llIlIl=(0x3d+4072-0x1025);*endpoint=(0x319+1792-0xa19);
break;case IIlIlIII:*IlIll=sizeof(IIlIl->IlIIIIl);*flags=(0x7f4+3954-0x1766);*
llIlIl=(0x14aa+3332-0x21ae);*endpoint=(0x312+3426-0x1074);break;case llIIIIlI:*
IlIll=sizeof(IIlIl->lllIII);*flags=IIlIl->lllIII.Flags;*llIlIl=IIlIl->lllIII.
IllllI;*endpoint=IIlIl->lllIII.Endpoint|((*flags&IIIllI)?(0x909+685-0xb36):
(0xb61+4147-0x1b94));break;case IIllIIIl:*IlIll=sizeof(IIlIl->lllllI);*llIlIl=
IIlIl->lllllI.IllllI;*flags=IIlIl->lllllI.Flags;*endpoint=IIlIl->lllllI.Endpoint
|((*flags&IIIllI)?(0x8b1+2689-0x12b2):(0x2a2+8928-0x2582));break;case lllIlIIl:*
IlIll=IlIlIlll(IIlIl);*flags=IIlIl->llIll.Flags;*llIlIl=IIlIl->llIll.IllllI;*
endpoint=IIlIl->llIll.Endpoint|((*flags&IIIllI)?(0xdb4+1696-0x13d4):
(0xb03+6433-0x2424));break;case lIlllIIl:*IlIll=sizeof(IIlIl->llIIlI);*flags=
IIlIl->llIIlI.Flags;*llIlIl=IIlIl->llIIlI.IllllI;*endpoint=IIlIl->llIIlI.
Endpoint|((*flags&IIIllI)?(0x64c+2145-0xe2d):(0x1504+1079-0x193b));break;case 
IIIIlllI:*IlIll=sizeof(IIlIl->lIllIII);*flags=IIlIl->lIllIII.Flags;*llIlIl=
(0x1100+2195-0x1993);*endpoint=IIlIl->lIllIII.Endpoint|((*flags&IIIllI)?
(0x165+7374-0x1db3):(0xc0a+649-0xe93));break;case IIlIIIlI:*IlIll=sizeof(IIlIl->
llIllIII);*flags=(0x1116+583-0x135d);*llIlIl=(0xf9d+1023-0x139c);*endpoint=
(0x1b54+2054-0x225b);break;case llIIIIIIl:return-EINVAL;case IIllIIlI:*IlIll=
sizeof(IIlIl->lIlIlIll);*flags=(0x4aa+1499-0xa85);*llIlIl=(0x7c1+2016-0xfa1);*
endpoint=(0x1e14+1872-0x2465);break;case llIIlIII:*IlIll=sizeof(IIlIl->lllIIlIII
);*flags=(0x166f+2881-0x21b0);*llIlIl=(0x1074+2879-0x1bb3);*endpoint=
(0x160+7420-0x1d5d);break;case llIIlIll:*IlIll=sizeof(IIlIl->llIIlIlIl);*flags=
(0xa4b+1004-0xe37);*llIlIl=(0x2c8+712-0x590);*endpoint=(0x85a+2938-0x12d5);break
;case lIIIlllI:*IlIll=sizeof(IIlIl->IlIlllll);*flags=IIlIl->IlIlllll.Flags;*
llIlIl=(0x646+5873-0x1d37);*endpoint=IIlIl->IlIlllll.Endpoint|((*flags&IIIllI)?
(0x199a+3372-0x2646):(0x10c6+1927-0x184d));break;default:return-EINVAL;}return
(0x59d+4639-0x17bc);}
struct usb_host_config*lllIIIlll(struct usb_device*IlIIl){if(IlIIl->actconfig){
return IlIIl->actconfig;}if(IlIIl->descriptor.bNumConfigurations&&IlIIl->config)
{return&IlIIl->config[(0x736+4623-0x1945)];}return NULL;}
struct usb_host_interface*IlIIIIIll(struct usb_host_config*config){if(config->
desc.bNumInterfaces>(0xa23+2500-0x13e7)){if(config->interface[
(0x38a+3737-0x1223)]){if(config->interface[(0x29f+6403-0x1ba2)]->cur_altsetting)
{return config->interface[(0x317+5924-0x1a3b)]->cur_altsetting;}if(config->
interface[(0xf34+1261-0x1421)]->num_altsetting&&config->interface[
(0x98f+4234-0x1a19)]->altsetting){return&config->interface[(0x19f2+48-0x1a22)]->
altsetting[(0x47d+6828-0x1f29)];}}if(config->intf_cache[(0x622+840-0x96a)]&&
config->intf_cache[(0xb22+6979-0x2665)]->num_altsetting){return&config->
intf_cache[(0xe07+3851-0x1d12)]->altsetting[(0x6bd+7530-0x2427)];}}return NULL;}
void IIlllIlIl(struct usb_device*IlIIl,u8*IIlIllll,u8*IllIllIl,u8*IlIIIlll){
struct usb_host_config*config;struct usb_host_interface*IIIIII;config=lllIIIlll(
IlIIl);if(config==NULL){if(IIlIllll){*IIlIllll=(0x15ac+968-0x1974);}if(IllIllIl)
{*IllIllIl=(0x3a6+1986-0xb68);}if(IlIIIlll){*IlIIIlll=(0x129b+1256-0x1783);}
return;}IIIIII=IlIIIIIll(config);

















if((config->desc.bNumInterfaces>(0x969+7525-0x26cd))&&((IlIIl->descriptor.
bDeviceClass==(0x15b0+4208-0x2620))||
((IlIIl->descriptor.bDeviceClass==(0xc7d+2212-0x1432))&&
(IlIIl->descriptor.bDeviceSubClass==(0x1e96+1014-0x228a))&&(IlIIl->descriptor.
bDeviceProtocol==(0x1082+63-0x10c0))))){

if(IIlIllll){*IIlIllll=(0xad3+5378-0x1fd5);}if(IllIllIl){*IllIllIl=
(0x1645+1084-0x1a81);}if(IlIIIlll){*IlIIIlll=(0xb63+6663-0x256a);}}else if(
config->desc.bNumInterfaces>(0x1bd3+2708-0x2667)&&IIIIII){
if(IIlIllll){*IIlIllll=IIIIII->desc.bInterfaceClass;}if(IllIllIl){*IllIllIl=
IIIIII->desc.bInterfaceSubClass;}if(IlIIIlll){*IlIIIlll=IIIIII->desc.
bInterfaceProtocol;}}else
{
if(IIlIllll){*IIlIllll=IlIIl->descriptor.bDeviceClass;}if(IllIllIl){*IllIllIl=
IlIIl->descriptor.bDeviceSubClass;}if(IlIIIlll){*IlIIIlll=IlIIl->descriptor.
bDeviceProtocol;}}}
#ifdef _USBD_ENABLE_STUB_
#ifdef _USBD_DEBUG_MEMORY_
extern atomic_t llIIIIII;extern atomic_t IIIllIllI;extern atomic_t IIIllllIl;
#endif 

int IIIIlllIl(struct lIIll*lIlII,void __user*IllIl,size_t lIlllII){int IlIlI=
(0x1d1d+2290-0x260f);lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x65\x78\x74\x72\x61\x63\x74\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x2b\x2b" "\n"
);do{IIlII IIlIl=(IIlII)(lIlII+(0x1544+4195-0x25a6));lIllIl flags,endpoint;
size_t IIlIlII,llIlIl,lllIlI;if(IllIlIlll(IIlIl,&IIlIlII,&llIlIl,&flags,&
endpoint)<(0xbb6+5750-0x222c)){lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x65\x78\x74\x72\x61\x63\x74\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x69\x6e\x76\x61\x6c\x69\x64\x20\x64\x61\x74\x61" "\n"
);IlIlI=-EFAULT;break;}lllIlI=min((size_t)IIlIl->IlIII.IIIII,lIlllII);
#if KERNEL_GT_EQ((0xe4c+4360-0x1f4f),(0x966+3770-0x1820),(0xac6+5961-0x220f))
if(!access_ok(IllIl,lllIlI))
#else
if(!access_ok(VERIFY_WRITE,IllIl,lllIlI))
#endif
{lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x65\x78\x74\x72\x61\x63\x74\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x6d\x65\x6d\x6f\x72\x79\x20\x61\x63\x63\x65\x73\x73\x20\x63\x68\x65\x63\x6b\x20\x66\x61\x69\x6c\x65\x64" "\n"
);IlIlI=-EINVAL;break;}lllIlI=min(IIlIlII,lIlllII);if(__copy_to_user(IllIl,IIlIl
,lllIlI)){lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x65\x78\x74\x72\x61\x63\x74\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x63\x61\x6e\x6e\x6f\x74\x20\x63\x6f\x70\x79\x20\x74\x6f\x20\x75\x73\x65\x72\x20\x62\x75\x66\x66\x65\x72\x28\x31\x29" "\n"
);IlIlI=-EFAULT;break;}if(lllIlI<IIlIlII){lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x65\x78\x74\x72\x61\x63\x74\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x6e\x6f\x74\x20\x65\x6e\x6f\x75\x67\x68\x20\x62\x75\x66\x66\x65\x72\x28\x31\x29" "\n"
);IlIlI=-EMSGSIZE;break;}lIlllII-=lllIlI;IllIl+=lllIlI;if((flags&IIIllI)&&llIlIl
){if(lIlllII<llIlIl){lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x65\x78\x74\x72\x61\x63\x74\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x6e\x6f\x74\x20\x65\x6e\x6f\x75\x67\x68\x20\x62\x75\x66\x66\x65\x72\x28\x32\x29" "\n"
);IlIlI=-EMSGSIZE;break;}if(lIlII->IlllIl==lIlIIlI){


if(__copy_to_user(IllIl,lIlII->lIIIll.llIIl,llIlIl)){lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x65\x78\x74\x72\x61\x63\x74\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x63\x61\x6e\x6e\x6f\x74\x20\x63\x6f\x70\x79\x20\x74\x6f\x20\x75\x73\x65\x72\x20\x62\x75\x66\x66\x65\x72\x28\x32\x29" "\n"
);IlIlI=-EFAULT;break;}}else if(lIlII->IlllIl==IlIIIlI){


if(IlIIllIlI(lIlII->lIllII.lIIlll,IllIl,llIlIl)<llIlIl){lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x65\x78\x74\x72\x61\x63\x74\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x63\x61\x6e\x6e\x6f\x74\x20\x63\x6f\x70\x79\x20\x74\x6f\x20\x75\x73\x65\x72\x20\x62\x75\x66\x66\x65\x72\x28\x33\x29" "\n"
);IlIlI=-EFAULT;break;}}
#if KERNEL_GT_EQ((0x3a0+3789-0x126b),(0x17b2+45-0x17d9),(0x82f+3837-0x170d))
else if(lIlII->IlllIl==IIlIIII){


if(llIlIlIII(&lIlII->IlIIIII.sg,IllIl,llIlIl)<llIlIl){lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x65\x78\x74\x72\x61\x63\x74\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x63\x61\x6e\x6e\x6f\x74\x20\x63\x6f\x70\x79\x20\x74\x6f\x20\x75\x73\x65\x72\x20\x62\x75\x66\x66\x65\x72\x28\x34\x29" "\n"
);IlIlI=-EFAULT;break;}}
#endif
else{lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x65\x78\x74\x72\x61\x63\x74\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x69\x6e\x74\x65\x72\x6e\x61\x6c\x20\x65\x72\x72\x6f\x72\x21" "\n"
);IlIlI=-EFAULT;break;}}}while((0x10a6+5260-0x2532));lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x65\x78\x74\x72\x61\x63\x74\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x2d\x2d\x20\x72\x65\x73\x75\x6c\x74\x3d\x25\x64" "\n"
,IlIlI);return IlIlI;}struct lIIll*llIlIIllI(struct IIlll*IIIll,const void 
__user*IllIl,size_t lIlllII){IIlII lIIIIllI;llIIIlIlIl llIllll;struct lIIll*
lIlII=NULL;size_t IIlIlII,llIlIl,IIlllIII;lIllIl flags,endpoint;int IlIlI=-
(0xb7+7660-0x1ea2);int IlllIl;do
{if(copy_from_user(&llIllll,IllIl,min(sizeof(llIllll),lIlllII))){lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x63\x72\x65\x61\x74\x65\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x63\x61\x6e\x6e\x6f\x74\x20\x63\x6f\x70\x79\x20\x66\x72\x6f\x6d\x20\x75\x73\x65\x72\x20\x62\x75\x66\x66\x65\x72\x20\x28\x32\x29" "\n"
);break;}
#if KERNEL_GT_EQ((0x1d24+1740-0x23eb),(0xa5a+6315-0x2305),(0xe91+2044-0x168d))
if(!access_ok(IllIl,llIllll.IlIII.IIIII))
#else
if(!access_ok(VERIFY_READ,IllIl,llIllll.IlIII.IIIII))
#endif
{lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x63\x72\x65\x61\x74\x65\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x6d\x65\x6d\x6f\x72\x79\x20\x61\x63\x63\x65\x73\x73\x20\x63\x68\x65\x63\x6b\x20\x66\x61\x69\x6c\x65\x64" "\n"
);IlIlI=-EFAULT;break;}if(IllIlIlll(&llIllll,&IIlIlII,&llIlIl,&flags,&endpoint)<
(0x9a4+1301-0xeb9)){lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x63\x72\x65\x61\x74\x65\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x69\x6e\x76\x61\x6c\x69\x64\x20\x64\x61\x74\x61" "\n"
);IlIlI=-EINVAL;break;}


if((llIlIl==(0x69b+6405-0x1fa0))||((sizeof(struct lIIll)+IIlIlII+llIlIl+
(0x552+6188-0x1d3e))<=IIlIIlI)){
IlllIl=lIlIIlI;}else if(llIllll.IlIII.IIIlIIl==IIllIIIl){
IlllIl=IIIll->lIlIIII;}else if(llIllll.IlIII.IIIlIIl==lIlllIIl){
IlllIl=IIIll->IIIIIIIl;}else if(llIllll.IlIII.IIIlIIl==lllIlIIl){
IlllIl=IIIll->IIIlIlIl;}else{
IlllIl=lIlIIlI;}

if(IlllIl==lIlIIlI){IIlllIII=sizeof(struct lIIll)+IIlIlII+llIlIl+
(0x2155+1063-0x253c);}else{IIlllIII=sizeof(struct lIIll)+IIlIlII;}lIlII=IllIllI(
IIlllIII,GFP_KERNEL);if(!lIlII){lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x63\x72\x65\x61\x74\x65\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x63\x61\x6e\x6e\x6f\x74\x20\x61\x6c\x6c\x6f\x63\x61\x74\x65\x20\x72\x65\x71\x75\x65\x73\x74\x2c\x20\x75\x6e\x72\x62\x73\x69\x7a\x65\x3d\x25\x6c\x75\x20\x2b\x20\x25\x6c\x75" "\n"
,(unsigned long)IIlIlII,(unsigned long)sizeof(struct lIIll));break;}
#ifdef _USBD_DEBUG_MEMORY_
atomic_inc(&llIIIIII);
#endif


memset(lIlII,(0x417+7377-0x20e8),sizeof(*lIlII));INIT_LIST_HEAD(&lIlII->llllIl);
lIlII->IlIll=IIlllIII;atomic_set(&lIlII->state,IIlllIIl);lIlII->IIIll=lIIlIlll(
IIIll);lIlII->IlllIl=IlllIl;lIlII->IlllllI=(0xe50+578-0x1092);lIlII->endpoint=
endpoint;lIlII->lIlIl=llIllll.IlIII.IIIlIl;lIlII->lIlIlII.IlIlIlII=llIllll.IlIII
.IllllII;kref_init(&lIlII->IllIll);lIIIIllI=(IIlII)(lIlII+(0xa18+3656-0x185f));


if(__copy_from_user(lIIIIllI,IllIl,IIlIlII)){lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x63\x72\x65\x61\x74\x65\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x63\x61\x6e\x6e\x6f\x74\x20\x63\x6f\x70\x79\x20\x66\x72\x6f\x6d\x20\x75\x73\x65\x72\x20\x62\x75\x66\x66\x65\x72\x20\x28\x33\x29" "\n"
);break;}IllIl+=IIlIlII;lIlllII-=IIlIlII;

if(IlllIl==lIlIIlI){lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x63\x72\x65\x61\x74\x65\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x73\x6f\x6c\x69\x64\x20\x75\x6e\x72\x62" "\n"
);
lIlII->lIIIll.llIIl=(void*)(((unsigned long)lIIIIllI+IIlIlII+(0x1b89+545-0x1d6a)
)&(~(unsigned long)((0x577+1964-0xce3)-(0xda8+4762-0x2041))));
if(llIlIl&&!(flags&IIIllI)){if(llIlIl>lIlllII){lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x63\x72\x65\x61\x74\x65\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x69\x6e\x76\x61\x6c\x69\x64\x20\x73\x69\x7a\x65\x20\x28\x34\x29" "\n"
);IlIlI=-(0x1d39+819-0x206b);break;}if(__copy_from_user(lIlII->lIIIll.llIIl,
IllIl,llIlIl)){lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x63\x72\x65\x61\x74\x65\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x63\x61\x6e\x6e\x6f\x74\x20\x63\x6f\x70\x79\x20\x66\x72\x6f\x6d\x20\x75\x73\x65\x72\x20\x62\x75\x66\x66\x65\x72\x20\x28\x34\x29" "\n"
);IlIlI=-(0x125c+2212-0x1aff);break;}IllIl+=llIlIl;lIlllII-=llIlIl;}}else if(
IlllIl==IlIIIlI){lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x63\x72\x65\x61\x74\x65\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x70\x61\x72\x74\x69\x74\x69\x6f\x6e\x65\x64" "\n"
);
if(lIIIIllI->IlIII.IIIlIIl==lllIlIIl){lIlII->lIllII.lIIlll=lIIIIIIIl(llIlIl,
lIIIIllI->llIll.llIIIIl,lIIIIllI->llIll.IIlIlIl);if(!lIlII->lIllII.lIIlll){lIlll
(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x63\x72\x65\x61\x74\x65\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x75\x73\x62\x64\x5f\x62\x63\x5f\x61\x6c\x6c\x6f\x63\x5f\x66\x6f\x72\x5f\x69\x73\x6f\x20\x66\x61\x69\x6c\x65\x64" "\n"
);IlIlI=-(0x127f+235-0x1369);break;}}else{int lllIIllI=IIllllIII(IIIll->llIII,
endpoint);if(lllIIllI<(0x988+1839-0x10b7)){lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x63\x72\x65\x61\x74\x65\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x6e\x6f\x20\x65\x6e\x64\x70\x6f\x69\x6e\x74" "\n"
);IlIlI=lllIIllI;break;}lIlII->lIllII.lIIlll=IIIIIIIIl(llIlIl,lllIIllI);if(!
lIlII->lIllII.lIIlll){lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x63\x72\x65\x61\x74\x65\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x75\x73\x62\x64\x5f\x62\x63\x5f\x61\x6c\x6c\x6f\x63\x20\x66\x61\x69\x6c\x65\x64" "\n"
);IlIlI=-(0xa42+5274-0x1edb);break;}}
if(llIlIl&&!(flags&IIIllI)){if(llIlIl>lIlllII){lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x63\x72\x65\x61\x74\x65\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x69\x6e\x76\x61\x6c\x69\x64\x20\x73\x69\x7a\x65\x20\x28\x35\x29" "\n"
);IlIlI=-(0x4b+8037-0x1faf);break;}if(IIIIlIlIl(lIlII->lIllII.lIIlll,IllIl,
llIlIl)<llIlIl){lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x63\x72\x65\x61\x74\x65\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x63\x61\x6e\x6e\x6f\x74\x20\x63\x6f\x70\x79\x20\x66\x72\x6f\x6d\x20\x75\x73\x65\x72\x20\x62\x75\x66\x66\x65\x72\x20\x28\x35\x29" "\n"
);IlIlI=-(0x1334+4756-0x25c7);break;}IllIl+=llIlIl;lIlllII-=llIlIl;}}
#if KERNEL_GT_EQ((0xdef+3447-0x1b64),(0x1869+3456-0x25e3),(0x187+8764-0x23a4))
else if(IlllIl==IIlIIII){


int lllIIllI=IIllllIII(IIIll->llIII,endpoint);lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x63\x72\x65\x61\x74\x65\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x73\x67" "\n"
);if(lllIIllI<(0x22ef+826-0x2629)){IlIlI=lllIIllI;lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x63\x72\x65\x61\x74\x65\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x6e\x6f\x20\x65\x6e\x64\x70\x6f\x69\x6e\x74" "\n"
);break;}IlIlI=IlIlIlIIl(&lIlII->IlIIIII.sg,llIlIl,lllIIllI);if(IlIlI<
(0x849+1830-0xf6f)){lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x63\x72\x65\x61\x74\x65\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x75\x73\x62\x64\x5f\x73\x67\x5f\x61\x6c\x6c\x6f\x63\x20\x66\x61\x69\x6c\x65\x64" "\n"
);break;}if(llIlIl&&(flags&IIIllI)==(0x2bc+1988-0xa80)){if(llIlIl>lIlllII){lIlll
(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x63\x72\x65\x61\x74\x65\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x69\x6e\x76\x61\x6c\x69\x64\x20\x73\x69\x7a\x65\x20\x28\x36\x29" "\n"
);IlIlI=-(0xc4f+4443-0x1da9);break;}if(llllIllII(&lIlII->IlIIIII.sg,IllIl,llIlIl
)<llIlIl){lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x63\x72\x65\x61\x74\x65\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x63\x61\x6e\x6e\x6f\x74\x20\x63\x6f\x70\x79\x20\x66\x72\x6f\x6d\x20\x75\x73\x65\x72\x20\x62\x75\x66\x66\x65\x72\x20\x28\x36\x29" "\n"
);IlIlI=-(0x7d0+2865-0x1300);break;}IllIl+=llIlIl;lIlllII-=llIlIl;}}
#endif 
else{IlIlI=-EINVAL;break;}IlIlI=(0x606+3579-0x1401);}while((0xb0b+1641-0x1174));
if(IlIlI<(0xd8+3793-0xfa9)){if(lIlII){IllIlll(lIlII);lIlII=NULL;}return NULL;}
return lIlII;}


struct lIIll*IllIIlIlI(struct lIIll*lIlII,gfp_t llllI){struct lIIll*lIIIlll;if(
lIlII->IlllIl!=lIlIIlI)
{return NULL;}lIIIlll=IllIllI(lIlII->IlIll,llllI);if(lIIIlll){memset(lIIIlll,
(0x678+8034-0x25da),sizeof(*lIIIlll));
memcpy(lIIIlll+(0xc56+5022-0x1ff3),lIlII+(0x112c+2921-0x1c94),lIlII->IlIll-
sizeof(*lIlII));
INIT_LIST_HEAD(&lIIIlll->llllIl);lIIIlll->IlIll=lIlII->IlIll;lIIIlll->lIlIl=
lIlII->lIlIl;lIIIlll->lIlIlII=lIlII->lIlIlII;atomic_set(&lIIIlll->state,IIlllIIl
);lIIIlll->IIIll=lIIlIlll(lIlII->IIIll);lIIIlll->endpoint=lIlII->endpoint;
lIIIlll->lIIIll.llIIl=(void*)lIIIlll+((unsigned long)lIlII->lIIIll.llIIl-(
unsigned long)lIlII);lIIIlll->IlllIl=lIlII->IlllIl;kref_init(&lIIIlll->IllIll);
#ifdef _USBD_DEBUG_MEMORY_
atomic_inc(&llIIIIII);
#endif
}return lIIIlll;}void lIlIIIIl(struct kref*IIllIlI){struct lIIll*lIlII=
container_of(IIllIlI,struct lIIll,IllIll);lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x64\x65\x73\x74\x72\x6f\x79\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x75\x6e\x69\x71\x75\x65\x5f\x69\x64\x3d\x30\x78\x25\x6c\x6c\x78" "\n"
,lIlII->lIlIl);
#ifdef _USBD_DEBUG_MEMORY_
atomic_inc(&IIIllllIl);
#endif
if(lIlII->IlllIl==lIlIIlI){if(lIlII->lIIIll.IlllI){if(lIlII->lIIIll.IlllI->
setup_packet){lIlIll(lIlII->lIIIll.IlllI->setup_packet);}lllllIlI(lIlII->lIIIll.
IlllI);}


}else if(lIlII->IlllIl==IlIIIlI){if(lIlII->lIllII.llIIlIl){lIIIIlIIl(lIlII->
lIllII.llIIlIl);}if(lIlII->lIllII.lIIlll){IlIlIIIlI(lIlII->lIllII.lIIlll);}}
#if KERNEL_GT_EQ((0xa0c+1013-0xdff),(0x1f79+696-0x222b),(0x9fa+4123-0x19f6))
else if(lIlII->IlllIl==IIlIIII){if(lIlII->IlIIIII.IlllI){if(lIlII->IlIIIII.IlllI
->setup_packet){lIlIll(lIlII->IlIIIII.IlllI->setup_packet);}lllllIlI(lIlII->
IlIIIII.IlllI);}llIIllIII(&lIlII->IlIIIII.sg);}
#endif
if(lIlII->IIIll){lIIIllII(lIlII->IIIll);}lIlIll(lIlII);}void IllIlll(struct 
lIIll*lIlII){
#ifdef _USBD_DEBUG_MEMORY_
atomic_inc(&IIIllIllI);
#endif
kref_put(&lIlII->IllIll,lIlIIIIl);}
#endif 
llIIII lIllIIlll(void){static llIIII IIIlIl=(0x70d+816-0xa3d);return(++IIIlIl);}
int lIIIIIIII(void*llIlIIIIl,struct vm_area_struct*llIIIlI){int IlIlI=
(0x5d7+8496-0x2707);unsigned long start=llIIIlI->vm_start;unsigned long IIlIIl=
llIIIlI->vm_end-llIIIlI->vm_start;unsigned long lIlIllIll;lIlll(
"\x75\x73\x62\x64\x5f\x6d\x61\x70\x5f\x76\x6d\x65\x6d\x3a\x20\x2b\x2b" "\n");
while(IIlIIl>(0x9b8+6436-0x22dc)){lIlIllIll=vmalloc_to_pfn(llIlIIIIl);IlIlI=
remap_pfn_range(llIIIlI,start,lIlIllIll,PAGE_SIZE,PAGE_SHARED);if(IlIlI<
(0x568+3440-0x12d8)){lIlll(
"\x75\x73\x62\x64\x5f\x6d\x61\x70\x5f\x76\x6d\x65\x6d\x3a\x20\x63\x61\x6e\x6e\x6f\x74\x20\x6d\x61\x70\x20\x74\x68\x65\x20\x70\x61\x67\x65" "\n"
);break;}start+=PAGE_SIZE;llIlIIIIl+=PAGE_SIZE;IIlIIl-=PAGE_SIZE;}lIlll(
"\x75\x73\x62\x64\x5f\x6d\x61\x70\x5f\x76\x6d\x65\x6d\x3a\x20\x2d\x2d\x20\x72\x65\x73\x75\x6c\x74\x3d\x25\x64" "\n"
,IlIlI);return IlIlI;}void lIIIlIlII(dma_addr_t IIIIIll,void*lllIll,unsigned 
long IIlIIl){void*lIIIlI;struct page*IIIlIlll;unsigned long flags;unsigned long 
llIlIlI;unsigned long IlIlIll,IIIIIIl;local_irq_save(flags);while(IIlIIl){

IlIlIll=IIIIIll&(PAGE_SIZE-(0xb64+5128-0x1f6b));IIIIIIl=PAGE_SIZE-IlIlIll;
llIlIlI=(IIIIIIl<IIlIIl)?IIIIIIl:IIlIIl;
IIIlIlll=pfn_to_page(IIIIIll>>PAGE_SHIFT);
#if KERNEL_GT_EQ((0x999+4750-0x1c25),(0xe02+2923-0x1967),(0x1fc+5108-0x15cb))
lIIIlI=kmap_atomic(IIIlIlll);
#else
lIIIlI=kmap_atomic(IIIlIlll,KM_IRQ0);
#endif
memcpy(lIIIlI+IlIlIll,lllIll,llIlIlI);
#if KERNEL_GT_EQ((0x82b+4299-0x18f4),(0xf68+4664-0x219a),(0x1110+3447-0x1e62))
kunmap_atomic(lIIIlI);
#else
kunmap_atomic(lIIIlI,KM_IRQ0);
#endif

IIIIIll+=llIlIlI;lllIll+=llIlIlI;IIlIIl-=llIlIlI;}local_irq_restore(flags);}void
 llIlIIlIl(void*IIIIIll,dma_addr_t lllIll,unsigned long IIlIIl){struct page*
IIIlIlll;unsigned char*lIIIlI;unsigned long flags;unsigned long llIlIlI;unsigned
 long IlIlIll,IIIIIIl;local_irq_save(flags);while(IIlIIl){

IlIlIll=lllIll&(PAGE_SIZE-(0x1752+700-0x1a0d));IIIIIIl=PAGE_SIZE-IlIlIll;llIlIlI
=(IIIIIIl<IIlIIl)?IIIIIIl:IIlIIl;
IIIlIlll=pfn_to_page(lllIll>>PAGE_SHIFT);
#if KERNEL_GT_EQ((0x1a2c+524-0x1c36),(0x5c5+2364-0xefb),(0xb45+1204-0xfd4))
lIIIlI=kmap_atomic(IIIlIlll);
#else
lIIIlI=kmap_atomic(IIIlIlll,KM_IRQ0);
#endif
memcpy(IIIIIll,lIIIlI+IlIlIll,llIlIlI);
#if KERNEL_GT_EQ((0xe56+5361-0x2345),(0x537+6821-0x1fd6),(0x2601+87-0x2633))
kunmap_atomic(lIIIlI);
#else
kunmap_atomic(lIIIlI,KM_IRQ0);
#endif

lllIll+=llIlIlI;IIIIIll+=llIlIlI;IIlIIl-=llIlIlI;}local_irq_restore(flags);}int 
lIllllIl(lllII status){int IlIlI;switch(status){case lllllIlIll:IlIlI=
(0xe76+4463-0x1fe5);break;case IIlIllIIlI:IlIlI=-EINPROGRESS;break;case 
IlIllIlII:IlIlI=-ECONNRESET;break;case lIIlIlIII:IlIlI=-EXDEV;break;case 
llIIlIlll:IlIlI=-ETIMEDOUT;break;case lllllIllIl:IlIlI=-EINVAL;break;case 
llIlllIIl:IlIlI=-ENODEV;break;case IIlIlIIII:IlIlI=-EREMOTEIO;break;case 
IIllIllll:IlIlI=-EOVERFLOW;break;case lIllIIIlII:IlIlI=-ENOSR;break;case 
lIIllIlll:IlIlI=-ECOMM;break;case lIlllIIII:IlIlI=-EPIPE;break;case IIIllllIll:
IlIlI=-EILSEQ;break;case llIllIlIl:IlIlI=-EPROTO;break;case lIIIlIlll:IlIlI=-
ENOMEM;break;case lIllIIIIl:IlIlI=-EPROTO;break;case llIllllIl:default:IlIlI=-
EPROTO;break;}return IlIlI;}
size_t IlIIIllI(struct usb_iso_packet_descriptor*lllllIll,int IIIIl,void*IIIIIll
,void*lllIll,int IIlIlIlI){lIllIl*lllIIIll;size_t IlIlI;IlIlI=(0x69+1473-0x62a);
lllIIIll=IIIIIll;for(;IIIIl;IIIIl--){lIllIl*IIllllIlI=lllIll+lllllIll->offset;
unsigned int length=IIlIlIlI?lllllIll->actual_length:lllllIll->length;if(length
&&lllIIIll!=IIllllIlI){
memmove(lllIIIll,IIllllIlI,length);}lllIIIll+=length;IlIlI+=length;lllllIll++;}
lIlll(
"\x75\x73\x62\x64\x5f\x70\x61\x63\x6b\x5f\x69\x73\x6f\x5f\x62\x75\x66\x66\x65\x72\x3a\x20\x70\x61\x63\x6b\x65\x64\x3d\x25\x6c\x75" "\n"
,(unsigned long)IlIlI);return IlIlI;}
size_t IlIIIllll(struct usb_iso_packet_descriptor*lllllIll,int IIIIl,int 
IIlIlIlI){size_t IlIlI;IlIlI=(0x3bb+7974-0x22e1);for(;IIIIl>(0xcba+5943-0x23f1);
IIIIl--){IlIlI+=IIlIlIlI?lllllIll->actual_length:lllllIll->length;lllllIll++;}
lIlll(
"\x75\x73\x62\x64\x5f\x63\x6f\x75\x6e\x74\x5f\x69\x73\x6f\x5f\x62\x75\x66\x66\x65\x72\x3a\x20\x70\x61\x63\x6b\x65\x64\x3d\x25\x6c\x75" "\n"
,(unsigned long)IlIlI);return IlIlI;}char*lIllIIII(struct kobject*kobj,gfp_t 
lIlllIlII){
#if KERNEL_GT_EQ((0x1210+4481-0x238f),(0xa1a+6523-0x238f),(0x606+2236-0xeaf))
return kobject_get_path(kobj,lIlllIlII);
#else
char*IIlIlll;int length;struct kobject*IIllll;
for(IIllll=kobj,length=(0x1652+1464-0x1c0a);IIllll&&kobject_name(IIllll);IIllll=
IIllll->parent){length+=strlen(kobject_name(IIllll));length+=(0x4b0+2849-0xfd0);
}if(IIllll)
{return NULL;}
IIlIlll=IllIllI(length+(0x1308+2579-0x1d1a),lIlllIlII);if(IIlIlll==NULL){return 
NULL;}*(IIlIlll+length)='\0';
for(IIllll=kobj;IIllll&&length>(0x57+9400-0x250f);IIllll=IIllll->parent){int l=
strlen(kobject_name(IIllll));strncpy(IIlIlll+length-l,kobject_name(IIllll),l);*(
IIlIlll+length-l-(0xb6f+6130-0x2360))=((char)(0x3bc+327-0x4d4));length-=l+
(0xce7+2034-0x14d8);}
if(length!=(0xc23+4293-0x1ce8)||IIllll){lIlIll(IIlIlll);return NULL;}return 
IIlIlll;
#endif
}void IlIlIllII(char*IIlIlll){
#if KERNEL_GT_EQ((0x1169+1632-0x17c7),(0x7e5+7569-0x2570),(0x2fa+2356-0xc1b))
kfree(IIlIlll);
#else
lIlIll(IIlIlll);
#endif
}int llIlllIII(struct device*dev){



if(dev->bus&&!strcmp(dev->bus->name,"\x75\x73\x62")){return(0x15f3+3046-0x21d8);
}return(0x11fc+1273-0x16f5);}int IIIIlIIII(struct device*dev){if(llIlllIII(dev))
{
#if KERNEL_LT_EQ((0x1a8a+2026-0x2272),(0xbea+3444-0x1958),(0x1c4+6803-0x1c42))

if(!strchr(llIIIl(dev),((char)(0x19b5+731-0x1c56)))){return(0x1314+2097-0x1b44);
}
#else




if(dev->type&&!strcmp(dev->type->name,
"\x75\x73\x62\x5f\x69\x6e\x74\x65\x72\x66\x61\x63\x65")){return
(0x17a1+1349-0x1ce5);}
#endif
}return(0x905+2977-0x14a6);}int IIIIlIlII(struct device*dev){if(llIlllIII(dev)){
#if KERNEL_LT_EQ((0x459+6754-0x1eb9),(0x12d1+2456-0x1c63),(0x121+4142-0x113a))


if(strchr(llIIIl(dev),((char)(0xde8+1289-0x12b7)))){return(0x1c0b+806-0x1f30);}
#else




if(dev->type&&!strcmp(dev->type->name,"\x75\x73\x62\x5f\x64\x65\x76\x69\x63\x65"
)){return(0xc88+1464-0x123f);}
#endif
}return(0x3b9+4521-0x1562);}
#if KERNEL_GT_EQ((0x1ad+5018-0x1545),(0x560+713-0x823),(0x2cf+2752-0xd79))












void llIllllI(struct device*dev,int llIllIlI){
#if KERNEL_LT_EQ((0x73a+2524-0x1114),(0x1312+694-0x15c2),(0x186+5252-0x15ed))
dev->uevent_suppress=llIllIlI;
#elif KERNEL_GT_EQ((0x5c1+6939-0x20da),(0x352+1970-0xafe),(0x1ca9+1129-0x20f4))
dev_set_uevent_suppress(dev,llIllIlI);
#endif
}int IIlIIllI(struct device*dev){
#if KERNEL_LT_EQ((0x1a2+1522-0x792),(0x753+1900-0xeb9),(0xc14+83-0xc4a))
return dev->uevent_suppress;
#elif KERNEL_GT_EQ((0x1932+801-0x1c51),(0x176+3268-0xe34),(0x2ec+7664-0x20be))
return dev_get_uevent_suppress(dev);
#endif
}
#endif 
#ifndef _USBD_DEBUG_
const char*lllllIlll(unsigned long IlIlllI){return"";}const char*llIIlIIlI(
unsigned long IlIlllI){return"";}void IIIlIIIll(struct urb*IlllI,llIIII lIlIl){}
#else
const char*lllllIlll(unsigned long IlIlllI){switch(IlIlllI){
#if KERNEL_GT_EQ((0xc85+5212-0x20df),(0x1257+4704-0x24b1),(0x131c+3976-0x2290))
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
#if KERNEL_GT_EQ((0x9c+943-0x449),(0x1062+810-0x1386),(0xf34+1811-0x1628))
case BUS_NOTIFY_UNBOUND_DRIVER:return
"\x42\x55\x53\x5f\x4e\x4f\x54\x49\x46\x59\x5f\x55\x4e\x42\x4f\x55\x4e\x44\x5f\x44\x52\x49\x56\x45\x52"
;
#endif
#if KERNEL_GT_EQ((0xc3+6917-0x1bc6),(0x167+2469-0xb06),(0x19df+1334-0x1ef1))
case BUS_NOTIFY_BIND_DRIVER:return
"\x42\x55\x53\x5f\x4e\x4f\x54\x49\x46\x59\x5f\x42\x49\x4e\x44\x5f\x44\x52\x49\x56\x45\x52"
;
#endif
#if KERNEL_GT_EQ((0xac5+203-0xb8d),(0x980+7178-0x2578),(0xb2c+169-0xbd5))
case BUS_NOTIFY_REMOVED_DEVICE:return
"\x42\x55\x53\x5f\x4e\x4f\x54\x49\x46\x59\x5f\x52\x45\x4d\x4f\x56\x45\x44\x5f\x44\x45\x56\x49\x43\x45"
;
#endif
default:break;}return"\x75\x6e\x6b\x6e\x6f\x77\x6e";}const char*llIIlIIlI(
unsigned long IlIlllI){switch(IlIlllI){case USB_DEVICE_ADD:return
"\x55\x53\x42\x5f\x44\x45\x56\x49\x43\x45\x5f\x41\x44\x44";case 
USB_DEVICE_REMOVE:return
"\x55\x53\x42\x5f\x44\x45\x56\x49\x43\x45\x5f\x52\x45\x4d\x4f\x56\x45";case 
USB_BUS_ADD:return"\x55\x53\x42\x5f\x42\x55\x53\x5f\x41\x44\x44";case 
USB_BUS_REMOVE:return"\x55\x53\x42\x5f\x42\x55\x53\x5f\x52\x45\x4d\x4f\x56\x45";
default:break;}return"\x75\x6e\x6b\x6e\x6f\x77\x6e";}void IIIlIIIll(struct urb*
IlllI,llIIII lIlIl){const char*lIlIIlllI[]={"\x69\x73\x6f","\x69\x6e\x74",
"\x63\x74\x72\x6c","\x62\x75\x6c\x6b"};if(!IlllI){return;}lIlll(
"\x2b\x2b\x2b\x2b\x20\x55\x52\x42\x20\x53\x54\x41\x52\x54\x20\x2b\x2b\x2b\x2b" "\n"
);lIlll("\x20\x20\x55\x52\x42\x3d\x30\x78\x25\x70" "\n",IlllI);lIlll(
"\x20\x20\x50\x69\x70\x65\x3d\x30\x78\x25\x30\x38\x58\x20\x28\x64\x65\x76\x3a\x20\x25\x64\x20\x65\x6e\x64\x70\x3a\x20\x25\x64\x20\x64\x69\x72\x3a\x20\x25\x73\x20\x74\x79\x70\x65\x3a\x20\x25\x73\x29" "\n"
,IlllI->pipe,usb_pipedevice(IlllI->pipe),usb_pipeendpoint(IlllI->pipe),
usb_pipein(IlllI->pipe)?"\x69\x6e":"\x6f\x75\x74",lIlIIlllI[usb_pipetype(IlllI->
pipe)]);lIlll("\x20\x20\x53\x74\x61\x74\x75\x73\x3d\x25\x64" "\n",IlllI->status)
;lIlll(
"\x20\x20\x54\x72\x61\x6e\x73\x66\x65\x72\x46\x6c\x61\x67\x73\x3d\x30\x78\x25\x30\x38\x58" "\n"
,IlllI->transfer_flags);lIlll(
"\x20\x20\x42\x75\x66\x66\x65\x72\x3d\x30\x78\x25\x70" "\n",IlllI->
transfer_buffer);lIlll(
"\x20\x20\x42\x75\x66\x66\x65\x72\x4c\x65\x6e\x67\x74\x68\x3d\x25\x64" "\n",
IlllI->transfer_buffer_length);lIlll(
"\x20\x20\x41\x63\x74\x75\x61\x6c\x4c\x65\x6e\x67\x74\x68\x3d\x25\x64" "\n",
IlllI->actual_length);lIlll(
"\x20\x20\x54\x72\x61\x6e\x73\x66\x65\x72\x44\x6d\x61\x3d\x30\x78\x25\x30\x38\x58" "\n"
,(u32)IlllI->transfer_dma);lIlll(
"\x20\x20\x53\x65\x74\x75\x70\x44\x6d\x61\x3d\x30\x78\x25\x30\x38\x58" "\n",(u32
)IlllI->setup_dma);if(usb_pipecontrol(IlllI->pipe)){lIlll(
"\x20\x20\x53\x65\x74\x75\x70\x50\x61\x63\x6b\x65\x74\x3d\x25\x30\x32\x58\x20\x25\x30\x32\x58\x20\x25\x30\x32\x58\x20\x25\x30\x32\x58\x20\x25\x30\x32\x58\x20\x25\x30\x32\x58\x20\x25\x30\x32\x58\x20\x25\x30\x32\x58" "\n"
,IlllI->setup_packet[(0x205d+1073-0x248e)],IlllI->setup_packet[
(0xa89+5508-0x200c)],IlllI->setup_packet[(0xd47+6072-0x24fd)],IlllI->
setup_packet[(0x15c8+3311-0x22b4)],IlllI->setup_packet[(0x182d+729-0x1b02)],
IlllI->setup_packet[(0x14b1+2923-0x2017)],IlllI->setup_packet[(0x70f+219-0x7e4)]
,IlllI->setup_packet[(0x161a+2583-0x202a)]);}else if(usb_pipeisoc(IlllI->pipe)){
int i;lIlll("\x20\x20\x53\x74\x61\x72\x74\x46\x72\x61\x6d\x65\x3d\x25\x64" "\n",
IlllI->start_frame);lIlll(
"\x20\x20\x4e\x75\x6d\x62\x65\x72\x4f\x66\x50\x61\x63\x6b\x65\x74\x73\x3d\x25\x64" "\n"
,IlllI->number_of_packets);lIlll(
"\x20\x20\x49\x6e\x74\x65\x72\x76\x61\x6c\x3d\x25\x64" "\n",IlllI->interval);
lIlll("\x20\x20\x45\x72\x72\x6f\x72\x43\x6f\x75\x6e\x74\x3d\x25\x64" "\n",IlllI
->error_count);lIlll("\x20\x20\x49\x73\x6f\x46\x72\x61\x6d\x65\x73\x3d" "\n");
for(i=(0xca+6020-0x184e);i<IlllI->number_of_packets;i++){lIlll(
"\x20\x20\x20\x20\x5b\x25\x64\x5d\x20\x4f\x66\x66\x73\x65\x74\x3d\x25\x64\x20\x4c\x65\x6e\x67\x74\x68\x3d\x25\x64\x20\x41\x63\x74\x75\x61\x6c\x4c\x65\x6e\x67\x74\x68\x3d\x25\x64\x20\x53\x74\x61\x74\x75\x73\x3d\x25\x64" "\n"
,i,IlllI->iso_frame_desc[i].offset,IlllI->iso_frame_desc[i].length,IlllI->
iso_frame_desc[i].actual_length,IlllI->iso_frame_desc[i].status);}}else if(
usb_pipeint(IlllI->pipe)){lIlll(
"\x20\x20\x49\x6e\x74\x65\x72\x76\x61\x6c\x3d\x25\x64" "\n",IlllI->interval);}
lIlll(
"\x2d\x2d\x2d\x2d\x20\x55\x52\x42\x20\x45\x4e\x44\x20\x2d\x2d\x2d\x2d" "\n");}
#endif 
#ifndef _USBD_DEBUG_
void llIlIIl(IIlII IIlIl){}
#else
static void lllllll(IIlII IIlIl);void llIlIIl(IIlII IIlIl){int i;
if(!IIlIl){return;}lIlll(
"\x2d\x2d\x2d\x2d\x20\x55\x4e\x52\x42\x20\x53\x54\x41\x52\x54" "\n");switch(
IIlIl->IlIII.IIIlIIl){case llIIllll:lIlll(
"\x55\x4e\x52\x42\x5f\x46\x55\x4e\x43\x54\x49\x4f\x4e\x5f\x47\x45\x54\x5f\x44\x45\x53\x43\x52\x49\x50\x54\x4f\x52" "\n"
);lllllll(IIlIl);lIlll(
"\x20\x20\x44\x65\x73\x63\x72\x69\x70\x74\x6f\x72\x52\x65\x71\x75\x65\x73\x74" "\n"
);lIlll(
"\x20\x20\x20\x20\x52\x65\x71\x75\x65\x73\x74\x54\x79\x70\x65\x3d\x25\x64" "\n",
IIlIl->IIlllI.IIllIll);lIlll(
"\x20\x20\x20\x20\x52\x65\x71\x75\x65\x73\x74\x52\x65\x63\x69\x70\x69\x65\x6e\x74\x3d\x25\x64" "\n"
,IIlIl->IIlllI.llIlIIll);lIlll(
"\x20\x20\x20\x20\x44\x65\x73\x63\x54\x79\x70\x65\x3d\x25\x64" "\n",IIlIl->
IIlllI.lllllllI);lIlll(
"\x20\x20\x20\x20\x44\x65\x73\x63\x49\x6e\x64\x65\x78\x3d\x25\x64" "\n",IIlIl->
IIlllI.lIlIIlll);lIlll(
"\x20\x20\x20\x20\x4c\x61\x6e\x67\x49\x64\x3d\x25\x64" "\n",IIlIl->IIlllI.
lIIlIIlI);lIlll(
"\x20\x20\x20\x20\x42\x75\x66\x66\x65\x72\x53\x69\x7a\x65\x3d\x25\x64" "\n",
IIlIl->IIlllI.IllllI);break;case lIlIllll:lIlll(
"\x55\x4e\x52\x42\x5f\x46\x55\x4e\x43\x54\x49\x4f\x4e\x5f\x53\x45\x54\x5f\x44\x45\x53\x43\x52\x49\x50\x54\x4f\x52" "\n"
);lllllll(IIlIl);lIlll(
"\x20\x20\x44\x65\x73\x63\x72\x69\x70\x74\x6f\x72\x52\x65\x71\x75\x65\x73\x74" "\n"
);lIlll("\x20\x20\x20\x20\x44\x65\x73\x63\x54\x79\x70\x65\x3d\x25\x64" "\n",
IIlIl->IIlllI.lllllllI);lIlll(
"\x20\x20\x20\x20\x44\x65\x73\x63\x49\x6e\x64\x65\x78\x3d\x25\x64" "\n\n",IIlIl
->IIlllI.lIlIIlll);lIlll(
"\x20\x20\x20\x20\x4c\x61\x6e\x67\x49\x64\x3d\x25\x64" "\n",IIlIl->IIlllI.
lIIlIIlI);lIlll(
"\x20\x20\x20\x20\x42\x75\x66\x66\x65\x72\x53\x69\x7a\x65\x3d\x25\x64" "\n",
IIlIl->IIlllI.IllllI);break;case llIlllIl:lIlll(
"\x55\x4e\x52\x42\x5f\x46\x55\x4e\x43\x54\x49\x4f\x4e\x5f\x53\x45\x4c\x45\x43\x54\x5f\x43\x4f\x4e\x46\x49\x47\x55\x52\x41\x54\x49\x4f\x4e" "\n"
);lllllll(IIlIl);lIlll(
"\x20\x20\x53\x65\x6c\x65\x63\x74\x43\x6f\x6e\x66\x69\x67\x75\x72\x61\x74\x69\x6f\x6e" "\n"
);lIlll(
"\x20\x20\x20\x20\x43\x6f\x6e\x66\x69\x67\x75\x72\x61\x74\x69\x6f\x6e\x3d\x25\x64" "\n"
,IIlIl->lIllIll.lllIllIl);lIlll(
"\x20\x20\x20\x20\x4e\x75\x6d\x41\x6c\x74\x65\x72\x6e\x61\x74\x65\x73\x3d\x25\x64" "\n"
,IIlIl->lIllIll.IlllllIl);for(i=(0xf53+265-0x105c);i<IIlIl->lIllIll.IlllllIl;i++
){lIlll(
"\x20\x20\x20\x20\x20\x20\x25\x2e\x33\x64\x3a\x20\x49\x6e\x74\x65\x72\x66\x61\x63\x65\x4e\x75\x6d\x3d\x25\x64" "\n"
,i,IIlIl->lIllIll.llIIlII[i].IlIllIl);lIlll(
"\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x41\x6c\x74\x65\x72\x6e\x61\x74\x65\x4e\x75\x6d\x3d\x25\x64" "\n"
,IIlIl->lIllIll.llIIlII[i].llIlllI);}break;case IIlIlIII:lIlll(
"\x55\x4e\x52\x42\x5f\x46\x55\x4e\x43\x54\x49\x4f\x4e\x5f\x53\x45\x4c\x45\x43\x54\x5f\x49\x4e\x54\x45\x52\x46\x41\x43\x45" "\n"
);lllllll(IIlIl);lIlll(
"\x20\x20\x53\x65\x6c\x65\x63\x74\x49\x6e\x74\x65\x72\x66\x61\x63\x65" "\n");
lIlll("\x20\x20\x20\x20\x49\x6e\x74\x65\x72\x66\x61\x63\x65\x3d\x25\x64" "\n",
IIlIl->IlIIIIl.IlIllIl);lIlll(
"\x20\x20\x20\x20\x41\x6c\x74\x65\x72\x6e\x61\x74\x65\x3d\x25\x64" "\n",IIlIl->
IlIIIIl.llIlllI);break;case llIIIIlI:lIlll(
"\x55\x4e\x52\x42\x5f\x46\x55\x4e\x43\x54\x49\x4f\x4e\x5f\x43\x4f\x4e\x54\x52\x4f\x4c\x5f\x54\x52\x41\x4e\x53\x46\x45\x52" "\n"
);lllllll(IIlIl);lIlll(
"\x20\x20\x43\x6f\x6e\x74\x72\x6f\x6c\x54\x72\x61\x6e\x73\x66\x65\x72" "\n");
lIlll("\x20\x20\x20\x20\x45\x6e\x64\x70\x6f\x69\x6e\x74\x3d\x25\x64" "\n",IIlIl
->lllIII.Endpoint);lIlll(
"\x20\x20\x20\x20\x46\x6c\x61\x67\x73\x3d\x30\x78\x25\x2e\x32\x58" "\n",IIlIl->
lllIII.Flags);lIlll(
"\x20\x20\x20\x20\x52\x65\x71\x75\x65\x73\x74\x54\x79\x70\x65\x3d\x30\x78\x25\x2e\x32\x58" "\n"
,IIlIl->lllIII.IIllIll);lIlll(
"\x20\x20\x20\x20\x52\x65\x71\x75\x65\x73\x74\x3d\x30\x78\x25\x2e\x32\x58" "\n",
IIlIl->lllIII.IIIIllIII);lIlll(
"\x20\x20\x20\x20\x56\x61\x6c\x75\x65\x3d\x30\x78\x25\x2e\x34\x58" "\n",IIlIl->
lllIII.IlIlIlII);lIlll(
"\x20\x20\x20\x20\x49\x6e\x64\x65\x78\x3d\x30\x78\x25\x2e\x34\x58" "\n",IIlIl->
lllIII.IIlIlllIl);lIlll(
"\x20\x20\x20\x20\x42\x75\x66\x65\x72\x53\x69\x7a\x65\x3d\x25\x64" "\n",IIlIl->
lllIII.IllllI);break;case IIllIIIl:lIlll(
"\x55\x4e\x52\x42\x5f\x46\x55\x4e\x43\x54\x49\x4f\x4e\x5f\x42\x55\x4c\x4b\x5f\x54\x52\x41\x4e\x53\x46\x45\x52" "\n"
);lllllll(IIlIl);lIlll(
"\x20\x20\x42\x75\x6c\x6b\x54\x72\x61\x6e\x73\x66\x65\x72" "\n");lIlll(
"\x20\x20\x20\x20\x45\x6e\x64\x70\x6f\x69\x6e\x74\x3d\x25\x64" "\n",IIlIl->
lllllI.Endpoint);lIlll(
"\x20\x20\x20\x20\x46\x6c\x61\x67\x73\x3d\x30\x78\x25\x2e\x32\x58" "\n",IIlIl->
lllllI.Flags);lIlll(
"\x20\x20\x20\x20\x42\x75\x66\x65\x72\x53\x69\x7a\x65\x3d\x25\x64" "\n",IIlIl->
lllllI.IllllI);break;case lIlllIIl:lIlll(
"\x55\x4e\x52\x42\x5f\x46\x55\x4e\x43\x54\x49\x4f\x4e\x5f\x49\x4e\x54\x45\x52\x52\x55\x50\x54\x5f\x54\x52\x41\x4e\x53\x46\x45\x52" "\n"
);lllllll(IIlIl);lIlll(
"\x20\x20\x49\x6e\x74\x65\x72\x72\x75\x70\x74\x54\x72\x61\x6e\x73\x66\x65\x72" "\n"
);lIlll("\x20\x20\x20\x20\x45\x6e\x64\x70\x6f\x69\x6e\x74\x3d\x25\x64" "\n",
IIlIl->llIIlI.Endpoint);lIlll(
"\x20\x20\x20\x20\x46\x6c\x61\x67\x73\x3d\x30\x78\x25\x2e\x32\x58" "\n",IIlIl->
llIIlI.Flags);lIlll(
"\x20\x20\x20\x20\x49\x6e\x74\x65\x72\x76\x61\x6c\x3d\x25\x64" "\n",IIlIl->
llIIlI.Interval);lIlll(
"\x20\x20\x20\x20\x42\x75\x66\x65\x72\x53\x69\x7a\x65\x3d\x25\x64" "\n",IIlIl->
llIIlI.IllllI);break;case lllIlIIl:lIlll(
"\x55\x4e\x52\x42\x5f\x46\x55\x4e\x43\x54\x49\x4f\x4e\x5f\x49\x53\x4f\x43\x48\x5f\x54\x52\x41\x4e\x53\x46\x45\x52" "\n"
);lllllll(IIlIl);lIlll(
"\x20\x20\x49\x73\x6f\x63\x68\x54\x72\x61\x6e\x73\x66\x65\x72" "\n");lIlll(
"\x20\x20\x20\x20\x45\x6e\x64\x70\x6f\x69\x6e\x74\x3d\x25\x64" "\n",IIlIl->llIll
.Endpoint);lIlll(
"\x20\x20\x20\x20\x46\x6c\x61\x67\x73\x3d\x30\x78\x25\x2e\x32\x58" "\n",IIlIl->
llIll.Flags);lIlll(
"\x20\x20\x20\x20\x42\x75\x66\x65\x72\x53\x69\x7a\x65\x3d\x25\x64" "\n",IIlIl->
llIll.IllllI);lIlll(
"\x20\x20\x20\x20\x49\x6e\x74\x65\x72\x76\x61\x6c\x3d\x25\x64" "\n",IIlIl->llIll
.Interval);lIlll(
"\x20\x20\x20\x20\x53\x74\x61\x72\x74\x46\x72\x61\x6d\x65\x3d\x25\x64" "\n",
IIlIl->llIll.IIlIlIIl);lIlll(
"\x20\x20\x20\x20\x4e\x75\x6d\x62\x65\x72\x4f\x66\x50\x61\x63\x6b\x65\x74\x73\x3d\x25\x64" "\n"
,IIlIl->llIll.IIlIlIl);lIlll(
"\x20\x20\x20\x20\x45\x72\x72\x6f\x72\x43\x6f\x75\x6e\x74\x3d\x25\x64" "\n",
IIlIl->llIll.llIIIIIl);lIlll(
"\x20\x20\x20\x20\x49\x73\x6f\x63\x68\x50\x61\x63\x6b\x65\x74\x73\x3a" "\n");for
(i=(0x18aa+791-0x1bc1);i<IIlIl->llIll.IIlIlIl;i++){lIlll(
"\x20\x20\x20\x20\x20\x20\x25\x2e\x33\x64\x3a\x20\x4f\x66\x66\x73\x65\x74\x3d\x25\x64" "\n"
,i,IIlIl->llIll.llIIIIl[i].Offset);lIlll(
"\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x4c\x65\x6e\x67\x74\x68\x3d\x25\x64" "\n"
,IIlIl->llIll.llIIIIl[i].Length);lIlll(
"\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x53\x74\x61\x74\x75\x73\x3d\x25\x64" "\n"
,IIlIl->llIll.llIIIIl[i].Status);}break;case IIIIlllI:lIlll(
"\x55\x4e\x52\x42\x5f\x46\x55\x4e\x43\x54\x49\x4f\x4e\x5f\x43\x4c\x45\x41\x52\x5f\x53\x54\x41\x4c\x4c" "\n"
);lllllll(IIlIl);lIlll("\x20\x20\x43\x6c\x65\x61\x72\x53\x74\x61\x6c\x6c" "\n");
lIlll("\x20\x20\x20\x20\x45\x6e\x64\x70\x6f\x69\x6e\x74\x3d\x25\x64" "\n",IIlIl
->lIllIII.Endpoint);lIlll(
"\x20\x20\x20\x20\x46\x6c\x61\x67\x73\x3d\x30\x78\x25\x2e\x32\x58" "\n",IIlIl->
lIllIII.Flags);break;case IIlIIIlI:lIlll(
"\x55\x4e\x52\x42\x5f\x46\x55\x4e\x43\x54\x49\x4f\x4e\x5f\x47\x45\x54\x5f\x43\x55\x52\x52\x45\x4e\x54\x5f\x46\x52\x41\x4d\x45\x5f\x4e\x55\x4d\x42\x45\x52" "\n"
);lllllll(IIlIl);lIlll(
"\x20\x20\x47\x65\x74\x43\x75\x72\x72\x65\x6e\x74\x46\x72\x61\x6d\x65\x4e\x75\x6d\x62\x65\x72" "\n"
);lIlll(
"\x20\x20\x20\x20\x46\x72\x61\x6d\x65\x4e\x75\x6d\x62\x65\x72\x3d\x25\x64" "\n",
IIlIl->llIllIII.lIlllIIIl);break;case IIllIIlI:lIlll(
"\x55\x4e\x52\x42\x5f\x46\x55\x4e\x43\x54\x49\x4f\x4e\x5f\x47\x45\x54\x5f\x50\x4f\x52\x54\x5f\x53\x54\x41\x54\x55\x53" "\n"
);lllllll(IIlIl);lIlll(
"\x20\x20\x47\x65\x74\x50\x6f\x72\x74\x53\x74\x61\x74\x75\x73" "\n");switch(
IIlIl->lIlIlIll.IIllIIll){case IIlIlIlIl:lIlll(
"\x20\x20\x20\x20\x50\x6f\x72\x74\x53\x74\x61\x74\x75\x73\x3d\x45\x4e\x41\x42\x4c\x45\x44" "\n"
);break;case IllIlIIlI:lIlll(
"\x20\x20\x20\x20\x50\x6f\x72\x74\x53\x74\x61\x74\x75\x73\x3d\x43\x4f\x4e\x4e\x45\x43\x54\x45\x44" "\n"
);break;default:lIlll(
"\x20\x20\x20\x20\x50\x6f\x72\x74\x53\x74\x61\x74\x75\x73\x3d\x75\x6e\x6b\x6e\x6f\x77\x6e" "\n"
);break;}break;case llIIlIII:lIlll(
"\x55\x4e\x52\x42\x5f\x46\x55\x4e\x43\x54\x49\x4f\x4e\x5f\x52\x45\x53\x45\x54\x5f\x50\x4f\x52\x54" "\n"
);lllllll(IIlIl);break;case llIIlIll:lIlll(
"\x55\x4e\x52\x42\x5f\x46\x55\x4e\x43\x54\x49\x4f\x4e\x5f\x43\x41\x4e\x43\x45\x4c" "\n"
);lllllll(IIlIl);break;case lIIIlllI:lIlll(
"\x55\x4e\x52\x42\x5f\x46\x55\x4e\x43\x54\x49\x4f\x4e\x5f\x41\x42\x4f\x52\x54\x5f\x45\x4e\x44\x50\x4f\x49\x4e\x54" "\n"
);lllllll(IIlIl);lIlll(
"\x20\x20\x41\x62\x6f\x72\x74\x45\x6e\x64\x70\x6f\x69\x6e\x74" "\n");lIlll(
"\x20\x20\x20\x20\x45\x6e\x64\x70\x6f\x69\x6e\x74\x3d\x25\x64" "\n",IIlIl->
IlIlllll.Endpoint);lIlll(
"\x20\x20\x20\x20\x46\x6c\x61\x67\x73\x3d\x30\x78\x25\x2e\x32\x58" "\n",IIlIl->
IlIlllll.Flags);break;default:lIlll(
"\x55\x4e\x52\x42\x5f\x46\x55\x4e\x43\x54\x49\x4f\x4e\x5f\x75\x6e\x6b\x6e\x6f\x77\x6e" "\n"
);lllllll(IIlIl);break;}lIlll(
"\x2d\x2d\x2d\x2d\x20\x55\x4e\x52\x42\x20\x45\x4e\x44" "\n");}static void 
lllllll(IIlII IIlIl){lIlll("\x20\x20\x48\x65\x61\x64\x65\x72" "\n");lIlll(
"\x20\x20\x20\x20\x55\x6e\x69\x71\x75\x65\x49\x64\x3d\x30\x78\x25\x2e\x38\x58\x25\x2e\x38\x58" "\n"
,(lllII)(IIlIl->IlIII.IIIlIl>>(0x1c8+6369-0x1a89)),(lllII)(IIlIl->IlIII.IIIlIl))
;lIlll(
"\x20\x20\x20\x20\x53\x63\x72\x69\x70\x74\x3d\x30\x78\x25\x2e\x34\x58" "\n",(
lIllll)IIlIl->IlIII.IllllII);lIlll(
"\x20\x20\x20\x20\x53\x69\x7a\x65\x3d\x25\x64" "\n",IIlIl->IlIII.IIIII);lIlll(
"\x20\x20\x20\x20\x46\x75\x6e\x63\x74\x69\x6f\x6e\x3d\x25\x64" "\n",IIlIl->IlIII
.IIIlIIl);lIlll("\x20\x20\x20\x20\x53\x74\x61\x74\x75\x73\x3d\x25\x64" "\n",
IIlIl->IlIII.Status);lIlll(
"\x20\x20\x20\x20\x43\x6f\x6e\x74\x65\x78\x74\x3d\x30\x78\x25\x2e\x38\x58" "\n",
IIlIl->IlIII.Context);}
#endif 

