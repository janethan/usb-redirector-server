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
struct IIIlll*IIlllIlI;struct list_head llllIllI;struct mutex lIlIIllI;struct 
list_head lIIlIIII;struct mutex lIlIIIll;struct list_head IllllIIl;struct mutex 
llIIllIl;extern struct usb_driver lIlIllI;int IlllIIlI(struct usb_device*llIII){
IlllIl vid,IIlllII,lIlIlll;lIllIl class,IlIIlIIIl,lllIIIllI;struct IllIlIII*
lIIll;int lllllIIll=(0x11e7+1406-0x1765);int IlIlIllI=(0x8d6+7206-0x24fc);const 
char*llIll=NULL;const char*serial=NULL;const char*lIlIIll=NULL;IIlll(
"\x2b\x2b" "\n");
if(strcmp(IlIllIlI(llIII),IlIlIIl)==(0x9bc+5702-0x2002)){IIlll(
"\x2d\x2d\x20\x73\x6b\x69\x70\x20\x6f\x75\x72\x20\x76\x69\x72\x74\x75\x61\x6c\x20\x64\x65\x76\x69\x63\x65\x21" "\n"
);return(0xc8b+2309-0x1590);}vid=le16_to_cpu(llIII->descriptor.idVendor);IIlllII
=le16_to_cpu(llIII->descriptor.idProduct);lIlIlll=le16_to_cpu(llIII->descriptor.
bcdDevice);IIlllIlIl(llIII,&class,&IlIIlIIIl,&lllIIIllI);if(class==
(0x10b3+4508-0x2246)){IIlll(
"\x2d\x2d\x20\x73\x6b\x69\x70\x20\x75\x73\x62\x20\x68\x75\x62\x21" "\n");return
(0x1265+3738-0x20ff);}if(IIlIIIll(llIII,&llIll,&serial,&lIlIIll)){IIlll(
"\x2d\x2d\x20\x63\x61\x6e\x20\x6e\x6f\x74\x20\x67\x65\x74\x20\x69\x6e\x73\x74\x61\x6e\x63\x65\x69\x64\x21" "\n"
);return(0x1b4b+873-0x1eb4);}IIlll(
"\x56\x3d\x25\x30\x34\x58\x20\x50\x3d\x25\x30\x34\x58\x20\x52\x3d\x25\x30\x34\x58\x20\x43\x3d\x25\x30\x32\x58\x20\x53\x3d\x25\x30\x32\x58\x20\x50\x3d\x25\x30\x32\x58\x20\x49\x44\x3d\x25\x73\x20\x53\x4e\x3d\x25\x73\x20\x49\x4e\x3d\x25\x73" "\n"
,vid,IIlllII,lIlIlll,class,IlIIlIIIl,lllIIIllI,llIll?llIll:"\x6e\x6f\x6e\x65",
serial?serial:"\x6e\x6f\x6e\x65",lIlIIll?lIlIIll:"\x6e\x6f\x6e\x65");
mutex_lock(&lIlIIllI);list_for_each_entry(lIIll,&llllIllI,entry){if(lIIll->lIIll
.IIlllIl&llllIlIlI){if(lIIll->lIIll.lIllllII!=vid)continue;}if(lIIll->lIIll.
IIlllIl&IllIllIII){if(lIIll->lIIll.IIllIlII!=IIlllII)continue;}if(lIIll->lIIll.
IIlllIl&lIIlIlIII){if(lIIll->lIIll.lIIIlIlI!=lIlIlll)continue;}if(lIIll->lIIll.
IIlllIl&lIllIlIIII){if(lIIll->lIIll.llIlIlII!=class)continue;}if(lIIll->lIIll.
IIlllIl&lIllllIll){if(lIIll->lIIll.lIlllllI!=IlIIlIIIl)continue;}if(lIIll->lIIll
.IIlllIl&IlllIllII){if(lIIll->lIIll.IlllIlII!=lllIIIllI)continue;}if(lIIll->
lIIll.IIlllIl&IIIllllIl){if(llIll==NULL)continue;if(strncmp((char*)(&lIIll->
lIIll+(0x1289+4596-0x247c)),llIll,lIIll->lIIll.lllIIIl))continue;}if(lIIll->
lIIll.IIlllIl&IlIlIllll){if(serial==NULL)continue;if(strncmp((char*)(&lIIll->
lIIll+(0x1bd8+1396-0x214b))+lIIll->lIIll.lllIIIl,serial,lIIll->lIIll.IIIlllIl))
continue;}if(lIIll->lIIll.IIlllIl&llIlIlIll){if(lIlIIll==NULL)continue;IIlll(
"\x63\x68\x65\x63\x6b\x20\x69\x6e\x74\x73\x61\x6e\x63\x65\x20\x69\x64\x20\x25\x73\x20\x76\x73\x20\x25\x73" "\n"
,lIlIIll,(char*)(&lIIll->lIIll+(0x3ab+5666-0x19cc))+lIIll->lIIll.lllIIIl+lIIll->
lIIll.IIIlllIl);if(strncmp((char*)(&lIIll->lIIll+(0x41a+8808-0x2681))+lIIll->
lIIll.lllIIIl+lIIll->lIIll.IIIlllIl,lIlIIll,lIIll->lIIll.IllIlllI)){IIlll(
"\x6e\x6f\x74\x20\x6d\x61\x74\x63\x68\x65\x64\x20\x69\x6e\x74\x73\x61\x6e\x63\x65\x20\x69\x64" "\n"
);continue;}}if(lIIll->lIIll.IIlllIl&IIlllllII){IlIlIllI=(0x15da+2545-0x1fca);
lllllIIll=(0x11e9+2925-0x1d55);break;}if(lIIll->lIIll.IIlllIl&llllllIlI){
IlIlIllI=(0x1053+4616-0x225b);lllllIIll=(0x880+866-0xbe1);break;}}mutex_unlock(&
lIlIIllI);if(lllllIIll==(0xb48+1468-0x1104)){IIlll(
"\x2d\x2d\x20\x6e\x6f\x20\x6d\x61\x74\x63\x68" "\n");}else if(IlIlIllI){IIlll(
"\x2d\x2d\x20\x61\x6c\x6c\x6f\x77\x65\x64" "\n");}else{IIlll(
"\x2d\x2d\x20\x64\x65\x6e\x69\x65\x64" "\n");}return IlIlIllI;}void lIllIIIll(
struct list_head*lIlIIlII){struct list_head Illlll=LIST_HEAD_INIT(Illlll);

mutex_lock(&lIlIIllI);list_splice_init(&llllIllI,&Illlll);list_splice_init(
lIlIIlII,&llllIllI);mutex_unlock(&lIlIIllI);
while(!list_empty(&Illlll)){struct IllIlIII*IIIlIIl;IIIlIIl=list_entry(Illlll.
next,struct IllIlIII,entry);list_del(&IIIlIIl->entry);lIlIll(IIIlIIl);}



}void IIlIIlII(){struct list_head Illlll=LIST_HEAD_INIT(Illlll);
mutex_lock(&lIlIIllI);list_splice_init(&llllIllI,&Illlll);mutex_unlock(&lIlIIllI
);
while(!list_empty(&Illlll)){struct IllIlIII*IIIlIIl;IIIlIIl=list_entry(Illlll.
next,struct IllIlIII,entry);list_del(&IIIlIIl->entry);lIlIll(IIIlIIl);}}IIIIl 
llIIIllII(struct usb_device*llIII){struct IllIIIll*IlIlIIll;IIIIl IIllIIl=
(0x180+3389-0xebd);mutex_lock(&llIIllIl);list_for_each_entry(IlIlIIll,&IllllIIl,
entry){if(IlIlIIll->lIIlllI.lIllllII!=le16_to_cpu(llIII->descriptor.idVendor))
continue;if(IlIlIIll->lIIlllI.IIllIlII!=le16_to_cpu(llIII->descriptor.idProduct)
)continue;IIllIIl=IlIlIIll->lIIlllI.lIIlIllIl;break;}mutex_unlock(&llIIllIl);
return IIllIIl;}void llIlIIlII(struct list_head*IlIlIIlI){struct list_head 
Illlll=LIST_HEAD_INIT(Illlll);

mutex_lock(&llIIllIl);list_splice_init(&IllllIIl,&Illlll);list_splice_init(
IlIlIIlI,&IllllIIl);mutex_unlock(&llIIllIl);
while(!list_empty(&Illlll)){struct IllIIIll*IIIlIIl;IIIlIIl=list_entry(Illlll.
next,struct IllIIIll,entry);list_del(&IIIlIIl->entry);lIlIll(IIIlIIl);}}void 
llIIIIIII(){struct list_head Illlll=LIST_HEAD_INIT(Illlll);
mutex_lock(&llIIllIl);list_splice_init(&IllllIIl,&Illlll);mutex_unlock(&llIIllIl
);
while(!list_empty(&Illlll)){struct IllIIIll*IIIlIIl;IIIlIIl=list_entry(Illlll.
next,struct IllIIIll,entry);list_del(&IIIlIIl->entry);lIlIll(IIIlIIl);}}



