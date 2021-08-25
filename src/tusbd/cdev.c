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
#define IIIIlIlI (0x2264+1444-0x2708)
static struct cdev*IllIIll=NULL;static dev_t llIlIll=MKDEV((0xcd5+4386-0x1df7),
(0x5a9+2637-0xff6));static void*IIllllII[IIIIlIlI]={(0xcdb+65-0xd1c)};static 
struct mutex lIIIlIl;static struct class*lIIIlII=NULL;ssize_t IIlllIIII(struct 
file*,char __user*,size_t,loff_t*);ssize_t lllIlIlII(struct file*,const char 
__user*,size_t,loff_t*);long IllIIlllI(struct file*,unsigned int,unsigned long);
#ifdef CONFIG_COMPAT
long lIIIlIIlI(struct file*,unsigned int,unsigned long);
#endif
int IIlIlllll(struct inode*,struct file*);int IIlllIlll(struct inode*,struct 
file*);unsigned int lllIlllII(struct file*lIlllI,poll_table*lIIllI);int 
lIIIllllI(struct file*lIlllI,struct vm_area_struct*llIIIlI);
#if KERNEL_LT_EQ((0x1b98+316-0x1cd2),(0x1899+121-0x190c),(0x12d6+2871-0x1df6)) 
static int lIIllIII(struct class_device*dev,char**envp,int llIlIllll,char*llIIl,
int IIIlIIlll);static void lIllIlIl(struct class_device*device);
#elif KERNEL_LT_EQ((0x233c+675-0x25dd),(0x1568+2964-0x20f6),(0x2ca+407-0x448)) 
static int lIIllIII(struct class_device*dev,struct kobj_uevent_env*lllIIII);
static void lIllIlIl(struct class_device*device);
#else 
static int lIIllIII(struct device*dev,struct kobj_uevent_env*lllIIII);
#endif
static struct file_operations IlIllIIlI={.owner=THIS_MODULE,.read=IIlllIIII,.
write=lllIlIlII,.poll=lllIlllII,.unlocked_ioctl=IllIIlllI,
#ifdef CONFIG_COMPAT
.compat_ioctl=lIIIlIIlI,
#endif
.mmap=lIIIllllI,.open=IIlIlllll,.release=IIlllIlll,};int lIIlllllI(void){int 
IlIlI=(0x679+8196-0x267d);lIlll(
"\x69\x6e\x69\x74\x5f\x63\x64\x65\x76\x5f\x6d\x6f\x64\x75\x6c\x65\x3a\x20\x2b\x2b" "\n"
);do{mutex_init(&lIIIlIl);lIIIlII=class_create(THIS_MODULE,IIIllII);if(lIIIlII==
NULL){lIlll(
"\x69\x6e\x69\x74\x5f\x63\x64\x65\x76\x5f\x6d\x6f\x64\x75\x6c\x65\x3a\x20\x63\x6c\x61\x73\x73\x5f\x63\x72\x65\x61\x74\x65\x20\x66\x61\x69\x6c\x65\x64\x2e" "\n"
);IlIlI=-ENOMEM;break;}
#if KERNEL_LT_EQ((0x134c+2788-0x1e2e),(0x2351+642-0x25cd),(0xc7c+5099-0x2058)) 
lIIIlII->hotplug=lIIllIII,lIIIlII->release=lIllIlIl,
#elif KERNEL_LT_EQ((0xd63+1026-0x1163),(0x332+239-0x41b),(0x12b7+4997-0x2623)) 
lIIIlII->uevent=lIIllIII,lIIIlII->release=lIllIlIl,
#else 
lIIIlII->dev_uevent=lIIllIII,
#endif
IlIlI=alloc_chrdev_region(&llIlIll,(0x1393+4504-0x252b),IIIIlIlI,IIIllII);if(
IlIlI!=(0x15e9+1624-0x1c41)){lIlll(
"\x69\x6e\x69\x74\x5f\x63\x64\x65\x76\x5f\x6d\x6f\x64\x75\x6c\x65\x3a\x20\x61\x6c\x6c\x6f\x63\x5f\x63\x68\x72\x64\x65\x76\x5f\x72\x65\x67\x69\x6f\x6e\x20\x66\x61\x69\x6c\x65\x64\x2e\x20\x45\x72\x72\x6f\x72\x20\x6e\x75\x6d\x62\x65\x72\x20\x25\x64" "\n"
,IlIlI);break;}lIlll(
"\x69\x6e\x69\x74\x5f\x63\x64\x65\x76\x5f\x6d\x6f\x64\x75\x6c\x65\x3a\x20\x61\x6c\x6c\x6f\x63\x61\x74\x65\x64\x20\x64\x65\x76\x6e\x75\x6d\x20\x72\x65\x67\x69\x6f\x6e\x3a\x20\x4d\x61\x6a\x6f\x72\x20\x25\x64\x20\x4d\x69\x6e\x6f\x72\x20\x25\x64" "\n"
,MAJOR(llIlIll),MINOR(llIlIll));memset(IIllllII,(0x119d+2344-0x1ac5),sizeof(
IIllllII));IllIIll=cdev_alloc();if(IllIIll==NULL){lIlll(
"\x69\x6e\x69\x74\x5f\x63\x64\x65\x76\x5f\x6d\x6f\x64\x75\x6c\x65\x3a\x20\x63\x64\x65\x76\x5f\x61\x6c\x6c\x6f\x63\x20\x66\x61\x69\x6c\x65\x64\x2e" "\n"
);IlIlI=-ENOMEM;break;}IllIIll->owner=THIS_MODULE;IllIIll->ops=&IlIllIIlI;IlIlI=
cdev_add(IllIIll,llIlIll,IIIIlIlI);if(IlIlI!=(0x367+7456-0x2087)){lIlll(
"\x69\x6e\x69\x74\x5f\x63\x64\x65\x76\x5f\x6d\x6f\x64\x75\x6c\x65\x3a\x20\x63\x64\x65\x76\x5f\x61\x64\x64\x20\x66\x61\x69\x6c\x65\x64\x2e\x20\x45\x72\x72\x6f\x72\x20\x6e\x75\x6d\x62\x65\x72\x20\x25\x64" "\n"
,IlIlI);break;}}while((0x12e4+2915-0x1e47));if(IlIlI!=(0x128+115-0x19b)){if(
IllIIll){cdev_del(IllIIll);}if(llIlIll!=MKDEV((0xaca+2916-0x162e),
(0x1ae4+1801-0x21ed))){unregister_chrdev_region(llIlIll,(0x412+577-0x554));}if(
lIIIlII){class_destroy(lIIIlII);}IllIIll=NULL;llIlIll=MKDEV((0xff+2325-0xa14),
(0x19c5+430-0x1b73));lIIIlII=NULL;}lIlll(
"\x69\x6e\x69\x74\x5f\x63\x64\x65\x76\x5f\x6d\x6f\x64\x75\x6c\x65\x3a\x20\x2d\x2d\x20\x72\x65\x73\x75\x6c\x74\x3d\x25\x64" "\n"
,IlIlI);return IlIlI;}int IIIIIIIll(void){lIlll(
"\x64\x65\x73\x74\x72\x6f\x79\x5f\x63\x64\x65\x76" "\n");if(IllIIll){cdev_del(
IllIIll);}if(llIlIll!=MKDEV((0xb9b+3929-0x1af4),(0x142d+4771-0x26d0))){
unregister_chrdev_region(llIlIll,IIIIlIlI);}if(lIIIlII){class_destroy(lIIIlII);}
IllIIll=NULL;llIlIll=MKDEV((0x1603+3205-0x2288),(0x226+5413-0x174b));lIIIlII=
NULL;return(0x109c+4584-0x2284);}
#if KERNEL_LT_EQ((0x5c9+2523-0xfa2),(0x5a2+583-0x7e3),(0x3a+1037-0x42e)) 
static void lIllIlIl(struct class_device*device){kfree(device);}
#endif
#if KERNEL_LT_EQ((0x10a5+568-0x12db),(0x10f+8326-0x218f),(0xcbc+1443-0x1248)) 
static int lIIllIII(struct class_device*device,char**envp,int llIlIllll,char*
llIIl,int IIIlIIlll){struct IIIlll*lllll=device->class_data;if(lllll&&lllll->
IlllIIII){int i;int length;struct lIIIllll*lIlIIIl;for(lIlIIIl=lllll->IlllIIII,i
=(0x1f0a+1598-0x2548),length=(0x70+9555-0x25c3);lIlIIIl->name&&(lIlIIIl->
lIIlllII||lIlIIIl->lIIIIIII);lIlIIIl++){const char*lIIlllII=lIlIIIl->lIIIIIII?
lIlIIIl->lIIIIIII(lllll->context):lIlIIIl->lIIlllII;
#if KERNEL_LT_EQ((0xd8+6765-0x1b43),(0xefa+4493-0x2081),(0x17d+1247-0x64d)) 
if(add_hotplug_env_var(
#else 
if(add_uevent_var(
#endif
envp,llIlIllll,&i,llIIl,IIIlIIlll,&length,"\x25\x73\x5f\x25\x73\x3d\x25\x73",
IIIllII,lIlIIIl->name,lIIlllII)==(0x1813+2812-0x230f)){int IIIIIl;for(IIIIIl=
(0x3c4+8283-0x241f);envp[i-(0xc58+5641-0x2260)][IIIIIl]!='\0'&&envp[i-
(0xc2d+4321-0x1d0d)][IIIIIl]!=((char)(0x607+3188-0x123e));IIIIIl++)envp[i-
(0x31f+984-0x6f6)][IIIIIl]=toupper(envp[i-(0x112d+2148-0x1990)][IIIIIl]);}}}
return(0x93+6070-0x1849);}
#else 
static int lIIllIII(
#if KERNEL_LT_EQ((0x1cbf+1946-0x2457),(0xa59+6661-0x2458),(0xa22+1629-0x1066)) 
struct class_device*device,
#else 
struct device*device,
#endif
struct kobj_uevent_env*lllIIII){
#if KERNEL_LT_EQ((0xec+7894-0x1fc0),(0x1375+4157-0x23ac),(0x1be4+898-0x1f4d)) 
struct IIIlll*lllll=device->class_data;
#else 
struct IIIlll*lllll=dev_get_drvdata(device);
#endif
if(lllll&&lllll->IlllIIII){struct lIIIllll*lIlIIIl;for(lIlIIIl=lllll->IlllIIII;
lIlIIIl->name&&(lIlIIIl->lIIlllII||lIlIIIl->lIIIIIII);lIlIIIl++){const char*
lIIlllII=lIlIIIl->lIIIIIII?lIlIIIl->lIIIIIII(lllll->context):lIlIIIl->lIIlllII;
if(add_uevent_var(lllIIII,"\x25\x73\x5f\x25\x73\x3d\x25\x73",IIIllII,lIlIIIl->
name,lIIlllII)==(0x24ad+570-0x26e7)){int IIIIIl;for(IIIIIl=(0x122d+3777-0x20ee);
lllIIII->envp[lllIIII->envp_idx-(0xf39+5636-0x253c)][IIIIIl]!='\0'&&lllIIII->
envp[lllIIII->envp_idx-(0x609+8325-0x268d)][IIIIIl]!=((char)(0x972+1184-0xdd5));
IIIIIl++)lllIIII->envp[lllIIII->envp_idx-(0x2e4+6310-0x1b89)][IIIIIl]=toupper(
lllIIII->envp[lllIIII->envp_idx-(0x82d+6861-0x22f9)][IIIIIl]);}}}return
(0x576+5636-0x1b7a);}
#endif 
int lIllIllIl(struct IIIlll*lllll,int llIllI){















#if KERNEL_GT_EQ((0x126c+4236-0x22f6),(0x17eb+2828-0x22f1),(0x568+3632-0x137d)) 
struct device*dev=NULL;dev=device_create(lIIIlII,NULL,MKDEV(MAJOR(llIlIll),MINOR
(llIlIll)+llIllI),lllll,IIIllII"\x5f\x25\x64",llIllI);
#elif KERNEL_EQ((0x176d+3517-0x2528),(0x201+9154-0x25bd),(0x1552+4070-0x251e)) 
struct device*dev=NULL;dev=device_create_drvdata(lIIIlII,NULL,MKDEV(MAJOR(
llIlIll),MINOR(llIlIll)+llIllI),lllll,IIIllII"\x5f\x25\x64",llIllI);
#else 
struct class_device*dev=NULL;int IlIllllII;dev=kzalloc(sizeof(*dev),GFP_KERNEL);
if(dev){dev->devt=MKDEV(MAJOR(llIlIll),MINOR(llIlIll)+llIllI);dev->dev=NULL;dev
->class=lIIIlII;dev->parent=NULL;dev->release=NULL;
dev->class_data=lllll;
#if KERNEL_LT_EQ((0x1310+909-0x169b),(0x1b3d+588-0x1d83),(0x1389+964-0x173e)) 
dev->hotplug=NULL;
#else 
dev->uevent=NULL;
#endif
snprintf(dev->class_id,BUS_ID_SIZE,IIIllII"\x5f\x25\x64",llIllI);IlIllllII=
class_device_register(dev);if(IlIllllII){kfree(dev);dev=ERR_PTR(IlIllllII);}}
else{dev=ERR_PTR(-ENOMEM);}
#endif
if(IS_ERR(dev)){return PTR_ERR(dev);}lllll->dev=dev;return(0x671+1183-0xb10);}
void lIlllllll(struct IIIlll*lllll,int llIllI){if(lllll->dev){
#if KERNEL_GT_EQ((0x196c+765-0x1c67),(0x6a4+4886-0x19b4),(0x51b+2371-0xe44)) 
device_destroy(lIIIlII,MKDEV(MAJOR(llIlIll),MINOR(llIlIll)+llIllI));
#else 
class_device_destroy(lIIIlII,MKDEV(MAJOR(llIlIll),MINOR(llIlIll)+llIllI));
#endif
lllll->dev=NULL;}}int IllllIlI(struct IIIlll*lllll,int IlIlllII,int lIlIIlII){
int i;if(lIlIIlII==-(0xa55+2589-0x1471)){lIlIIlII=IIIIlIlI-(0x82b+2152-0x1092);}
if(IlIlllII<(0xc0f+122-0xc89)||IlIlllII>=IIIIlIlI){return-EINVAL;}if(lIlIIlII<
(0x1ba9+2130-0x23fb)||lIlIIlII>=IIIIlIlI){return-EINVAL;}if(IlIlllII>lIlIIlII){
return-EINVAL;}mutex_lock(&lIIIlIl);for(i=IlIlllII;i<=lIlIIlII;i++){if(IIllllII[
i]==NULL){if(lIllIllIl(lllll,i)==(0x1f3+8056-0x216b)){lllll->llIllI=i;IIllllII[i
]=lllll;if(lllll->ops.IlIIlIII){lllll->ops.IlIIlIII(lllll->context);}break;}}}
mutex_unlock(&lIIIlIl);if(i>lIlIIlII){return-EOVERFLOW;}return
(0x2233+893-0x25b0);}dev_t lIIIIIllI(struct IIIlll*lllll){dev_t IlIlI=MKDEV(
(0xb51+783-0xe60),(0x7c6+5454-0x1d14));mutex_lock(&lIIIlIl);if(lllll->llIllI>=
(0x1a48+1734-0x210e)&&lllll->llIllI<IIIIlIlI){IlIlI=MKDEV(MAJOR(llIlIll),MINOR(
llIlIll)+lllll->llIllI);}mutex_unlock(&lIIIlIl);return IlIlI;}int IIIllIlI(
struct IIIlll*lllll){int llIllI;mutex_lock(&lIIIlIl);llIllI=lllll->llIllI;
mutex_unlock(&lIIIlIl);return llIllI;}void lllIllII(struct IIIlll*lllll){
mutex_lock(&lIIIlIl);if(lllll->llIllI>=(0x607+7380-0x22db)&&lllll->llIllI<
IIIIlIlI&&IIllllII[lllll->llIllI]==lllll){IIllllII[lllll->llIllI]=NULL;lIlllllll
(lllll,lllll->llIllI);}lllll->llIllI=-(0x571+2938-0x10ea);mutex_unlock(&lIIIlIl)
;if(lllll->ops.IlIllIII){lllll->ops.IlIllIII(lllll->context);}}void lIlllIIll(
struct IIIlll*lllll){
#if KERNEL_LT_EQ((0x197+7152-0x1d85),(0xa62+1439-0xffb),(0xd6b+5189-0x21a1))
kobject_hotplug(&lllll->dev->kobj,KOBJ_ONLINE);
#else
kobject_uevent(&lllll->dev->kobj,KOBJ_ONLINE);
#endif
}void IlIIIIlll(struct IIIlll*lllll){
#if KERNEL_LT_EQ((0x109f+5608-0x2685),(0x7e1+1740-0xea7),(0xe3f+1061-0x1255))
kobject_hotplug(&lllll->dev->kobj,KOBJ_OFFLINE);
#else
kobject_uevent(&lllll->dev->kobj,KOBJ_OFFLINE);
#endif
}
ssize_t IIlllIIII(struct file*lIlllI,char __user*lllIIllIl,size_t IIIIl,loff_t*
IIIIlIIll){struct IIIlll*lllll=lIlllI->private_data;if(lllll){if(lllll->ops.read
){return lllll->ops.read(lllll->context,lllIIllIl,IIIIl);}else{return
(0x376+5478-0x18dc);}}return-ENODEV;}ssize_t lllIlIlII(struct file*lIlllI,const 
char __user*lllIIllIl,size_t IIIIl,loff_t*IIIIlIIll){struct IIIlll*lllll=lIlllI
->private_data;if(lllll){if(lllll->ops.write){return lllll->ops.write(lllll->
context,lllIIllIl,IIIIl);}else{return(0x596+2913-0x10f7);}}return-ENODEV;}
unsigned int lllIlllII(struct file*lIlllI,poll_table*lIIllI){struct IIIlll*lllll
=lIlllI->private_data;if(lllll){if(lllll->ops.poll){return lllll->ops.poll(lllll
->context,lIlllI,lIIllI);}else{return(0x18d2+3540-0x26a6);}}return-ENODEV;}long 
IllIIlllI(struct file*lIlllI,unsigned int lIIIIl,unsigned long IlIIII){struct 
IIIlll*lllll=lIlllI->private_data;if(lllll){if(lllll->ops.unlocked_ioctl){return
 lllll->ops.unlocked_ioctl(lllll->context,lIIIIl,IlIIII);}else{return
(0x35+3671-0xe8c);}}return-ENODEV;}
#ifdef CONFIG_COMPAT
long lIIIlIIlI(struct file*lIlllI,unsigned int lIIIIl,unsigned long IlIIII){
struct IIIlll*lllll=lIlllI->private_data;if(lllll){if(lllll->ops.compat_ioctl){
return lllll->ops.compat_ioctl(lllll->context,lIIIIl,IlIIII);}else{return
(0x16d1+2568-0x20d9);}}return-ENODEV;}
#endif
int lIIIllllI(struct file*lIlllI,struct vm_area_struct*llIIIlI){struct IIIlll*
lllll=lIlllI->private_data;if(lllll){if(lllll->ops.mmap){return lllll->ops.mmap(
lllll->context,llIIIlI);}else{return-EINVAL;}}return-ENODEV;}int IIlIlllll(
struct inode*inode,struct file*lIlllI){int IlIlI=-ENODEV;u32 m=iminor(inode);
struct IIIlll*lllll;mutex_lock(&lIIIlIl);lllll=IIllllII[m];if(lllll&&lllll->ops.
IlIIlIII){lllll->ops.IlIIlIII(lllll->context);}mutex_unlock(&lIIIlIl);if(lllll){
lIlllI->private_data=lllll;





mutex_lock(&lllll->mutex);if(lllll->ops.open){IlIlI=lllll->ops.open(lllll->
context,++lllll->IIIIIlI);}else{IlIlI=(0x87b+1830-0xfa1);}mutex_unlock(&lllll->
mutex);}return IlIlI;}int IIlllIlll(struct inode*inode,struct file*lIlllI){int 
IlIlI=-ENODEV;struct IIIlll*lllll=lIlllI->private_data;if(lllll){





mutex_lock(&lllll->mutex);if(lllll->ops.release){IlIlI=lllll->ops.release(lllll
->context,--lllll->IIIIIlI);}else{IlIlI=(0x8e8+6479-0x2237);}mutex_unlock(&lllll
->mutex);if(lllll->ops.IlIllIII){lllll->ops.IlIllIII(lllll->context);}}return 
IlIlI;}
