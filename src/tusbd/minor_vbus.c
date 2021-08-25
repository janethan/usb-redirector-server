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
long lIllIlIll(void*,unsigned int,unsigned long);
#endif
int IllIlllIl(void*,int);int IlIIIlIII(void*,int);unsigned int lIIIlIllI(void*,
struct file*,poll_table*lIIllI);int IllIllIll(struct IIIlll*lllll,struct 
llIIlllll __user*ioctl);int lllIlIIll(struct IIIlll*lllll,struct IlIllIIll 
__user*ioctl);int llIlIlIIl(struct IIIlll*lllll,struct IlIlIIllI __user*ioctl);
static struct lIIIllll llIllIIIl[]={{"\x74\x79\x70\x65","\x76\x62\x75\x73",NULL}
,{NULL,NULL,NULL}};struct IIIlll*IIIlIllIl(void){struct IIIlll*lllll;lllll=
lIllllI(sizeof(*lllll),GFP_KERNEL);if(lllll){mutex_init(&lllll->mutex);lllll->
context=lllll;lllll->llIllI=-(0x398+4492-0x1523);lllll->ops.open=IllIlllIl;lllll
->ops.release=IlIIIlIII;lllll->ops.unlocked_ioctl=IIlllIIIl;
#ifdef CONFIG_COMPAT
lllll->ops.compat_ioctl=lIllIlIll;
#endif
lllll->ops.read=IllIIIIlI;lllll->ops.write=IlllIIllI;lllll->ops.poll=lIIIlIllI;
lllll->IlllIIII=llIllIIIl;if(IllllIlI(lllll,(0x1aef+3093-0x2703),
(0xc1b+4018-0x1bcc))<(0xb16+5418-0x2040)){lIlIll(lllll);lllll=NULL;}}return 
lllll;}void IIlIIIIlI(struct IIIlll*lllll){if(lllll){lllIllII(lllll);lIlIll(
lllll);}}ssize_t IllIIIIlI(void*context,char __user*IllIl,size_t IIIIl){
ssize_t IlIlI=(0x419+4767-0x16b8);lIlll(
"\x75\x73\x62\x64\x5f\x76\x62\x75\x73\x5f\x72\x65\x61\x64\x3a\x20\x62\x75\x66\x20\x69\x73\x20\x30\x78\x25\x70\x2c\x20\x72\x65\x71\x75\x65\x73\x74\x65\x64\x20\x25\x6c\x75\x20\x62\x79\x74\x65\x73" "\n"
,IllIl,(unsigned long)IIIIl);return IlIlI;}ssize_t IlllIIllI(void*context,const 
char __user*IllIl,size_t IIIIl){
ssize_t IlIlI=IIIIl;lIlll(
"\x75\x73\x62\x64\x5f\x76\x62\x75\x73\x5f\x77\x72\x69\x74\x65\x3a\x20\x62\x75\x66\x20\x69\x73\x20\x30\x78\x25\x70\x2c\x20\x72\x65\x71\x75\x65\x73\x74\x65\x64\x20\x25\x6c\x75\x20\x62\x79\x74\x65\x73" "\n"
,IllIl,(unsigned long)IIIIl);return IlIlI;}long llIllIIII(void*context,unsigned 
int lIIIIl,void __user*IlIIII){struct IIIlll*lllll=context;ssize_t IlIlI=
(0xf49+940-0x12f5);lIlll(
"\x75\x73\x62\x64\x5f\x76\x62\x75\x73\x5f\x64\x6f\x5f\x69\x6f\x63\x74\x6c\x3a\x20\x2b\x2b\x20\x63\x6d\x64\x3d\x25\x64\x20\x61\x72\x67\x3d\x30\x78\x25\x70" "\n"
,lIIIIl,IlIIII);switch(lIIIIl){case lIlIlIIlI:IlIlI=IllIllIll(lllll,IlIIII);
break;case llIIllllI:IlIlI=lllIlIIll(lllll,IlIIII);break;case IlIllllIl:IlIlI=
llIlIlIIl(lllll,IlIIII);break;default:lIlll(
"\x75\x73\x62\x64\x5f\x76\x62\x75\x73\x5f\x64\x6f\x5f\x69\x6f\x63\x74\x6c\x3a\x20\x75\x6e\x6b\x6e\x6f\x77\x6e\x20\x69\x6f\x63\x74\x6c" "\n"
);IlIlI=-EINVAL;break;}lIlll(
"\x75\x73\x62\x64\x5f\x76\x62\x75\x73\x5f\x64\x6f\x5f\x69\x6f\x63\x74\x6c\x3a\x20\x2d\x2d\x20\x72\x65\x73\x75\x6c\x74\x3d\x25\x6c\x75" "\n"
,(unsigned long)IlIlI);return IlIlI;}long IIlllIIIl(void*context,unsigned int 
lIIIIl,unsigned long IlIIII){lIlll(
"\x75\x73\x62\x64\x5f\x76\x62\x75\x73\x5f\x69\x6f\x63\x74\x6c" "\n");return 
llIllIIII(context,lIIIIl,(void __user*)IlIIII);}
#ifdef CONFIG_COMPAT
long lIllIlIll(void*context,unsigned int lIIIIl,unsigned long IlIIII){lIlll(
"\x75\x73\x62\x64\x5f\x76\x62\x75\x73\x5f\x63\x6f\x6d\x70\x61\x74\x5f\x69\x6f\x63\x74\x6c" "\n"
);return llIllIIII(context,lIIIIl,compat_ptr(IlIIII));}
#endif