int IIlIIIll(struct usb_device*lIIlI,const char**lIlllIlll,const char**llllIIIIl
,const char**IIlIllllI){struct IllIIlll*IlIlIl=NULL;struct IllIIlll*IllIllIl;
mutex_lock(&lIlIIIll);list_for_each_entry(IllIllIl,&lIIlIIII,entry){if(IllIllIl
->llIII==lIIlI){IlIlIl=IllIllIl;break;}}if(!IlIlIl){IlIlIl=lIllllI(sizeof(struct
 IllIIlll),GFP_KERNEL);if(!IlIlIl){mutex_unlock(&lIlIIIll);return-ENOMEM;}IlIlIl
->llIII=usb_get_dev(lIIlI);IlIlIl->llIll=llIIIl(&IlIlIl->llIII->dev);IlIlIl->
serial=lIIlI->serial;if(IlIlIl->serial&&*IlIlIl->serial&&(llIIIllII(lIIlI)&
llIllIlllI)==(0xfa1+704-0x1261)){const char*lIllIIIl=IlIlIl->serial;




while(*lIllIIIl>'\x20'&&*lIllIIIl<='\x7F'&&*lIllIIIl!='\x2C')lIllIIIl++;if(*
lIllIIIl){
IlIlIl->lIlIIll=IlIlIl->llIll;}else{
IlIlIl->lIlIIll=IlIlIl->serial;


list_for_each_entry(IllIllIl,&lIIlIIII,entry){if(IllIllIl->llIII->serial&&
IllIllIl->llIII->descriptor.idVendor==lIIlI->descriptor.idVendor&&IllIllIl->
llIII->descriptor.idProduct==lIIlI->descriptor.idProduct&&strcmp(IllIllIl->llIII
->serial,lIIlI->serial)==(0xc20+4091-0x1c1b)){
IlIlIl->lIlIIll=IlIlIl->llIll;break;}}}}else{
IlIlIl->lIlIIll=IlIlIl->llIll;}list_add_tail(&IlIlIl->entry,&lIIlIIII);}


*lIlllIlll=IlIlIl->llIll;*llllIIIIl=IlIlIl->serial;*IIlIllllI=IlIlIl->lIlIIll;
mutex_unlock(&lIlIIIll);return(0x19d4+2082-0x21f6);}void lIlIIIlll(struct 
usb_device*llIII){struct IllIIlll*IlIlIl;IIlll("\x2b\x2b" "\n");mutex_lock(&
lIlIIIll);list_for_each_entry(IlIlIl,&lIIlIIII,entry){if(IlIlIl->llIII==llIII){
list_del(&IlIlIl->entry);usb_put_dev(IlIlIl->llIII);lIlIll(IlIlIl);break;}}
mutex_unlock(&lIlIIIll);}void IIlIIlIll(){struct list_head Illlll=LIST_HEAD_INIT
(Illlll);
mutex_lock(&lIlIIIll);list_splice_init(&lIIlIIII,&Illlll);mutex_unlock(&lIlIIIll
);
while(!list_empty(&Illlll)){struct IllIIlll*IlIlIl;IlIlIl=list_entry(Illlll.next
,struct IllIIlll,entry);list_del(&IlIlIl->entry);usb_put_dev(IlIlIl->llIII);
lIlIll(IlIlIl);}}











