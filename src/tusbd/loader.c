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

#ifdef _USBD_ENABLE_STUB_
#include "usbd.h"
#include "loader.h"
struct IIIlll*IllIIlIl;struct list_head lIIIIlII;struct mutex lIlIIllI;struct 
list_head lIlIllIl;struct mutex lIlllIII;struct list_head IllIlIll;struct mutex 
lIIIIIll;extern struct usb_driver lIlIllI;int IIIIlIII(struct usb_device*IlIIl){
lIllll vid,IlIlIII,lIlIlll;lIllIl class,lIllIIIlI,IlIIlIlll;struct IllIIIll*
llIlI;int lIIllIIII=(0x133f+2499-0x1d02);int lIllIIll=(0x258+4230-0x12de);const 
char*IIllI=NULL;const char*serial=NULL;const char*IIIlIII=NULL;lIIIl(
"\x2b\x2b" "\n");
if(strcmp(IlIllIlI(IlIIl),IlIlIIl)==(0xa7+520-0x2af)){lIIIl(
"\x2d\x2d\x20\x73\x6b\x69\x70\x20\x6f\x75\x72\x20\x76\x69\x72\x74\x75\x61\x6c\x20\x64\x65\x76\x69\x63\x65\x21" "\n"
);return(0x948+5126-0x1d4e);}vid=le16_to_cpu(IlIIl->descriptor.idVendor);IlIlIII
=le16_to_cpu(IlIIl->descriptor.idProduct);lIlIlll=le16_to_cpu(IlIIl->descriptor.
bcdDevice);IIlllIlIl(IlIIl,&class,&lIllIIIlI,&IlIIlIlll);if(class==
(0x3c0+8523-0x2502)){lIIIl(
"\x2d\x2d\x20\x73\x6b\x69\x70\x20\x75\x73\x62\x20\x68\x75\x62\x21" "\n");return
(0x19cb+2825-0x24d4);}if(IIIlIlII(IlIIl,&IIllI,&serial,&IIIlIII)){lIIIl(
"\x2d\x2d\x20\x63\x61\x6e\x20\x6e\x6f\x74\x20\x67\x65\x74\x20\x69\x6e\x73\x74\x61\x6e\x63\x65\x69\x64\x21" "\n"
);return(0x159d+2750-0x205b);}lIIIl(
"\x56\x3d\x25\x30\x34\x58\x20\x50\x3d\x25\x30\x34\x58\x20\x52\x3d\x25\x30\x34\x58\x20\x43\x3d\x25\x30\x32\x58\x20\x53\x3d\x25\x30\x32\x58\x20\x50\x3d\x25\x30\x32\x58\x20\x49\x44\x3d\x25\x73\x20\x53\x4e\x3d\x25\x73\x20\x49\x4e\x3d\x25\x73" "\n"
,vid,IlIlIII,lIlIlll,class,lIllIIIlI,IlIIlIlll,IIllI?IIllI:"\x6e\x6f\x6e\x65",
serial?serial:"\x6e\x6f\x6e\x65",IIIlIII?IIIlIII:"\x6e\x6f\x6e\x65");
mutex_lock(&lIlIIllI);list_for_each_entry(llIlI,&lIIIIlII,entry){if(llIlI->llIlI
.IIlllIl&llllIlIlI){if(llIlI->llIlI.llIIIlII!=vid){continue;}}if(llIlI->llIlI.
IIlllIl&IllIllIII){if(llIlI->llIlI.IIIIllll!=IlIlIII){continue;}}if(llIlI->llIlI
.IIlllIl&lIIlllIll){if(llIlI->llIlI.IlIIllIl!=lIlIlll){continue;}}if(llIlI->
llIlI.IIlllIl&lIIllIIIlI){if(llIlI->llIlI.lIIIIIIl!=class){continue;}}if(llIlI->
llIlI.IIlllIl&lIllllIll){if(llIlI->llIlI.lIlllllI!=lIllIIIlI){continue;}}if(
llIlI->llIlI.IIlllIl&IlllIllII){if(llIlI->llIlI.lllIIlII!=IlIIlIlll){continue;}}
if(llIlI->llIlI.IIlllIl&llIIIlIlI){if(IIllI==NULL){continue;}if(strncmp((char*)(
&llIlI->llIlI+(0xe95+5387-0x239f)),IIllI,llIlI->llIlI.lllIIIl)){continue;}}if(
llIlI->llIlI.IIlllIl&IlllllIIl){if(serial==NULL){continue;}if(strncmp((char*)(&
llIlI->llIlI+(0x7bd+6146-0x1fbe))+llIlI->llIlI.lllIIIl,serial,llIlI->llIlI.
lIIllIIl)){continue;}}if(llIlI->llIlI.IIlllIl&IlIlIIlII){if(IIIlIII==NULL){
continue;}lIIIl(
"\x63\x68\x65\x63\x6b\x20\x69\x6e\x74\x73\x61\x6e\x63\x65\x20\x69\x64\x20\x25\x73\x20\x76\x73\x20\x25\x73" "\n"
,IIIlIII,(char*)(&llIlI->llIlI+(0xf66+1183-0x1404))+llIlI->llIlI.lllIIIl+llIlI->
llIlI.lIIllIIl);if(strncmp((char*)(&llIlI->llIlI+(0x124a+1360-0x1799))+llIlI->
llIlI.lllIIIl+llIlI->llIlI.lIIllIIl,IIIlIII,llIlI->llIlI.IllIlllI)){lIIIl(
"\x6e\x6f\x74\x20\x6d\x61\x74\x63\x68\x65\x64\x20\x69\x6e\x74\x73\x61\x6e\x63\x65\x20\x69\x64" "\n"
);continue;}}if(llIlI->llIlI.IIlllIl&IIlllllII){lIllIIll=(0x2fc+5796-0x199f);
lIIllIIII=(0x1453+3238-0x20f8);break;}if(llIlI->llIlI.IIlllIl&llllllIlI){
lIllIIll=(0x1157+205-0x1224);lIIllIIII=(0x8b1+6160-0x20c0);break;}}mutex_unlock(
&lIlIIllI);if(lIIllIIII==(0x411+5124-0x1815)){lIIIl(
"\x2d\x2d\x20\x6e\x6f\x20\x6d\x61\x74\x63\x68" "\n");}else if(lIllIIll){lIIIl(
"\x2d\x2d\x20\x61\x6c\x6c\x6f\x77\x65\x64" "\n");}else{lIIIl(
"\x2d\x2d\x20\x64\x65\x6e\x69\x65\x64" "\n");}return lIllIIll;}void lIlIIIlII(
struct list_head*lIlIllII){struct list_head Illlll=LIST_HEAD_INIT(Illlll);

mutex_lock(&lIlIIllI);list_splice_init(&lIIIIlII,&Illlll);list_splice_init(
lIlIllII,&lIIIIlII);mutex_unlock(&lIlIIllI);
while(!list_empty(&Illlll)){struct IllIIIll*IIlIIll;IIlIIll=list_entry(Illlll.
next,struct IllIIIll,entry);list_del(&IIlIIll->entry);lIlIll(IIlIIll);}



}void IlIIllll(){struct list_head Illlll=LIST_HEAD_INIT(Illlll);
mutex_lock(&lIlIIllI);list_splice_init(&lIIIIlII,&Illlll);mutex_unlock(&lIlIIllI
);
while(!list_empty(&Illlll)){struct IllIIIll*IIlIIll;IIlIIll=list_entry(Illlll.
next,struct IllIIIll,entry);list_del(&IIlIIll->entry);lIlIll(IIlIIll);}}lllII 
llIIIllII(struct usb_device*IlIIl){struct IIlllIlI*IlIlIIII;lllII lIIllIl=
(0x815+7684-0x2619);mutex_lock(&lIIIIIll);list_for_each_entry(IlIlIIII,&IllIlIll
,entry){if(IlIlIIII->lIIlllI.llIIIlII!=le16_to_cpu(IlIIl->descriptor.idVendor)){
continue;}if(IlIlIIII->lIIlllI.IIIIllll!=le16_to_cpu(IlIIl->descriptor.idProduct
)){continue;}lIIllIl=IlIlIIII->lIIlllI.lIIlIllIl;break;}mutex_unlock(&lIIIIIll);
return lIIllIl;}void lIIIIlIll(struct list_head*IlIlIIlI){struct list_head 
Illlll=LIST_HEAD_INIT(Illlll);

mutex_lock(&lIIIIIll);list_splice_init(&IllIlIll,&Illlll);list_splice_init(
IlIlIIlI,&IllIlIll);mutex_unlock(&lIIIIIll);
while(!list_empty(&Illlll)){struct IIlllIlI*IIlIIll;IIlIIll=list_entry(Illlll.
next,struct IIlllIlI,entry);list_del(&IIlIIll->entry);lIlIll(IIlIIll);}}void 
IlIIIlIIl(){struct list_head Illlll=LIST_HEAD_INIT(Illlll);
mutex_lock(&lIIIIIll);list_splice_init(&IllIlIll,&Illlll);mutex_unlock(&lIIIIIll
);
while(!list_empty(&Illlll)){struct IIlllIlI*IIlIIll;IIlIIll=list_entry(Illlll.
next,struct IIlllIlI,entry);list_del(&IIlIIll->entry);lIlIll(IIlIIll);}}



