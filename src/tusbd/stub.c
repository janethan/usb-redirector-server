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
#if KERNEL_LT_EQ((0xa42+7110-0x2606),(0x131b+402-0x14a7),(0x1603+2296-0x1ed5))
#include <linux/smp_lock.h>
#endif
#if KERNEL_GT_EQ((0x5e2+1517-0xbcd),(0xd34+6336-0x25ee),(0x12bf+1946-0x1a3a))
#if KERNEL_LT_EQ((0xf4f+3750-0x1df3),(0x316+3588-0x1114),(0xbf+6903-0x1b96))



#include "vhci_hcd.h"
#endif
#endif
static struct list_head IIllIII;static spinlock_t IIlIII;extern struct IIIlll*
IIlllIlI;extern struct list_head llllIllI;extern struct mutex lIlIIllI;extern 
struct list_head lIIlIIII;extern struct mutex lIlIIIll;extern struct list_head 
IllllIIl;extern struct mutex llIIllIl;
#if KERNEL_LT_EQ((0x1232+1397-0x17a5),(0xc41+4038-0x1c01),(0x10b0+2305-0x199e))
extern struct notifier_block llIIIIII;
#else 
extern struct notifier_block lIIlIIlI;
#endif
#ifdef _USBD_DEBUG_MEMORY_
extern atomic_t llIIlIllI;extern atomic_t IllllIII;extern atomic_t lllllIIII;
#endif 


static struct usb_device_id lIlIIIIIl[]={{.driver_info=(0x13c5+4491-0x254f)},{}}
;MODULE_DEVICE_TABLE(usb,lIlIIIIIl);static int IIIIlllII(struct usb_interface*
IIIIII,const struct usb_device_id*id);static void lIIIIIIll(struct usb_interface
*IIIIII);
#if KERNEL_GT_EQ((0x620+5862-0x1d04),(0xc4+6468-0x1a02),(0x127+3926-0x1066))
static int IlIlllIl(struct usb_interface*llIlII);static int llIIIlIl(struct 
usb_interface*llIlII);
#elif KERNEL_GT_EQ((0x1b72+2006-0x2346),(0x4ca+4228-0x1548),(0x22c+7536-0x1f8a))
static void IlIlllIl(struct usb_interface*llIlII);static void llIIIlIl(struct 
usb_interface*llIlII);
#endif
void IIIllIlI(struct lllll*lIlII,int IlllllI,int lIIlIlll);void lIIlllll(struct 
lllll*lIlII);int IIIIIlIlI(struct lllll*lIlII,IlIIlI lllIl);void lIlIIlll(struct
 lllll*lIlII,IlIIlI lllIl);struct lIlIl*lIIIlIII(struct lllll*lIlII,IlIIlI lllIl
);struct usb_driver lIlIllI={.name=lIIIllll,.id_table=lIlIIIIIl,.probe=IIIIlllII
,.disconnect=lIIIIIIll,
#if KERNEL_GT_EQ((0xe4f+3804-0x1d29),(0xf47+3483-0x1cdc),(0x116d+3580-0x1f57))
.pre_reset=IlIlllIl,.post_reset=llIIIlIl,
#endif
};


static int IIIIlllII(struct usb_interface*IIIIII,const struct usb_device_id*id){
int IIIll=-ENODEV;int llIIIIIlI=(0x187c+3654-0x26c2);struct usb_device*llIII=
interface_to_usbdev(IIIIII);const char*IIlIlll=llIlllII(&llIII->dev.kobj,
GFP_KERNEL);IIlll(
"\x76\x69\x64\x3d\x30\x78\x25\x30\x34\x58\x20\x70\x69\x64\x3d\x30\x78\x25\x30\x34\x58\x20\x72\x65\x76\x3d\x30\x78\x25\x30\x34\x58\x20\x62\x75\x73\x5f\x69\x64\x3d" "\"" "\x25\x73" "\"" "\x20\x68\x75\x62\x3d" "\"" "\x25\x73" "\"" "\x20\x70\x61\x74\x68\x3d" "\"" "\x25\x73" "\"" "\x20\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x3d\x25\x75\x20\x74\x6f\x74\x61\x6c\x5f\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x73\x3d\x25\x75" "\n"
,le16_to_cpu(llIII->descriptor.idVendor),le16_to_cpu(llIII->descriptor.idProduct
),le16_to_cpu(llIII->descriptor.bcdDevice),llIIIl(&llIII->dev),IlIllIlI(llIII),
IIlIlll,IIIIII->cur_altsetting->desc.bInterfaceNumber,llIII->actconfig->desc.
bNumInterfaces);if(IIlIlll)kfree(IIlIlll);if(IIIlIIIl(llIII)){llIIIIIlI=
(0x3da+1771-0xac4);}else if(IlllIIlI(llIII)){IIIll=IllllIll(llIII);if(IIIll<
(0x4a2+5563-0x1a5d)){IIllIl(
"\x63\x61\x6e\x20\x6e\x6f\x74\x20\x61\x74\x74\x61\x63\x68\x20\x75\x73\x62\x20\x64\x65\x76\x69\x63\x65\x20\x25\x73\x2c\x20\x65\x72\x72\x6f\x72\x20\x25\x64" "\n"
,llIIIl(&llIII->dev),IIIll);}else{llIIIIIlI=(0xa93+5736-0x20fa);}}if(llIIIIIlI){
IIIll=IIlIIIIII(IIIIII,(0xe29+5678-0x2457));if(IIIll<(0x201a+1372-0x2576)){
IIllIl(
"\x63\x61\x6e\x20\x6e\x6f\x74\x20\x61\x74\x74\x61\x63\x68\x20\x75\x73\x62\x20\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20\x25\x73\x2c\x20\x65\x72\x72\x6f\x72\x20\x25\x64" "\n"
,llIIIl(&IIIIII->dev),IIIll);}}return IIIll;}
static void lIIIIIIll(struct usb_interface*IIIIII){IIlll("\x2b\x2b" "\n");if(
usb_get_intfdata(IIIIII)!=(void*)-(0x1863+2187-0x20ed)){IIllIlIll(IIIIII);}IIlll
("\x2d\x2d" "\n");}
#if KERNEL_GT_EQ((0x1463+4622-0x266f),(0x19c5+3389-0x26fc),(0xdb2+673-0x103c))
static int IlIlllIl(struct usb_interface*llIlII){return(0x2155+1345-0x2696);}
static int llIIIlIl(struct usb_interface*llIlII){return(0x1907+1726-0x1fc5);}
#elif KERNEL_GT_EQ((0x1394+232-0x147a),(0xc7c+2692-0x16fa),(0x1fe6+722-0x22a6))
static void IlIlllIl(struct usb_interface*llIlII){return;}static void llIIIlIl(
struct usb_interface*llIlII){return;}
#endif