int IIIIlllll(struct usb_interface*IIIIII){int IIIll;int lllIllIll=
(0x38d+8951-0x2684);int IllIlIlI=(0x1392+2084-0x1bb6);
if(IIIIII->dev.driver&&to_usb_driver(IIIIII->dev.driver)==&lIlIllI){return
(0x10c2+3215-0x1d51);}
IllIlIlI=(0xbb6+4473-0x1d2e);
if(IIIIII->dev.driver){usb_driver_release_interface(to_usb_driver(IIIIII->dev.
driver),IIIIII);lllIllIll=(0x1840+916-0x1bd3);}
IIIll=usb_driver_claim_interface(&lIlIllI,IIIIII,(void*)-(0x27b+7407-0x1f69));if
(IIIll<(0x3a5+6597-0x1d6a)){IIllIl(
"\x66\x61\x69\x6c\x65\x64\x20\x74\x6f\x20\x63\x6c\x61\x69\x6d\x20\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20\x25\x73\x2c\x20\x65\x72\x72\x6f\x72\x20\x25\x64" "\n"
,llIIIl(&IIIIII->dev),IIIll);return IIIll;}IIIll=IIlIIIIII(IIIIII,lllIllIll);if(
IIIll<(0xa40+6463-0x237f)){IIllIl(
"\x66\x61\x69\x6c\x65\x64\x20\x74\x6f\x20\x61\x74\x74\x61\x63\x68\x20\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20\x25\x73\x2c\x20\x65\x72\x72\x6f\x72\x20\x25\x64" "\n"
,llIIIl(&IIIIII->dev),IIIll);
usb_driver_release_interface(&lIlIllI,IIIIII);return IIIll;}return IllIlIlI;}
#if KERNEL_GT_EQ((0xae8+985-0xebc),(0xb2+4105-0x10b8),(0x1d53+1955-0x24f6))
static int llllIIlll(struct device*dev,const void*lIIllIIIl)
#else
static int llllIIlll(struct device*dev,void*lIIllIIIl)
#endif
{const char*llIll=lIIllIIIl;if(strcmp(llIll,llIIIl(dev))==(0x332+8506-0x246c))
return(0x1013+1996-0x17de);return(0x849+1741-0xf16);}struct usb_device*IllIllII(
const char*llIll){struct device*dev;dev=bus_find_device(
#if KERNEL_LT_EQ((0x35+3430-0xd99),(0x62c+4650-0x1850),(0xc64+1207-0x1109))
lIlIllI.driver.bus,
#else
lIlIllI.drvwrap.driver.bus,
#endif
NULL,(void*)llIll,llllIIlll);if(dev){return to_usb_device(dev);}return NULL;}