int IIIlIlII(struct usb_device*llIII,const char**lIlllIlll,const char**llllIIIIl
,const char**IIlIllllI){struct IIllIlIl*IlIlIl=NULL;struct IIllIlIl*llIIllIl;
mutex_lock(&lIlllIII);list_for_each_entry(llIIllIl,&lIlIllIl,entry){if(llIIllIl
->IlIIl==llIII){IlIlIl=llIIllIl;break;}}if(!IlIlIl){IlIlIl=lIllllI(sizeof(struct
 IIllIlIl),GFP_KERNEL);if(!IlIlIl){mutex_unlock(&lIlllIII);return-ENOMEM;}IlIlIl
->IlIIl=usb_get_dev(llIII);IlIlIl->IIllI=llIIIl(&IlIlIl->IlIIl->dev);IlIlIl->
serial=llIII->serial;if(IlIlIl->serial&&*IlIlIl->serial&&(llIIIllII(llIII)&
lIllllIIlI)==(0x1837+1727-0x1ef6)){const char*lIllIIIl=IlIlIl->serial;




while(*lIllIIIl>'\x20'&&*lIllIIIl<='\x7F'&&*lIllIIIl!='\x2C'){lIllIIIl++;}if(*
lIllIIIl){
IlIlIl->IIIlIII=IlIlIl->IIllI;}else{
IlIlIl->IIIlIII=IlIlIl->serial;


list_for_each_entry(llIIllIl,&lIlIllIl,entry){if(llIIllIl->IlIIl->serial&&
llIIllIl->IlIIl->descriptor.idVendor==llIII->descriptor.idVendor&&llIIllIl->
IlIIl->descriptor.idProduct==llIII->descriptor.idProduct&&strcmp(llIIllIl->IlIIl
->serial,llIII->serial)==(0x16e2+2953-0x226b)){
IlIlIl->IIIlIII=IlIlIl->IIllI;break;}}}}else{
IlIlIl->IIIlIII=IlIlIl->IIllI;}list_add_tail(&IlIlIl->entry,&lIlIllIl);}


*lIlllIlll=IlIlIl->IIllI;*llllIIIIl=IlIlIl->serial;*IIlIllllI=IlIlIl->IIIlIII;
mutex_unlock(&lIlllIII);return(0x1928+2447-0x22b7);}void lIlIIIlll(struct 
usb_device*IlIIl){struct IIllIlIl*IlIlIl;lIIIl("\x2b\x2b" "\n");mutex_lock(&
lIlllIII);list_for_each_entry(IlIlIl,&lIlIllIl,entry){if(IlIlIl->IlIIl==IlIIl){
list_del(&IlIlIl->entry);usb_put_dev(IlIlIl->IlIIl);lIlIll(IlIlIl);break;}}
mutex_unlock(&lIlllIII);}void IIlIIlIll(){struct list_head Illlll=LIST_HEAD_INIT
(Illlll);
mutex_lock(&lIlllIII);list_splice_init(&lIlIllIl,&Illlll);mutex_unlock(&lIlllIII
);
while(!list_empty(&Illlll)){struct IIllIlIl*IlIlIl;IlIlIl=list_entry(Illlll.next
,struct IIllIlIl,entry);list_del(&IlIlIl->entry);usb_put_dev(IlIlIl->IlIIl);
lIlIll(IlIlIl);}}