int IIIlIIIl(struct usb_device*llIII){int lIIllIIll=(0xb3f+6068-0x22f3);struct 
lllll*lIlII;spin_lock(&IIlIII);list_for_each_entry(lIlII,&IIllIII,IIIIll){if(
lIlII->lIIlI==llIII){lIIllIIll=(0x1b9+9245-0x25d5);break;}}spin_unlock(&IIlIII);
return lIIllIIll;}
int IllllIll(struct usb_device*llIII){IIlll("\x2b\x2b\x20\x25\x73" "\n",llIIIl(&
llIII->dev));if(IIlIIllIl(llIII)==NULL){IIlll(
"\x63\x61\x6e\x20\x6e\x6f\x74\x20\x63\x72\x65\x61\x74\x65\x20\x73\x74\x75\x62" "\n"
);return-ENOMEM;}IIlll("\x2d\x2d" "\n");return(0x498+7805-0x2315);}
int lIllIllI(struct usb_device*llIII){struct lllll*lIlII;IIlll(
"\x2b\x2b\x20\x25\x73" "\n",llIIIl(&llIII->dev));lIlII=IIIIllIl(llIII);if(lIlII)
{lIlIllll(lIlII,NULL,(0xf1a+46-0xf48),(0xcc+5655-0x16e2));lIllIlIl(lIlII);
lllllIll(lIlII);}else{IIlll(
"\x64\x65\x76\x69\x63\x65\x20\x6e\x6f\x74\x20\x66\x6f\x75\x6e\x64" "\n");}IIlll(
"\x2d\x2d" "\n");return(0x8f9+6301-0x2196);}int IIlIIIIII(struct usb_interface*
IIIIII,int IIIllllIIl){int IIIll=-ENODEV;struct usb_device*llIII=
interface_to_usbdev(IIIIII);struct lllll*lIlII;IIlll("\x2b\x2b" "\n");lIlII=
IIIIllIl(llIII);if(lIlII){


lIlII->llIlIIIl+=IIIllllIIl;lIlII->lIIIIIll=llIII->actconfig?llIII->actconfig->
desc.bNumInterfaces:(0x4fb+1781-0xbf0);if(++lIlII->lIlIllII==lIlII->lIIIIIll){
IIlIIllll(lIlII);}IIlll(
"\x69\x6e\x69\x74\x5f\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x73\x3d\x25\x64\x20\x74\x6f\x74\x61\x6c\x5f\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x73\x3d\x25\x64" "\n"
,lIlII->lIlIllII,lIlII->lIIIIIll);usb_set_intfdata(IIIIII,lIlII);
IIIll=(0x71d+7823-0x25ac);}IIlll(
"\x2d\x2d\x20\x72\x65\x73\x75\x6c\x74\x3d\x25\x64" "\n",IIIll);return IIIll;}
void IIllIlIll(struct usb_interface*IIIIII){struct lllll*lIlII;IIlll(
"\x2b\x2b" "\n");
lIlII=usb_get_intfdata(IIIIII);usb_set_intfdata(IIIIII,NULL);lIlII->lIlIllII--;
lIlIIIllI(lIlII);
IlIllIIll(lIlII,IIIIII,NULL,(0x149d+2291-0x1d8f));IIlll(
"\x69\x6e\x69\x74\x5f\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x73\x3d\x25\x64\x20\x74\x6f\x74\x61\x6c\x5f\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x73\x3d\x25\x64" "\n"
,lIlII->lIlIllII,lIlII->lIIIIIll);lllllIll(lIlII);
IIlll("\x2d\x2d" "\n");}

