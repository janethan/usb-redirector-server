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
static ssize_t lllIIIIll(void*,const char __user*,size_t);static ssize_t 
IIlIIIllI(void*,char __user*,size_t);static long IllIllIIl(void*,unsigned int,
unsigned long);
#ifdef CONFIG_COMPAT
static long lIlIlIIII(void*,unsigned int,unsigned long);
#endif
static int lllIlIlll(void*,int);static int llllllllI(void*,int);static unsigned 
int IIIllIIll(void*,struct file*,poll_table*lIIllI);static int lIIlllIIl(struct 
IIIlll*IIlII,const char __user*IIIlI);static int lllIllllI(struct IIIlll*IIlII,
const struct llllIIlIl __user*ioctl);static int llllIIIll(struct IIIlll*IIlII,
struct lllIlIlII __user*ioctl);static int llIIIIllI(struct IIIlll*IIlII,const 
struct llIIIlIII __user*ioctl);static int lIlIIllIl(struct IIIlll*IIlII,const 
struct IllllIIlI __user*ioctl);static int lllllllIl(struct IIIlll*IIlII,const 
struct IIIlIIIlI __user*ioctl);static int lIlIlIlIl(struct IIIlll*IIlII,const 
struct IlllllllI __user*ioctl);static int IllIlllll(struct IIIlll*IIlII,const 
char __user*IIIlI);static int IllIIlIIl(struct IIIlll*IIlII,const struct 
IllllllII __user*ioctl);struct lllIIIlI llllIlIll[]={{"\x74\x79\x70\x65",
"\x6c\x6f\x61\x64\x65\x72",NULL},{NULL,NULL,NULL}};struct IIIlll*IIIlllIIl(void)
{struct IIIlll*IIlII;IIlII=lIllllI(sizeof(*IIlII),GFP_KERNEL);if(IIlII){
mutex_init(&IIlII->mutex);IIlII->context=IIlII;IIlII->llIllI=-
(0x9c4+2722-0x1465);IIlII->ops.open=lllIlIlll;IIlII->ops.release=llllllllI;IIlII
->ops.unlocked_ioctl=IllIllIIl;
#ifdef CONFIG_COMPAT
IIlII->ops.compat_ioctl=lIlIlIIII;
#endif
IIlII->ops.read=IIlIIIllI;IIlII->ops.write=lllIIIIll;IIlII->ops.poll=IIIllIIll;
IIlII->IIllllIl=llllIlIll;if(IllllIlI(IIlII,(0x551+7875-0x2414),
(0x1bfd+1686-0x2293))<(0x393+6816-0x1e33)){lIlIll(IIlII);IIlII=NULL;}}return 
IIlII;}void IIIIIllll(struct IIIlll*IIlII){if(IIlII){lllIllII(IIlII);lIlIll(
IIlII);}}static ssize_t IIlIIIllI(void*context,char __user*IIIlI,size_t IlIII){
ssize_t IIIll=(0x754+5638-0x1d5a);Illll(
"\x75\x73\x62\x64\x5f\x6c\x6f\x61\x64\x65\x72\x5f\x72\x65\x61\x64\x3a\x20\x62\x75\x66\x20\x69\x73\x20\x30\x78\x25\x70\x2c\x20\x72\x65\x71\x75\x65\x73\x74\x65\x64\x20\x25\x6c\x75\x20\x62\x79\x74\x65\x73" "\n"
,IIIlI,(unsigned long)IlIII);return IIIll;}static ssize_t lllIIIIll(void*context
,const char __user*IIIlI,size_t IlIII){
ssize_t IIIll=IlIII;Illll(
"\x75\x73\x62\x64\x5f\x6c\x6f\x61\x64\x65\x72\x5f\x77\x72\x69\x74\x65\x3a\x20\x62\x75\x66\x20\x69\x73\x20\x30\x78\x25\x70\x2c\x20\x72\x65\x71\x75\x65\x73\x74\x65\x64\x20\x25\x6c\x75\x20\x62\x79\x74\x65\x73" "\n"
,IIIlI,(unsigned long)IlIII);return IIIll;}static long lIIIllIlI(void*context,
unsigned int lIIIIl,void __user*IlIIII){struct IIIlll*IIlII=context;ssize_t 
IIIll=(0xd8f+4687-0x1fde);Illll(
"\x75\x73\x62\x64\x5f\x6c\x6f\x61\x64\x65\x72\x5f\x64\x6f\x5f\x69\x6f\x63\x74\x6c\x3a\x20\x2b\x2b\x20\x63\x6d\x64\x3d\x25\x64\x20\x61\x72\x67\x3d\x30\x78\x25\x70" "\n"
,lIIIIl,IlIIII);switch(lIIIIl){case IlIIIIIIIl:IIIll=lIIlllIIl(IIlII,IlIIII);
break;case IlllIlIIl:IIIll=lllIllllI(IIlII,IlIIII);break;case IIIIllllI:IIIll=
llllIIIll(IIlII,IlIIII);break;case IIIlIllII:IIIll=llIIIIllI(IIlII,IlIIII);break
;case IIllIlIlI:IIIll=lIlIIllIl(IIlII,IlIIII);break;case IIIlIIIIl:IIIll=
lllllllIl(IIlII,IlIIII);break;case IIllIIlIl:IIIll=lIlIlIlIl(IIlII,IlIIII);break
;
#if (0x94+7469-0x1dc1)
case IIlIIIIIII:IIIll=IlllllIll(IIlII,IlIIII);break;
#endif
case lIlIlIIlI:IIIll=IllIlllll(IIlII,IlIIII);break;case IIIlIIlIl:IIIll=
IllIIlIIl(IIlII,IlIIII);break;default:Illll(
"\x75\x73\x62\x64\x5f\x6c\x6f\x61\x64\x65\x72\x5f\x64\x6f\x5f\x69\x6f\x63\x74\x6c\x3a\x20\x75\x6e\x6b\x6e\x6f\x77\x6e\x20\x69\x6f\x63\x74\x6c" "\n"
);IIIll=-EINVAL;break;}Illll(
"\x75\x73\x62\x64\x5f\x6c\x6f\x61\x64\x65\x72\x5f\x64\x6f\x5f\x69\x6f\x63\x74\x6c\x3a\x20\x2d\x2d\x20\x72\x65\x73\x75\x6c\x74\x3d\x25\x6c\x75" "\n"
,(unsigned long)IIIll);return IIIll;}static long IllIllIIl(void*context,unsigned
 int lIIIIl,unsigned long IlIIII){Illll(
"\x75\x73\x62\x64\x5f\x6c\x6f\x61\x64\x65\x72\x5f\x69\x6f\x63\x74\x6c" "\n");
return lIIIllIlI(context,lIIIIl,(void __user*)IlIIII);}
#ifdef CONFIG_COMPAT
static long lIlIlIIII(void*context,unsigned int lIIIIl,unsigned long IlIIII){
Illll(
"\x75\x73\x62\x64\x5f\x6c\x6f\x61\x64\x65\x72\x5f\x63\x6f\x6d\x70\x61\x74\x5f\x69\x6f\x63\x74\x6c" "\n"
);return lIIIllIlI(context,lIIIIl,compat_ptr(IlIIII));}
#endif