int IIllIlIIl(struct usb_interface*IIIIII){int IlIlI;int lllIllIll=
(0xe9a+2414-0x1808);int IllIlIlI=(0x6ab+6539-0x2036);
if(IIIIII->dev.driver&&to_usb_driver(IIIIII->dev.driver)==&lIlIllI){return
(0xc08+5934-0x2336);}
IllIlIlI=(0x2e8+8956-0x25e3);
if(IIIIII->dev.driver){usb_driver_release_interface(to_usb_driver(IIIIII->dev.
driver),IIIIII);lllIllIll=(0xfdc+3380-0x1d0f);}
IlIlI=usb_driver_claim_interface(&lIlIllI,IIIIII,(void*)-(0x1123+4292-0x21e6));
if(IlIlI<(0x11d2+4599-0x23c9)){IIllIl(
"\x66\x61\x69\x6c\x65\x64\x20\x74\x6f\x20\x63\x6c\x61\x69\x6d\x20\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20\x25\x73\x2c\x20\x65\x72\x72\x6f\x72\x20\x25\x64" "\n"
,llIIIl(&IIIIII->dev),IlIlI);return IlIlI;}IlIlI=IlIIlIIIl(IIIIII,lllIllIll);if(
IlIlI<(0xf38+3434-0x1ca2)){IIllIl(
"\x66\x61\x69\x6c\x65\x64\x20\x74\x6f\x20\x61\x74\x74\x61\x63\x68\x20\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20\x25\x73\x2c\x20\x65\x72\x72\x6f\x72\x20\x25\x64" "\n"
,llIIIl(&IIIIII->dev),IlIlI);
usb_driver_release_interface(&lIlIllI,IIIIII);return IlIlI;}return IllIlIlI;}
#if KERNEL_GT_EQ((0x143b+4232-0x24be),(0xf73+5528-0x2508),(0x1a2a+3270-0x26f0))
static int llllIIlll(struct device*dev,const void*lIIllIIIl)
#else
static int llllIIlll(struct device*dev,void*lIIllIIIl)
#endif
{const char*IIllI=lIIllIIIl;if(strcmp(IIllI,llIIIl(dev))==(0x284+6473-0x1bcd)){
return(0x1ca9+27-0x1cc3);}return(0x582+1923-0xd05);}struct usb_device*IllIllII(
const char*IIllI){struct device*dev;dev=bus_find_device(
#if KERNEL_LT_EQ((0x427+4290-0x14e7),(0x492+8186-0x2486),(0x1ee7+132-0x1f59))
lIlIllI.driver.bus,
#else
lIlIllI.drvwrap.driver.bus,
#endif
NULL,(void*)IIllI,llllIIlll);if(dev){return to_usb_device(dev);}return NULL;}





