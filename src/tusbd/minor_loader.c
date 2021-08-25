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
static ssize_t IlIIIIIlI(void*,const char __user*,size_t);static ssize_t 
IIlIIIllI(void*,char __user*,size_t);static long IllIllIIl(void*,unsigned int,
unsigned long);
#ifdef CONFIG_COMPAT
static long lIlIlIIII(void*,unsigned int,unsigned long);
#endif
static int lIIlIIllI(void*,int);static int llllllllI(void*,int);static unsigned 
int IIIllIIll(void*,struct file*,poll_table*lIIllI);static int lIIlllIIl(struct 
IIIlll*lllll,const char __user*IllIl);static int llIlIIIII(struct IIIlll*lllll,
const struct llllIIlIl __user*ioctl);static int llllIIIll(struct IIIlll*lllll,
struct llllIIIlI __user*ioctl);static int llIIIIllI(struct IIIlll*lllll,const 
struct llIIIlIII __user*ioctl);static int lIlIIllIl(struct IIIlll*lllll,const 
struct IllllIIlI __user*ioctl);static int lllllllIl(struct IIIlll*lllll,const 
struct IIIlIIIlI __user*ioctl);static int lIlIlIlIl(struct IIIlll*lllll,const 
struct IlllllllI __user*ioctl);static int IllIlllll(struct IIIlll*lllll,const 
char __user*IllIl);static int IllIIlIIl(struct IIIlll*lllll,const struct 
IllllllII __user*ioctl);struct lIIIllll llllIlIll[]={{"\x74\x79\x70\x65",
"\x6c\x6f\x61\x64\x65\x72",NULL},{NULL,NULL,NULL}};struct IIIlll*IIIlllIIl(void)
{struct IIIlll*lllll;lllll=lIllllI(sizeof(*lllll),GFP_KERNEL);if(lllll){
mutex_init(&lllll->mutex);lllll->context=lllll;lllll->llIllI=-
(0x751+5397-0x1c65);lllll->ops.open=lIIlIIllI;lllll->ops.release=llllllllI;lllll
->ops.unlocked_ioctl=IllIllIIl;
#ifdef CONFIG_COMPAT
lllll->ops.compat_ioctl=lIlIlIIII;
#endif
lllll->ops.read=IIlIIIllI;lllll->ops.write=IlIIIIIlI;lllll->ops.poll=IIIllIIll;
lllll->IlllIIII=llllIlIll;if(IllllIlI(lllll,(0x906+5891-0x2009),
(0xa52+2525-0x142f))<(0x5d7+795-0x8f2)){lIlIll(lllll);lllll=NULL;}}return lllll;
}void lIlIIIIlI(struct IIIlll*lllll){if(lllll){lllIllII(lllll);lIlIll(lllll);}}
static ssize_t IIlIIIllI(void*context,char __user*IllIl,size_t IIIIl){
ssize_t IlIlI=(0x52f+7489-0x2270);lIlll(
"\x75\x73\x62\x64\x5f\x6c\x6f\x61\x64\x65\x72\x5f\x72\x65\x61\x64\x3a\x20\x62\x75\x66\x20\x69\x73\x20\x30\x78\x25\x70\x2c\x20\x72\x65\x71\x75\x65\x73\x74\x65\x64\x20\x25\x6c\x75\x20\x62\x79\x74\x65\x73" "\n"
,IllIl,(unsigned long)IIIIl);return IlIlI;}static ssize_t IlIIIIIlI(void*context
,const char __user*IllIl,size_t IIIIl){
ssize_t IlIlI=IIIIl;lIlll(
"\x75\x73\x62\x64\x5f\x6c\x6f\x61\x64\x65\x72\x5f\x77\x72\x69\x74\x65\x3a\x20\x62\x75\x66\x20\x69\x73\x20\x30\x78\x25\x70\x2c\x20\x72\x65\x71\x75\x65\x73\x74\x65\x64\x20\x25\x6c\x75\x20\x62\x79\x74\x65\x73" "\n"
,IllIl,(unsigned long)IIIIl);return IlIlI;}static long lIIIllIlI(void*context,
unsigned int lIIIIl,void __user*IlIIII){struct IIIlll*lllll=context;ssize_t 
IlIlI=(0x95f+5082-0x1d39);lIlll(
"\x75\x73\x62\x64\x5f\x6c\x6f\x61\x64\x65\x72\x5f\x64\x6f\x5f\x69\x6f\x63\x74\x6c\x3a\x20\x2b\x2b\x20\x63\x6d\x64\x3d\x25\x64\x20\x61\x72\x67\x3d\x30\x78\x25\x70" "\n"
,lIIIIl,IlIIII);switch(lIIIIl){case IIIlIIIlll:IlIlI=lIIlllIIl(lllll,IlIIII);
break;case IlllIlIIl:IlIlI=llIlIIIII(lllll,IlIIII);break;case IIIIllllI:IlIlI=
llllIIIll(lllll,IlIIII);break;case IIIlIllII:IlIlI=llIIIIllI(lllll,IlIIII);break
;case IIllIlIlI:IlIlI=lIlIIllIl(lllll,IlIIII);break;case IIIlIIIIl:IlIlI=
lllllllIl(lllll,IlIIII);break;case IIllIIlIl:IlIlI=lIlIlIlIl(lllll,IlIIII);break
;
#if (0x172f+1870-0x1e7d)
case IlIlllIlll:IlIlI=IlllllIll(lllll,IlIIII);break;
#endif
case IIIlIIlII:IlIlI=IllIlllll(lllll,IlIIII);break;case IlllIIIII:IlIlI=
IllIIlIIl(lllll,IlIIII);break;default:lIlll(
"\x75\x73\x62\x64\x5f\x6c\x6f\x61\x64\x65\x72\x5f\x64\x6f\x5f\x69\x6f\x63\x74\x6c\x3a\x20\x75\x6e\x6b\x6e\x6f\x77\x6e\x20\x69\x6f\x63\x74\x6c" "\n"
);IlIlI=-EINVAL;break;}lIlll(
"\x75\x73\x62\x64\x5f\x6c\x6f\x61\x64\x65\x72\x5f\x64\x6f\x5f\x69\x6f\x63\x74\x6c\x3a\x20\x2d\x2d\x20\x72\x65\x73\x75\x6c\x74\x3d\x25\x6c\x75" "\n"
,(unsigned long)IlIlI);return IlIlI;}static long IllIllIIl(void*context,unsigned
 int lIIIIl,unsigned long IlIIII){lIlll(
"\x75\x73\x62\x64\x5f\x6c\x6f\x61\x64\x65\x72\x5f\x69\x6f\x63\x74\x6c" "\n");
return lIIIllIlI(context,lIIIIl,(void __user*)IlIIII);}
#ifdef CONFIG_COMPAT
static long lIlIlIIII(void*context,unsigned int lIIIIl,unsigned long IlIIII){
lIlll(
"\x75\x73\x62\x64\x5f\x6c\x6f\x61\x64\x65\x72\x5f\x63\x6f\x6d\x70\x61\x74\x5f\x69\x6f\x63\x74\x6c" "\n"
);return lIIIllIlI(context,lIIIIl,compat_ptr(IlIIII));}
#endif


