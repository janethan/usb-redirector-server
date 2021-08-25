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
#if KERNEL_LT_EQ((0x1d9c+1662-0x2418),(0x11d3+1471-0x178c),(0x1252+595-0x147f))
#include <linux/smp_lock.h>
#endif
#if KERNEL_GT_EQ((0x804+5150-0x1c20),(0x17e1+2111-0x201a),(0x107b+474-0x1236))
#if KERNEL_LT_EQ((0x630+909-0x9ba),(0x9da+868-0xd3c),(0x444+2510-0xe12))



#include "vhci_hcd.h"
#endif
#endif
static struct list_head IIllIII;static spinlock_t IIlIII;extern struct IIIlll*
IllIIlIl;extern struct list_head lIIIIlII;extern struct mutex lIlIIllI;extern 
struct list_head lIlIllIl;extern struct mutex lIlllIII;extern struct list_head 
IllIlIll;extern struct mutex lIIIIIll;
#if KERNEL_LT_EQ((0x1029+3872-0x1f47),(0x1c68+2424-0x25da),(0xb56+6289-0x23d4))
extern struct notifier_block llIIIlll;
#else 
extern struct notifier_block llIIlIIl;
#endif
#ifdef _USBD_DEBUG_MEMORY_
extern atomic_t lllIIIIll;extern atomic_t IIIIllII;extern atomic_t lIIlIIlII;
#endif 


static struct usb_device_id IIIIlIllI[]={{.driver_info=(0x1052+1741-0x171e)},{}}
;MODULE_DEVICE_TABLE(usb,IIIIlIllI);static int IIlIlIIIl(struct usb_interface*
IIIIII,const struct usb_device_id*id);static void lIIIIIIll(struct usb_interface
*IIIIII);
#if KERNEL_GT_EQ((0xb3f+1595-0x1178),(0x1c49+2142-0x24a1),(0x1d0c+238-0x1de3))
static int llIIlIlI(struct usb_interface*llIlII);static int lllIlIII(struct 
usb_interface*llIlII);
#elif KERNEL_GT_EQ((0x1297+957-0x1652),(0x80f+2181-0x108e),(0xfb0+2556-0x199a))
static void llIIlIlI(struct usb_interface*llIlII);static void lllIlIII(struct 
usb_interface*llIlII);
#endif
void llllIIll(struct IIlll*IIIll,int IlllllI,int lIIIlIll);void llIllIll(struct 
IIlll*IIIll);int lIlIIllII(struct IIlll*IIIll,llIIII lIlIl);void llllIlIl(struct
 IIlll*IIIll,llIIII lIlIl);struct lIIll*IIlIIIII(struct IIlll*IIIll,llIIII lIlIl
);struct usb_driver lIlIllI={.name=IlllIllI,.id_table=IIIIlIllI,.probe=IIlIlIIIl
,.disconnect=lIIIIIIll,
#if KERNEL_GT_EQ((0xb5d+6550-0x24f1),(0xaef+5684-0x211d),(0x1531+4534-0x26d5))
.pre_reset=llIIlIlI,.post_reset=lllIlIII,
#endif
};


static int IIlIlIIIl(struct usb_interface*IIIIII,const struct usb_device_id*id){
int IlIlI=-ENODEV;int llIIIIIlI=(0x143d+1854-0x1b7b);struct usb_device*IlIIl=
interface_to_usbdev(IIIIII);const char*IIlIlll=lIllIIII(&IlIIl->dev.kobj,
GFP_KERNEL);lIIIl(
"\x76\x69\x64\x3d\x30\x78\x25\x30\x34\x58\x20\x70\x69\x64\x3d\x30\x78\x25\x30\x34\x58\x20\x72\x65\x76\x3d\x30\x78\x25\x30\x34\x58\x20\x62\x75\x73\x5f\x69\x64\x3d" "\"" "\x25\x73" "\"" "\x20\x68\x75\x62\x3d" "\"" "\x25\x73" "\"" "\x20\x70\x61\x74\x68\x3d" "\"" "\x25\x73" "\"" "\x20\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x3d\x25\x75\x20\x74\x6f\x74\x61\x6c\x5f\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x73\x3d\x25\x75" "\n"
,le16_to_cpu(IlIIl->descriptor.idVendor),le16_to_cpu(IlIIl->descriptor.idProduct
),le16_to_cpu(IlIIl->descriptor.bcdDevice),llIIIl(&IlIIl->dev),IlIllIlI(IlIIl),
IIlIlll,IIIIII->cur_altsetting->desc.bInterfaceNumber,IlIIl->actconfig->desc.
bNumInterfaces);if(IIlIlll){kfree(IIlIlll);}if(IIIlIIIl(IlIIl)){llIIIIIlI=
(0xb60+3976-0x1ae7);}else if(IIIIlIII(IlIIl)){IlIlI=IIIIIIll(IlIIl);if(IlIlI<
(0x4c2+6245-0x1d27)){IIllIl(
"\x63\x61\x6e\x20\x6e\x6f\x74\x20\x61\x74\x74\x61\x63\x68\x20\x75\x73\x62\x20\x64\x65\x76\x69\x63\x65\x20\x25\x73\x2c\x20\x65\x72\x72\x6f\x72\x20\x25\x64" "\n"
,llIIIl(&IlIIl->dev),IlIlI);}else{llIIIIIlI=(0xbe6+6454-0x251b);}}if(llIIIIIlI){
IlIlI=IlIIlIIIl(IIIIII,(0x485+2658-0xee7));if(IlIlI<(0x9a+7176-0x1ca2)){IIllIl(
"\x63\x61\x6e\x20\x6e\x6f\x74\x20\x61\x74\x74\x61\x63\x68\x20\x75\x73\x62\x20\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20\x25\x73\x2c\x20\x65\x72\x72\x6f\x72\x20\x25\x64" "\n"
,llIIIl(&IIIIII->dev),IlIlI);}}return IlIlI;}
static void lIIIIIIll(struct usb_interface*IIIIII){lIIIl("\x2b\x2b" "\n");if(
usb_get_intfdata(IIIIII)!=(void*)-(0x3b+2062-0x848)){IIllIlIll(IIIIII);}lIIIl(
"\x2d\x2d" "\n");}
#if KERNEL_GT_EQ((0x18b1+945-0x1c60),(0x180+2421-0xaef),(0x193d+2810-0x2420))
static int llIIlIlI(struct usb_interface*llIlII){return(0x64c+3698-0x14be);}
static int lllIlIII(struct usb_interface*llIlII){return(0x164+2497-0xb25);}
#elif KERNEL_GT_EQ((0xf84+5178-0x23bc),(0x14c2+2848-0x1fdc),(0xacb+1946-0x1253))
static void llIIlIlI(struct usb_interface*llIlII){return;}static void lllIlIII(
struct usb_interface*llIlII){return;}
#endif


