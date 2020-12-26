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

#ifdef _USBD_ENABLE_VHCI_
#include "usbd.h"
ssize_t IlllIIllI(void*,const char __user*,size_t);ssize_t IllIIIIlI(void*,char 
__user*,size_t);long IIlllIIIl(void*,unsigned int,unsigned long);
#ifdef CONFIG_COMPAT
long lIIIlIIll(void*,unsigned int,unsigned long);
#endif
int IllIlllIl(void*,int);int IlIIIlIII(void*,int);unsigned int lIIIlIllI(void*,
struct file*,poll_table*lIIllI);int IllIllIll(struct IIIlll*IIlII,struct 
llllllIll __user*ioctl);int lllIlIIll(struct IIIlll*IIlII,struct lIIIIIIlI 
__user*ioctl);int llIlIlIIl(struct IIIlll*IIlII,struct lIllIIIlI __user*ioctl);
static struct lllIIIlI llIllIIIl[]={{"\x74\x79\x70\x65","\x76\x62\x75\x73",NULL}
,{NULL,NULL,NULL}};struct IIIlll*IIIlIllIl(void){struct IIIlll*IIlII;IIlII=
lIllllI(sizeof(*IIlII),GFP_KERNEL);if(IIlII){mutex_init(&IIlII->mutex);IIlII->
context=IIlII;IIlII->llIllI=-(0x187c+2697-0x2304);IIlII->ops.open=IllIlllIl;
IIlII->ops.release=IlIIIlIII;IIlII->ops.unlocked_ioctl=IIlllIIIl;
#ifdef CONFIG_COMPAT
IIlII->ops.compat_ioctl=lIIIlIIll;
#endif
IIlII->ops.read=IllIIIIlI;IIlII->ops.write=IlllIIllI;IIlII->ops.poll=lIIIlIllI;
IIlII->IIllllIl=llIllIIIl;if(IllllIlI(IIlII,(0x2304+227-0x23e6),
(0xeab+6135-0x26a1))<(0x13ef+3525-0x21b4)){lIlIll(IIlII);IIlII=NULL;}}return 
IIlII;}void IIIIIIlII(struct IIIlll*IIlII){if(IIlII){lllIllII(IIlII);lIlIll(
IIlII);}}ssize_t IllIIIIlI(void*context,char __user*IIIlI,size_t IlIII){
ssize_t IIIll=(0x46d+861-0x7ca);Illll(
"\x75\x73\x62\x64\x5f\x76\x62\x75\x73\x5f\x72\x65\x61\x64\x3a\x20\x62\x75\x66\x20\x69\x73\x20\x30\x78\x25\x70\x2c\x20\x72\x65\x71\x75\x65\x73\x74\x65\x64\x20\x25\x6c\x75\x20\x62\x79\x74\x65\x73" "\n"
,IIIlI,(unsigned long)IlIII);return IIIll;}ssize_t IlllIIllI(void*context,const 
char __user*IIIlI,size_t IlIII){
ssize_t IIIll=IlIII;Illll(
"\x75\x73\x62\x64\x5f\x76\x62\x75\x73\x5f\x77\x72\x69\x74\x65\x3a\x20\x62\x75\x66\x20\x69\x73\x20\x30\x78\x25\x70\x2c\x20\x72\x65\x71\x75\x65\x73\x74\x65\x64\x20\x25\x6c\x75\x20\x62\x79\x74\x65\x73" "\n"
,IIIlI,(unsigned long)IlIII);return IIIll;}long llIllIIII(void*context,unsigned 
int lIIIIl,void __user*IlIIII){struct IIIlll*IIlII=context;ssize_t IIIll=
(0x1e2+5966-0x1930);Illll(
"\x75\x73\x62\x64\x5f\x76\x62\x75\x73\x5f\x64\x6f\x5f\x69\x6f\x63\x74\x6c\x3a\x20\x2b\x2b\x20\x63\x6d\x64\x3d\x25\x64\x20\x61\x72\x67\x3d\x30\x78\x25\x70" "\n"
,lIIIIl,IlIIII);switch(lIIIIl){case IIIlIIlII:IIIll=IllIllIll(IIlII,IlIIII);
break;case llIIllllI:IIIll=lllIlIIll(IIlII,IlIIII);break;case IlIllllIl:IIIll=
llIlIlIIl(IIlII,IlIIII);break;default:Illll(
"\x75\x73\x62\x64\x5f\x76\x62\x75\x73\x5f\x64\x6f\x5f\x69\x6f\x63\x74\x6c\x3a\x20\x75\x6e\x6b\x6e\x6f\x77\x6e\x20\x69\x6f\x63\x74\x6c" "\n"
);IIIll=-EINVAL;break;}Illll(
"\x75\x73\x62\x64\x5f\x76\x62\x75\x73\x5f\x64\x6f\x5f\x69\x6f\x63\x74\x6c\x3a\x20\x2d\x2d\x20\x72\x65\x73\x75\x6c\x74\x3d\x25\x6c\x75" "\n"
,(unsigned long)IIIll);return IIIll;}long IIlllIIIl(void*context,unsigned int 
lIIIIl,unsigned long IlIIII){Illll(
"\x75\x73\x62\x64\x5f\x76\x62\x75\x73\x5f\x69\x6f\x63\x74\x6c" "\n");return 
llIllIIII(context,lIIIIl,(void __user*)IlIIII);}
#ifdef CONFIG_COMPAT
long lIIIlIIll(void*context,unsigned int lIIIIl,unsigned long IlIIII){Illll(
"\x75\x73\x62\x64\x5f\x76\x62\x75\x73\x5f\x63\x6f\x6d\x70\x61\x74\x5f\x69\x6f\x63\x74\x6c" "\n"
);return llIllIIII(context,lIIIIl,compat_ptr(IlIIII));}
#endif