int IllIIIIl(struct usb_device*IlIIl){int i;int IlIlIlIII=(0x1970+3404-0x26bc);
int IllIlIlI=(0x1e8b+1188-0x232f);int IlIlI=-ENODEV;lIIIl(
"\x2b\x2b\x20\x25\x73" "\n",llIIIl(&IlIIl->dev));if(!IIIlIIIl(IlIIl)){IlIlI=
IIIIIIll(IlIIl);if(IlIlI<(0x23fb+724-0x26cf)){IIllIl(
"\x66\x61\x69\x6c\x65\x64\x20\x74\x6f\x20\x61\x74\x74\x61\x63\x68\x20\x75\x73\x62\x20\x64\x65\x76\x69\x63\x65\x20\x25\x73\x2c\x20\x65\x72\x72\x6f\x72\x20\x25\x64" "\n"
,llIIIl(&IlIIl->dev),IlIlI);lIIIl(
"\x2d\x2d\x20\x72\x65\x73\x75\x6c\x74\x3d\x25\x64" "\n",IlIlI);return IlIlI;}}if
(IlIIl->actconfig){for(i=(0xdf8+210-0xeca);i<IlIIl->actconfig->desc.
bNumInterfaces;i++){struct usb_interface*IIIIII=IlIIl->actconfig->interface[i];
if(IIIIII==NULL){continue;
}IlIlI=IIllIlIIl(IIIIII);if(IlIlI<(0x1a12+1935-0x21a1)){lIIIl(
"\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20\x25\x73\x20\x6e\x6f\x74\x20\x63\x6c\x61\x69\x6d\x65\x64\x2c\x20\x65\x72\x72\x6f\x72\x20\x25\x64" "\n"
,llIIIl(&IIIIII->dev),IlIlI);break;}IlIlIlIII++;if(IlIlI>(0x6bc+1447-0xc63)){
lIIIl(
"\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20\x25\x73\x2c\x20\x61\x63\x74\x75\x61\x6c\x6c\x79\x20\x63\x6c\x61\x69\x6d\x65\x64" "\n"
,llIIIl(&IIIIII->dev));IllIlIlI++;}else
{lIIIl(
"\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20\x25\x73\x2c\x20\x63\x6c\x61\x69\x6d\x65\x64" "\n"
,llIIIl(&IIIIII->dev));}}if(IlIlI>=(0x589+5176-0x19c1)&&IlIlIlIII>
(0x270+441-0x429)&&IllIlIlI==(0xcbd+4729-0x1f36)){



struct IIlll*IIIll=IIIIllIl(IlIIl);if(IIIll){lIIIl(
"\x72\x65\x66\x72\x65\x73\x68\x20\x6f\x6e\x6c\x69\x6e\x65" "\n");llIlIIIlI(IIIll
);lIIIllII(IIIll);}else{lIIIl(
"\x73\x74\x75\x62\x20\x6e\x6f\x74\x20\x66\x6f\x75\x6e\x64" "\n");}}}lIIIl(
"\x2d\x2d\x20\x72\x65\x73\x75\x6c\x74\x3d\x25\x64" "\n",IlIlI);return IlIlI;}