int IIIlIIIl(struct usb_device*IlIIl){int lIIllIIll=(0x1da4+698-0x205e);struct 
IIlll*IIIll;spin_lock(&IIlIII);list_for_each_entry(IIIll,&IIllIII,IIIIll){if(
IIIll->llIII==IlIIl){lIIllIIll=(0x49c+8056-0x2413);break;}}spin_unlock(&IIlIII);
return lIIllIIll;}
int IIIIIIll(struct usb_device*IlIIl){lIIIl("\x2b\x2b\x20\x25\x73" "\n",llIIIl(&
IlIIl->dev));if(IIlIIllIl(IlIIl)==NULL){lIIIl(
"\x63\x61\x6e\x20\x6e\x6f\x74\x20\x63\x72\x65\x61\x74\x65\x20\x73\x74\x75\x62" "\n"
);return-ENOMEM;}lIIIl("\x2d\x2d" "\n");return(0xce4+2875-0x181f);}
int lIIllIll(struct usb_device*IlIIl){struct IIlll*IIIll;lIIIl(
"\x2b\x2b\x20\x25\x73" "\n",llIIIl(&IlIIl->dev));IIIll=IIIIllIl(IlIIl);if(IIIll)
{IllllIII(IIIll,NULL,(0x14b+3808-0x102b),(0xa72+5526-0x2007));lIIIlIIl(IIIll);
lIIIllII(IIIll);}else{lIIIl(
"\x64\x65\x76\x69\x63\x65\x20\x6e\x6f\x74\x20\x66\x6f\x75\x6e\x64" "\n");}lIIIl(
"\x2d\x2d" "\n");return(0xc9+7355-0x1d84);}int IlIIlIIIl(struct usb_interface*
IIIIII,int lllIlIIIIl){int IlIlI=-ENODEV;struct usb_device*IlIIl=
interface_to_usbdev(IIIIII);struct IIlll*IIIll;lIIIl("\x2b\x2b" "\n");IIIll=
IIIIllIl(IlIIl);if(IIIll){


IIIll->llIllIIl+=lllIlIIIIl;IIIll->IIllllIl=IlIIl->actconfig?IlIIl->actconfig->
desc.bNumInterfaces:(0xc36+2246-0x14fc);if(++IIIll->lllIlIlI==IIIll->IIllllIl){
IIlIIllll(IIIll);}lIIIl(
"\x69\x6e\x69\x74\x5f\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x73\x3d\x25\x64\x20\x74\x6f\x74\x61\x6c\x5f\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x73\x3d\x25\x64" "\n"
,IIIll->lllIlIlI,IIIll->IIllllIl);usb_set_intfdata(IIIIII,IIIll);
IlIlI=(0x486+1901-0xbf3);}lIIIl(
"\x2d\x2d\x20\x72\x65\x73\x75\x6c\x74\x3d\x25\x64" "\n",IlIlI);return IlIlI;}
void IIllIlIll(struct usb_interface*IIIIII){struct IIlll*IIIll;lIIIl(
"\x2b\x2b" "\n");
IIIll=usb_get_intfdata(IIIIII);usb_set_intfdata(IIIIII,NULL);IIIll->lllIlIlI--;
IIllIIllI(IIIll);
llIIllIll(IIIll,IIIIII,NULL,(0x8f7+1792-0xff6));lIIIl(
"\x69\x6e\x69\x74\x5f\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x73\x3d\x25\x64\x20\x74\x6f\x74\x61\x6c\x5f\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x73\x3d\x25\x64" "\n"
,IIIll->lllIlIlI,IIIll->IIllllIl);lIIIllII(IIIll);
lIIIl("\x2d\x2d" "\n");}