static int lIIlIIllI(void*context,int IIIIIlI){
lIlll(
"\x75\x73\x62\x64\x5f\x6c\x6f\x61\x64\x65\x72\x5f\x6f\x70\x65\x6e\x20\x25\x64" "\n"
,IIIIIlI);
return(0x700+4024-0x16b8);}

static int llllllllI(void*context,int IIIIIlI){
lIlll(
"\x75\x73\x62\x64\x5f\x6c\x6f\x61\x64\x65\x72\x5f\x72\x65\x6c\x65\x61\x73\x65\x20\x25\x64" "\n"
,IIIIIlI);if(IIIIIlI==(0x137f+1956-0x1b23)){
IlIIllll();}return(0x1383+3405-0x20d0);}static unsigned int IIIllIIll(void*
context,struct file*lIlllI,poll_table*lIIllI){
return(POLLOUT|POLLWRNORM);}static int lIIlllIIl(struct IIIlll*lllll,const char 
__user*IllIl){int IlIlI=(0x578+7254-0x21ce);const char __user*lIIlIIIl;struct 
list_head lIlIllII;struct IlIIlIIlI lllIlII;lllII lllIlI;lIIIl("\x2b\x2b" "\n");
INIT_LIST_HEAD(&lIlIllII);if(copy_from_user(&lllIlII,IllIl,sizeof(lllIlII))){
return-EFAULT;}lIIlIIIl=IllIl+lllIlII.lIIlII.lIlllll;if(IllIl+sizeof(lllIlII)>
lIIlIIIl){return-EINVAL;}IllIl+=sizeof(lllIlII);lIIIl(
"\x63\x6f\x75\x6e\x74\x3d\x25\x64" "\n",lllIlII.lIIlIIII);for(lllIlI=
(0x13b4+2336-0x1cd4);lllIlI<lllIlII.lIIlIIII;lllIlI++){size_t lIllllll;size_t 
lIlIlllI;struct IIlIIIll llIlI;struct IllIIIll*IlIlIl;if(IllIl+sizeof(llIlI)>
lIIlIIIl){IlIlI=-EINVAL;break;}if(copy_from_user(&llIlI,IllIl,sizeof(llIlI))){
IlIlI=-EFAULT;break;}if((llIlI.IIlllIl&IIlllllII)&&(llIlI.IIlllIl&llllllIlI)){
IlIlI=-EINVAL;break;}if((llIlI.IIlllIl&llIIIlIlI)&&llIlI.lllIIIl<=
(0x413+8561-0x2584)){
IlIlI=-EINVAL;break;}if((llIlI.IIlllIl&IlllllIIl)&&llIlI.lIIllIIl<=
(0xbf4+4863-0x1ef3)){
IlIlI=-EINVAL;break;}if((llIlI.IIlllIl&IlIlIIlII)&&llIlI.IllIlllI<=
(0xeff+1998-0x16cd)){
IlIlI=-EINVAL;break;}lIlIlllI=sizeof(struct IIlIIIll)+llIlI.lllIIIl+llIlI.
lIIllIIl+llIlI.IllIlllI;lIllllll=sizeof(struct IllIIIll)-sizeof(struct IIlIIIll)
+lIlIlllI;if(IllIl+lIlIlllI>lIIlIIIl){IlIlI=-EINVAL;break;}IlIlIl=IllIllI(
lIllllll,GFP_KERNEL);if(IlIlIl==NULL){IlIlI=-ENOMEM;break;}if(copy_from_user(&
IlIlIl->llIlI,IllIl,lIlIlllI)){lIlIll(IlIlIl);IlIlI=-EFAULT;break;}if((llIlI.
IIlllIl&llIIIlIlI)&&*((char*)(&IlIlIl->llIlI+(0x739+3211-0x13c3))+llIlI.lllIIIl-
(0x199f+2318-0x22ac))!='\0'){
lIlIll(IlIlIl);IlIlI=-EINVAL;break;}if((llIlI.IIlllIl&IlllllIIl)&&*((char*)(&
IlIlIl->llIlI+(0x90b+342-0xa60))+llIlI.lllIIIl+llIlI.lIIllIIl-
(0xedc+4523-0x2086))!='\0'){
lIlIll(IlIlIl);IlIlI=-EINVAL;break;}if((llIlI.IIlllIl&IlIlIIlII)&&*((char*)(&
IlIlIl->llIlI+(0x1571+2798-0x205e))+llIlI.lllIIIl+llIlI.lIIllIIl+llIlI.IllIlllI-
(0x1242+4295-0x2308))!='\0'){
lIlIll(IlIlIl);IlIlI=-EINVAL;break;}lIIIl(
"\x56\x3d\x25\x30\x34\x58\x20\x50\x3d\x25\x30\x34\x58\x20\x52\x3d\x25\x30\x34\x58\x20\x43\x3d\x25\x30\x32\x58\x20\x53\x3d\x25\x30\x32\x58\x20\x50\x3d\x25\x30\x32\x58\x20\x50\x3d\x25\x73\x20\x53\x4e\x3d\x25\x73\x20\x49\x4e\x3d\x25\x73\x20\x46\x3d\x25\x30\x38\x58" "\n"
,IlIlIl->llIlI.llIIIlII,IlIlIl->llIlI.IIIIllll,IlIlIl->llIlI.IlIIllIl,IlIlIl->
llIlI.lIIIIIIl,IlIlIl->llIlI.lIlllllI,IlIlIl->llIlI.lllIIlII,IlIlIl->llIlI.
lllIIIl?(char*)(&IlIlIl->llIlI+(0xb47+5757-0x21c3)):"\x6e\x6f\x6e\x65",IlIlIl->
llIlI.lIIllIIl?(char*)(&IlIlIl->llIlI+(0x46+958-0x403))+IlIlIl->llIlI.lllIIIl:
"\x6e\x6f\x6e\x65",IlIlIl->llIlI.IllIlllI?(char*)(&IlIlIl->llIlI+
(0x80c+1418-0xd95))+IlIlIl->llIlI.lllIIIl+IlIlIl->llIlI.lIIllIIl:
"\x6e\x6f\x6e\x65",IlIlIl->llIlI.IIlllIl);list_add_tail(&IlIlIl->entry,&lIlIllII
);IllIl+=lIlIlllI;}
if(lllIlI!=lllIlII.lIIlIIII){IlIlI=-EINVAL;}
if(IlIlI>=(0xd15+4441-0x1e6e)){lIIIl("\x75\x70\x64\x61\x74\x65" "\n");lIlIIIlII(
&lIlIllII);}
if(IlIlI<(0x749+3519-0x1508)){while(!list_empty(&lIlIllII)){struct IllIIIll*
IIlIIll;IIlIIll=list_entry(lIlIllII.next,struct IllIIIll,entry);list_del(&
IIlIIll->entry);lIlIll(IIlIIll);}}lIIIl(
"\x2d\x2d\x20\x72\x65\x73\x75\x6c\x74\x3d\x25\x64" "\n",IlIlI);return IlIlI;}
static int llIlIIIII(struct IIIlll*lllll,const struct llllIIlIl __user*ioctl){
int IlIlI;lllII IlIll;lIIIl("\x2b\x2b" "\n");do
{if(get_user(IlIll,&ioctl->lIIlII.lIlllll)<(0x21fb+221-0x22d8)){IlIlI=-EFAULT;
break;}if(IlIll!=sizeof(*ioctl)){IlIlI=-EINVAL;break;}IlIIllll();IlIlI=
(0x2fa+6619-0x1cd5);}while((0x3b1+3627-0x11dc));lIIIl(
"\x2d\x2d\x20\x72\x65\x73\x75\x6c\x74\x3d\x25\x64" "\n",IlIlI);return IlIlI;}
static int llllIIIll(struct IIIlll*lllll,struct llllIIIlI __user*ioctl){int 
IlIlI=-ENODEV;lllII IlIll;lIIIl("\x2b\x2b" "\n");do
{lIllIl IlIIIIlIl;char IIllI[sizeof(ioctl->IIllI)+(0x2c0+6930-0x1dd1)];struct 
usb_device*IlIIl;if(get_user(IlIll,&ioctl->lIIlII.lIlllll)<(0x1a57+45-0x1a84)){
IlIlI=-EFAULT;break;}if(IlIll!=sizeof(*ioctl)){IlIlI=-EINVAL;break;}if(get_user(
IlIIIIlIl,&ioctl->IlIIIIlIl)<(0x1b6d+818-0x1e9f)){IlIlI=-EFAULT;break;}IIllI[
sizeof(IIllI)-(0x404+1450-0x9ad)]='\0';if(copy_from_user(IIllI,&ioctl->IIllI,
sizeof(ioctl->IIllI))){IlIlI=-EFAULT;break;}IlIlI=-ENODEV;IlIIl=IllIllII(IIllI);
if(IlIIl){usb_lock_device(IlIIl);
#if KERNEL_LT_EQ((0xc0f+5275-0x20a8),(0x1779+1540-0x1d77),(0x12cd+2138-0x1b12))
down_write(&IlIIl->dev.bus->subsys.rwsem);
#endif
if(IIIIlIII(IlIIl)){IlIlI=IllIIIIl(IlIIl);}else{lIIIl(
"\x64\x65\x76\x69\x63\x65\x20\x25\x73\x20\x6e\x6f\x74\x20\x73\x68\x61\x72\x65\x64" "\n"
,IIllI);}
#if KERNEL_LT_EQ((0x896+3287-0x156b),(0x8e3+2898-0x142f),(0x851+1059-0xc5f))
up_write(&IlIIl->dev.bus->subsys.rwsem);
#endif
usb_unlock_device(IlIIl);usb_put_dev(IlIIl);}else{lIIIl(
"\x64\x65\x76\x69\x63\x65\x20\x25\x73\x20\x6e\x6f\x74\x20\x66\x6f\x75\x6e\x64" "\n"
,IIllI);}}while((0xbba+517-0xdbf));lIIIl(
"\x2d\x2d\x20\x72\x65\x73\x75\x6c\x74\x3d\x25\x64" "\n",IlIlI);return IlIlI;}
static int llIIIIllI(struct IIIlll*lllll,const struct llIIIlIII __user*ioctl){
int IlIlI=-ENODEV;lllII IlIll;lIIIl("\x2b\x2b" "\n");do
{char IIllI[sizeof(ioctl->IIllI)+(0x2486+376-0x25fd)];lIllIl IlIIIIlI;struct 
usb_device*IlIIl;if(get_user(IlIll,&ioctl->lIIlII.lIlllll)<(0x899+3988-0x182d)){
IlIlI=-EFAULT;break;}if(IlIll!=sizeof(*ioctl)){IlIlI=-EINVAL;break;}if(get_user(
IlIIIIlI,&ioctl->IlIIIIlI)<(0x2181+639-0x2400)){IlIlI=-EFAULT;break;}IIllI[
sizeof(IIllI)-(0xf90+2675-0x1a02)]='\0';if(copy_from_user(IIllI,&ioctl->IIllI,
sizeof(ioctl->IIllI))){IlIlI=-EFAULT;break;}IlIlI=-ENODEV;IlIIl=IllIllII(IIllI);
if(IlIIl){usb_lock_device(IlIIl);
#if KERNEL_LT_EQ((0x3c4+668-0x65e),(0xd21+2158-0x1589),(0xb8c+4167-0x1bbe))
down_write(&IlIIl->dev.bus->subsys.rwsem);
#endif
IIIIIIII(IlIIl,IlIIIIlI);IlIlI=(0xfdc+148-0x1070);
#if KERNEL_LT_EQ((0x15c9+439-0x177e),(0x1685+2448-0x200f),(0xd74+4622-0x1f6d))
up_write(&IlIIl->dev.bus->subsys.rwsem);
#endif
usb_unlock_device(IlIIl);usb_put_dev(IlIIl);}else{lIIIl(
"\x64\x65\x76\x69\x63\x65\x20\x25\x73\x20\x6e\x6f\x74\x20\x66\x6f\x75\x6e\x64" "\n"
,IIllI);}}while((0x2067+328-0x21af));lIIIl(
"\x2d\x2d\x20\x72\x65\x73\x75\x6c\x74\x3d\x25\x64" "\n",IlIlI);return IlIlI;}
static int lIlIIllIl(struct IIIlll*lllll,const struct IllllIIlI __user*ioctl){
int IlIlI=-ENODEV;lllII IlIll;lIIIl("\x2b\x2b" "\n");do
{char IIllI[sizeof(ioctl->IIllI)+(0x38a+3008-0xf49)];struct usb_device*IlIIl;if(
get_user(IlIll,&ioctl->lIIlII.lIlllll)<(0x3bb+369-0x52c)){IlIlI=-EFAULT;break;}
if(IlIll!=sizeof(*ioctl)){IlIlI=-EINVAL;break;}IIllI[sizeof(IIllI)-
(0x2270+363-0x23da)]='\0';if(copy_from_user(IIllI,&ioctl->IIllI,sizeof(ioctl->
IIllI))){IlIlI=-EFAULT;break;}IlIlI=-ENODEV;IlIIl=IllIllII(IIllI);if(IlIIl){
usb_lock_device(IlIIl);
#if KERNEL_LT_EQ((0x834+2902-0x1388),(0x17a8+798-0x1ac0),(0x18b2+1642-0x1f07))
down_write(&IlIIl->dev.bus->subsys.rwsem);
#endif
if(IIIIlIII(IlIIl)){IlIlI=IllIIIIl(IlIIl);}else{IIIIIIII(IlIIl,
(0x570+4415-0x16ae));IlIlI=(0xe42+2101-0x1677);}
#if KERNEL_LT_EQ((0x352+618-0x5ba),(0x5c1+5089-0x199c),(0xb7c+5237-0x1fdc))
up_write(&IlIIl->dev.bus->subsys.rwsem);
#endif
usb_unlock_device(IlIIl);usb_put_dev(IlIIl);}else{lIIIl(
"\x64\x65\x76\x69\x63\x65\x20\x25\x73\x20\x6e\x6f\x74\x20\x66\x6f\x75\x6e\x64" "\n"
,IIllI);}}while((0x738+5438-0x1c76));lIIIl(
"\x2d\x2d\x20\x72\x65\x73\x75\x6c\x74\x3d\x25\x64" "\n",IlIlI);return IlIlI;}
static int lllllllIl(struct IIIlll*lllll,const struct IIIlIIIlI __user*ioctl){
int IlIlI=-ENODEV;lllII IlIll;lIIIl("\x2b\x2b" "\n");do
{char IIllI[sizeof(ioctl->IIllI)+(0xc82+479-0xe60)];struct usb_device*IlIIl;if(
get_user(IlIll,&ioctl->lIIlII.lIlllll)<(0xbe0+6758-0x2646)){IlIlI=-EFAULT;break;
}if(IlIll<sizeof(*ioctl)){IlIlI=-EINVAL;break;}IIllI[sizeof(IIllI)-
(0x4e6+3762-0x1397)]='\0';if(copy_from_user(IIllI,&ioctl->IIllI,sizeof(ioctl->
IIllI))){IlIlI=-EFAULT;break;}IlIlI=-ENODEV;IlIIl=IllIllII(IIllI);if(IlIIl){
usb_lock_device(IlIIl);
#if KERNEL_LT_EQ((0xfa0+416-0x113e),(0x1cdd+1980-0x2493),(0xdb4+2878-0x18dd))
down_write(&IlIIl->dev.bus->subsys.rwsem);
#endif
IlIlI=-ENOENT;if(IlIIl->actconfig){int i;for(i=(0x763+8014-0x26b1);i<IlIIl->
descriptor.bNumConfigurations;i++){struct usb_config_descriptor*config=(struct 
usb_config_descriptor*)IlIIl->rawdescriptors[i];if(config->bConfigurationValue==
IlIIl->actconfig->desc.bConfigurationValue){
if(copy_to_user((void*)(ioctl+(0x892+1390-0xdff)),(void*)config,min(IlIll-sizeof
(*ioctl),(size_t)le16_to_cpu(config->wTotalLength)))){IlIlI=-EFAULT;}else{IlIlI=
(0x354+3164-0xfb0);}break;}}}
#if KERNEL_LT_EQ((0xa42+5264-0x1ed0),(0x4b5+1901-0xc1c),(0x1d3+2406-0xb24))
up_write(&IlIIl->dev.bus->subsys.rwsem);
#endif
usb_unlock_device(IlIIl);usb_put_dev(IlIIl);}else{lIIIl(
"\x64\x65\x76\x69\x63\x65\x20\x25\x73\x20\x6e\x6f\x74\x20\x66\x6f\x75\x6e\x64" "\n"
,IIllI);}}while((0xc3d+4729-0x1eb6));lIIIl(
"\x2d\x2d\x20\x72\x65\x73\x75\x6c\x74\x3d\x25\x64" "\n",IlIlI);return IlIlI;}
static int lIlIlIlIl(struct IIIlll*lllll,const struct IlllllllI __user*ioctl){
int IlIlI=-ENODEV;lllII IlIll;lIIIl("\x2b\x2b" "\n");do
{char IIllI[sizeof(ioctl->IIllI)+(0x1cb+1503-0x7a9)];struct usb_device*IlIIl;if(
get_user(IlIll,&ioctl->lIIlII.lIlllll)<(0xd21+4038-0x1ce7)){IlIlI=-EFAULT;break;
}if(IlIll<sizeof(*ioctl)){IlIlI=-EINVAL;break;}IIllI[sizeof(IIllI)-
(0xdd9+4106-0x1de2)]='\0';if(copy_from_user(IIllI,&ioctl->IIllI,sizeof(ioctl->
IIllI))){IlIlI=-EFAULT;break;}IlIlI=-ENODEV;IlIIl=IllIllII(IIllI);if(IlIIl){
const char*IIIllllII,*llIIllII,*IlllIIIl;size_t IIlIIl;usb_lock_device(IlIIl);
#if KERNEL_LT_EQ((0xd8b+6227-0x25dc),(0xce9+6079-0x24a2),(0x5e3+5778-0x1c60))
down_write(&IlIIl->dev.bus->subsys.rwsem);
#endif
do
{IlIlI=IIIlIlII(IlIIl,&IIIllllII,&llIIllII,&IlllIIIl);if(IlIlI<
(0xd0d+3248-0x19bd)){
break;}IIlIIl=strlen(IlllIIIl)+(0x8df+2106-0x1118);if(IIlIIl>(IlIll-sizeof(*
ioctl))){
IlIlI=-EMSGSIZE;break;}if(copy_to_user((void*)(ioctl+(0x247c+89-0x24d4)),(void*)
IlllIIIl,IIlIIl)){IlIlI=-EFAULT;break;}}while((0x57a+1353-0xac3));
#if KERNEL_LT_EQ((0xd96+2883-0x18d7),(0xd47+3718-0x1bc7),(0x628+3785-0x14dc))
up_write(&IlIIl->dev.bus->subsys.rwsem);
#endif
usb_unlock_device(IlIIl);usb_put_dev(IlIIl);}else{lIIIl(
"\x64\x65\x76\x69\x63\x65\x20\x25\x73\x20\x6e\x6f\x74\x20\x66\x6f\x75\x6e\x64" "\n"
,IIllI);}}while((0x7a+6173-0x1897));lIIIl(
"\x2d\x2d\x20\x72\x65\x73\x75\x6c\x74\x3d\x25\x64" "\n",IlIlI);return IlIlI;}
#if (0xa7c+2836-0x1590)
static int IlllllIll(struct IIIlll*lllll,const struct IIIIIIlll __user*ioctl){
int IlIlI=-ENODEV;lllII IlIll;lIIIl("\x2b\x2b" "\n");do
{char IIllI[sizeof(ioctl->IIllI)+(0x9ba+6523-0x2334)];struct usb_device*IlIIl;
lIllIl speed;if(get_user(IlIll,&ioctl->lIIlII.lIlllll)<(0x239+6712-0x1c71)){
IlIlI=-EFAULT;break;}if(IlIll<sizeof(*ioctl)){IlIlI=-EINVAL;break;}IIllI[sizeof(
IIllI)-(0xe85+3825-0x1d75)]='\0';if(copy_from_user(IIllI,&ioctl->IIllI,sizeof(
ioctl->IIllI))){IlIlI=-EFAULT;break;}IlIlI=-ENODEV;IlIIl=IllIllII(IIllI);if(
IlIIl){const char*IIIllllII,*llIIllII,*IlllIIIl;usb_lock_device(IlIIl);
#if KERNEL_LT_EQ((0x314+2346-0xc3c),(0xa8d+237-0xb74),(0xaff+4785-0x1d9b))
down_write(&IlIIl->dev.bus->subsys.rwsem);
#endif
do
{IlIlI=IIIlIlII(IlIIl,&IIIllllII,&llIIllII,&IlllIIIl);if(IlIlI<
(0x8f9+4943-0x1c48)){
break;}if(put_user(le16_to_cpu(IlIIl->descriptor.idVendor),&ioctl->llIIIlII)<
(0x214d+19-0x2160)){IlIlI=-EFAULT;break;}if(put_user(le16_to_cpu(IlIIl->
descriptor.idProduct),&ioctl->IIIIllll)<(0x138c+2000-0x1b5c)){IlIlI=-EFAULT;
break;}if(put_user(le16_to_cpu(IlIIl->descriptor.bcdDevice),&ioctl->IlIIllIl)<
(0x919+7267-0x257c)){IlIlI=-EFAULT;break;}if(put_user(le16_to_cpu(IlIIl->
descriptor.IIllIllI),&ioctl->IIllIllI)<(0x883+6573-0x2230)){IlIlI=-EFAULT;break;
}if(put_user(IlIIl->descriptor.bDeviceClass,&ioctl->lIIIIIIl)<
(0x15c0+3568-0x23b0)){IlIlI=-EFAULT;break;}if(put_user(IlIIl->descriptor.
bDeviceSubClass,&ioctl->lIlllllI)<(0x901+2858-0x142b)){IlIlI=-EFAULT;break;}if(
put_user(IlIIl->descriptor.bDeviceProtocol,&ioctl->lllIIlII)<(0x558+7510-0x22ae)
){IlIlI=-EFAULT;break;}switch(IlIIl->speed){case USB_SPEED_LOW:speed=IIllllIll;
break;case USB_SPEED_FULL:speed=IIIlIIIII;break;case USB_SPEED_HIGH:speed=
lIIIllIII;break;case USB_SPEED_SUPER:speed=IIIllIlII;break;default:speed=
lIIIlIIIl;break;}if(put_user(speed,&ioctl->lIlIllIII)<(0x195a+1390-0x1ec8)){
IlIlI=-EFAULT;break;}if(copy_to_user((void*)&ioctl->IIIlIII,(void*)IlllIIIl,
strlen(IlllIIIl)+(0x4c1+3642-0x12fa))){IlIlI=-EFAULT;break;}if(copy_to_user((
void*)&ioctl->serial,(void*)llIIllII,strlen(llIIllII)+(0x59b+1622-0xbf0))){IlIlI
=-EFAULT;break;}if(copy_to_user((void*)&ioctl->description,(void*),strlen()+
(0x1132+5302-0x25e7))){IlIlI=-EFAULT;break;}}while((0xdc4+4096-0x1dc4));
#if KERNEL_LT_EQ((0x671+5583-0x1c3e),(0xcc3+667-0xf58),(0x1301+4487-0x2473))
up_write(&IlIIl->dev.bus->subsys.rwsem);
#endif
usb_unlock_device(IlIIl);usb_put_dev(IlIIl);}else{lIIIl(
"\x64\x65\x76\x69\x63\x65\x20\x25\x73\x20\x6e\x6f\x74\x20\x66\x6f\x75\x6e\x64" "\n"
,IIllI);}}while((0xd1b+2957-0x18a8));lIIIl(
"\x2d\x2d\x20\x72\x65\x73\x75\x6c\x74\x3d\x25\x64" "\n",IlIlI);return IlIlI;}
#endif
static int IllIlllll(struct IIIlll*lllll,const char __user*IllIl){int IlIlI=
(0xd7d+3041-0x195e);const char __user*lIIlIIIl;struct list_head IlIlIIlI;struct 
IIlllllll lllIlII;lllII lllIlI;lIIIl("\x2b\x2b" "\n");INIT_LIST_HEAD(&IlIlIIlI);
if(copy_from_user(&lllIlII,IllIl,sizeof(lllIlII))){return-EFAULT;}lIIlIIIl=IllIl
+lllIlII.lIIlII.lIlllll;if(IllIl+sizeof(lllIlII)>lIIlIIIl){return-EINVAL;}IllIl
+=sizeof(lllIlII);lIIIl("\x63\x6f\x75\x6e\x74\x3d\x25\x64" "\n",lllIlII.lIIlIIII
);for(lllIlI=(0x3a4+5069-0x1771);lllIlI<lllIlII.lIIlIIII;lllIlI++){size_t 
lIllllll;size_t lIlIlIlI;struct IIllllll lIIlllI;struct IIlllIlI*IlIlIl;if(IllIl
+sizeof(lIIlllI)>lIIlIIIl){IlIlI=-EINVAL;break;}if(copy_from_user(&lIIlllI,IllIl
,sizeof(lIIlllI))){IlIlI=-EFAULT;break;}lIlIlIlI=sizeof(struct IIllllll);
lIllllll=sizeof(struct IIlllIlI);if(IllIl+lIlIlIlI>lIIlIIIl){IlIlI=-EINVAL;break
;}IlIlIl=IllIllI(lIllllll,GFP_KERNEL);if(IlIlIl==NULL){IlIlI=-ENOMEM;break;}if(
copy_from_user(&IlIlIl->lIIlllI,IllIl,lIlIlIlI)){lIlIll(IlIlIl);IlIlI=-EFAULT;
break;}lIIIl(
"\x56\x3d\x25\x30\x34\x58\x20\x50\x3d\x25\x30\x34\x58\x20\x51\x3d\x30\x78\x25\x30\x38\x58" "\n"
,IlIlIl->lIIlllI.llIIIlII,IlIlIl->lIIlllI.IIIIllll,IlIlIl->lIIlllI.lIIlIllIl);
list_add_tail(&IlIlIl->entry,&IlIlIIlI);IllIl+=lIlIlIlI;}
if(lllIlI!=lllIlII.lIIlIIII){IlIlI=-EINVAL;}
if(IlIlI>=(0x15b1+223-0x1690)){lIIIl("\x75\x70\x64\x61\x74\x65" "\n");lIIIIlIll(
&IlIlIIlI);}
if(IlIlI<(0x44a+2898-0xf9c)){while(!list_empty(&IlIlIIlI)){struct IIlllIlI*
IIlIIll;IIlIIll=list_entry(IlIlIIlI.next,struct IIlllIlI,entry);list_del(&
IIlIIll->entry);lIlIll(IIlIIll);}}lIIIl(
"\x2d\x2d\x20\x72\x65\x73\x75\x6c\x74\x3d\x25\x64" "\n",IlIlI);return IlIlI;}
static int IllIIlIIl(struct IIIlll*lllll,const struct IllllllII __user*ioctl){
int IlIlI;lllII IlIll;lIIIl("\x2b\x2b" "\n");do
{if(get_user(IlIll,&ioctl->lIIlII.lIlllll)<(0xecb+3113-0x1af4)){IlIlI=-EFAULT;
break;}if(IlIll!=sizeof(*ioctl)){IlIlI=-EINVAL;break;}IlIIIlIIl();IlIlI=
(0xfe2+3723-0x1e6d);}while((0x26a+5184-0x16aa));lIIIl(
"\x2d\x2d\x20\x72\x65\x73\x75\x6c\x74\x3d\x25\x64" "\n",IlIlI);return IlIlI;}
#endif 