int lIlIlIlll(void){int IIllIIIll=(0x11a1+1226-0x166b);int lIlIlllIl=
(0x1b57+2902-0x26ad);int IIIll=(0x136f+762-0x1669);do{INIT_LIST_HEAD(&IIllIII);
spin_lock_init(&IIlIII);INIT_LIST_HEAD(&llllIllI);mutex_init(&lIlIIllI);
INIT_LIST_HEAD(&lIIlIIII);mutex_init(&lIlIIIll);INIT_LIST_HEAD(&IllllIIl);
mutex_init(&llIIllIl);IIlllIlI=IIIlllIIl();if(IIlllIlI==NULL){IIIll=-ENOMEM;
Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x69\x6e\x69\x74\x5f\x6d\x6f\x64\x75\x6c\x65\x3a\x20\x75\x73\x62\x64\x5f\x6c\x6f\x61\x64\x65\x72\x5f\x61\x6c\x6c\x6f\x63\x5f\x6d\x69\x6e\x6f\x72\x2e\x20\x45\x72\x72\x6f\x72\x20\x6e\x75\x6d\x62\x65\x72\x20\x25\x64" "\n"
,IIIll);break;}


IIIll=usb_register(&lIlIllI);if(IIIll!=(0x9d+9127-0x2444)){Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x69\x6e\x69\x74\x5f\x6d\x6f\x64\x75\x6c\x65\x3a\x20\x75\x73\x62\x5f\x72\x65\x67\x69\x73\x74\x65\x72\x20\x66\x61\x69\x6c\x65\x64\x2e\x20\x45\x72\x72\x6f\x72\x20\x6e\x75\x6d\x62\x65\x72\x20\x25\x64" "\n"
,IIIll);break;}IIllIIIll=(0x5e1+2977-0x1181);
#if KERNEL_LT_EQ((0xae9+3455-0x1866),(0x1e4+4905-0x1507),(0x1eeb+1747-0x25ab))
usb_register_notify(&llIIIIII);
#else 
IIIll=bus_register_notifier(lIlIllI.drvwrap.driver.bus,&lIIlIIlI);if(IIIll!=
(0x118b+264-0x1293)){Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x69\x6e\x69\x74\x5f\x6d\x6f\x64\x75\x6c\x65\x3a\x20\x62\x75\x73\x5f\x72\x65\x67\x69\x73\x74\x65\x72\x5f\x6e\x6f\x74\x69\x66\x69\x65\x72\x20\x66\x61\x69\x6c\x65\x64\x2e\x20\x45\x72\x72\x6f\x72\x20\x6e\x75\x6d\x62\x65\x72\x20\x25\x64" "\n"
,IIIll);break;}
#endif
lIlIlllIl=(0x26d+7088-0x1e1c);}while((0x240+2315-0xb4b));if(IIIll!=
(0x13e6+3155-0x2039)){if(lIlIlllIl)
#if KERNEL_LT_EQ((0x434+214-0x508),(0x157d+469-0x174c),(0x1015+1808-0x1712))
usb_unregister_notify(&llIIIIII);
#else 
bus_unregister_notifier(lIlIllI.drvwrap.driver.bus,&lIIlIIlI);
#endif
if(IIllIIIll)usb_deregister(&lIlIllI);if(IIlllIlI){IIIIIllll(IIlllIlI);IIlllIlI=
NULL;}}return IIIll;}void llIllIIll(void){struct list_head Illlll;IIlIIlII();
llIIIIIII();
#if KERNEL_LT_EQ((0x837+1824-0xf55),(0x9b3+3938-0x190f),(0x12dd+1639-0x1931))
usb_unregister_notify(&llIIIIII);
#else 
bus_unregister_notifier(lIlIllI.drvwrap.driver.bus,&lIIlIIlI);
#endif
usb_deregister(&lIlIllI);if(IIlllIlI){IIIIIllll(IIlllIlI);IIlllIlI=NULL;}
INIT_LIST_HEAD(&Illlll);spin_lock(&IIlIII);list_splice_init(&IIllIII,&Illlll);
spin_unlock(&IIlIII);while(!list_empty(&Illlll)){struct lllll*lIlII=list_entry(
Illlll.next,struct lllll,IIIIll);lIllIlIl(lIlII);}IIlIIlIll();}struct lllll*
IIlIIllIl(struct usb_device*llIII){char*IIlIlll;struct lllll*lIlII;IIlIlll=
llIlllII(&llIII->dev.kobj,GFP_KERNEL);if(IIlIlll==NULL){return NULL;}lIlII=
lIllllI(sizeof(*lIlII),GFP_KERNEL);if(lIlII){INIT_LIST_HEAD(&lIlII->IIIIll);
init_waitqueue_head(&lIlII->lIIllI);INIT_LIST_HEAD(&lIlII->llllIlll);
spin_lock_init(&lIlII->lIIIIll);INIT_LIST_HEAD(&lIlII->IlIIlII);spin_lock_init(&
lIlII->IIlIlI);INIT_LIST_HEAD(&lIlII->IIIllIIl);kref_init(&lIlII->IIllII);lIlII
->vid=le16_to_cpu(llIII->descriptor.idVendor);lIlII->IIlllII=le16_to_cpu(llIII->
descriptor.idProduct);lIlII->lIlIlll=le16_to_cpu(llIII->descriptor.bcdDevice);
strncpy(lIlII->bus_id,llIIIl(&llIII->dev),BUS_ID_SIZE-(0xe3b+2536-0x1822));lIlII
->IIllIIl=(0x220+3593-0x1029);lIlII->llIlIIIl=(0x11a8+1372-0x1704);lIlII->
lIIllIlI=IllIlIIIl;lIlII->lIIlI=usb_get_dev(llIII);lIlII->lIIIIIll=
(0x1ee4+304-0x2014);lIlII->lIlIllII=(0x10a7+1671-0x172e);lIlII->llIllll=
(0x1461+605-0x16be);lIlII->IIIIIlIl=IIlIlll;lIlII->IIlIlII=(0x19d9+2079-0x21f8);
lIlII->IlIllllI=-(0xa96+2357-0x13ca);lIlII->IIIlllII=-(0x210+7732-0x2043);lIlII
->llIlIlIl=-(0x9cb+70-0xa10);lIlII->lIlIlI=IIlIllIl;lIlII->llIIIIl=NULL;
spin_lock_init(&lIlII->lIIlIl);lIlII->IIIIlII=(strcmp(IlIllIlI(llIII),
"\x65\x68\x63\x69\x5f\x68\x63\x64")==(0x1cb+2347-0xaf6));







if(strcmp(IlIllIlI(llIII),"\x64\x77\x63\x5f\x6f\x74\x67")==(0x175+1051-0x590)){


lIlII->llIIIlII=IllIIlI;lIlII->lllIlIIl=IllIIlI;lIlII->IIlIlIII=IllIIlI;}else{
#if KERNEL_LT_EQ((0x1b9+2227-0xa6a),(0xdf9+3396-0x1b37),(0x1657+1278-0x1b37))


lIlII->llIIIlII=lIlllll;lIlII->lllIlIIl=IllIIlI;lIlII->IIlIlIII=lIlllll;Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x63\x72\x65\x61\x74\x65\x3a\x20\x62\x75\x66\x66\x65\x72\x20\x74\x79\x70\x65\x73\x20\x62\x75\x6c\x6b\x3d\x70\x74\x20\x69\x6e\x74\x3d\x73\x6c\x20\x69\x73\x6f\x3d\x70\x74" "\n"
);
#elif KERNEL_EQ((0x1ec+6331-0x1aa5),(0x1ee0+1840-0x260a),(0x23c9+606-0x2608))



if(bus_to_hcd(llIII->bus)->driver->flags&HCD_USB3){lIlII->llIIIlII=IIlIIII;Illll
(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x63\x72\x65\x61\x74\x65\x3a\x20\x62\x75\x66\x66\x65\x72\x20\x74\x79\x70\x65\x73\x20\x62\x75\x6c\x6b\x3d\x73\x67\x20\x69\x6e\x74\x3d\x73\x6c\x20\x69\x73\x6f\x3d\x70\x74" "\n"
);}else{lIlII->llIIIlII=lIlllll;Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x63\x72\x65\x61\x74\x65\x3a\x20\x62\x75\x66\x66\x65\x72\x20\x74\x79\x70\x65\x73\x20\x62\x75\x6c\x6b\x3d\x70\x74\x20\x69\x6e\x74\x3d\x73\x6c\x20\x69\x73\x6f\x3d\x70\x74" "\n"
);}lIlII->lllIlIIl=IllIIlI;lIlII->IIlIlIII=lIlllll;
#elif KERNEL_EQ((0x1ab5+2796-0x259f),(0x2665+85-0x26b4),(0x2324+516-0x2508))



if(bus_to_hcd(llIII->bus)->driver->flags&HCD_USB3){lIlII->llIIIlII=IIlIIII;lIlII
->lllIlIIl=IIlIIII;Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x63\x72\x65\x61\x74\x65\x3a\x20\x62\x75\x66\x66\x65\x72\x20\x74\x79\x70\x65\x73\x20\x62\x75\x6c\x6b\x3d\x73\x67\x20\x69\x6e\x74\x3d\x73\x67\x20\x69\x73\x6f\x3d\x70\x74" "\n"
);}else{lIlII->llIIIlII=lIlllll;lIlII->lllIlIIl=IllIIlI;Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x63\x72\x65\x61\x74\x65\x3a\x20\x62\x75\x66\x66\x65\x72\x20\x74\x79\x70\x65\x73\x20\x62\x75\x6c\x6b\x3d\x70\x74\x20\x69\x6e\x74\x3d\x73\x6c\x20\x69\x73\x6f\x3d\x70\x74" "\n"
);}lIlII->IIlIlIII=lIlllll;
#elif KERNEL_GT_EQ((0x389+3820-0x1273),(0x9d1+5981-0x2128),(0x18ed+2590-0x22ea))