int IIIIIlII(struct usb_device*llIII){int i;int IlIlIlIII=(0x1859+3078-0x245f);
int IllIlIlI=(0x149d+466-0x166f);int IIIll=-ENODEV;IIlll(
"\x2b\x2b\x20\x25\x73" "\n",llIIIl(&llIII->dev));if(!IIIlIIIl(llIII)){IIIll=
IllllIll(llIII);if(IIIll<(0x155b+702-0x1819)){IIllIl(
"\x66\x61\x69\x6c\x65\x64\x20\x74\x6f\x20\x61\x74\x74\x61\x63\x68\x20\x75\x73\x62\x20\x64\x65\x76\x69\x63\x65\x20\x25\x73\x2c\x20\x65\x72\x72\x6f\x72\x20\x25\x64" "\n"
,llIIIl(&llIII->dev),IIIll);IIlll(
"\x2d\x2d\x20\x72\x65\x73\x75\x6c\x74\x3d\x25\x64" "\n",IIIll);return IIIll;}}if
(llIII->actconfig){for(i=(0x486+8576-0x2606);i<llIII->actconfig->desc.
bNumInterfaces;i++){struct usb_interface*IIIIII=llIII->actconfig->interface[i];
if(IIIIII==NULL)continue;
IIIll=IIIIlllll(IIIIII);if(IIIll<(0x15a0+2507-0x1f6b)){IIlll(
"\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20\x25\x73\x20\x6e\x6f\x74\x20\x63\x6c\x61\x69\x6d\x65\x64\x2c\x20\x65\x72\x72\x6f\x72\x20\x25\x64" "\n"
,llIIIl(&IIIIII->dev),IIIll);break;}IlIlIlIII++;if(IIIll>(0x9f+4700-0x12fb)){
IIlll(
"\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20\x25\x73\x2c\x20\x61\x63\x74\x75\x61\x6c\x6c\x79\x20\x63\x6c\x61\x69\x6d\x65\x64" "\n"
,llIIIl(&IIIIII->dev));IllIlIlI++;}else
{IIlll(
"\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20\x25\x73\x2c\x20\x63\x6c\x61\x69\x6d\x65\x64" "\n"
,llIIIl(&IIIIII->dev));}}if(IIIll>=(0xa92+43-0xabd)&&IlIlIlIII>
(0x928+5800-0x1fd0)&&IllIlIlI==(0xf25+970-0x12ef)){



struct lllll*lIlII=IIIIllIl(llIII);if(lIlII){IIlll(
"\x72\x65\x66\x72\x65\x73\x68\x20\x6f\x6e\x6c\x69\x6e\x65" "\n");llIlIIIlI(lIlII
);lllllIll(lIlII);}else{IIlll(
"\x73\x74\x75\x62\x20\x6e\x6f\x74\x20\x66\x6f\x75\x6e\x64" "\n");}}}IIlll(
"\x2d\x2d\x20\x72\x65\x73\x75\x6c\x74\x3d\x25\x64" "\n",IIIll);return IIIll;}