int IllIlllIl(void*context,int IIIIIlI){
lIlll(
"\x75\x73\x62\x64\x5f\x76\x62\x75\x73\x5f\x6f\x70\x65\x6e\x20\x25\x64" "\n",
IIIIIlI);return(0xd2f+2507-0x16fa);}

int IlIIIlIII(void*context,int IIIIIlI){
lIlll(
"\x75\x73\x62\x64\x5f\x76\x62\x75\x73\x5f\x72\x65\x6c\x65\x61\x73\x65\x20\x25\x64" "\n"
,IIIIIlI);if(IIIIIlI==(0x2028+670-0x22c6)){
lIlllllII();}return(0x1a3b+3149-0x2688);}unsigned int lIIIlIllI(void*context,
struct file*lIlllI,poll_table*lIIllI){
return(POLLOUT|POLLWRNORM);}int IllIllIll(struct IIIlll*lllll,struct llIIlllll 
__user*ioctl){int IlIlI=(0x1d4f+266-0x1e59);struct lIlIIl*lIllI=NULL;lllII IlIll
;lIllll vid;lIllll IlIlIII;lIllll lIlIlll;lIllll lIlIlIllI;lIllIl speed;lIlll(
"\x75\x73\x62\x64\x5f\x76\x62\x75\x73\x5f\x69\x6f\x63\x74\x6c\x5f\x70\x6c\x75\x67\x5f\x64\x65\x76\x69\x63\x65\x3a\x20\x2b\x2b" "\n"
);do
{if(get_user(IlIll,&ioctl->lIIlII.lIlllll)<(0x22bd+180-0x2371)){IlIlI=-EFAULT;
break;}if(IlIll!=sizeof(struct llIIlllll)){IlIlI=-EINVAL;break;}if(get_user(vid,
&ioctl->llIIIlII)<(0xc43+6451-0x2576)){IlIlI=-EFAULT;break;}if(get_user(IlIlIII,
&ioctl->IIIIllll)<(0x1a5a+1772-0x2146)){IlIlI=-EFAULT;break;}if(get_user(lIlIlll
,&ioctl->IlIIllIl)<(0xb0+9024-0x23f0)){IlIlI=-EFAULT;break;}if(get_user(
lIlIlIllI,&ioctl->IIllIllI)<(0x182+5919-0x18a1)){IlIlI=-EFAULT;break;}if(
get_user(speed,&ioctl->lIlIllIII)<(0x3d5+1389-0x942)){IlIlI=-EFAULT;break;}
switch(speed){case IIllllIll:speed=USB_SPEED_LOW;break;case IIIlIIIII:speed=
USB_SPEED_FULL;break;case lIIIllIII:speed=USB_SPEED_HIGH;break;case IIIllIlII:
#if KERNEL_GT_EQ((0x1329+3453-0x20a4),(0x50+3800-0xf22),(0xb25+4246-0x1b94)) || \
RHEL_RELEASE_GT_EQ((0x18e2+3631-0x270b),(0x12b6+3353-0x1fcc)) 
speed=USB_SPEED_SUPER;
#else
IIllIl(
"\x55\x53\x42\x20\x33\x2e\x30\x20\x69\x73\x20\x6e\x6f\x74\x20\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x6f\x6e\x20\x74\x68\x69\x73\x20\x6b\x65\x72\x6e\x65\x6c\x2c\x20\x75\x73\x65\x20\x6b\x65\x72\x6e\x65\x6c\x20\x32\x2e\x36\x2e\x33\x39\x20\x6f\x72\x20\x6e\x65\x77\x65\x72" "\n"
);IlIlI=-EINVAL;
#endif
break;default:lIlll(
"\x75\x73\x62\x64\x5f\x76\x62\x75\x73\x5f\x69\x6f\x63\x74\x6c\x5f\x70\x6c\x75\x67\x5f\x64\x65\x76\x69\x63\x65\x3a\x20\x69\x6e\x76\x61\x6c\x69\x64\x20\x64\x65\x76\x69\x63\x65\x20\x73\x70\x65\x65\x64" "\n"
);IlIlI=-EINVAL;break;}if(IlIlI<(0x5f0+2079-0xe0f)){break;}lIllI=llIIIIlIl(vid,
IlIlIII,lIlIlll,speed);if(lIllI==(0x1c89+1689-0x2322)){IlIlI=-ENOMEM;break;}
IlIlI=lllIIlllI(lIllI);if(IlIlI<(0x113a+4304-0x220a)){IlIIllII(lIllI);break;}
lIIIl("\x64\x65\x76\x69\x63\x65\x69\x64\x3d\x25\x64" "\n",IIIllIlI(lIllI->lllll)
);if(put_user((lllII)IIIllIlI(lIllI->lllll),&ioctl->lllllIlII)<
(0x77+7409-0x1d68)){IlIIllII(lIllI);IlIlI=-EFAULT;break;}}while(
(0x1466+2694-0x1eec));if(IlIlI<(0xdf9+1463-0x13b0)){if(lIllI){IlIIllII(lIllI);}}
lIlll(
"\x75\x73\x62\x64\x5f\x76\x62\x75\x73\x5f\x69\x6f\x63\x74\x6c\x5f\x70\x6c\x75\x67\x5f\x64\x65\x76\x69\x63\x65\x3a\x20\x2d\x2d\x20\x72\x65\x73\x75\x6c\x74\x3d\x25\x64" "\n"
,IlIlI);return IlIlI;}int lllIlIIll(struct IIIlll*lllll,struct IlIllIIll __user*
ioctl){int IlIlI=(0x5d8+5302-0x1a8e);struct lIlIIl*lIllI;lllII IlIll;lllII 
IIlIIIlII;lIlll(
"\x75\x73\x62\x64\x5f\x76\x62\x75\x73\x5f\x69\x6f\x63\x74\x6c\x5f\x75\x6e\x70\x6c\x75\x67\x5f\x64\x65\x76\x69\x63\x65\x3a\x20\x2b\x2b" "\n"
);do
{if(get_user(IlIll,&ioctl->lIIlII.lIlllll)<(0x3bf+8821-0x2634)){IlIlI=-EFAULT;
break;}if(IlIll!=sizeof(struct IlIllIIll)){IlIlI=-EINVAL;break;}if(get_user(
IIlIIIlII,&ioctl->lllllIlII)<(0x68d+6214-0x1ed3)){IlIlI=-EFAULT;break;}lIllI=
lIlIIIIll(IIlIIIlII);if(lIllI==NULL){lIlll(
"\x75\x73\x62\x64\x5f\x76\x62\x75\x73\x5f\x69\x6f\x63\x74\x6c\x5f\x75\x6e\x70\x6c\x75\x67\x5f\x64\x65\x76\x69\x63\x65\x3a\x20\x64\x65\x76\x69\x63\x65\x20\x25\x75\x20\x69\x73\x20\x6e\x6f\x74\x20\x66\x6f\x75\x6e\x64" "\n"
,IIlIIIlII);IlIlI=-ENODEV;break;}

IlIIllII(lIllI);
IlIllIIl(lIllI);}while((0xadd+2975-0x167c));lIlll(
"\x75\x73\x62\x64\x5f\x76\x62\x75\x73\x5f\x69\x6f\x63\x74\x6c\x5f\x75\x6e\x70\x6c\x75\x67\x5f\x64\x65\x76\x69\x63\x65\x3a\x20\x2d\x2d\x20\x72\x65\x73\x75\x6c\x74\x3d\x25\x64" "\n"
,IlIlI);return IlIlI;}int llIlIlIIl(struct IIIlll*lllll,struct IlIlIIllI __user*
ioctl){int IlIlI=(0xb0d+1571-0x1130);lllII IlIll;lIlll(
"\x75\x73\x62\x64\x5f\x76\x62\x75\x73\x5f\x69\x6f\x63\x74\x6c\x5f\x75\x73\x62\x33\x5f\x73\x75\x70\x70\x6f\x72\x74\x3a\x20\x2b\x2b" "\n"
);do
{if(get_user(IlIll,&ioctl->lIIlII.lIlllll)<(0x183+8210-0x2195)){IlIlI=-EFAULT;
break;}if(IlIll!=sizeof(struct IlIlIIllI)){IlIlI=-EINVAL;break;}
#if KERNEL_GT_EQ((0x1743+841-0x1a8a),(0x15e8+2704-0x2072),(0x54f+7133-0x2105)) \
|| RHEL_RELEASE_GT_EQ((0xde7+3529-0x1baa),(0x893+429-0xa3d))
IlIlI=(0x1851+746-0x1b3b);
#else
IlIlI=-EPIPE;
#endif
}while((0x149b+2653-0x1ef8));lIlll(
"\x75\x73\x62\x64\x5f\x76\x62\x75\x73\x5f\x69\x6f\x63\x74\x6c\x5f\x75\x73\x62\x33\x5f\x73\x75\x70\x70\x6f\x72\x74\x3a\x20\x2d\x2d\x20\x72\x65\x73\x75\x6c\x74\x3d\x25\x64" "\n"
,IlIlI);return IlIlI;}
#endif 