if(llIII->bus->sg_tablesize>(0x1aed+1259-0x1fd8)){lIlII->llIIIlII=IIlIIII;lIlII
->lllIlIIl=IIlIIII;Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x63\x72\x65\x61\x74\x65\x3a\x20\x62\x75\x66\x66\x65\x72\x20\x74\x79\x70\x65\x73\x20\x62\x75\x6c\x6b\x3d\x73\x67\x20\x69\x6e\x74\x3d\x73\x67\x20\x69\x73\x6f\x3d\x70\x74" "\n"
);}else{lIlII->llIIIlII=lIlllll;lIlII->lllIlIIl=IllIIlI;Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x63\x72\x65\x61\x74\x65\x3a\x20\x62\x75\x66\x66\x65\x72\x20\x74\x79\x70\x65\x73\x20\x62\x75\x6c\x6b\x3d\x70\x74\x20\x69\x6e\x74\x3d\x73\x6c\x20\x69\x73\x6f\x3d\x70\x74" "\n"
);}lIlII->IIlIlIII=lIlllll;
#endif
}
#ifdef _USBD_DEBUG_MEMORY_
atomic_inc(&llIIlIllI);
#endif
if(IIIIIIIII(lIlII)<(0xac7+4346-0x1bc1)){
#ifdef _USBD_DEBUG_MEMORY_
atomic_inc(&IllllIII);
#endif
Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x63\x72\x65\x61\x74\x65\x3a\x20\x61\x6c\x6c\x6f\x63\x20\x6d\x69\x6e\x6f\x72\x20\x66\x61\x69\x6c\x65\x64" "\n"
);lllllIll(lIlII);return NULL;}spin_lock(&IIlIII);list_add(&lIlII->IIIIll,&
IIllIII);spin_unlock(&IIlIII);if(IlIlIIlIl(lIlII)<(0x10f9+2521-0x1ad2)){Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x63\x72\x65\x61\x74\x65\x3a\x20\x72\x65\x67\x69\x73\x74\x65\x72\x20\x6d\x69\x6e\x6f\x72\x20\x66\x61\x69\x6c\x65\x64" "\n"
);lIllIlIl(lIlII);return NULL;}return lIlII;}IlIIlIlll(IIlIlll);return NULL;}
void lIllIlIl(struct lllll*lIlII){
#ifdef _USBD_DEBUG_MEMORY_
atomic_inc(&IllllIII);
#endif
spin_lock(&IIlIII);list_del_init(&lIlII->IIIIll);spin_unlock(&IIlIII);IIIllllII(
lIlII);lllllIll(lIlII);}
void IllIlIIII(struct kref*lllIlIl){struct lllll*lIlII=container_of(lllIlIl,
struct lllll,IIllII);Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x64\x65\x73\x74\x72\x6f\x79\x2b\x2b" "\n"
);
#ifdef _USBD_DEBUG_MEMORY_
atomic_inc(&lllllIIII);
#endif
spin_lock(&IIlIII);list_del_init(&lIlII->IIIIll);spin_unlock(&IIlIII);lIlIlIlII(
lIlII);while(!list_empty(&lIlII->llllIlll)){struct lIlIl*IlllI=list_entry(lIlII
->llllIlll.next,struct lIlIl,llllIl);list_del(&IlllI->llllIl);lIIIIlI(IlllI);}
while(!list_empty(&lIlII->IlIIlII)){struct lIlIl*IlllI=list_entry(lIlII->IlIIlII
.next,struct lIlIl,llllIl);list_del(&IlllI->llllIl);lIIIIlI(IlllI);}if(lIlII->
lIIlI){usb_put_dev(lIlII->lIIlI);lIlII->lIIlI=NULL;}if(lIlII->IIIIIlIl){
IlIIlIlll(lIlII->IIIIIlIl);lIlII->IIIIIlIl=NULL;}lIlIll(lIlII);Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x64\x65\x73\x74\x72\x6f\x79\x2d\x2d" "\n"
);}struct lllll*IIIIllIl(struct usb_device*llIII){struct lllll*lIlII;spin_lock(&
IIlIII);list_for_each_entry(lIlII,&IIllIII,IIIIll){if(lIlII->lIIlI==llIII){
IlIIllII(lIlII);spin_unlock(&IIlIII);return lIlII;}}spin_unlock(&IIlIII);return 
NULL;}void IIlIIllll(struct lllll*lIlII){if(!lIlII->llIllll){lIlII->llIllll=
(0x1c37+889-0x1faf);lIllIlll(lIlII);lllIlllll(lIlII->IIlII);IIlll(
"\x69\x6e\x69\x74\x5f\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x73\x3d\x25\x64\x20\x74\x6f\x74\x61\x6c\x5f\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x73\x3d\x25\x64\x20\x6f\x6e\x6c\x69\x6e\x65\x3d\x25\x64" "\n"
,lIlII->lIlIllII,lIlII->lIIIIIll,lIlII->llIllll);}}void lIlIIIllI(struct lllll*
lIlII){if(lIlII->llIllll){lIlII->llIllll=(0x19cd+2869-0x2502);lllIlIIII(lIlII->
IIlII);IIlll(
"\x69\x6e\x69\x74\x5f\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x73\x3d\x25\x64\x20\x74\x6f\x74\x61\x6c\x5f\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x73\x3d\x25\x64\x20\x6f\x6e\x6c\x69\x6e\x65\x3d\x25\x64" "\n"
,lIlII->lIlIllII,lIlII->lIIIIIll,lIlII->llIllll);}}void llIlIIIlI(struct lllll*
lIlII){if(lIlII->llIllll){lllIlllll(lIlII->IIlII);}else{lllIlIIII(lIlII->IIlII);
}}int lIlllllIl(struct lllll*lIlII){IIlll(
"\x69\x6e\x69\x74\x5f\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x73\x3d\x25\x64\x20\x74\x6f\x74\x61\x6c\x5f\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x73\x3d\x25\x64\x20\x6f\x6e\x6c\x69\x6e\x65\x3d\x25\x64" "\n"
,lIlII->lIlIllII,lIlII->lIIIIIll,lIlII->llIllll);return(lIlII->llIllll==
(0x1378+4324-0x245c));}const char*IllIIllII(void*context){struct lllll*lIlII=
context;return lIlII->IIIIIlIl;}const char*llIIlIIII(void*context){
#if KERNEL_GT_EQ((0xeb4+2155-0x171d),(0x101f+5597-0x25f6),(0x1afa+430-0x1c92))
struct lllll*lIlII=context;return lIIlIllI(&lIlII->lIIlI->dev)?
"\x74\x72\x75\x65":"\x66\x61\x6c\x73\x65";
#else
return"\x66\x61\x6c\x73\x65";
#endif
}