int lIIlIllll(void){int IIllIIIll=(0x545+3022-0x1113);int lIlIlllIl=
(0x16cf+100-0x1733);int IlIlI=(0x194+864-0x4f4);do{INIT_LIST_HEAD(&IIllIII);
spin_lock_init(&IIlIII);INIT_LIST_HEAD(&lIIIIlII);mutex_init(&lIlIIllI);
INIT_LIST_HEAD(&lIlIllIl);mutex_init(&lIlllIII);INIT_LIST_HEAD(&IllIlIll);
mutex_init(&lIIIIIll);IllIIlIl=IIIlllIIl();if(IllIIlIl==NULL){IlIlI=-ENOMEM;
lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x69\x6e\x69\x74\x5f\x6d\x6f\x64\x75\x6c\x65\x3a\x20\x75\x73\x62\x64\x5f\x6c\x6f\x61\x64\x65\x72\x5f\x61\x6c\x6c\x6f\x63\x5f\x6d\x69\x6e\x6f\x72\x2e\x20\x45\x72\x72\x6f\x72\x20\x6e\x75\x6d\x62\x65\x72\x20\x25\x64" "\n"
,IlIlI);break;}


IlIlI=usb_register(&lIlIllI);if(IlIlI!=(0x1eb+4766-0x1489)){lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x69\x6e\x69\x74\x5f\x6d\x6f\x64\x75\x6c\x65\x3a\x20\x75\x73\x62\x5f\x72\x65\x67\x69\x73\x74\x65\x72\x20\x66\x61\x69\x6c\x65\x64\x2e\x20\x45\x72\x72\x6f\x72\x20\x6e\x75\x6d\x62\x65\x72\x20\x25\x64" "\n"
,IlIlI);break;}IIllIIIll=(0x681+5678-0x1cae);
#if KERNEL_LT_EQ((0x5c1+5071-0x198e),(0x114b+2352-0x1a75),(0x3ca+1182-0x855))
usb_register_notify(&llIIIlll);
#else 
IlIlI=bus_register_notifier(lIlIllI.drvwrap.driver.bus,&llIIlIIl);if(IlIlI!=
(0xbd+7778-0x1f1f)){lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x69\x6e\x69\x74\x5f\x6d\x6f\x64\x75\x6c\x65\x3a\x20\x62\x75\x73\x5f\x72\x65\x67\x69\x73\x74\x65\x72\x5f\x6e\x6f\x74\x69\x66\x69\x65\x72\x20\x66\x61\x69\x6c\x65\x64\x2e\x20\x45\x72\x72\x6f\x72\x20\x6e\x75\x6d\x62\x65\x72\x20\x25\x64" "\n"
,IlIlI);break;}
#endif
lIlIlllIl=(0x382+2638-0xdcf);}while((0x244c+357-0x25b1));if(IlIlI!=
(0x175d+1681-0x1dee)){if(lIlIlllIl){
#if KERNEL_LT_EQ((0x851+4810-0x1b19),(0x13e3+4181-0x2432),(0xddf+127-0xe4b))
usb_unregister_notify(&llIIIlll);
#else 
bus_unregister_notifier(lIlIllI.drvwrap.driver.bus,&llIIlIIl);
#endif
}if(IIllIIIll){usb_deregister(&lIlIllI);}if(IllIIlIl){lIlIIIIlI(IllIIlIl);
IllIIlIl=NULL;}}return IlIlI;}void llIIlIllI(void){struct list_head Illlll;
IlIIllll();IlIIIlIIl();
#if KERNEL_LT_EQ((0xeb+4088-0x10e1),(0x555+6402-0x1e51),(0x1036+596-0x1277))
usb_unregister_notify(&llIIIlll);
#else 
bus_unregister_notifier(lIlIllI.drvwrap.driver.bus,&llIIlIIl);
#endif
usb_deregister(&lIlIllI);if(IllIIlIl){lIlIIIIlI(IllIIlIl);IllIIlIl=NULL;}
INIT_LIST_HEAD(&Illlll);spin_lock(&IIlIII);list_splice_init(&IIllIII,&Illlll);
spin_unlock(&IIlIII);while(!list_empty(&Illlll)){struct IIlll*IIIll=list_entry(
Illlll.next,struct IIlll,IIIIll);lIIIlIIl(IIIll);}IIlIIlIll();}struct IIlll*
IIlIIllIl(struct usb_device*IlIIl){char*IIlIlll;struct IIlll*IIIll;IIlIlll=
lIllIIII(&IlIIl->dev.kobj,GFP_KERNEL);if(IIlIlll==NULL){return NULL;}IIIll=
lIllllI(sizeof(*IIIll),GFP_KERNEL);if(IIIll){INIT_LIST_HEAD(&IIIll->IIIIll);
init_waitqueue_head(&IIIll->lIIllI);INIT_LIST_HEAD(&IIIll->llIlIlIl);
spin_lock_init(&IIIll->lIIIIll);INIT_LIST_HEAD(&IIIll->IllIIlI);spin_lock_init(&
IIIll->IIlIlI);INIT_LIST_HEAD(&IIIll->IIIllIIl);kref_init(&IIIll->IllIll);IIIll
->vid=le16_to_cpu(IlIIl->descriptor.idVendor);IIIll->IlIlIII=le16_to_cpu(IlIIl->
descriptor.idProduct);IIIll->lIlIlll=le16_to_cpu(IlIIl->descriptor.bcdDevice);
strncpy(IIIll->bus_id,llIIIl(&IlIIl->dev),BUS_ID_SIZE-(0x720+1725-0xddc));IIIll
->lIIllIl=(0xa8+4028-0x1064);IIIll->llIllIIl=(0xf57+5842-0x2629);IIIll->lllIIlIl
=IllIlIIIl;IIIll->llIII=usb_get_dev(IlIIl);IIIll->IIllllIl=(0x1f76+1400-0x24ee);
IIIll->lllIlIlI=(0x9c1+3913-0x190a);IIIll->lIlllIl=(0x131c+3505-0x20cd);IIIll->
IIIIIlIl=IIlIlll;IIIll->llllIIl=(0xb2c+5536-0x20cc);IIIll->IlIlIllI=-
(0xc5b+5266-0x20ec);IIIll->lIlIIIll=-(0xcb9+1937-0x1449);IIIll->lIllllII=-
(0xbf2+4248-0x1c89);IIIll->lIlIlI=llIIIllI;IIIll->IlIllII=NULL;spin_lock_init(&
IIIll->lIIlIl);IIIll->IIllIIl=(strcmp(IlIllIlI(IlIIl),
"\x65\x68\x63\x69\x5f\x68\x63\x64")==(0x6d1+5706-0x1d1b));







if(strcmp(IlIllIlI(IlIIl),"\x64\x77\x63\x5f\x6f\x74\x67")==(0x175a+542-0x1978)){


IIIll->lIlIIII=lIlIIlI;IIIll->IIIIIIIl=lIlIIlI;IIIll->IIIlIlIl=lIlIIlI;}else{
#if KERNEL_LT_EQ((0xca1+3685-0x1b04),(0x2cb+1888-0xa25),(0x2020+1720-0x26ba))


IIIll->lIlIIII=IlIIIlI;IIIll->IIIIIIIl=lIlIIlI;IIIll->IIIlIlIl=IlIIIlI;lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x63\x72\x65\x61\x74\x65\x3a\x20\x62\x75\x66\x66\x65\x72\x20\x74\x79\x70\x65\x73\x20\x62\x75\x6c\x6b\x3d\x70\x74\x20\x69\x6e\x74\x3d\x73\x6c\x20\x69\x73\x6f\x3d\x70\x74" "\n"
);
#elif KERNEL_EQ((0x1c98+798-0x1fb4),(0x2584+213-0x2653),(0x55d+5457-0x1a8f))



if((bus_to_hcd(IlIIl->bus)->driver->flags&HCD_MASK)>=HCD_USB3){IIIll->lIlIIII=
IIlIIII;lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x63\x72\x65\x61\x74\x65\x3a\x20\x62\x75\x66\x66\x65\x72\x20\x74\x79\x70\x65\x73\x20\x62\x75\x6c\x6b\x3d\x73\x67\x20\x69\x6e\x74\x3d\x73\x6c\x20\x69\x73\x6f\x3d\x70\x74" "\n"
);}else{IIIll->lIlIIII=IlIIIlI;lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x63\x72\x65\x61\x74\x65\x3a\x20\x62\x75\x66\x66\x65\x72\x20\x74\x79\x70\x65\x73\x20\x62\x75\x6c\x6b\x3d\x70\x74\x20\x69\x6e\x74\x3d\x73\x6c\x20\x69\x73\x6f\x3d\x70\x74" "\n"
);}IIIll->IIIIIIIl=lIlIIlI;IIIll->IIIlIlIl=IlIIIlI;
#elif KERNEL_EQ((0xa73+2932-0x15e5),(0x226f+148-0x22fd),(0x5fa+3140-0x121e))