void IIIIIIII(struct usb_device*IlIIl,int IlIIIIlI){int i;lIIIl(
"\x2b\x2b\x20\x25\x73" "\n",llIIIl(&IlIIl->dev));if(IlIIl->actconfig){for(i=
(0x1788+3212-0x2414);i<IlIIl->actconfig->desc.bNumInterfaces;i++){struct 
usb_interface*IIIIII=IlIIl->actconfig->interface[i];if(IIIIII==NULL){continue;
}if(IIIIII->dev.driver==NULL){continue;}if(to_usb_driver(IIIIII->dev.driver)!=&
lIlIllI){continue;}lIIIl(
"\x72\x65\x6c\x65\x61\x73\x65\x20\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20\x25\x73" "\n"
,llIIIl(&IIIIII->dev));
usb_driver_release_interface(&lIlIllI,IIIIII);}}if(IIIlIIIl(IlIIl)){lIIllIll(
IlIIl);}
#if KERNEL_GT_EQ((0xe25+4965-0x2188),(0x3b2+4079-0x139b),(0x127c+4994-0x25e8))
if(IIlIIllI(&IlIIl->dev)){llIllllI(&IlIIl->dev,(0x704+6196-0x1f38));lIIIl(
"\x73\x65\x6e\x64\x20\x4b\x4f\x42\x4a\x5f\x41\x44\x44\x20\x66\x6f\x72\x20\x64\x65\x76\x69\x63\x65\x20\x25\x73" "\n"
,llIIIl(&IlIIl->dev));kobject_uevent(&IlIIl->dev.kobj,KOBJ_ADD);}
#endif
if(IlIIl->actconfig){for(i=(0x2251+782-0x255f);i<IlIIl->actconfig->desc.
bNumInterfaces;i++){struct usb_interface*IIIIII=IlIIl->actconfig->interface[i];
if(IIIIII==NULL){continue;}
#if KERNEL_GT_EQ((0x8f3+3834-0x17eb),(0xa28+1097-0xe6b),(0xc57+1878-0x1397))
if(IIlIIllI(&IIIIII->dev)){llIllllI(&IIIIII->dev,(0x144+7732-0x1f78));lIIIl(
"\x73\x65\x6e\x64\x20\x4b\x4f\x42\x4a\x5f\x41\x44\x44\x20\x66\x6f\x72\x20\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20\x25\x73" "\n"
,llIIIl(&IIIIII->dev));kobject_uevent(&IIIIII->dev.kobj,KOBJ_ADD);}
#endif
if(IlIIIIlI&&IIIIII->dev.driver==NULL){int IIIlIIlI;lIIIl(
"\x6c\x6f\x61\x64\x20\x64\x65\x66\x61\x75\x6c\x74\x20\x64\x72\x69\x76\x65\x72\x20\x66\x6f\x72\x20\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20\x25\x73" "\n"
,llIIIl(&IIIIII->dev));


IIIlIIlI=device_attach(&IIIIII->dev);}}}lIIIl("\x2d\x2d" "\n");}