void llllIIlII(struct lllll*lIlII,int IIIllIl){int i,IIIlIIlI;Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x72\x65\x73\x65\x74\x2b\x2b" "\n");
lIlII->llIlIIIl=(0x135b+2-0x135d);if(lIlII->lIIlI->actconfig){



for(i=(0x7e3+5130-0x1bed);i<lIlII->lIIlI->actconfig->desc.bNumInterfaces;i++){
struct usb_interface*IIIIII=lIlII->lIIlI->actconfig->interface[i];if(IIIIII&&
IIIIII->num_altsetting>(0x14bc+2333-0x1dd8)){struct usb_host_interface*lIIIlIl=
usb_altnum_to_altsetting(IIIIII,(0xb26+4818-0x1df8));if(lIIIlIl){IIIlIIlI=
usb_set_interface(lIlII->lIIlI,lIIIlIl->desc.bInterfaceNumber,lIIIlIl->desc.
bAlternateSetting);}}}}if(IIIllIl==lIlIlllll||IIIllIl==lIllllIII){IIllIl(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x72\x65\x73\x65\x74\x3a\x20\x74\x72\x79\x69\x6e\x67\x20\x74\x6f\x20\x72\x65\x73\x65\x74\x20\x64\x65\x76\x69\x63\x65\x20\x76\x69\x64\x20\x25\x30\x34\x78\x20\x70\x69\x64\x20\x25\x30\x34\x78" "\n"
,lIlII->vid,lIlII->IIlllII);IIIlIIlI=usb_reset_device(lIlII->lIIlI);IIllIl(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x72\x65\x73\x65\x74\x3a\x20\x75\x73\x62\x5f\x72\x65\x73\x65\x74\x5f\x64\x65\x76\x69\x63\x65\x20\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x25\x64" "\n"
,IIIlIIlI);}memset(lIlII->lIIIlIll,(0x1597+3453-0x2314),sizeof(lIlII->lIIIlIll))
;memset(lIlII->llIlIIll,(0x2ea+3788-0x11b6),sizeof(lIlII->llIlIIll));Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x72\x65\x73\x65\x74\x2d\x2d" "\n");}
void lIIlIIlII(struct lllll*lIlII,int IIIllIl){if(IIIllIl!=IllIlIIIl&&
usb_lock_device_for_reset(lIlII->lIIlI,NULL)>=(0x11ad+5129-0x25b6)){llllIIlII(
lIlII,IIIllIl);usb_unlock_device(lIlII->lIIlI);}else{memset(lIlII->lIIIlIll,
(0x888+4247-0x191f),sizeof(lIlII->lIIIlIll));memset(lIlII->llIlIIll,
(0xf7b+708-0x123f),sizeof(lIlII->llIlIIll));}}int lllllllll(struct lllll*lIlII,
int pipe){if(!usb_pipeisoc(pipe))return(0x1a5+9512-0x26cd);if(usb_pipein(pipe))
return(++lIlII->IlIIIlllI[usb_pipeendpoint(pipe)]);else return(++lIlII->
IlIIIIIII[usb_pipeendpoint(pipe)]);}int IIIlIllI(struct lllll*lIlII,int pipe){if
(!usb_pipeisoc(pipe))return(0x12f0+4988-0x266c);if(usb_pipein(pipe))return(--
lIlII->IlIIIlllI[usb_pipeendpoint(pipe)]);else return(--lIlII->IlIIIIIII[
usb_pipeendpoint(pipe)]);}void lIIllllII(struct lllll*lIlII,int pipe){if(!
usb_pipeisoc(pipe))return;if(usb_pipein(pipe))lIlII->IlIIIlllI[usb_pipeendpoint(
pipe)]=(0x109+7088-0x1cb9);else lIlII->IlIIIIIII[usb_pipeendpoint(pipe)]=
(0x868+3971-0x17eb);}int lllIlllI(struct lllll*lIlII,int pipe){if(!usb_pipeisoc(
pipe))return(0x1168+1663-0x17e7);if(usb_pipein(pipe))return lIlII->lIIIlIll[
usb_pipeendpoint(pipe)];else return lIlII->llIlIIll[usb_pipeendpoint(pipe)];}
void IIllIlIl(struct lllll*lIlII,int pipe,int llllIII){if(!usb_pipeisoc(pipe))
return;if(usb_pipein(pipe))lIlII->lIIIlIll[usb_pipeendpoint(pipe)]=llllIII;else 
lIlII->llIlIIll[usb_pipeendpoint(pipe)]=llllIII;}static void IIlllIllI(struct 
lIlIl*IlllI){if(IlllI->lIllll==IllIIlI){if(IlllI->lIIIll.lIlll){IIlll(
"\x3a\x20\x75\x6e\x6c\x69\x6e\x6b\x69\x6e\x67\x20\x75\x72\x62\x20\x30\x78\x25\x70\x20\x75\x6e\x69\x71\x75\x65\x5f\x69\x64\x3d\x30\x78\x25\x6c\x6c\x78" "\n"
,IlllI->lIIIll.lIlll,IlllI->lllIl);


usb_unlink_urb(IlllI->lIIIll.lIlll);}}else if(IlllI->lIllll==lIlllll){IIlll(
"\x3a\x20\x75\x6e\x6c\x69\x6e\x6b\x69\x6e\x67\x20\x75\x63\x20\x75\x6e\x69\x71\x75\x65\x5f\x69\x64\x3d\x30\x78\x25\x6c\x6c\x78" "\n"
,IlllI->lllIl);lIIlIIIII(IlllI->lIllII.llllIll);}
#if KERNEL_GT_EQ((0x11af+2163-0x1a20),(0xb57+2358-0x1487),(0x2005+1240-0x24be))
else if(IlllI->lIllll==IIlIIII){if(IlllI->lIllIll.lIlll){IIlll(
"\x3a\x20\x75\x6e\x6c\x69\x6e\x6b\x69\x6e\x67\x20\x73\x67\x20\x30\x78\x25\x70\x20\x75\x6e\x69\x71\x75\x65\x5f\x69\x64\x3d\x30\x78\x25\x6c\x6c\x78" "\n"
,IlllI->lIllIll.lIlll,IlllI->lllIl);


usb_unlink_urb(IlllI->lIllIll.lIlll);}}
#endif
else{
IIllIl(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x75\x6e\x6c\x69\x6e\x6b\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x69\x6e\x74\x65\x72\x6e\x61\x6c\x20\x65\x72\x72\x6f\x72\x21" "\n"
);}}static void lIllIIIII(struct lIlIl*IlllI){if(IlllI->lIllll==IllIIlI){if(
IlllI->lIIIll.lIlll){IIlll(
"\x3a\x20\x6b\x69\x6c\x69\x6e\x67\x20\x75\x72\x62\x20\x30\x78\x25\x70\x20\x75\x6e\x69\x71\x75\x65\x5f\x69\x64\x3d\x30\x78\x25\x6c\x6c\x78" "\n"
,IlllI->lIIIll.lIlll,IlllI->lllIl);
#if KERNEL_GT_EQ((0x7a3+7702-0x25b7),(0xa79+308-0xba7),(0xa6d+3786-0x191b))


usb_poison_urb(IlllI->lIIIll.lIlll);
#else
usb_kill_urb(IlllI->lIIIll.lIlll);
#endif
}}else if(IlllI->lIllll==lIlllll){IIlll(
"\x3a\x20\x6b\x69\x6c\x6c\x69\x6e\x67\x20\x75\x63\x20\x75\x6e\x69\x71\x75\x65\x5f\x69\x64\x3d\x30\x78\x25\x6c\x6c\x78" "\n"
,IlllI->lllIl);IllllIlll(IlllI->lIllII.llllIll);}
#if KERNEL_GT_EQ((0x19a5+2451-0x2336),(0x17bc+1650-0x1e28),(0x73+1084-0x490))
else if(IlllI->lIllll==IIlIIII){if(IlllI->lIllIll.lIlll){IIlll(
"\x3a\x20\x6b\x69\x6c\x6c\x69\x6e\x67\x20\x73\x67\x20\x30\x78\x25\x70\x20\x75\x6e\x69\x71\x75\x65\x5f\x69\x64\x3d\x30\x78\x25\x6c\x6c\x78" "\n"
,IlllI->lIllIll.lIlll,IlllI->lllIl);
#if KERNEL_GT_EQ((0x107b+2998-0x1c2f),(0xb69+5107-0x1f56),(0xc82+5891-0x2369))


usb_poison_urb(IlllI->lIllIll.lIlll);
#else
usb_kill_urb(IlllI->lIllIll.lIlll);
#endif
}}
#endif
else{
IIllIl(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x6b\x69\x6c\x6c\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x69\x6e\x74\x65\x72\x6e\x61\x6c\x20\x65\x72\x72\x6f\x72\x21" "\n"
);}}
void IlIllIIll(struct lllll*lIlII,struct usb_interface*llIlII,struct lIlIl*
IIlIIIl,int lIIIIII){int i;unsigned long flags;struct lIlIl*IllIII,*lIllIIl;
IIlll("\x2b\x2b" "\n");
if(lIlII->IIlIlII&&lIlII->IlIllllI==llIlII->cur_altsetting->desc.
bInterfaceNumber)
{IIIllIlI(lIlII,(0xfcf+2000-0x179f),lIIIIII);}for(i=(0x1478+4218-0x24f2);i<
llIlII->cur_altsetting->desc.bNumEndpoints;i++){do{lIllIIl=NULL;
spin_lock_irqsave(&lIlII->IIlIlI,flags);list_for_each_entry(IllIII,&lIlII->
IlIIlII,llllIl){int IlIIllI;
if(IllIII==IIlIIIl)continue;
if(IllIII->endpoint!=llIlII->cur_altsetting->endpoint[i].desc.bEndpointAddress)
continue;IlIIllI=atomic_xchg(&IllIII->state,IlIIlll);
if(IlIIllI==IlIIlll||IlIIllI==llIlIIIll)continue;IllIII->lIIIIII=lIIIIII;
if(IllIII->IlIIIlI.IIIlIlIl){


IllIII=lIIIlIII(lIlII,IllIII->lllIl);}if(IlIIllI==IIIlIlI){



kref_get(&IllIII->IIllII);

lIllIIl=IllIII;break;}}spin_unlock_irqrestore(&lIlII->IIlIlI,flags);if(lIllIIl){
lIllIIIII(lIllIIl);kref_put(&lIllIIl->IIllII,IllIIlII);}}while(lIllIIl);}IIlll(
"\x2d\x2d" "\n");}void llIIlIIll(struct lllll*lIlII,int endpoint,struct lIlIl*
IIlIIIl){unsigned long flags;struct lIlIl*IllIII,*IlIIlIl;IIlll("\x2b\x2b" "\n")
;if(lIlII->IIlIlII)
{if(endpoint==lIlII->IIIlllII||endpoint==lIlII->llIlIlIl){lIIlllll(lIlII);}}




do{IlIIlIl=NULL;spin_lock_irqsave(&lIlII->IIlIlI,flags);list_for_each_entry(
IllIII,&lIlII->IlIIlII,llllIl){int IlIIllI;
if(IllIII==IIlIIIl)continue;
if(IllIII->endpoint!=endpoint)continue;IlIIllI=atomic_xchg(&IllIII->state,
IlIIlll);
if(IlIIllI==IlIIlll||IlIIllI==llIlIIIll)continue;
if(IllIII->IlIIIlI.IIIlIlIl){


IllIII=lIIIlIII(lIlII,IllIII->lllIl);}if(IlIIllI==IIIlIlI){



kref_get(&IllIII->IIllII);

IlIIlIl=IllIII;break;}}spin_unlock_irqrestore(&lIlII->IIlIlI,flags);if(IlIIlIl){
IIlllIllI(IlIIlIl);kref_put(&IlIIlIl->IIllII,IllIIlII);}}while(IlIIlIl);IIlll(
"\x2d\x2d" "\n");}void IlllIIlII(struct lllll*lIlII,IlIIlI lllIl,struct lIlIl*
IIlIIIl){int IIIIIlll;unsigned long flags;struct lIlIl*IllIII,*IlIIlIl;IIlll(
"\x2b\x2b" "\n");if(lIlII->IIlIlII){if(IIIIIlIlI(lIlII,lllIl))return;}
spin_lock_irqsave(&lIlII->IIlIlI,flags);



IIIIIlll=(0x82c+5137-0x1c3d);IlIIlIl=NULL;list_for_each_entry(IllIII,&lIlII->
IlIIlII,llllIl){
if(IllIII==IIlIIIl)continue;if(IllIII->lllIl==lllIl){if(atomic_xchg(&IllIII->
state,IlIIlll)==IIIlIlI){



kref_get(&IllIII->IIllII);

IlIIlIl=IllIII;}IIIIIlll=(0x1330+2157-0x1b9c);break;}}if(!IIIIIlll){lIlIIlll(
lIlII,lllIl);}spin_unlock_irqrestore(&lIlII->IIlIlI,flags);if(IlIIlIl){IIlllIllI
(IlIIlIl);kref_put(&IlIIlIl->IIllII,IllIIlII);}else{IIlll(
"\x6e\x6f\x74\x20\x66\x6f\x75\x6e\x64" "\n");}IIlll("\x2d\x2d" "\n");}void 
lIlIllll(struct lllll*lIlII,struct lIlIl*IIlIIIl,int IlllIlIlI,int lIIlIlll){
struct lIlIl*lIllIIl,*IllIII;unsigned long flags;Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x6b\x69\x6c\x6c\x5f\x61\x6c\x6c\x5f\x72\x65\x71\x75\x65\x73\x74\x73\x3a\x20\x2b\x2b" "\n"
);

IIIllIlI(lIlII,IlllIlIlI,lIIlIlll);

spin_lock_irqsave(&lIlII->IIlIlI,flags);while(!list_empty(&lIlII->IIIllIIl)){
struct llIlIllI*lllllIl=list_entry(lIlII->IIIllIIl.next,struct llIlIllI,IIIIll);
list_del(&lllllIl->IIIIll);lIlIll(lllllIl);}

do{


lIllIIl=NULL;list_for_each_entry(IllIII,&lIlII->IlIIlII,llllIl){if(IlllIlIlI){
IllIII->IlllllI=(0x10b6+4448-0x2215);}if(lIIlIlll){
IllIII->lIIIIII=(0x2c6+3862-0x11db);}
if(IllIII!=IIlIIIl&&atomic_xchg(&IllIII->state,IlIIlll)==IIIlIlI){



kref_get(&IllIII->IIllII);

lIllIIl=IllIII;break;}}spin_unlock_irqrestore(&lIlII->IIlIlI,flags);if(lIllIIl){
lIllIIIII(lIllIIl);kref_put(&lIllIIl->IIllII,IllIIlII);}spin_lock_irqsave(&lIlII
->IIlIlI,flags);}while(lIllIIl);spin_unlock_irqrestore(&lIlII->IIlIlI,flags);
Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x6b\x69\x6c\x6c\x5f\x61\x6c\x6c\x5f\x72\x65\x71\x75\x65\x73\x74\x73\x3a\x20\x2d\x2d" "\n"
);}
int lIlIllIII(struct usb_device*lIIlI,lIllIl endpoint){int IllIIII;struct 
usb_host_endpoint*ep;ep=(endpoint&(0xa6c+4981-0x1d61))?lIIlI->ep_in[endpoint&
(0x9f0+5972-0x2135)]:lIIlI->ep_out[endpoint&(0x32+4742-0x12a9)];if(!ep){Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x67\x65\x74\x5f\x65\x6e\x64\x70\x6f\x69\x6e\x74\x5f\x6d\x61\x78\x70\x61\x63\x6b\x65\x74\x3a\x20\x65\x6e\x64\x70\x6f\x69\x6e\x74\x20\x69\x73\x20\x4e\x55\x4c\x4c" "\n"
);return-ENODEV;}IllIIII=le16_to_cpu(ep->desc.wMaxPacketSize);if((ep->desc.
bmAttributes&USB_ENDPOINT_XFERTYPE_MASK)!=USB_ENDPOINT_XFER_ISOC){IllIIII=
IllIIII&(0x135c+1548-0x1169);}else if(lIIlI->speed==USB_SPEED_FULL)
{IllIIII=IllIIII&(0x1043+323-0x987);}else if(lIIlI->speed==USB_SPEED_HIGH)
{IllIIII=(IllIIII&(0x1a4c+1290-0x1757))*((0xc01+1598-0x123e)+((IllIIII>>
(0xb38+5298-0x1fdf))&(0x10f3+2042-0x18ea)));}
#if KERNEL_GT_EQ((0xc58+2071-0x146d),(0xd4d+2494-0x1705),(0x7b6+2618-0x11d1)) &&\
 KERNEL_LT_EQ((0x14c9+4145-0x24f8),(0x176b+3887-0x2694),(0x720+6649-0x20f7))