static int lllIlIlll(void*context,int IIIIIlI){
Illll(
"\x75\x73\x62\x64\x5f\x6c\x6f\x61\x64\x65\x72\x5f\x6f\x70\x65\x6e\x20\x25\x64" "\n"
,IIIIIlI);
return(0x13f2+2213-0x1c97);}

static int llllllllI(void*context,int IIIIIlI){
Illll(
"\x75\x73\x62\x64\x5f\x6c\x6f\x61\x64\x65\x72\x5f\x72\x65\x6c\x65\x61\x73\x65\x20\x25\x64" "\n"
,IIIIIlI);if(IIIIIlI==(0x2ab+7846-0x2151)){
IIlIIlII();}return(0xf23+5443-0x2466);}static unsigned int IIIllIIll(void*
context,struct file*lIlllI,poll_table*lIIllI){
return(POLLOUT|POLLWRNORM);}static int lIIlllIIl(struct IIIlll*IIlII,const char 
__user*IIIlI){int IIIll=(0x3e0+6785-0x1e61);const char __user*lIIIllII;struct 
list_head lIlIIlII;struct IlIIlIIlI lllIlII;IIIIl lllIlI;IIlll("\x2b\x2b" "\n");
INIT_LIST_HEAD(&lIlIIlII);if(copy_from_user(&lllIlII,IIIlI,sizeof(lllIlII)))
return-EFAULT;lIIIllII=IIIlI+lllIlII.lIIlII.IIllllI;if(IIIlI+sizeof(lllIlII)>
lIIIllII)return-EINVAL;IIIlI+=sizeof(lllIlII);IIlll(
"\x63\x6f\x75\x6e\x74\x3d\x25\x64" "\n",lllIlII.llllIIII);for(lllIlI=
(0xa3+9391-0x2552);lllIlI<lllIlII.llllIIII;lllIlI++){size_t IlllIlll;size_t 
lIlIlllI;struct llllllII lIIll;struct IllIlIII*IlIlIl;if(IIIlI+sizeof(lIIll)>
lIIIllII){IIIll=-EINVAL;break;}if(copy_from_user(&lIIll,IIIlI,sizeof(lIIll))){
IIIll=-EFAULT;break;}if((lIIll.IIlllIl&IIlllllII)&&(lIIll.IIlllIl&llllllIlI)){
IIIll=-EINVAL;break;}if((lIIll.IIlllIl&IIIllllIl)&&lIIll.lllIIIl<=
(0xfb6+4484-0x213a)){
IIIll=-EINVAL;break;}if((lIIll.IIlllIl&IlIlIllll)&&lIIll.IIIlllIl<=
(0x1593+2160-0x1e03)){
IIIll=-EINVAL;break;}if((lIIll.IIlllIl&llIlIlIll)&&lIIll.IllIlllI<=
(0x88a+4500-0x1a1e)){
IIIll=-EINVAL;break;}lIlIlllI=sizeof(struct llllllII)+lIIll.lllIIIl+lIIll.
IIIlllIl+lIIll.IllIlllI;IlllIlll=sizeof(struct IllIlIII)-sizeof(struct llllllII)
+lIlIlllI;if(IIIlI+lIlIlllI>lIIIllII){IIIll=-EINVAL;break;}IlIlIl=IllIllI(
IlllIlll,GFP_KERNEL);if(IlIlIl==NULL){IIIll=-ENOMEM;break;}if(copy_from_user(&
IlIlIl->lIIll,IIIlI,lIlIlllI)){lIlIll(IlIlIl);IIIll=-EFAULT;break;}if((lIIll.
IIlllIl&IIIllllIl)&&*((char*)(&IlIlIl->lIIll+(0x1aaa+2793-0x2592))+lIIll.lllIIIl
-(0x99d+3819-0x1887))!='\0'){
lIlIll(IlIlIl);IIIll=-EINVAL;break;}if((lIIll.IIlllIl&IlIlIllll)&&*((char*)(&
IlIlIl->lIIll+(0x7c0+7159-0x23b6))+lIIll.lllIIIl+lIIll.IIIlllIl-
(0x423+4664-0x165a))!='\0'){
lIlIll(IlIlIl);IIIll=-EINVAL;break;}if((lIIll.IIlllIl&llIlIlIll)&&*((char*)(&
IlIlIl->lIIll+(0x185d+837-0x1ba1))+lIIll.lllIIIl+lIIll.IIIlllIl+lIIll.IllIlllI-
(0x8f0+717-0xbbc))!='\0'){
lIlIll(IlIlIl);IIIll=-EINVAL;break;}IIlll(
"\x56\x3d\x25\x30\x34\x58\x20\x50\x3d\x25\x30\x34\x58\x20\x52\x3d\x25\x30\x34\x58\x20\x43\x3d\x25\x30\x32\x58\x20\x53\x3d\x25\x30\x32\x58\x20\x50\x3d\x25\x30\x32\x58\x20\x50\x3d\x25\x73\x20\x53\x4e\x3d\x25\x73\x20\x49\x4e\x3d\x25\x73\x20\x46\x3d\x25\x30\x38\x58" "\n"
,IlIlIl->lIIll.lIllllII,IlIlIl->lIIll.IIllIlII,IlIlIl->lIIll.lIIIlIlI,IlIlIl->
lIIll.llIlIlII,IlIlIl->lIIll.lIlllllI,IlIlIl->lIIll.IlllIlII,IlIlIl->lIIll.
lllIIIl?(char*)(&IlIlIl->lIIll+(0x313+2234-0xbcc)):"\x6e\x6f\x6e\x65",IlIlIl->
lIIll.IIIlllIl?(char*)(&IlIlIl->lIIll+(0x1119+4045-0x20e5))+IlIlIl->lIIll.
lllIIIl:"\x6e\x6f\x6e\x65",IlIlIl->lIIll.IllIlllI?(char*)(&IlIlIl->lIIll+
(0x317+8834-0x2598))+IlIlIl->lIIll.lllIIIl+IlIlIl->lIIll.IIIlllIl:
"\x6e\x6f\x6e\x65",IlIlIl->lIIll.IIlllIl);list_add_tail(&IlIlIl->entry,&lIlIIlII
);IIIlI+=lIlIlllI;}
if(lllIlI!=lllIlII.llllIIII){IIIll=-EINVAL;}
if(IIIll>=(0xb08+3509-0x18bd)){IIlll("\x75\x70\x64\x61\x74\x65" "\n");lIllIIIll(
&lIlIIlII);}
if(IIIll<(0xd18+2162-0x158a)){while(!list_empty(&lIlIIlII)){struct IllIlIII*
IIIlIIl;IIIlIIl=list_entry(lIlIIlII.next,struct IllIlIII,entry);list_del(&
IIIlIIl->entry);lIlIll(IIIlIIl);}}IIlll(
"\x2d\x2d\x20\x72\x65\x73\x75\x6c\x74\x3d\x25\x64" "\n",IIIll);return IIIll;}
static int lllIllllI(struct IIIlll*IIlII,const struct llllIIlIl __user*ioctl){
int IIIll;IIIIl IlIll;IIlll("\x2b\x2b" "\n");do
{if(get_user(IlIll,&ioctl->lIIlII.IIllllI)<(0x119a+345-0x12f3)){IIIll=-EFAULT;
break;}if(IlIll!=sizeof(*ioctl)){IIIll=-EINVAL;break;}IIlIIlII();IIIll=
(0x10d+5291-0x15b8);}while((0x6f9+1969-0xeaa));IIlll(
"\x2d\x2d\x20\x72\x65\x73\x75\x6c\x74\x3d\x25\x64" "\n",IIIll);return IIIll;}
static int llllIIIll(struct IIIlll*IIlII,struct lllIlIlII __user*ioctl){int 
IIIll=-ENODEV;IIIIl IlIll;IIlll("\x2b\x2b" "\n");do
{lIllIl lllIIllIl;char llIll[sizeof(ioctl->llIll)+(0xcbf+767-0xfbd)];struct 
usb_device*llIII;if(get_user(IlIll,&ioctl->lIIlII.IIllllI)<(0x151a+2042-0x1d14))
{IIIll=-EFAULT;break;}if(IlIll!=sizeof(*ioctl)){IIIll=-EINVAL;break;}if(get_user
(lllIIllIl,&ioctl->lllIIllIl)<(0x188d+3217-0x251e)){IIIll=-EFAULT;break;}llIll[
sizeof(llIll)-(0x539+367-0x6a7)]='\0';if(copy_from_user(llIll,&ioctl->llIll,
sizeof(ioctl->llIll))){IIIll=-EFAULT;break;}IIIll=-ENODEV;llIII=IllIllII(llIll);
if(llIII){usb_lock_device(llIII);
#if KERNEL_LT_EQ((0x1543+933-0x18e6),(0x62f+5350-0x1b0f),(0x71d+2814-0x1206))
down_write(&llIII->dev.bus->subsys.rwsem);
#endif
if(IlllIIlI(llIII)){IIIll=IIIIIlII(llIII);}else{IIlll(
"\x64\x65\x76\x69\x63\x65\x20\x25\x73\x20\x6e\x6f\x74\x20\x73\x68\x61\x72\x65\x64" "\n"
,llIll);}
#if KERNEL_LT_EQ((0x11dd+4050-0x21ad),(0x696+6662-0x2096),(0x12d8+4303-0x2392))
up_write(&llIII->dev.bus->subsys.rwsem);
#endif
usb_unlock_device(llIII);usb_put_dev(llIII);}else{IIlll(
"\x64\x65\x76\x69\x63\x65\x20\x25\x73\x20\x6e\x6f\x74\x20\x66\x6f\x75\x6e\x64" "\n"
,llIll);}}while((0x3a3+8051-0x2316));IIlll(
"\x2d\x2d\x20\x72\x65\x73\x75\x6c\x74\x3d\x25\x64" "\n",IIIll);return IIIll;}
static int llIIIIllI(struct IIIlll*IIlII,const struct llIIIlIII __user*ioctl){
int IIIll=-ENODEV;IIIIl IlIll;IIlll("\x2b\x2b" "\n");do
{char llIll[sizeof(ioctl->llIll)+(0x298+5404-0x17b3)];lIllIl IlIIIIlI;struct 
usb_device*llIII;if(get_user(IlIll,&ioctl->lIIlII.IIllllI)<(0x214+5103-0x1603)){
IIIll=-EFAULT;break;}if(IlIll!=sizeof(*ioctl)){IIIll=-EINVAL;break;}if(get_user(
IlIIIIlI,&ioctl->IlIIIIlI)<(0xc3c+5126-0x2042)){IIIll=-EFAULT;break;}llIll[
sizeof(llIll)-(0xc4c+1546-0x1255)]='\0';if(copy_from_user(llIll,&ioctl->llIll,
sizeof(ioctl->llIll))){IIIll=-EFAULT;break;}IIIll=-ENODEV;llIII=IllIllII(llIll);
if(llIII){usb_lock_device(llIII);
#if KERNEL_LT_EQ((0x7d6+7912-0x26bc),(0x189d+904-0x1c1f),(0xafa+687-0xd94))
down_write(&llIII->dev.bus->subsys.rwsem);
#endif
lllIllIl(llIII,IlIIIIlI);IIIll=(0x54f+195-0x612);
#if KERNEL_LT_EQ((0xd43+42-0xd6b),(0xa9d+1490-0x1069),(0x14d8+3141-0x2108))
up_write(&llIII->dev.bus->subsys.rwsem);
#endif
usb_unlock_device(llIII);usb_put_dev(llIII);}else{IIlll(
"\x64\x65\x76\x69\x63\x65\x20\x25\x73\x20\x6e\x6f\x74\x20\x66\x6f\x75\x6e\x64" "\n"
,llIll);}}while((0x1306+2383-0x1c55));IIlll(
"\x2d\x2d\x20\x72\x65\x73\x75\x6c\x74\x3d\x25\x64" "\n",IIIll);return IIIll;}
static int lIlIIllIl(struct IIIlll*IIlII,const struct IllllIIlI __user*ioctl){
int IIIll=-ENODEV;IIIIl IlIll;IIlll("\x2b\x2b" "\n");do
{char llIll[sizeof(ioctl->llIll)+(0xa2+2665-0xb0a)];struct usb_device*llIII;if(
get_user(IlIll,&ioctl->lIIlII.IIllllI)<(0xcb5+1086-0x10f3)){IIIll=-EFAULT;break;
}if(IlIll!=sizeof(*ioctl)){IIIll=-EINVAL;break;}llIll[sizeof(llIll)-
(0xd36+3793-0x1c06)]='\0';if(copy_from_user(llIll,&ioctl->llIll,sizeof(ioctl->
llIll))){IIIll=-EFAULT;break;}IIIll=-ENODEV;llIII=IllIllII(llIll);if(llIII){
usb_lock_device(llIII);
#if KERNEL_LT_EQ((0x101b+1860-0x175d),(0x2b6+3706-0x112a),(0x14a1+3124-0x20c0))
down_write(&llIII->dev.bus->subsys.rwsem);
#endif
if(IlllIIlI(llIII)){IIIll=IIIIIlII(llIII);}else{lllIllIl(llIII,
(0x720+6324-0x1fd3));IIIll=(0x992+6584-0x234a);}
#if KERNEL_LT_EQ((0x7cc+2928-0x133a),(0xcdc+371-0xe49),(0x1386+1746-0x1a43))
up_write(&llIII->dev.bus->subsys.rwsem);
#endif
usb_unlock_device(llIII);usb_put_dev(llIII);}else{IIlll(
"\x64\x65\x76\x69\x63\x65\x20\x25\x73\x20\x6e\x6f\x74\x20\x66\x6f\x75\x6e\x64" "\n"
,llIll);}}while((0x3d5+1914-0xb4f));IIlll(
"\x2d\x2d\x20\x72\x65\x73\x75\x6c\x74\x3d\x25\x64" "\n",IIIll);return IIIll;}
static int lllllllIl(struct IIIlll*IIlII,const struct IIIlIIIlI __user*ioctl){
int IIIll=-ENODEV;IIIIl IlIll;IIlll("\x2b\x2b" "\n");do
{char llIll[sizeof(ioctl->llIll)+(0x19ab+2584-0x23c2)];struct usb_device*llIII;
if(get_user(IlIll,&ioctl->lIIlII.IIllllI)<(0x66c+1924-0xdf0)){IIIll=-EFAULT;
break;}if(IlIll<sizeof(*ioctl)){IIIll=-EINVAL;break;}llIll[sizeof(llIll)-
(0xe76+580-0x10b9)]='\0';if(copy_from_user(llIll,&ioctl->llIll,sizeof(ioctl->
llIll))){IIIll=-EFAULT;break;}IIIll=-ENODEV;llIII=IllIllII(llIll);if(llIII){
usb_lock_device(llIII);
#if KERNEL_LT_EQ((0x14da+3169-0x2139),(0xa2a+360-0xb8c),(0x2c0+6205-0x1ae8))
down_write(&llIII->dev.bus->subsys.rwsem);
#endif
IIIll=-ENOENT;if(llIII->actconfig){int i;for(i=(0x65f+5800-0x1d07);i<llIII->
descriptor.bNumConfigurations;i++){struct usb_config_descriptor*config=(struct 
usb_config_descriptor*)llIII->rawdescriptors[i];if(config->bConfigurationValue==
llIII->actconfig->desc.bConfigurationValue){
if(copy_to_user((void*)(ioctl+(0x19cd+2207-0x226b)),(void*)config,min(IlIll-
sizeof(*ioctl),(size_t)le16_to_cpu(config->wTotalLength)))){IIIll=-EFAULT;}else{
IIIll=(0x66+6188-0x1892);}break;}}}
#if KERNEL_LT_EQ((0x1ae7+2389-0x243a),(0x4f9+1549-0xb00),(0x5af+3149-0x11e7))
up_write(&llIII->dev.bus->subsys.rwsem);
#endif
usb_unlock_device(llIII);usb_put_dev(llIII);}else{IIlll(
"\x64\x65\x76\x69\x63\x65\x20\x25\x73\x20\x6e\x6f\x74\x20\x66\x6f\x75\x6e\x64" "\n"
,llIll);}}while((0x1af9+157-0x1b96));IIlll(
"\x2d\x2d\x20\x72\x65\x73\x75\x6c\x74\x3d\x25\x64" "\n",IIIll);return IIIll;}
static int lIlIlIlIl(struct IIIlll*IIlII,const struct IlllllllI __user*ioctl){
int IIIll=-ENODEV;IIIIl IlIll;IIlll("\x2b\x2b" "\n");do
{char llIll[sizeof(ioctl->llIll)+(0x18f0+1962-0x2099)];struct usb_device*llIII;
if(get_user(IlIll,&ioctl->lIIlII.IIllllI)<(0xfb7+5028-0x235b)){IIIll=-EFAULT;
break;}if(IlIll<sizeof(*ioctl)){IIIll=-EINVAL;break;}llIll[sizeof(llIll)-
(0x9da+4710-0x1c3f)]='\0';if(copy_from_user(llIll,&ioctl->llIll,sizeof(ioctl->
llIll))){IIIll=-EFAULT;break;}IIIll=-ENODEV;llIII=IllIllII(llIll);if(llIII){
const char*IlIllIIII,*llIIllII,*IlllIIIl;size_t IIlIIl;usb_lock_device(llIII);
#if KERNEL_LT_EQ((0x1a3+5479-0x1708),(0x1b73+1364-0x20c1),(0x124a+4482-0x23b7))
down_write(&llIII->dev.bus->subsys.rwsem);
#endif
do
{IIIll=IIlIIIll(llIII,&IlIllIIII,&llIIllII,&IlllIIIl);if(IIIll<
(0x156b+3770-0x2425)){
break;}IIlIIl=strlen(IlllIIIl)+(0x1c+4781-0x12c8);if(IIlIIl>(IlIll-sizeof(*ioctl
))){
IIIll=-EMSGSIZE;break;}if(copy_to_user((void*)(ioctl+(0x1002+1427-0x1594)),(void
*)IlllIIIl,IIlIIl)){IIIll=-EFAULT;break;}}while((0xbf7+4727-0x1e6e));
#if KERNEL_LT_EQ((0x377+1044-0x789),(0x407+2970-0xf9b),(0x20f8+355-0x2246))
up_write(&llIII->dev.bus->subsys.rwsem);
#endif
usb_unlock_device(llIII);usb_put_dev(llIII);}else{IIlll(
"\x64\x65\x76\x69\x63\x65\x20\x25\x73\x20\x6e\x6f\x74\x20\x66\x6f\x75\x6e\x64" "\n"
,llIll);}}while((0x1f4+7078-0x1d9a));IIlll(
"\x2d\x2d\x20\x72\x65\x73\x75\x6c\x74\x3d\x25\x64" "\n",IIIll);return IIIll;}
#if (0x558+129-0x5d9)
static int IlllllIll(struct IIIlll*IIlII,const struct IIIIIIlll __user*ioctl){
int IIIll=-ENODEV;IIIIl IlIll;IIlll("\x2b\x2b" "\n");do
{char llIll[sizeof(ioctl->llIll)+(0x6cc+8222-0x26e9)];struct usb_device*llIII;
lIllIl speed;if(get_user(IlIll,&ioctl->lIIlII.IIllllI)<(0x113c+2920-0x1ca4)){
IIIll=-EFAULT;break;}if(IlIll<sizeof(*ioctl)){IIIll=-EINVAL;break;}llIll[sizeof(
llIll)-(0x3e2+2881-0xf22)]='\0';if(copy_from_user(llIll,&ioctl->llIll,sizeof(
ioctl->llIll))){IIIll=-EFAULT;break;}IIIll=-ENODEV;llIII=IllIllII(llIll);if(
llIII){const char*IlIllIIII,*llIIllII,*IlllIIIl;usb_lock_device(llIII);
#if KERNEL_LT_EQ((0xda6+2959-0x1933),(0x123b+875-0x15a0),(0x8ca+5320-0x1d7d))
down_write(&llIII->dev.bus->subsys.rwsem);
#endif
do
{IIIll=IIlIIIll(llIII,&IlIllIIII,&llIIllII,&IlllIIIl);if(IIIll<(0xc4f+825-0xf88)
){
break;}if(put_user(le16_to_cpu(llIII->descriptor.idVendor),&ioctl->lIllllII)<
(0x1337+3480-0x20cf)){IIIll=-EFAULT;break;}if(put_user(le16_to_cpu(llIII->
descriptor.idProduct),&ioctl->IIllIlII)<(0x71c+5142-0x1b32)){IIIll=-EFAULT;break
;}if(put_user(le16_to_cpu(llIII->descriptor.bcdDevice),&ioctl->lIIIlIlI)<
(0xced+2706-0x177f)){IIIll=-EFAULT;break;}if(put_user(le16_to_cpu(llIII->
descriptor.IIllIllI),&ioctl->IIllIllI)<(0xbaf+3475-0x1942)){IIIll=-EFAULT;break;
}if(put_user(llIII->descriptor.bDeviceClass,&ioctl->llIlIlII)<(0x5a6+2570-0xfb0)
){IIIll=-EFAULT;break;}if(put_user(llIII->descriptor.bDeviceSubClass,&ioctl->
lIlllllI)<(0xecf+1952-0x166f)){IIIll=-EFAULT;break;}if(put_user(llIII->
descriptor.bDeviceProtocol,&ioctl->IlllIlII)<(0x1efd+1799-0x2604)){IIIll=-EFAULT
;break;}switch(llIII->speed){case USB_SPEED_LOW:speed=IIllllIll;break;case 
USB_SPEED_FULL:speed=IIIlIIIII;break;case USB_SPEED_HIGH:speed=lIIIIllII;break;
case USB_SPEED_SUPER:speed=IIIllIlII;break;default:speed=lIIIlIIIl;break;}if(
put_user(speed,&ioctl->IIIIllIII)<(0x579+1952-0xd19)){IIIll=-EFAULT;break;}if(
copy_to_user((void*)&ioctl->lIlIIll,(void*)IlllIIIl,strlen(IlllIIIl)+
(0xad2+2990-0x167f))){IIIll=-EFAULT;break;}if(copy_to_user((void*)&ioctl->serial
,(void*)llIIllII,strlen(llIIllII)+(0x1b58+2692-0x25db))){IIIll=-EFAULT;break;}if
(copy_to_user((void*)&ioctl->description,(void*),strlen()+(0x1b33+2652-0x258e)))
{IIIll=-EFAULT;break;}}while((0x6db+7807-0x255a));
#if KERNEL_LT_EQ((0xd8c+1409-0x130b),(0x15ff+1273-0x1af2),(0x1d42+115-0x1da0))
up_write(&llIII->dev.bus->subsys.rwsem);
#endif
usb_unlock_device(llIII);usb_put_dev(llIII);}else{IIlll(
"\x64\x65\x76\x69\x63\x65\x20\x25\x73\x20\x6e\x6f\x74\x20\x66\x6f\x75\x6e\x64" "\n"
,llIll);}}while((0x545+4775-0x17ec));IIlll(
"\x2d\x2d\x20\x72\x65\x73\x75\x6c\x74\x3d\x25\x64" "\n",IIIll);return IIIll;}
#endif
static int IllIlllll(struct IIIlll*IIlII,const char __user*IIIlI){int IIIll=
(0xdc+5442-0x161e);const char __user*lIIIllII;struct list_head IlIlIIlI;struct 
IllIIIlIl lllIlII;IIIIl lllIlI;IIlll("\x2b\x2b" "\n");INIT_LIST_HEAD(&IlIlIIlI);
if(copy_from_user(&lllIlII,IIIlI,sizeof(lllIlII)))return-EFAULT;lIIIllII=IIIlI+
lllIlII.lIIlII.IIllllI;if(IIIlI+sizeof(lllIlII)>lIIIllII)return-EINVAL;IIIlI+=
sizeof(lllIlII);IIlll("\x63\x6f\x75\x6e\x74\x3d\x25\x64" "\n",lllIlII.llllIIII);
for(lllIlI=(0xfa0+2680-0x1a18);lllIlI<lllIlII.llllIIII;lllIlI++){size_t IlllIlll
;size_t IlIlIIIl;struct IlIlIlIl lIIlllI;struct IllIIIll*IlIlIl;if(IIIlI+sizeof(
lIIlllI)>lIIIllII){IIIll=-EINVAL;break;}if(copy_from_user(&lIIlllI,IIIlI,sizeof(
lIIlllI))){IIIll=-EFAULT;break;}IlIlIIIl=sizeof(struct IlIlIlIl);IlllIlll=sizeof
(struct IllIIIll);if(IIIlI+IlIlIIIl>lIIIllII){IIIll=-EINVAL;break;}IlIlIl=
IllIllI(IlllIlll,GFP_KERNEL);if(IlIlIl==NULL){IIIll=-ENOMEM;break;}if(
copy_from_user(&IlIlIl->lIIlllI,IIIlI,IlIlIIIl)){lIlIll(IlIlIl);IIIll=-EFAULT;
break;}IIlll(
"\x56\x3d\x25\x30\x34\x58\x20\x50\x3d\x25\x30\x34\x58\x20\x51\x3d\x30\x78\x25\x30\x38\x58" "\n"
,IlIlIl->lIIlllI.lIllllII,IlIlIl->lIIlllI.IIllIlII,IlIlIl->lIIlllI.lIIlIllIl);
list_add_tail(&IlIlIl->entry,&IlIlIIlI);IIIlI+=IlIlIIIl;}
if(lllIlI!=lllIlII.llllIIII){IIIll=-EINVAL;}
if(IIIll>=(0xf58+1698-0x15fa)){IIlll("\x75\x70\x64\x61\x74\x65" "\n");llIlIIlII(
&IlIlIIlI);}
if(IIIll<(0x3e8+1663-0xa67)){while(!list_empty(&IlIlIIlI)){struct IllIIIll*
IIIlIIl;IIIlIIl=list_entry(IlIlIIlI.next,struct IllIIIll,entry);list_del(&
IIIlIIl->entry);lIlIll(IIIlIIl);}}IIlll(
"\x2d\x2d\x20\x72\x65\x73\x75\x6c\x74\x3d\x25\x64" "\n",IIIll);return IIIll;}
static int IllIIlIIl(struct IIIlll*IIlII,const struct IllllllII __user*ioctl){
int IIIll;IIIIl IlIll;IIlll("\x2b\x2b" "\n");do
{if(get_user(IlIll,&ioctl->lIIlII.IIllllI)<(0x3ca+4326-0x14b0)){IIIll=-EFAULT;
break;}if(IlIll!=sizeof(*ioctl)){IIIll=-EINVAL;break;}llIIIIIII();IIIll=
(0x1bb0+2881-0x26f1);}while((0xef6+4065-0x1ed7));IIlll(
"\x2d\x2d\x20\x72\x65\x73\x75\x6c\x74\x3d\x25\x64" "\n",IIIll);return IIIll;}
#endif 