if((bus_to_hcd(IlIIl->bus)->driver->flags&HCD_MASK)>=HCD_USB3){IIIll->lIlIIII=
IIlIIII;IIIll->IIIIIIIl=IIlIIII;lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x63\x72\x65\x61\x74\x65\x3a\x20\x62\x75\x66\x66\x65\x72\x20\x74\x79\x70\x65\x73\x20\x62\x75\x6c\x6b\x3d\x73\x67\x20\x69\x6e\x74\x3d\x73\x67\x20\x69\x73\x6f\x3d\x70\x74" "\n"
);}else{IIIll->lIlIIII=IlIIIlI;IIIll->IIIIIIIl=lIlIIlI;lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x63\x72\x65\x61\x74\x65\x3a\x20\x62\x75\x66\x66\x65\x72\x20\x74\x79\x70\x65\x73\x20\x62\x75\x6c\x6b\x3d\x70\x74\x20\x69\x6e\x74\x3d\x73\x6c\x20\x69\x73\x6f\x3d\x70\x74" "\n"
);}IIIll->IIIlIlIl=IlIIIlI;
#elif (KERNEL_GT_EQ((0x55d+3554-0x133d),(0x1817+1330-0x1d43),(0x4c0+2523-0xe78))\
 && KERNEL_LT_EQ((0x1c2+6553-0x1b59),(0xb10+3564-0x18f6),(0xe7c+6230-0x26ab))) \
|| (KERNEL_GT_EQ((0x256+6737-0x1ca4),(0xc66+4126-0x1c84),(0x1111+1828-0x1835)) \
&& KERNEL_LT_EQ((0x15e4+1632-0x1c41),(0x478+3088-0x1088),(0x293+7927-0x217a))) \
|| (KERNEL_GT_EQ((0x16c3+660-0x1954),(0xb08+264-0xc0f),(0x776+4257-0x1817)) && \
KERNEL_LT_EQ((0xc27+1530-0x121e),(0x2018+1643-0x2682),(0xda2+13-0xda7))) || \
KERNEL_EQ((0x8c+5910-0x179f),(0x52b+8085-0x24be),(0x1dcf+776-0x20d7))










IIllIl(
"\x42\x75\x67\x67\x79\x20\x6b\x65\x72\x6e\x65\x6c\x20\x76\x65\x72\x73\x69\x6f\x6e\x2c\x20\x55\x53\x42\x20\x72\x65\x64\x69\x72\x65\x63\x74\x69\x6f\x6e\x20\x6d\x61\x79\x20\x62\x65\x20\x6c\x69\x6d\x69\x74\x65\x64\x2e" "\n"
);if((bus_to_hcd(IlIIl->bus)->driver->flags&HCD_MASK)>=HCD_USB3){IIIll->lIlIIII=
lIlIIlI;IIIll->IIIIIIIl=lIlIIlI;lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x63\x72\x65\x61\x74\x65\x3a\x20\x62\x75\x66\x66\x65\x72\x20\x74\x79\x70\x65\x73\x20\x62\x75\x6c\x6b\x3d\x73\x6c\x20\x69\x6e\x74\x3d\x73\x6c\x20\x69\x73\x6f\x3d\x70\x74" "\n"
);}else{IIIll->lIlIIII=IlIIIlI;IIIll->IIIIIIIl=lIlIIlI;lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x63\x72\x65\x61\x74\x65\x3a\x20\x62\x75\x66\x66\x65\x72\x20\x74\x79\x70\x65\x73\x20\x62\x75\x6c\x6b\x3d\x70\x74\x20\x69\x6e\x74\x3d\x73\x6c\x20\x69\x73\x6f\x3d\x70\x74" "\n"
);}IIIll->IIIlIlIl=IlIIIlI;
#elif KERNEL_GT_EQ((0x2e2+5834-0x19aa),(0x139f+2833-0x1eaa),(0x3e5+5867-0x1aaf))