else if(lIIlI->speed==USB_SPEED_SUPER)
{IllIIII=(IllIIII&(0x17d5+2910-0x1b34))*(ep->ss_ep_comp?(((0x1572+61-0x15ae)+ep
->ss_ep_comp->desc.bMaxBurst)*((0x7f9+7162-0x23f2)+(ep->ss_ep_comp->desc.
bmAttributes&(0xb54+413-0xcee)))):(0x689+3182-0x12f6));}
#endif 
#if KERNEL_GT_EQ((0x9a8+2049-0x11a7),(0x146b+225-0x1546),(0x773+6178-0x1f72))
else if(lIIlI->speed==USB_SPEED_SUPER)
{IllIIII=(IllIIII&(0x176b+5526-0x2502))*((0x944+6310-0x21e9)+ep->ss_ep_comp.
bMaxBurst)*((0x18e5+787-0x1bf7)+(ep->ss_ep_comp.bmAttributes&(0x338+6595-0x1cf8)
));}
#endif 
#if KERNEL_GT_EQ((0x1b5b+530-0x1d69),(0x234b+369-0x24b6),(0x1880+2655-0x22df))
else if(lIIlI->speed==USB_SPEED_SUPER_PLUS)
{
IllIIII=(IllIIII&(0xc6a+4301-0x1538))*((0x122+6666-0x1b2b)+ep->ss_ep_comp.
bMaxBurst)*((0xf21+4292-0x1fe4)+(ep->ss_ep_comp.bmAttributes&(0x10bd+569-0x12f3)
));}
#endif 
else{return-EPROTO;}Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x67\x65\x74\x5f\x65\x6e\x64\x70\x6f\x69\x6e\x74\x5f\x6d\x61\x78\x70\x61\x63\x6b\x65\x74\x3a\x20\x65\x6e\x64\x70\x6f\x69\x6e\x74\x3d\x30\x78\x25\x30\x32\x78\x20\x6d\x61\x78\x70\x61\x63\x6b\x65\x74\x3d\x25\x64" "\n"
,endpoint,IllIIII);return IllIIII;}
#endif 

