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
#include <linux/ctype.h> 
#define IllIIlIl (0x26db+120-0x2653)
static struct cdev*IllIIll=NULL;static dev_t IllIIIl=MKDEV((0x14a9+3465-0x2232),
(0x6f5+2880-0x1235));static void*IIllllII[IllIIlIl]={(0x7a7+7711-0x25c6)};static
 struct mutex lIIlIll;static struct class*lIIIlII=NULL;ssize_t IIlllIIII(struct 
file*,char __user*,size_t,loff_t*);ssize_t llllIIIlI(struct file*,const char 
__user*,size_t,loff_t*);long llllIlIII(struct file*,unsigned int,unsigned long);
#ifdef CONFIG_COMPAT
long lIIIlIIlI(struct file*,unsigned int,unsigned long);
#endif
int IIlIlllll(struct inode*,struct file*);int IIlllIlll(struct inode*,struct 
file*);unsigned int lllIlllII(struct file*lIlllI,poll_table*lIIllI);int 
lIIIllllI(struct file*lIlllI,struct vm_area_struct*llIIIlI);
#if KERNEL_LT_EQ((0x453+7887-0x2320),(0xfcd+1056-0x13e7),(0x1d3a+1732-0x23e7)) 
static int lIIllIII(struct class_device*dev,char**envp,int llIlIllll,char*IlIIl,
int IIIlIIlll);static void lIIIlIIl(struct class_device*device);
#elif KERNEL_LT_EQ((0x1864+926-0x1c00),(0x293+6033-0x1a1e),(0xc2d+4870-0x1f1a)) 
static int lIIllIII(struct class_device*dev,struct kobj_uevent_env*llIIIll);
static void lIIIlIIl(struct class_device*device);
#else 
static int lIIllIII(struct device*dev,struct kobj_uevent_env*llIIIll);
#endif
static struct file_operations IlIllIIlI={.owner=THIS_MODULE,.read=IIlllIIII,.
write=llllIIIlI,.poll=lllIlllII,.unlocked_ioctl=llllIlIII,
#ifdef CONFIG_COMPAT
.compat_ioctl=lIIIlIIlI,
#endif
.mmap=lIIIllllI,.open=IIlIlllll,.release=IIlllIlll,};int lIIlllllI(void){int 
IIIll=(0x1bc6+374-0x1d3c);Illll(
"\x69\x6e\x69\x74\x5f\x63\x64\x65\x76\x5f\x6d\x6f\x64\x75\x6c\x65\x3a\x20\x2b\x2b" "\n"
);do{mutex_init(&lIIlIll);lIIIlII=class_create(THIS_MODULE,IIIllII);if(lIIIlII==
NULL){Illll(
"\x69\x6e\x69\x74\x5f\x63\x64\x65\x76\x5f\x6d\x6f\x64\x75\x6c\x65\x3a\x20\x63\x6c\x61\x73\x73\x5f\x63\x72\x65\x61\x74\x65\x20\x66\x61\x69\x6c\x65\x64\x2e" "\n"
);IIIll=-ENOMEM;break;}
#if KERNEL_LT_EQ((0xd1a+5041-0x20c9),(0xca2+5948-0x23d8),(0x277+1864-0x9b0)) 
lIIIlII->hotplug=lIIllIII,lIIIlII->release=lIIIlIIl,
#elif KERNEL_LT_EQ((0x739+880-0xaa7),(0x1b5+6123-0x199a),(0xcf6+157-0xd7a)) 
lIIIlII->uevent=lIIllIII,lIIIlII->release=lIIIlIIl,
#else 
lIIIlII->dev_uevent=lIIllIII,
#endif
IIIll=alloc_chrdev_region(&IllIIIl,(0xdbd+5694-0x23fb),IllIIlIl,IIIllII);if(
IIIll!=(0x490+7588-0x2234)){Illll(
"\x69\x6e\x69\x74\x5f\x63\x64\x65\x76\x5f\x6d\x6f\x64\x75\x6c\x65\x3a\x20\x61\x6c\x6c\x6f\x63\x5f\x63\x68\x72\x64\x65\x76\x5f\x72\x65\x67\x69\x6f\x6e\x20\x66\x61\x69\x6c\x65\x64\x2e\x20\x45\x72\x72\x6f\x72\x20\x6e\x75\x6d\x62\x65\x72\x20\x25\x64" "\n"
,IIIll);break;}Illll(
"\x69\x6e\x69\x74\x5f\x63\x64\x65\x76\x5f\x6d\x6f\x64\x75\x6c\x65\x3a\x20\x61\x6c\x6c\x6f\x63\x61\x74\x65\x64\x20\x64\x65\x76\x6e\x75\x6d\x20\x72\x65\x67\x69\x6f\x6e\x3a\x20\x4d\x61\x6a\x6f\x72\x20\x25\x64\x20\x4d\x69\x6e\x6f\x72\x20\x25\x64" "\n"
,MAJOR(IllIIIl),MINOR(IllIIIl));memset(IIllllII,(0x13df+3789-0x22ac),sizeof(
IIllllII));IllIIll=cdev_alloc();if(IllIIll==NULL){Illll(
"\x69\x6e\x69\x74\x5f\x63\x64\x65\x76\x5f\x6d\x6f\x64\x75\x6c\x65\x3a\x20\x63\x64\x65\x76\x5f\x61\x6c\x6c\x6f\x63\x20\x66\x61\x69\x6c\x65\x64\x2e" "\n"
);IIIll=-ENOMEM;break;}IllIIll->owner=THIS_MODULE;IllIIll->ops=&IlIllIIlI;IIIll=
cdev_add(IllIIll,IllIIIl,IllIIlIl);if(IIIll!=(0x56c+4672-0x17ac)){Illll(
"\x69\x6e\x69\x74\x5f\x63\x64\x65\x76\x5f\x6d\x6f\x64\x75\x6c\x65\x3a\x20\x63\x64\x65\x76\x5f\x61\x64\x64\x20\x66\x61\x69\x6c\x65\x64\x2e\x20\x45\x72\x72\x6f\x72\x20\x6e\x75\x6d\x62\x65\x72\x20\x25\x64" "\n"
,IIIll);break;}}while((0x671+2815-0x1170));if(IIIll!=(0x828+3001-0x13e1)){if(
IllIIll)cdev_del(IllIIll);if(IllIIIl!=MKDEV((0xff9+3141-0x1c3e),
(0x51d+8247-0x2554)))unregister_chrdev_region(IllIIIl,(0x1f34+2239-0x26f4));if(
lIIIlII)class_destroy(lIIIlII);IllIIll=NULL;IllIIIl=MKDEV((0xfc6+4472-0x213e),
(0xbd7+3795-0x1aaa));lIIIlII=NULL;}Illll(
"\x69\x6e\x69\x74\x5f\x63\x64\x65\x76\x5f\x6d\x6f\x64\x75\x6c\x65\x3a\x20\x2d\x2d\x20\x72\x65\x73\x75\x6c\x74\x3d\x25\x64" "\n"
,IIIll);return IIIll;}int lIllIIII(void){Illll(
"\x64\x65\x73\x74\x72\x6f\x79\x5f\x63\x64\x65\x76" "\n");if(IllIIll)cdev_del(
IllIIll);if(IllIIIl!=MKDEV((0xb91+1907-0x1304),(0x740+3664-0x1590)))
unregister_chrdev_region(IllIIIl,IllIIlIl);if(lIIIlII)class_destroy(lIIIlII);
IllIIll=NULL;IllIIIl=MKDEV((0x8b8+1466-0xe72),(0x1007+202-0x10d1));lIIIlII=NULL;
return(0x5b7+3475-0x134a);}
#if KERNEL_LT_EQ((0x280+3729-0x110f),(0x1af+1509-0x78e),(0xc7f+837-0xfab)) 
static void lIIIlIIl(struct class_device*device){kfree(device);}
#endif
#if KERNEL_LT_EQ((0x9c0+7111-0x2585),(0x1d0+1685-0x85f),(0x81a+6912-0x2303)) 
static int lIIllIII(struct class_device*device,char**envp,int llIlIllll,char*
IlIIl,int IIIlIIlll){struct IIIlll*IIlII=device->class_data;if(IIlII&&IIlII->
IIllllIl){int i;int length;struct lllIIIlI*lIllIII;for(lIllIII=IIlII->IIllllIl,i
=(0x2347+581-0x258c),length=(0x6c8+2161-0xf39);lIllIII->name&&(lIllIII->IlllIIII
||lIllIII->lllIIIIl);lIllIII++){const char*IlllIIII=lIllIII->lllIIIIl?lIllIII->
lllIIIIl(IIlII->context):lIllIII->IlllIIII;
#if KERNEL_LT_EQ((0x706+318-0x842),(0x8c9+7214-0x24f1),(0x7b0+1943-0xf38)) 
if(add_hotplug_env_var(
#else 
if(add_uevent_var(
#endif
envp,llIlIllll,&i,IlIIl,IIIlIIlll,&length,"\x25\x73\x5f\x25\x73\x3d\x25\x73",
IIIllII,lIllIII->name,IlllIIII)==(0xdcf+1074-0x1201)){int IIIIIl;for(IIIIIl=
(0xa19+6353-0x22ea);envp[i-(0x3bd+6914-0x1ebe)][IIIIIl]!='\0'&&envp[i-
(0x501+5760-0x1b80)][IIIIIl]!=((char)(0x261+2836-0xd38));IIIIIl++)envp[i-
(0xcfc+4841-0x1fe4)][IIIIIl]=toupper(envp[i-(0x1557+4477-0x26d3)][IIIIIl]);}}}
return(0x320+9090-0x26a2);}
#else 
static int lIIllIII(
#if KERNEL_LT_EQ((0x15aa+4319-0x2687),(0x124f+106-0x12b3),(0x20b5+425-0x2245)) 
struct class_device*device,
#else 
struct device*device,
#endif
struct kobj_uevent_env*llIIIll){
#if KERNEL_LT_EQ((0x23d+6104-0x1a13),(0x9e7+639-0xc60),(0x351+898-0x6ba)) 
struct IIIlll*IIlII=device->class_data;
#else 
struct IIIlll*IIlII=dev_get_drvdata(device);
#endif
if(IIlII&&IIlII->IIllllIl){struct lllIIIlI*lIllIII;for(lIllIII=IIlII->IIllllIl;
lIllIII->name&&(lIllIII->IlllIIII||lIllIII->lllIIIIl);lIllIII++){const char*
IlllIIII=lIllIII->lllIIIIl?lIllIII->lllIIIIl(IIlII->context):lIllIII->IlllIIII;
if(add_uevent_var(llIIIll,"\x25\x73\x5f\x25\x73\x3d\x25\x73",IIIllII,lIllIII->
name,IlllIIII)==(0x787+4939-0x1ad2)){int IIIIIl;for(IIIIIl=(0x1b05+704-0x1dc5);
llIIIll->envp[llIIIll->envp_idx-(0x11a7+5219-0x2609)][IIIIIl]!='\0'&&llIIIll->
envp[llIIIll->envp_idx-(0x60f+2539-0xff9)][IIIIIl]!=((char)(0xce3+3144-0x18ee));
IIIIIl++)llIIIll->envp[llIIIll->envp_idx-(0x17a4+2667-0x220e)][IIIIIl]=toupper(
llIIIll->envp[llIIIll->envp_idx-(0x1830+2472-0x21d7)][IIIIIl]);}}}return
(0xb58+2820-0x165c);}
#endif 
int lIllIllIl(struct IIIlll*IIlII,int llIllI){















#if KERNEL_GT_EQ((0x33d+1698-0x9dd),(0xb62+7042-0x26de),(0xc5b+4406-0x1d76)) 
struct device*dev=NULL;dev=device_create(lIIIlII,NULL,MKDEV(MAJOR(IllIIIl),MINOR
(IllIIIl)+llIllI),IIlII,IIIllII"\x5f\x25\x64",llIllI);
#elif KERNEL_EQ((0x10aa+2440-0x1a30),(0xa61+2256-0x132b),(0x2c8+5778-0x1940)) 
struct device*dev=NULL;dev=device_create_drvdata(lIIIlII,NULL,MKDEV(MAJOR(
IllIIIl),MINOR(IllIIIl)+llIllI),IIlII,IIIllII"\x5f\x25\x64",llIllI);
#else 
struct class_device*dev=NULL;int IIlIlllIl;dev=kzalloc(sizeof(*dev),GFP_KERNEL);
if(dev){dev->devt=MKDEV(MAJOR(IllIIIl),MINOR(IllIIIl)+llIllI);dev->dev=NULL;dev
->class=lIIIlII;dev->parent=NULL;dev->release=NULL;
dev->class_data=IIlII;
#if KERNEL_LT_EQ((0x1621+3270-0x22e5),(0xe54+2468-0x17f2),(0x1106+3898-0x2031)) 
dev->hotplug=NULL;
#else 
dev->uevent=NULL;
#endif
snprintf(dev->class_id,BUS_ID_SIZE,IIIllII"\x5f\x25\x64",llIllI);IIlIlllIl=
class_device_register(dev);if(IIlIlllIl){kfree(dev);dev=ERR_PTR(IIlIlllIl);}}
else{dev=ERR_PTR(-ENOMEM);}
#endif
if(IS_ERR(dev)){return PTR_ERR(dev);}IIlII->dev=dev;return(0x1853+1208-0x1d0b);}
void lIlllllll(struct IIIlll*IIlII,int llIllI){if(IIlII->dev){
#if KERNEL_GT_EQ((0xf19+5407-0x2436),(0x816+7692-0x261c),(0x1023+2753-0x1aca)) 
device_destroy(lIIIlII,MKDEV(MAJOR(IllIIIl),MINOR(IllIIIl)+llIllI));
#else 
class_device_destroy(lIIIlII,MKDEV(MAJOR(IllIIIl),MINOR(IllIIIl)+llIllI));
#endif
IIlII->dev=NULL;}}int IllllIlI(struct IIIlll*IIlII,int IlIlllII,int llIIlIII){
int i;if(llIIlIII==-(0x7aa+7333-0x244e)){llIIlIII=IllIIlIl-(0xd53+2773-0x1827);}
if(IlIlllII<(0x2487+402-0x2619)||IlIlllII>=IllIIlIl)return-EINVAL;if(llIIlIII<
(0x15dd+1117-0x1a3a)||llIIlIII>=IllIIlIl)return-EINVAL;if(IlIlllII>llIIlIII)
return-EINVAL;mutex_lock(&lIIlIll);for(i=IlIlllII;i<=llIIlIII;i++){if(IIllllII[i
]==NULL){if(lIllIllIl(IIlII,i)==(0xbd0+289-0xcf1)){IIlII->llIllI=i;IIllllII[i]=
IIlII;if(IIlII->ops.IlIllIII)IIlII->ops.IlIllIII(IIlII->context);break;}}}
mutex_unlock(&lIIlIll);if(i>llIIlIII)return-EOVERFLOW;return(0x13e0+106-0x144a);
}dev_t lIIIIIllI(struct IIIlll*IIlII){dev_t IIIll=MKDEV((0x1278+228-0x135c),
(0x1361+1317-0x1886));mutex_lock(&lIIlIll);if(IIlII->llIllI>=(0x2632+190-0x26f0)
&&IIlII->llIllI<IllIIlIl){IIIll=MKDEV(MAJOR(IllIIIl),MINOR(IllIIIl)+IIlII->
llIllI);}mutex_unlock(&lIIlIll);return IIIll;}int IIIIllII(struct IIIlll*IIlII){
int llIllI;mutex_lock(&lIIlIll);llIllI=IIlII->llIllI;mutex_unlock(&lIIlIll);
return llIllI;}void lllIllII(struct IIIlll*IIlII){mutex_lock(&lIIlIll);if(IIlII
->llIllI>=(0x1aba+1353-0x2003)&&IIlII->llIllI<IllIIlIl&&IIllllII[IIlII->llIllI]
==IIlII){IIllllII[IIlII->llIllI]=NULL;lIlllllll(IIlII,IIlII->llIllI);}IIlII->
llIllI=-(0x152d+2714-0x1fc6);mutex_unlock(&lIIlIll);if(IIlII->ops.llIIllll)IIlII
->ops.llIIllll(IIlII->context);}void lllIlllll(struct IIIlll*IIlII){
#if KERNEL_LT_EQ((0xb88+4162-0x1bc8),(0xed2+5931-0x25f7),(0x704+419-0x898))
kobject_hotplug(&IIlII->dev->kobj,KOBJ_ONLINE);
#else
kobject_uevent(&IIlII->dev->kobj,KOBJ_ONLINE);
#endif
}void lllIlIIII(struct IIIlll*IIlII){
#if KERNEL_LT_EQ((0x159b+2241-0x1e5a),(0xc03+5906-0x230f),(0x21f6+936-0x258f))
kobject_hotplug(&IIlII->dev->kobj,KOBJ_OFFLINE);
#else
kobject_uevent(&IIlII->dev->kobj,KOBJ_OFFLINE);
#endif
}
ssize_t IIlllIIII(struct file*lIlllI,char __user*IlllIIIll,size_t IlIII,loff_t*
IIIIlIIll){struct IIIlll*IIlII=lIlllI->private_data;if(IIlII){if(IIlII->ops.read
)return IIlII->ops.read(IIlII->context,IlllIIIll,IlIII);else return
(0x51d+2875-0x1058);}return-ENODEV;}ssize_t llllIIIlI(struct file*lIlllI,const 
char __user*IlllIIIll,size_t IlIII,loff_t*IIIIlIIll){struct IIIlll*IIlII=lIlllI
->private_data;if(IIlII){if(IIlII->ops.write)return IIlII->ops.write(IIlII->
context,IlllIIIll,IlIII);else return(0xa45+927-0xde4);}return-ENODEV;}unsigned 
int lllIlllII(struct file*lIlllI,poll_table*lIIllI){struct IIIlll*IIlII=lIlllI->
private_data;if(IIlII){if(IIlII->ops.poll)return IIlII->ops.poll(IIlII->context,
lIlllI,lIIllI);else return(0xb7f+6531-0x2502);}return-ENODEV;}long llllIlIII(
struct file*lIlllI,unsigned int lIIIIl,unsigned long IlIIII){struct IIIlll*IIlII
=lIlllI->private_data;if(IIlII){if(IIlII->ops.unlocked_ioctl)return IIlII->ops.
unlocked_ioctl(IIlII->context,lIIIIl,IlIIII);else return(0x8bb+5310-0x1d79);}
return-ENODEV;}
#ifdef CONFIG_COMPAT
long lIIIlIIlI(struct file*lIlllI,unsigned int lIIIIl,unsigned long IlIIII){
struct IIIlll*IIlII=lIlllI->private_data;if(IIlII){if(IIlII->ops.compat_ioctl)
return IIlII->ops.compat_ioctl(IIlII->context,lIIIIl,IlIIII);else return
(0xf15+246-0x100b);}return-ENODEV;}
#endif
int lIIIllllI(struct file*lIlllI,struct vm_area_struct*llIIIlI){struct IIIlll*
IIlII=lIlllI->private_data;if(IIlII){if(IIlII->ops.mmap)return IIlII->ops.mmap(
IIlII->context,llIIIlI);else return-EINVAL;}return-ENODEV;}int IIlIlllll(struct 
inode*inode,struct file*lIlllI){int IIIll=-ENODEV;u32 m=iminor(inode);struct 
IIIlll*IIlII;mutex_lock(&lIIlIll);IIlII=IIllllII[m];if(IIlII&&IIlII->ops.
IlIllIII)IIlII->ops.IlIllIII(IIlII->context);mutex_unlock(&lIIlIll);if(IIlII){
lIlllI->private_data=IIlII;





mutex_lock(&IIlII->mutex);if(IIlII->ops.open)IIIll=IIlII->ops.open(IIlII->
context,++IIlII->IIIIIlI);else IIIll=(0x356+2139-0xbb1);mutex_unlock(&IIlII->
mutex);}return IIIll;}int IIlllIlll(struct inode*inode,struct file*lIlllI){int 
IIIll=-ENODEV;struct IIIlll*IIlII=lIlllI->private_data;if(IIlII){





mutex_lock(&IIlII->mutex);if(IIlII->ops.release)IIIll=IIlII->ops.release(IIlII->
context,--IIlII->IIIIIlI);else IIIll=(0x8b2+6313-0x215b);mutex_unlock(&IIlII->
mutex);if(IIlII->ops.llIIllll)IIlII->ops.llIIllll(IIlII->context);}return IIIll;
}