if(IlIIl->bus->sg_tablesize>(0x135f+2874-0x1e99)){IIIll->lIlIIII=IIlIIII;IIIll->
IIIIIIIl=IIlIIII;lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x63\x72\x65\x61\x74\x65\x3a\x20\x62\x75\x66\x66\x65\x72\x20\x74\x79\x70\x65\x73\x20\x62\x75\x6c\x6b\x3d\x73\x67\x20\x69\x6e\x74\x3d\x73\x67\x20\x69\x73\x6f\x3d\x70\x74" "\n"
);}else{IIIll->lIlIIII=IlIIIlI;IIIll->IIIIIIIl=lIlIIlI;lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x63\x72\x65\x61\x74\x65\x3a\x20\x62\x75\x66\x66\x65\x72\x20\x74\x79\x70\x65\x73\x20\x62\x75\x6c\x6b\x3d\x70\x74\x20\x69\x6e\x74\x3d\x73\x6c\x20\x69\x73\x6f\x3d\x70\x74" "\n"
);}IIIll->IIIlIlIl=IlIIIlI;
#endif
}
#ifdef _USBD_DEBUG_MEMORY_
atomic_inc(&lllIIIIll);
#endif
if(IIIIIIIII(IIIll)<(0x1aa8+2825-0x25b1)){
#ifdef _USBD_DEBUG_MEMORY_
atomic_inc(&IIIIllII);
#endif
lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x63\x72\x65\x61\x74\x65\x3a\x20\x61\x6c\x6c\x6f\x63\x20\x6d\x69\x6e\x6f\x72\x20\x66\x61\x69\x6c\x65\x64" "\n"
);lIIIllII(IIIll);return NULL;}spin_lock(&IIlIII);list_add(&IIIll->IIIIll,&
IIllIII);spin_unlock(&IIlIII);if(IlIlIIlIl(IIIll)<(0x8c8+5652-0x1edc)){lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x63\x72\x65\x61\x74\x65\x3a\x20\x72\x65\x67\x69\x73\x74\x65\x72\x20\x6d\x69\x6e\x6f\x72\x20\x66\x61\x69\x6c\x65\x64" "\n"
);lIIIlIIl(IIIll);return NULL;}return IIIll;}IlIlIllII(IIlIlll);return NULL;}
void lIIIlIIl(struct IIlll*IIIll){
#ifdef _USBD_DEBUG_MEMORY_
atomic_inc(&IIIIllII);
#endif
spin_lock(&IIlIII);list_del_init(&IIIll->IIIIll);spin_unlock(&IIlIII);IlIlIllll(
IIIll);lIIIllII(IIIll);}
void IllIlIIII(struct kref*IIllIlI){struct IIlll*IIIll=container_of(IIllIlI,
struct IIlll,IllIll);lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x64\x65\x73\x74\x72\x6f\x79\x2b\x2b" "\n"
);
#ifdef _USBD_DEBUG_MEMORY_
atomic_inc(&lIIlIIlII);
#endif
spin_lock(&IIlIII);list_del_init(&IIIll->IIIIll);spin_unlock(&IIlIII);IIlIIIIIl(
IIIll);while(!list_empty(&IIIll->llIlIlIl)){struct lIIll*lIlII=list_entry(IIIll
->llIlIlIl.next,struct lIIll,llllIl);list_del(&lIlII->llllIl);IllIlll(lIlII);}
while(!list_empty(&IIIll->IllIIlI)){struct lIIll*lIlII=list_entry(IIIll->IllIIlI
.next,struct lIIll,llllIl);list_del(&lIlII->llllIl);IllIlll(lIlII);}if(IIIll->
llIII){usb_put_dev(IIIll->llIII);IIIll->llIII=NULL;}if(IIIll->IIIIIlIl){
IlIlIllII(IIIll->IIIIIlIl);IIIll->IIIIIlIl=NULL;}lIlIll(IIIll);lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x64\x65\x73\x74\x72\x6f\x79\x2d\x2d" "\n"
);}struct IIlll*IIIIllIl(struct usb_device*IlIIl){struct IIlll*IIIll;spin_lock(&
IIlIII);list_for_each_entry(IIIll,&IIllIII,IIIIll){if(IIIll->llIII==IlIIl){
lIIlIlll(IIIll);spin_unlock(&IIlIII);return IIIll;}}spin_unlock(&IIlIII);return 
NULL;}void IIlIIllll(struct IIlll*IIIll){if(!IIIll->lIlllIl){IIIll->lIlllIl=
(0x750+221-0x82c);lIllIlll(IIIll);lIlllIIll(IIIll->lllll);lIIIl(
"\x69\x6e\x69\x74\x5f\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x73\x3d\x25\x64\x20\x74\x6f\x74\x61\x6c\x5f\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x73\x3d\x25\x64\x20\x6f\x6e\x6c\x69\x6e\x65\x3d\x25\x64" "\n"
,IIIll->lllIlIlI,IIIll->IIllllIl,IIIll->lIlllIl);}}void IIllIIllI(struct IIlll*
IIIll){if(IIIll->lIlllIl){IIIll->lIlllIl=(0x14a5+3104-0x20c5);IlIIIIlll(IIIll->
lllll);lIIIl(
"\x69\x6e\x69\x74\x5f\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x73\x3d\x25\x64\x20\x74\x6f\x74\x61\x6c\x5f\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x73\x3d\x25\x64\x20\x6f\x6e\x6c\x69\x6e\x65\x3d\x25\x64" "\n"
,IIIll->lllIlIlI,IIIll->IIllllIl,IIIll->lIlllIl);}}void llIlIIIlI(struct IIlll*
IIIll){if(IIIll->lIlllIl){lIlllIIll(IIIll->lllll);}else{IlIIIIlll(IIIll->lllll);
}}int lIlllllIl(struct IIlll*IIIll){lIIIl(
"\x69\x6e\x69\x74\x5f\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x73\x3d\x25\x64\x20\x74\x6f\x74\x61\x6c\x5f\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x73\x3d\x25\x64\x20\x6f\x6e\x6c\x69\x6e\x65\x3d\x25\x64" "\n"
,IIIll->lllIlIlI,IIIll->IIllllIl,IIIll->lIlllIl);return(IIIll->lIlllIl==
(0xcbc+1111-0x1113));}const char*IllIIllII(void*context){struct IIlll*IIIll=
context;return IIIll->IIIIIlIl;}const char*llIIlIIII(void*context){
#if KERNEL_GT_EQ((0x1e5+3564-0xfcf),(0xeb3+2563-0x18b0),(0x4b3+1496-0xa75))
struct IIlll*IIIll=context;return IIlIIllI(&IIIll->llIII->dev)?
"\x74\x72\x75\x65":"\x66\x61\x6c\x73\x65";
#else
return"\x66\x61\x6c\x73\x65";
#endif
}