void lllIllIl(struct usb_device*llIII,int IlIIIIlI){int i;IIlll(
"\x2b\x2b\x20\x25\x73" "\n",llIIIl(&llIII->dev));if(llIII->actconfig){for(i=
(0x168+5973-0x18bd);i<llIII->actconfig->desc.bNumInterfaces;i++){struct 
usb_interface*IIIIII=llIII->actconfig->interface[i];if(IIIIII==NULL)continue;
if(IIIIII->dev.driver==NULL)continue;if(to_usb_driver(IIIIII->dev.driver)!=&
lIlIllI)continue;IIlll(
"\x72\x65\x6c\x65\x61\x73\x65\x20\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20\x25\x73" "\n"
,llIIIl(&IIIIII->dev));
usb_driver_release_interface(&lIlIllI,IIIIII);}}if(IIIlIIIl(llIII)){lIllIllI(
llIII);}
#if KERNEL_GT_EQ((0xaf3+4189-0x1b4e),(0x631+8084-0x25bf),(0xb71+1146-0xfd5))
if(lIIlIllI(&llIII->dev)){llIllllI(&llIII->dev,(0x1d90+2148-0x25f4));IIlll(
"\x73\x65\x6e\x64\x20\x4b\x4f\x42\x4a\x5f\x41\x44\x44\x20\x66\x6f\x72\x20\x64\x65\x76\x69\x63\x65\x20\x25\x73" "\n"
,llIIIl(&llIII->dev));kobject_uevent(&llIII->dev.kobj,KOBJ_ADD);}
#endif
if(llIII->actconfig){for(i=(0x14f1+3624-0x2319);i<llIII->actconfig->desc.
bNumInterfaces;i++){struct usb_interface*IIIIII=llIII->actconfig->interface[i];
if(IIIIII==NULL)continue;
#if KERNEL_GT_EQ((0x3f1+1724-0xaab),(0x190+8095-0x2129),(0xea6+5816-0x2548))
if(lIIlIllI(&IIIIII->dev)){llIllllI(&IIIIII->dev,(0x875+2945-0x13f6));IIlll(
"\x73\x65\x6e\x64\x20\x4b\x4f\x42\x4a\x5f\x41\x44\x44\x20\x66\x6f\x72\x20\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20\x25\x73" "\n"
,llIIIl(&IIIIII->dev));kobject_uevent(&IIIIII->dev.kobj,KOBJ_ADD);}
#endif
if(IlIIIIlI&&IIIIII->dev.driver==NULL){int IIIlIIlI;IIlll(
"\x6c\x6f\x61\x64\x20\x64\x65\x66\x61\x75\x6c\x74\x20\x64\x72\x69\x76\x65\x72\x20\x66\x6f\x72\x20\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20\x25\x73" "\n"
,llIIIl(&IIIIII->dev));


IIIlIIlI=device_attach(&IIIIII->dev);}}}IIlll("\x2d\x2d" "\n");}








#if KERNEL_LT_EQ((0x1037+1670-0x16bb),(0x10cf+1203-0x157c),(0x2239+989-0x2603))


int lllIIIlll(struct notifier_block*self,unsigned long IlIlllI,void*dev){struct 
usb_device*llIII=dev;IIlll(
"\x2b\x2b\x20\x61\x63\x74\x69\x6f\x6e\x3d\x25\x73\x28\x25\x6c\x75\x29\x20\x64\x65\x76\x3d\x25\x73" "\n"
,llIllllII(IlIlllI),IlIlllI,llIII?llIIIl(&llIII->dev):"\x6e\x6f\x6e\x65");if(
IlIlllI==USB_DEVICE_ADD){if(IlllIIlI(llIII)){
IIIIIlII(llIII);}}if(IlIlllI==USB_DEVICE_REMOVE){


lllIllIl(llIII,(0x2063+1220-0x2527));
lIlIIIlll(llIII);}IIlll("\x2d\x2d");return NOTIFY_OK;}struct notifier_block 
llIIIIII={.notifier_call=lllIIIlll,.priority=INT_MAX,
};
#else 