int IllIlllIl(void*context,int IIIIIlI){
Illll(
"\x75\x73\x62\x64\x5f\x76\x62\x75\x73\x5f\x6f\x70\x65\x6e\x20\x25\x64" "\n",
IIIIIlI);return(0x1317+773-0x161c);}

int IlIIIlIII(void*context,int IIIIIlI){
Illll(
"\x75\x73\x62\x64\x5f\x76\x62\x75\x73\x5f\x72\x65\x6c\x65\x61\x73\x65\x20\x25\x64" "\n"
,IIIIIlI);if(IIIIIlI==(0x137b+3144-0x1fc3)){
lIlllllII();}return(0x606+3304-0x12ee);}unsigned int lIIIlIllI(void*context,
struct file*lIlllI,poll_table*lIIllI){
return(POLLOUT|POLLWRNORM);}int IllIllIll(struct IIIlll*IIlII,struct llllllIll 
__user*ioctl){int IIIll=(0x1f64+94-0x1fc2);struct lIlIIl*llllI=NULL;IIIIl IlIll;
IlllIl vid;IlllIl IIlllII;IlllIl lIlIlll;IlllIl lIlIlIllI;lIllIl speed;Illll(
"\x75\x73\x62\x64\x5f\x76\x62\x75\x73\x5f\x69\x6f\x63\x74\x6c\x5f\x70\x6c\x75\x67\x5f\x64\x65\x76\x69\x63\x65\x3a\x20\x2b\x2b" "\n"
);do
{if(get_user(IlIll,&ioctl->lIIlII.IIllllI)<(0x1033+2774-0x1b09)){IIIll=-EFAULT;
break;}if(IlIll!=sizeof(struct llllllIll)){IIIll=-EINVAL;break;}if(get_user(vid,
&ioctl->lIllllII)<(0x1081+1833-0x17aa)){IIIll=-EFAULT;break;}if(get_user(IIlllII
,&ioctl->IIllIlII)<(0x1caf+1842-0x23e1)){IIIll=-EFAULT;break;}if(get_user(
lIlIlll,&ioctl->lIIIlIlI)<(0xd57+2498-0x1719)){IIIll=-EFAULT;break;}if(get_user(
lIlIlIllI,&ioctl->IIllIllI)<(0x1cb+4055-0x11a2)){IIIll=-EFAULT;break;}if(
get_user(speed,&ioctl->IIIIllIII)<(0x8e7+5886-0x1fe5)){IIIll=-EFAULT;break;}
switch(speed){case IIllllIll:speed=USB_SPEED_LOW;break;case IIIlIIIII:speed=
USB_SPEED_FULL;break;case lIIIIllII:speed=USB_SPEED_HIGH;break;case IIIllIlII:
#if KERNEL_GT_EQ((0x21d+5546-0x17c5),(0x308+7377-0x1fd3),(0x6a9+5056-0x1a42)) ||\
 RHEL_RELEASE_GT_EQ((0x1bb+232-0x29d),(0x3d4+3335-0x10d8)) 
speed=USB_SPEED_SUPER;
#else
IIllIl(
"\x55\x53\x42\x20\x33\x2e\x30\x20\x69\x73\x20\x6e\x6f\x74\x20\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x6f\x6e\x20\x74\x68\x69\x73\x20\x6b\x65\x72\x6e\x65\x6c\x2c\x20\x75\x73\x65\x20\x6b\x65\x72\x6e\x65\x6c\x20\x32\x2e\x36\x2e\x33\x39\x20\x6f\x72\x20\x6e\x65\x77\x65\x72" "\n"
);IIIll=-EINVAL;
#endif
break;default:Illll(
"\x75\x73\x62\x64\x5f\x76\x62\x75\x73\x5f\x69\x6f\x63\x74\x6c\x5f\x70\x6c\x75\x67\x5f\x64\x65\x76\x69\x63\x65\x3a\x20\x69\x6e\x76\x61\x6c\x69\x64\x20\x64\x65\x76\x69\x63\x65\x20\x73\x70\x65\x65\x64" "\n"
);IIIll=-EINVAL;break;}if(IIIll<(0x3d0+388-0x554))break;llllI=llIIIIlIl(vid,
IIlllII,lIlIlll,speed);if(llllI==(0xb58+735-0xe37)){IIIll=-ENOMEM;break;}IIIll=
lllIIlllI(llllI);if(IIIll<(0x1a33+3245-0x26e0)){lIlIlIll(llllI);break;}IIlll(
"\x64\x65\x76\x69\x63\x65\x69\x64\x3d\x25\x64" "\n",IIIIllII(llllI->IIlII));if(
put_user((IIIIl)IIIIllII(llllI->IIlII),&ioctl->lIlIIIIII)<(0x26d+6930-0x1d7f)){
lIlIlIll(llllI);IIIll=-EFAULT;break;}}while((0x854+992-0xc34));if(IIIll<
(0x15f5+2756-0x20b9)){if(llllI)lIlIlIll(llllI);}Illll(
"\x75\x73\x62\x64\x5f\x76\x62\x75\x73\x5f\x69\x6f\x63\x74\x6c\x5f\x70\x6c\x75\x67\x5f\x64\x65\x76\x69\x63\x65\x3a\x20\x2d\x2d\x20\x72\x65\x73\x75\x6c\x74\x3d\x25\x64" "\n"
,IIIll);return IIIll;}int lllIlIIll(struct IIIlll*IIlII,struct lIIIIIIlI __user*
ioctl){int IIIll=(0xe6f+3114-0x1a99);struct lIlIIl*llllI;IIIIl IlIll;IIIIl 
lIIIllIIl;Illll(
"\x75\x73\x62\x64\x5f\x76\x62\x75\x73\x5f\x69\x6f\x63\x74\x6c\x5f\x75\x6e\x70\x6c\x75\x67\x5f\x64\x65\x76\x69\x63\x65\x3a\x20\x2b\x2b" "\n"
);do
{if(get_user(IlIll,&ioctl->lIIlII.IIllllI)<(0x1ec9+1168-0x2359)){IIIll=-EFAULT;
break;}if(IlIll!=sizeof(struct lIIIIIIlI)){IIIll=-EINVAL;break;}if(get_user(
lIIIllIIl,&ioctl->lIlIIIIII)<(0xb67+6613-0x253c)){IIIll=-EFAULT;break;}llllI=
lIlIIIIll(lIIIllIIl);if(llllI==NULL){Illll(
"\x75\x73\x62\x64\x5f\x76\x62\x75\x73\x5f\x69\x6f\x63\x74\x6c\x5f\x75\x6e\x70\x6c\x75\x67\x5f\x64\x65\x76\x69\x63\x65\x3a\x20\x64\x65\x76\x69\x63\x65\x20\x25\x75\x20\x69\x73\x20\x6e\x6f\x74\x20\x66\x6f\x75\x6e\x64" "\n"
,lIIIllIIl);IIIll=-ENODEV;break;}

lIlIlIll(llllI);
IlIllIIl(llllI);}while((0x225+1286-0x72b));Illll(
"\x75\x73\x62\x64\x5f\x76\x62\x75\x73\x5f\x69\x6f\x63\x74\x6c\x5f\x75\x6e\x70\x6c\x75\x67\x5f\x64\x65\x76\x69\x63\x65\x3a\x20\x2d\x2d\x20\x72\x65\x73\x75\x6c\x74\x3d\x25\x64" "\n"
,IIIll);return IIIll;}int llIlIlIIl(struct IIIlll*IIlII,struct lIllIIIlI __user*
ioctl){int IIIll=(0x151c+3837-0x2419);IIIIl IlIll;Illll(
"\x75\x73\x62\x64\x5f\x76\x62\x75\x73\x5f\x69\x6f\x63\x74\x6c\x5f\x75\x73\x62\x33\x5f\x73\x75\x70\x70\x6f\x72\x74\x3a\x20\x2b\x2b" "\n"
);do
{if(get_user(IlIll,&ioctl->lIIlII.IIllllI)<(0xdd+5284-0x1581)){IIIll=-EFAULT;
break;}if(IlIll!=sizeof(struct lIllIIIlI)){IIIll=-EINVAL;break;}
#if KERNEL_GT_EQ((0x197a+3140-0x25bc),(0x18a2+3029-0x2471),(0xbed+785-0xed7)) ||\
 RHEL_RELEASE_GT_EQ((0x1e1+4244-0x126f),(0x55+1882-0x7ac))
IIIll=(0x164d+3642-0x2487);
#else
IIIll=-EPIPE;
#endif
}while((0x1804+1645-0x1e71));Illll(
"\x75\x73\x62\x64\x5f\x76\x62\x75\x73\x5f\x69\x6f\x63\x74\x6c\x5f\x75\x73\x62\x33\x5f\x73\x75\x70\x70\x6f\x72\x74\x3a\x20\x2d\x2d\x20\x72\x65\x73\x75\x6c\x74\x3d\x25\x64" "\n"
,IIIll);return IIIll;}
#endif 