void llllIIlII(struct IIlll*IIIll,int IIIllIl){int i,IIIlIIlI;lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x72\x65\x73\x65\x74\x2b\x2b" "\n");
IIIll->llIllIIl=(0x154a+3809-0x242b);if(IIIll->llIII->actconfig){



for(i=(0xb83+4032-0x1b43);i<IIIll->llIII->actconfig->desc.bNumInterfaces;i++){
struct usb_interface*IIIIII=IIIll->llIII->actconfig->interface[i];if(IIIIII&&
IIIIII->num_altsetting>(0xa28+3214-0x16b5)){struct usb_host_interface*IlIIlll=
usb_altnum_to_altsetting(IIIIII,(0xe4a+4358-0x1f50));if(IlIIlll){IIIlIIlI=
usb_set_interface(IIIll->llIII,IlIIlll->desc.bInterfaceNumber,IlIIlll->desc.
bAlternateSetting);}}}}if(IIIllIl==lIlIlllll||IIIllIl==lIllllIII){IIllIl(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x72\x65\x73\x65\x74\x3a\x20\x74\x72\x79\x69\x6e\x67\x20\x74\x6f\x20\x72\x65\x73\x65\x74\x20\x64\x65\x76\x69\x63\x65\x20\x76\x69\x64\x20\x25\x30\x34\x78\x20\x70\x69\x64\x20\x25\x30\x34\x78" "\n"
,IIIll->vid,IIIll->IlIlIII);IIIlIIlI=usb_reset_device(IIIll->llIII);IIllIl(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x72\x65\x73\x65\x74\x3a\x20\x75\x73\x62\x5f\x72\x65\x73\x65\x74\x5f\x64\x65\x76\x69\x63\x65\x20\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x25\x64" "\n"
,IIIlIIlI);}memset(IIIll->lIIlllll,(0x816+6335-0x20d5),sizeof(IIIll->lIIlllll));
memset(IIIll->IlIIlIll,(0xe03+4241-0x1e94),sizeof(IIIll->IlIIlIll));lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x72\x65\x73\x65\x74\x2d\x2d" "\n");}
void IIIlIlIll(struct IIlll*IIIll,int IIIllIl){if(IIIllIl!=IllIlIIIl&&
usb_lock_device_for_reset(IIIll->llIII,NULL)>=(0x7a0+2799-0x128f)){llllIIlII(
IIIll,IIIllIl);usb_unlock_device(IIIll->llIII);}else{memset(IIIll->lIIlllll,
(0x18e9+1352-0x1e31),sizeof(IIIll->lIIlllll));memset(IIIll->IlIIlIll,
(0x874+5602-0x1e56),sizeof(IIIll->IlIIlIll));}}int IIIlIllll(struct IIlll*IIIll,
int pipe){if(!usb_pipeisoc(pipe)){return(0x48+4105-0x1051);}if(usb_pipein(pipe))
{return(++IIIll->llIIIIIll[usb_pipeendpoint(pipe)]);}else{return(++IIIll->
IlIIIIIII[usb_pipeendpoint(pipe)]);}}int IIIlIllI(struct IIlll*IIIll,int pipe){
if(!usb_pipeisoc(pipe)){return(0x209b+1637-0x2700);}if(usb_pipein(pipe)){return(
--IIIll->llIIIIIll[usb_pipeendpoint(pipe)]);}else{return(--IIIll->IlIIIIIII[
usb_pipeendpoint(pipe)]);}}void lIIllllII(struct IIlll*IIIll,int pipe){if(!
usb_pipeisoc(pipe)){return;}if(usb_pipein(pipe)){IIIll->llIIIIIll[
usb_pipeendpoint(pipe)]=(0x1c5+3463-0xf4c);}else{IIIll->IlIIIIIII[
usb_pipeendpoint(pipe)]=(0x13ea+3995-0x2385);}}int llllIllI(struct IIlll*IIIll,
int pipe){if(!usb_pipeisoc(pipe)){return(0xa8f+2739-0x1542);}if(usb_pipein(pipe)
){return IIIll->lIIlllll[usb_pipeendpoint(pipe)];}else{return IIIll->IlIIlIll[
usb_pipeendpoint(pipe)];}}void IlllIIlI(struct IIlll*IIIll,int pipe,int llllIII)
{if(!usb_pipeisoc(pipe)){return;}if(usb_pipein(pipe)){IIIll->lIIlllll[
usb_pipeendpoint(pipe)]=llllIII;}else{IIIll->IlIIlIll[usb_pipeendpoint(pipe)]=
llllIII;}}static void IIlllIllI(struct lIIll*lIlII){if(lIlII->IlllIl==lIlIIlI){
if(lIlII->lIIIll.IlllI){lIIIl(
"\x3a\x20\x75\x6e\x6c\x69\x6e\x6b\x69\x6e\x67\x20\x75\x72\x62\x20\x30\x78\x25\x70\x20\x75\x6e\x69\x71\x75\x65\x5f\x69\x64\x3d\x30\x78\x25\x6c\x6c\x78" "\n"
,lIlII->lIIIll.IlllI,lIlII->lIlIl);


usb_unlink_urb(lIlII->lIIIll.IlllI);}}else if(lIlII->IlllIl==IlIIIlI){lIIIl(
"\x3a\x20\x75\x6e\x6c\x69\x6e\x6b\x69\x6e\x67\x20\x75\x63\x20\x75\x6e\x69\x71\x75\x65\x5f\x69\x64\x3d\x30\x78\x25\x6c\x6c\x78" "\n"
,lIlII->lIlIl);lIIlIIIII(lIlII->lIllII.llIIlIl);}
#if KERNEL_GT_EQ((0x1e0+8248-0x2216),(0x4a1+7260-0x20f7),(0x635+7637-0x23eb))
else if(lIlII->IlllIl==IIlIIII){if(lIlII->IlIIIII.IlllI){lIIIl(
"\x3a\x20\x75\x6e\x6c\x69\x6e\x6b\x69\x6e\x67\x20\x73\x67\x20\x30\x78\x25\x70\x20\x75\x6e\x69\x71\x75\x65\x5f\x69\x64\x3d\x30\x78\x25\x6c\x6c\x78" "\n"
,lIlII->IlIIIII.IlllI,lIlII->lIlIl);


usb_unlink_urb(lIlII->IlIIIII.IlllI);}}
#endif
else{
IIllIl(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x75\x6e\x6c\x69\x6e\x6b\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x69\x6e\x74\x65\x72\x6e\x61\x6c\x20\x65\x72\x72\x6f\x72\x21" "\n"
);}}static void lIllIIIII(struct lIIll*lIlII){if(lIlII->IlllIl==lIlIIlI){if(
lIlII->lIIIll.IlllI){lIIIl(
"\x3a\x20\x6b\x69\x6c\x69\x6e\x67\x20\x75\x72\x62\x20\x30\x78\x25\x70\x20\x75\x6e\x69\x71\x75\x65\x5f\x69\x64\x3d\x30\x78\x25\x6c\x6c\x78" "\n"
,lIlII->lIIIll.IlllI,lIlII->lIlIl);
#if KERNEL_GT_EQ((0x4a7+79-0x4f4),(0xf50+831-0x1289),(0x9da+4199-0x1a25))


usb_poison_urb(lIlII->lIIIll.IlllI);
#else
usb_kill_urb(lIlII->lIIIll.IlllI);
#endif
}}else if(lIlII->IlllIl==IlIIIlI){lIIIl(
"\x3a\x20\x6b\x69\x6c\x6c\x69\x6e\x67\x20\x75\x63\x20\x75\x6e\x69\x71\x75\x65\x5f\x69\x64\x3d\x30\x78\x25\x6c\x6c\x78" "\n"
,lIlII->lIlIl);IllllIlll(lIlII->lIllII.llIIlIl);}
#if KERNEL_GT_EQ((0xad2+1908-0x1244),(0x178c+1710-0x1e34),(0x410+1467-0x9ac))
else if(lIlII->IlllIl==IIlIIII){if(lIlII->IlIIIII.IlllI){lIIIl(
"\x3a\x20\x6b\x69\x6c\x6c\x69\x6e\x67\x20\x73\x67\x20\x30\x78\x25\x70\x20\x75\x6e\x69\x71\x75\x65\x5f\x69\x64\x3d\x30\x78\x25\x6c\x6c\x78" "\n"
,lIlII->IlIIIII.IlllI,lIlII->lIlIl);
#if KERNEL_GT_EQ((0xe5+1375-0x642),(0xd94+988-0x116a),(0x108+6533-0x1a71))


usb_poison_urb(lIlII->IlIIIII.IlllI);
#else
usb_kill_urb(lIlII->IlIIIII.IlllI);
#endif
}}
#endif
else{
IIllIl(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x6b\x69\x6c\x6c\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x69\x6e\x74\x65\x72\x6e\x61\x6c\x20\x65\x72\x72\x6f\x72\x21" "\n"
);}}
void llIIllIll(struct IIlll*IIIll,struct usb_interface*llIlII,struct lIIll*
IIlIIIl,int IIIIlIl){int i;unsigned long flags;struct lIIll*IllIII,*lIllIIl;
lIIIl("\x2b\x2b" "\n");
if(IIIll->llllIIl&&IIIll->IlIlIllI==llIlII->cur_altsetting->desc.
bInterfaceNumber)
{llllIIll(IIIll,(0x462+5842-0x1b34),IIIIlIl);}for(i=(0x5c1+5540-0x1b65);i<llIlII
->cur_altsetting->desc.bNumEndpoints;i++){do{lIllIIl=NULL;spin_lock_irqsave(&
IIIll->IIlIlI,flags);list_for_each_entry(IllIII,&IIIll->IllIIlI,llllIl){int 
IlIIllI;
if(IllIII==IIlIIIl){continue;}
if(IllIII->endpoint!=llIlII->cur_altsetting->endpoint[i].desc.bEndpointAddress){
continue;}IlIIllI=atomic_xchg(&IllIII->state,IllIlII);
if(IlIIllI==IllIlII||IlIIllI==lllIlllIl){continue;}IllIII->IIIIlIl=IIIIlIl;
if(IllIII->lIlIlII.lIIIlIlI){


IllIII=IIlIIIII(IIIll,IllIII->lIlIl);}if(IlIIllI==IIIlIlI){



kref_get(&IllIII->IllIll);

lIllIIl=IllIII;break;}}spin_unlock_irqrestore(&IIIll->IIlIlI,flags);if(lIllIIl){
lIllIIIII(lIllIIl);kref_put(&lIllIIl->IllIll,lIlIIIIl);}}while(lIllIIl);}lIIIl(
"\x2d\x2d" "\n");}void llIIlIIll(struct IIlll*IIIll,int endpoint,struct lIIll*
IIlIIIl){unsigned long flags;struct lIIll*IllIII,*IlIIlIl;lIIIl("\x2b\x2b" "\n")
;if(IIIll->llllIIl)
{if(endpoint==IIIll->lIlIIIll||endpoint==IIIll->lIllllII){llIllIll(IIIll);}}




do{IlIIlIl=NULL;spin_lock_irqsave(&IIIll->IIlIlI,flags);list_for_each_entry(
IllIII,&IIIll->IllIIlI,llllIl){int IlIIllI;
if(IllIII==IIlIIIl){continue;}
if(IllIII->endpoint!=endpoint){continue;}IlIIllI=atomic_xchg(&IllIII->state,
IllIlII);
if(IlIIllI==IllIlII||IlIIllI==lllIlllIl){continue;}
if(IllIII->lIlIlII.lIIIlIlI){


IllIII=IIlIIIII(IIIll,IllIII->lIlIl);}if(IlIIllI==IIIlIlI){



kref_get(&IllIII->IllIll);

IlIIlIl=IllIII;break;}}spin_unlock_irqrestore(&IIIll->IIlIlI,flags);if(IlIIlIl){
IIlllIllI(IlIIlIl);kref_put(&IlIIlIl->IllIll,lIlIIIIl);}}while(IlIIlIl);lIIIl(
"\x2d\x2d" "\n");}void IlllIIlII(struct IIlll*IIIll,llIIII lIlIl,struct lIIll*
IIlIIIl){int IIlllIll;unsigned long flags;struct lIIll*IllIII,*IlIIlIl;lIIIl(
"\x2b\x2b" "\n");if(IIIll->llllIIl){if(lIlIIllII(IIIll,lIlIl))return;}
spin_lock_irqsave(&IIIll->IIlIlI,flags);



IIlllIll=(0x13a7+3506-0x2159);IlIIlIl=NULL;list_for_each_entry(IllIII,&IIIll->
IllIIlI,llllIl){
if(IllIII==IIlIIIl){continue;}if(IllIII->lIlIl==lIlIl){if(atomic_xchg(&IllIII->
state,IllIlII)==IIIlIlI){



kref_get(&IllIII->IllIll);

IlIIlIl=IllIII;}IIlllIll=(0x1573+1679-0x1c01);break;}}if(!IIlllIll){llllIlIl(
IIIll,lIlIl);}spin_unlock_irqrestore(&IIIll->IIlIlI,flags);if(IlIIlIl){IIlllIllI
(IlIIlIl);kref_put(&IlIIlIl->IllIll,lIlIIIIl);}else{lIIIl(
"\x6e\x6f\x74\x20\x66\x6f\x75\x6e\x64" "\n");}lIIIl("\x2d\x2d" "\n");}void 
IllllIII(struct IIlll*IIIll,struct lIIll*IIlIIIl,int lIIIIIIlI,int lIIIlIll){
struct lIIll*lIllIIl,*IllIII;unsigned long flags;lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x6b\x69\x6c\x6c\x5f\x61\x6c\x6c\x5f\x72\x65\x71\x75\x65\x73\x74\x73\x3a\x20\x2b\x2b" "\n"
);

llllIIll(IIIll,lIIIIIIlI,lIIIlIll);

spin_lock_irqsave(&IIIll->IIlIlI,flags);while(!list_empty(&IIIll->IIIllIIl)){
struct llIlIllI*lllllIl=list_entry(IIIll->IIIllIIl.next,struct llIlIllI,IIIIll);
list_del(&lllllIl->IIIIll);lIlIll(lllllIl);}

do{


lIllIIl=NULL;list_for_each_entry(IllIII,&IIIll->IllIIlI,llllIl){if(lIIIIIIlI){
IllIII->IlllllI=(0x1231+4570-0x240a);}if(lIIIlIll){
IllIII->IIIIlIl=(0x1878+2622-0x22b5);}
if(IllIII!=IIlIIIl&&atomic_xchg(&IllIII->state,IllIlII)==IIIlIlI){



kref_get(&IllIII->IllIll);

lIllIIl=IllIII;break;}}spin_unlock_irqrestore(&IIIll->IIlIlI,flags);if(lIllIIl){
lIllIIIII(lIllIIl);kref_put(&lIllIIl->IllIll,lIlIIIIl);}spin_lock_irqsave(&IIIll
->IIlIlI,flags);}while(lIllIIl);spin_unlock_irqrestore(&IIIll->IIlIlI,flags);
lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x6b\x69\x6c\x6c\x5f\x61\x6c\x6c\x5f\x72\x65\x71\x75\x65\x73\x74\x73\x3a\x20\x2d\x2d" "\n"
);}
int IIllllIII(struct usb_device*llIII,lIllIl endpoint){int IllIIII;struct 
usb_host_endpoint*ep;ep=(endpoint&(0x1509+1262-0x1977))?llIII->ep_in[endpoint&
(0x156a+34-0x157d)]:llIII->ep_out[endpoint&(0x9c0+5776-0x2041)];if(!ep){lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x67\x65\x74\x5f\x65\x6e\x64\x70\x6f\x69\x6e\x74\x5f\x6d\x61\x78\x70\x61\x63\x6b\x65\x74\x3a\x20\x65\x6e\x64\x70\x6f\x69\x6e\x74\x20\x69\x73\x20\x4e\x55\x4c\x4c" "\n"
);return-ENODEV;}IllIIII=le16_to_cpu(ep->desc.wMaxPacketSize);if((ep->desc.
bmAttributes&USB_ENDPOINT_XFERTYPE_MASK)!=USB_ENDPOINT_XFER_ISOC){IllIIII=
IllIIII&(0x1bb6+2529-0x1d98);}else if(llIII->speed==USB_SPEED_FULL)
{IllIIII=IllIIII&(0x15db+2959-0x196b);}else if(llIII->speed==USB_SPEED_HIGH)
{IllIIII=(IllIIII&(0x1e6f+4002-0x2612))*((0x283+8695-0x2479)+((IllIIII>>
(0x697+5192-0x1ad4))&(0x5a+1380-0x5bb)));}
#if KERNEL_GT_EQ((0x1a0a+481-0x1be9),(0x545+4072-0x1527),(0xb9c+6785-0x25fe)) &&\
 KERNEL_LT_EQ((0xa24+4983-0x1d99),(0x13a+5239-0x15ab),(0x140f+3841-0x22ee))