int IllIlIllI(struct notifier_block*self,unsigned long IlIlllI,void*dev){struct 
device*IIIlIl=dev;IIlll(
"\x2b\x2b\x20\x61\x63\x74\x69\x6f\x6e\x3d\x25\x73\x28\x25\x6c\x75\x29\x20\x64\x65\x76\x3d\x25\x73" "\n"
,lllllIlll(IlIlllI),IlIlllI,IIIlIl?llIIIl(IIIlIl):"\x6e\x6f\x6e\x65");if(IlIlllI
==BUS_NOTIFY_ADD_DEVICE){if(IIllIlIIl(IIIlIl)){struct usb_device*llIII=
to_usb_device(IIIlIl);



if(IlllIIlI(llIII)){

if(IllllIll(llIII)>=(0x365+4838-0x164b)){
#if KERNEL_GT_EQ((0xa43+6569-0x23ea),(0xbaa+1133-0x1011),(0xfa0+4628-0x219e))







llIllllI(&llIII->dev,(0x12ac+3931-0x2206));
#endif
}}}else if(IllllllIl(IIIlIl)){struct usb_interface*IIIIII=to_usb_interface(dev);
struct usb_device*llIII=interface_to_usbdev(IIIIII);
if(IIIlIIIl(llIII)){int IIIll;
#if KERNEL_GT_EQ((0x931+5216-0x1d8f),(0x1c9d+1952-0x2437),(0x83d+462-0x9f1)) && \
KERNEL_LT_EQ((0x8d+6603-0x1a56),(0x634+5703-0x1c75),(0x137f+3992-0x22f0))
int state_in_sysfs;
#endif
#if KERNEL_GT_EQ((0x3ef+7683-0x21f0),(0x440+45-0x467),(0xc7b+1568-0x1285))
llIllllI(&IIIIII->dev,(0x189+5335-0x165f));
#endif
IIlll(
"\x63\x6c\x61\x69\x6d\x69\x6e\x67\x20\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20\x25\x73" "\n"
,llIIIl(&IIIIII->dev));
#if KERNEL_GT_EQ((0x1d82+244-0x1e74),(0x12db+297-0x13fe),(0x11f8+3203-0x1e61)) \
&& KERNEL_LT_EQ((0x863+6445-0x218e),(0xc87+1082-0x10bb),(0x13ec+279-0x14dc))























state_in_sysfs=IIIlIl->kobj.state_in_sysfs;IIIlIl->kobj.state_in_sysfs=
(0xe15+4008-0x1dbd);
#endif
IIIll=IIIIlllll(IIIIII);
#if KERNEL_GT_EQ((0x1683+2427-0x1ffc),(0x548+2843-0x105d),(0xb24+5237-0x1f7f)) \
&& KERNEL_LT_EQ((0x14d7+622-0x1743),(0x5b1+3653-0x13f0),(0x191c+2451-0x2288))

IIIlIl->kobj.state_in_sysfs=state_in_sysfs;
#endif
if(IIIll<(0xf5d+2417-0x18ce)){IIlll(
"\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20\x25\x73\x20\x6e\x6f\x74\x20\x63\x6c\x61\x69\x6d\x65\x64\x2c\x20\x65\x72\x72\x6f\x72\x20\x25\x64" "\n"
,llIIIl(&IIIIII->dev),IIIll);}else if(IIIll>(0x73f+3581-0x153c)){IIlll(
"\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20\x25\x73\x20\x61\x63\x74\x75\x61\x6c\x6c\x79\x20\x63\x6c\x61\x69\x6d\x65\x64" "\n"
,llIIIl(&IIIIII->dev));}else
{IIlll(
"\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20\x25\x73\x20\x63\x6c\x61\x69\x6d\x65\x64" "\n"
,llIIIl(&IIIIII->dev));}}}}else if(IlIlllI==BUS_NOTIFY_DEL_DEVICE){if(IllllllIl(
IIIlIl)){struct usb_interface*IIIIII=to_usb_interface(dev);struct usb_device*
llIII=interface_to_usbdev(IIIIII);if(IIIlIIIl(llIII)){



}}else if(IIllIlIIl(IIIlIl)){struct usb_device*llIII=to_usb_device(IIIlIl);if(
IIIlIIIl(llIII)){


lIllIllI(llIII);}
lIlIIIlll(llIII);}}IIlll("\x2d\x2d" "\n");return NOTIFY_OK;}struct 
notifier_block lIIlIIlI={.notifier_call=IllIlIllI,.priority=INT_MAX,
};
#endif 
#endif 