#if KERNEL_LT_EQ((0x832+5712-0x1e80),(0x91d+2248-0x11df),(0xc2a+5630-0x2215))


int IIllIIIII(struct notifier_block*self,unsigned long IlIlllI,void*dev){struct 
usb_device*IlIIl=dev;lIIIl(
"\x2b\x2b\x20\x61\x63\x74\x69\x6f\x6e\x3d\x25\x73\x28\x25\x6c\x75\x29\x20\x64\x65\x76\x3d\x25\x73" "\n"
,llIIlIIlI(IlIlllI),IlIlllI,IlIIl?llIIIl(&IlIIl->dev):"\x6e\x6f\x6e\x65");if(
IlIlllI==USB_DEVICE_ADD){if(IIIIlIII(IlIIl)){
IllIIIIl(IlIIl);}}if(IlIlllI==USB_DEVICE_REMOVE){


IIIIIIII(IlIIl,(0x8ff+746-0xbe9));
lIlIIIlll(IlIIl);}lIIIl("\x2d\x2d");return NOTIFY_OK;}struct notifier_block 
llIIIlll={.notifier_call=IIllIIIII,.priority=INT_MAX,
};
#else 




int IllIlIllI(struct notifier_block*self,unsigned long IlIlllI,void*dev){struct 
device*IlIIll=dev;lIIIl(
"\x2b\x2b\x20\x61\x63\x74\x69\x6f\x6e\x3d\x25\x73\x28\x25\x6c\x75\x29\x20\x64\x65\x76\x3d\x25\x73" "\n"
,lllllIlll(IlIlllI),IlIlllI,IlIIll?llIIIl(IlIIll):"\x6e\x6f\x6e\x65");if(IlIlllI
==BUS_NOTIFY_ADD_DEVICE){if(IIIIlIlII(IlIIll)){struct usb_device*IlIIl=
to_usb_device(IlIIll);



if(IIIIlIII(IlIIl)){

if(IIIIIIll(IlIIl)>=(0xaa7+1186-0xf49)){
#if KERNEL_GT_EQ((0xa76+4099-0x1a77),(0x110+5011-0x149d),(0x339+5237-0x1798))







llIllllI(&IlIIl->dev,(0x1273+963-0x1635));
#endif
}}}else if(IIIIlIIII(IlIIll)){struct usb_interface*IIIIII=to_usb_interface(dev);
struct usb_device*IlIIl=interface_to_usbdev(IIIIII);
if(IIIlIIIl(IlIIl)){int IlIlI;
#if KERNEL_GT_EQ((0x181b+28-0x1835),(0x63c+3151-0x1285),(0x34+5749-0x168f)) && \
KERNEL_LT_EQ((0xa04+1187-0xea5),(0xb8a+3048-0x176c),(0x12bb+430-0x1442))
int state_in_sysfs;
#endif
#if KERNEL_GT_EQ((0xc82+2501-0x1645),(0x72a+4355-0x1827),(0x154a+3596-0x2340))
llIllllI(&IIIIII->dev,(0x18f3+2096-0x2122));
#endif
lIIIl(
"\x63\x6c\x61\x69\x6d\x69\x6e\x67\x20\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20\x25\x73" "\n"
,llIIIl(&IIIIII->dev));
#if KERNEL_GT_EQ((0x1318+2628-0x1d5a),(0x1192+1465-0x1745),(0xec7+3221-0x1b42)) \
&& KERNEL_LT_EQ((0x580+1004-0x96a),(0x70d+1914-0xe81),(0x852+5913-0x1f44))























state_in_sysfs=IlIIll->kobj.state_in_sysfs;IlIIll->kobj.state_in_sysfs=
(0xac5+2814-0x15c3);
#endif
IlIlI=IIllIlIIl(IIIIII);
#if KERNEL_GT_EQ((0x168a+1157-0x1b0d),(0xa48+5993-0x21ab),(0x16df+1008-0x1ab5)) \
&& KERNEL_LT_EQ((0x1f12+159-0x1faf),(0xad5+1560-0x10e7),(0xab3+2975-0x162b))

IlIIll->kobj.state_in_sysfs=state_in_sysfs;
#endif
if(IlIlI<(0x20a2+1474-0x2664)){lIIIl(
"\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20\x25\x73\x20\x6e\x6f\x74\x20\x63\x6c\x61\x69\x6d\x65\x64\x2c\x20\x65\x72\x72\x6f\x72\x20\x25\x64" "\n"
,llIIIl(&IIIIII->dev),IlIlI);}else if(IlIlI>(0x717+2649-0x1170)){lIIIl(
"\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20\x25\x73\x20\x61\x63\x74\x75\x61\x6c\x6c\x79\x20\x63\x6c\x61\x69\x6d\x65\x64" "\n"
,llIIIl(&IIIIII->dev));}else
{lIIIl(
"\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20\x25\x73\x20\x63\x6c\x61\x69\x6d\x65\x64" "\n"
,llIIIl(&IIIIII->dev));}}}}else if(IlIlllI==BUS_NOTIFY_DEL_DEVICE){if(IIIIlIIII(
IlIIll)){struct usb_interface*IIIIII=to_usb_interface(dev);struct usb_device*
IlIIl=interface_to_usbdev(IIIIII);if(IIIlIIIl(IlIIl)){



}}else if(IIIIlIlII(IlIIll)){struct usb_device*IlIIl=to_usb_device(IlIIll);if(
IIIlIIIl(IlIIl)){


lIIllIll(IlIIl);}
lIlIIIlll(IlIIl);}}lIIIl("\x2d\x2d" "\n");return NOTIFY_OK;}struct 
notifier_block llIIlIIl={.notifier_call=IllIlIllI,.priority=INT_MAX,
};
#endif 
#endif 