else if(llIII->speed==USB_SPEED_SUPER)
{IllIIII=(IllIIII&(0x1802+5864-0x26eb))*(ep->ss_ep_comp?(((0x240+7480-0x1f77)+ep
->ss_ep_comp->desc.bMaxBurst)*((0x1a5c+2494-0x2419)+(ep->ss_ep_comp->desc.
bmAttributes&(0xc5+9296-0x2512)))):(0x13e2+547-0x1604));}
#endif 
#if KERNEL_GT_EQ((0x58c+2131-0xddd),(0x1058+3007-0x1c11),(0xe28+4470-0x1f7b))
else if(llIII->speed==USB_SPEED_SUPER)
{IllIIII=(IllIIII&(0xdb5+3755-0x1461))*((0x1b64+2484-0x2517)+ep->ss_ep_comp.
bMaxBurst)*((0xe62+418-0x1003)+(ep->ss_ep_comp.bmAttributes&(0x1493+220-0x156c))
);}
#endif 
#if KERNEL_GT_EQ((0x123f+2028-0x1a27),(0xaa+2725-0xb49),(0x997+5970-0x20e9))
else if(llIII->speed==USB_SPEED_SUPER_PLUS)
{
IllIIII=(IllIIII&(0xd82+5065-0x194c))*((0xd00+746-0xfe9)+ep->ss_ep_comp.
bMaxBurst)*((0xc59+1539-0x125b)+(ep->ss_ep_comp.bmAttributes&(0x1f5+5764-0x1876)
));}
#endif 
else{return-EPROTO;}lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x67\x65\x74\x5f\x65\x6e\x64\x70\x6f\x69\x6e\x74\x5f\x6d\x61\x78\x70\x61\x63\x6b\x65\x74\x3a\x20\x65\x6e\x64\x70\x6f\x69\x6e\x74\x3d\x30\x78\x25\x30\x32\x78\x20\x6d\x61\x78\x70\x61\x63\x6b\x65\x74\x3d\x25\x64" "\n"
,endpoint,IllIIII);return IllIIII;}
#endif 

