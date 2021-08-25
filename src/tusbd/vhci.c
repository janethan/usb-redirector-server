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
#include <linux/platform_device.h>
#include <linux/dma-mapping.h>
#include <linux/kernel.h>
#include <linux/highmem.h>
#include <asm/page.h>
#include <asm/unaligned.h>
struct IIIlll*IlllIIll=NULL;struct usb_hcd*llIIIII=NULL;
#if KERNEL_GT_EQ((0xd0c+3053-0x18f7),(0xa90+2583-0x14a1),(0x4c5+7296-0x211e)) ||\
 RHEL_RELEASE_GT_EQ((0x930+3182-0x1598),(0x161b+3771-0x24d3)) 
struct usb_hcd*lllIlIl=NULL;
#define llllIlI(IIIIlI) (((IIIIlI)->speed == HCD_USB3) ? "\x75\x73\x62\x33" : \
"\x75\x73\x62\x32")
#else
#define llllIlI(IIIIlI) "\x55\x53\x42\x32"
#endif
#if defined(CONFIG_X86_32) && !defined(_USBD_VHCI_NO_DMA_)
int lllIIlll=(0x9a1+4558-0x1b6f);
#endif
#ifdef _USBD_DEBUG_MEMORY_
extern atomic_t lIlIIlIIl;extern atomic_t IllllllIl;extern atomic_t Illllllll;
extern atomic_t IlIIlllI;extern atomic_t IIlIlIIll;
#endif 


static int IlIllIllI(struct platform_device*);static int IlllIlllI(struct 
platform_device*);static void IlllIIIIl(struct device*dev);static int IIllllIIl(
struct usb_hcd*lllIl);static int IlIlIIlll(struct usb_hcd*lllIl);static void 
lllIlIIIl(struct usb_hcd*lllIl);static int IIIllIIlI(struct usb_hcd*lllIl);
#if KERNEL_LT((0x632+915-0x9c3),(0x17f7+1417-0x1d7a),(0x109+6808-0x1b89))
static int lIlIIIlI(struct usb_hcd*lllIl,struct urb*urb);static int IIllIlll(
struct usb_hcd*lllIl,struct usb_host_endpoint*ep,struct urb*urb,gfp_t llllI);
#else
static int lIlIIIlI(struct usb_hcd*lllIl,struct urb*urb,int status);static int 
IIllIlll(struct usb_hcd*lllIl,struct urb*urb,gfp_t llllI);
#endif
static void IllllIlIl(struct usb_hcd*lllIl,struct usb_host_endpoint*ep);static 
int IlllIlIII(struct usb_hcd*lllIl,u16 IIIIIIlII,u16 wValue,u16 wIndex,char*
IllIl,u16 wLength);static int IIIIllIlI(struct usb_hcd*lllIl,char*IllIl);static 
int lIllIIlII(struct usb_hcd*lllIl);static int IIlIIlIII(struct usb_hcd*lllIl);
#if KERNEL_GT_EQ((0x3e7+683-0x690),(0x19f9+469-0x1bc8),(0x2231+490-0x23f4)) || \
RHEL_RELEASE_GT_EQ((0x65b+2905-0x11ae),(0xe76+4441-0x1fcc)) 
static int llllIlllI(struct usb_hcd*lllIl,struct usb_device*IlIIl,struct 
usb_host_endpoint**lllllIIll,unsigned int lllIIIllI,unsigned int llIllllll,gfp_t
 llllI);static int lllIlIlll(struct usb_hcd*lllIl,struct usb_device*IlIIl,struct
 usb_host_endpoint**lllllIIll,unsigned int lllIIIllI,gfp_t llllI);
#endif
static int IllIllllI(struct lIIIII*Illll,int lIIlI,int IIIllll,int lIIIIII);
static int IIlIlIlII(struct lIIIII*Illll,int lIIlI,int IIIllll);static void 
llllIll(struct lIIIII*Illll,int lIIlI,int llllIlll);static void IlllIIl(struct 
lIIIII*Illll,int lIIlI,int llllII,int lIIIIII);
#if KERNEL_GT_EQ((0x44d+3412-0x119f),(0x135+8446-0x222d),(0x1532+3852-0x2417)) \
|| RHEL_RELEASE_GT_EQ((0xea8+533-0x10b7),(0x34a+1988-0xb0b)) 
static int IlIIIlIlI(struct lIIIII*Illll,int lIIlI,int IIIllll,int lIIIIII);
static int lllIIIlIl(struct lIIIII*Illll,int lIIlI,int IIIllll);static void 
IlIllll(struct lIIIII*Illll,int lIIlI,int llllII,int lIIIIII);static void 
llIIllI(struct lIIIII*Illll,int lIIlI,int llllIlll);static void lllIIlI(struct 
lIIIII*Illll,int lIIlI,int IlIIIIlII);
#endif
#define lIIllII(lllIl) ((struct lIIIII*)(lllIl->hcd_priv))
static struct platform_driver lIIIIlIlI={.probe=IlIllIllI,.remove=IlllIlllI,.
driver={.name=IlIlIIl,.owner=THIS_MODULE,},};static struct platform_device 
llIlllII={.name=IlIlIIl,.id=-(0x1b8f+1494-0x2164),.dev={
.release=IlllIIIIl,},};static struct hc_driver IlIIllIII={.description=IlIlIIl,.
product_desc=
"\x56\x69\x72\x74\x75\x61\x6c\x20\x55\x53\x42\x20\x48\x6f\x73\x74\x20\x43\x6f\x6e\x74\x72\x6f\x6c\x6c\x65\x72"
,.hcd_priv_size=sizeof(struct lIIIII),
#if KERNEL_GT_EQ((0x3fb+1499-0x9d4),(0x4d3+6141-0x1cca),(0x4d2+8757-0x26e0)) || \
RHEL_RELEASE_GT_EQ((0x1159+844-0x149f),(0x676+1571-0xc96)) 
.flags=HCD_USB3|HCD_SHARED,
#else
.flags=HCD_USB2,
#endif
.reset=IIllllIIl,.start=IlIlIIlll,.stop=lllIlIIIl,.urb_enqueue=IIllIlll,.
urb_dequeue=lIlIIIlI,.endpoint_disable=IllllIlIl,.get_frame_number=IIIllIIlI,.
hub_status_data=IIIIllIlI,.hub_control=IlllIlIII,.bus_suspend=lIllIIlII,.
bus_resume=IIlIIlIII,
#if KERNEL_GT_EQ((0x109a+2099-0x18cb),(0xccf+456-0xe91),(0xc31+3060-0x17fe)) || \
RHEL_RELEASE_GT_EQ((0x43a+3124-0x1068),(0xcc5+1981-0x147f)) 
.alloc_streams=llllIlllI,.free_streams=lllIlIlll,
#endif
};static struct list_head IIllIII;static spinlock_t IIlIII;
#if defined(CONFIG_X86_32) && !defined(_USBD_VHCI_NO_DMA_)
#  if KERNEL_LT((0x717+1661-0xd92),(0x1cdf+894-0x2057),(0xc0b+4378-0x1d0d))
static u64 IllllIIII=DMA_32BIT_MASK;
#  else
static u64 IllllIIII=DMA_BIT_MASK((0xed+7498-0x1e17));
#  endif
#endif
static int IlIllIllI(struct platform_device*IlIIll){struct lIIIII*Illll;int 
IlIlI=(0x1e1+4596-0x13d5);int i;lIlll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x70\x6c\x61\x74\x66\x6f\x72\x6d\x5f\x64\x72\x69\x76\x65\x72\x5f\x70\x72\x6f\x62\x65\x3a\x20\x2b\x2b" "\n"
);do
{
#if defined(CONFIG_X86_32) && !defined(_USBD_VHCI_NO_DMA_)
if(lllIIlll){IlIIll->dev.dma_mask=&IllllIIII;}
#endif

llIIIII=usb_create_hcd(&IlIIllIII,&IlIIll->dev,llIIIl(&IlIIll->dev));if(llIIIII
==NULL){IlIlI=-ENOMEM;break;}
#if KERNEL_GT_EQ((0x4f4+209-0x5c3),(0xd54+4887-0x2065),(0x610+1807-0xd05))
llIIIII->has_tt=(0xb07+3513-0x18bf);
#endif
Illll=lIIllII(llIIIII);memset(Illll,(0xcb6+1459-0x1269),sizeof(*Illll));Illll->
lllIl=llIIIII;spin_lock_init(&Illll->lock);for(i=(0x14d+4480-0x12cd);i<IllIIIl;i
++){IlllIIl(Illll,i,IlIllllI,(0x1061+3561-0x1e4a));}IlIlI=usb_add_hcd(llIIIII,
(0x362+1693-0x9ff),(0x167d+2543-0x206c));if(IlIlI!=(0xb5d+4273-0x1c0e)){break;}
#if (KERNEL_GT_EQ((0x1a4b+2578-0x245a),(0x104+1933-0x891),(0x1090+477-0x126d)) \
&& KERNEL_LT_EQ((0x9a4+2940-0x151d),(0x987+2896-0x14d4),(0xf6a+1525-0x155f))) ||\
 (RHEL_RELEASE_GT_EQ((0x20dc+510-0x22d4),(0x118+4719-0x1384)) && RHEL_RELEASE_LT\
((0xe12+4627-0x201e),(0x2443+114-0x24b5)))



if(llIIIII->irq==(0x378+7740-0x21b4)){llIIIII->irq=-(0x18b6+2738-0x2367);}
#endif
#if KERNEL_GT_EQ((0x646+1398-0xbba),(0x9d3+387-0xb50),(0x7d9+4146-0x17e4)) || \
RHEL_RELEASE_GT_EQ((0x1ca9+1314-0x21c5),(0x227+8452-0x2328)) 

lllIlIl=usb_create_shared_hcd(&IlIIllIII,&IlIIll->dev,llIIIl(&IlIIll->dev),
llIIIII);if(lllIlIl==NULL){IlIlI=-ENOMEM;break;}Illll=lIIllII(lllIlIl);memset(
Illll,(0x17d2+460-0x199e),sizeof(*Illll));Illll->lllIl=lllIlIl;spin_lock_init(&
Illll->lock);for(i=(0x233+619-0x49e);i<IllIIIl;i++){IlIllll(Illll,i,IlIllllI,
(0x18aa+2691-0x232d));}IlIlI=usb_add_hcd(lllIlIl,(0x4a6+7403-0x2191),
(0x2a5+4671-0x14e4));if(IlIlI!=(0x102+5069-0x14cf)){break;}lIIllII(llIIIII)->
llllllll=lllIlIl;lIIllII(lllIlIl)->llllllll=llIIIII;
#endif 
}while((0x105a+32-0x107a));if(IlIlI!=(0x9e9+647-0xc70)){if(llIIIII){usb_put_hcd(
llIIIII);llIIIII=NULL;}
#if KERNEL_GT_EQ((0x1e4b+941-0x21f6),(0x1132+4889-0x2445),(0x3bb+4372-0x14a8)) \
|| RHEL_RELEASE_GT_EQ((0x50f+3616-0x1329),(0x473+4357-0x1575)) 
if(lllIlIl){usb_put_hcd(lllIlIl);lllIlIl=NULL;}
#endif
}lIlll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x70\x6c\x61\x74\x66\x6f\x72\x6d\x5f\x64\x72\x69\x76\x65\x72\x5f\x70\x72\x6f\x62\x65\x3a\x20\x2d\x2d\x20\x72\x65\x73\x75\x6c\x74\x20\x3d\x20\x25\x64" "\n"
,IlIlI);return IlIlI;}static int IlllIlllI(struct platform_device*IlIIll){struct
 usb_hcd*lllIl=platform_get_drvdata(IlIIll);struct lIIIII*Illll=lIIllII(lllIl);
lIlll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x70\x6c\x61\x74\x66\x6f\x72\x6d\x5f\x64\x72\x69\x76\x65\x72\x5f\x72\x65\x6d\x6f\x76\x65\x5b\x25\x73\x5d\x3a\x20\x2b\x2b" "\n"
,llllIlI(lllIl));if(Illll->llllllll){usb_remove_hcd(Illll->llllllll);usb_put_hcd
(Illll->llllllll);Illll->llllllll=NULL;}usb_remove_hcd(lllIl);usb_put_hcd(lllIl)
;lIlll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x70\x6c\x61\x74\x66\x6f\x72\x6d\x5f\x64\x72\x69\x76\x65\x72\x5f\x72\x65\x6d\x6f\x76\x65\x3a\x20\x2d\x2d" "\n"
);return(0xbe0+3544-0x19b8);}static void IlllIIIIl(struct device*dev){return;}
static int IIllllIIl(struct usb_hcd*lllIl){lIlll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x72\x65\x73\x65\x74\x5b\x25\x73\x5d" "\n"
,llllIlI(lllIl));


#if KERNEL_GT_EQ((0x2051+354-0x21b1),(0xfda+5131-0x23df),(0x45+586-0x268)) || \
RHEL_RELEASE_GT_EQ((0x2f1+896-0x66b),(0xed6+2274-0x17b5)) 
if(usb_hcd_is_primary_hcd(lllIl)){
lIlll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x72\x65\x73\x65\x74\x3a\x20\x73\x65\x74\x74\x69\x6e\x67\x20\x75\x70\x20\x55\x53\x42\x32\x20\x68\x63\x64" "\n"
);lllIl->speed=HCD_USB2;lllIl->self.root_hub->speed=USB_SPEED_HIGH;}
#endif
#if KERNEL_GT_EQ((0x228f+908-0x2618),(0xa08+5197-0x1e4f),(0x7a+3031-0xc51)) || \
RHEL_RELEASE_GT_EQ((0xe1f+3160-0x1a70),(0x1197+3081-0x1da0))
if(!usb_hcd_is_primary_hcd(lllIl)){

lllIl->self.no_stop_on_short=(0x1442+4694-0x2697);}
#endif
return(0x1d04+1901-0x2471);}static int IlIlIIlll(struct usb_hcd*lllIl){int i;
lIlll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x73\x74\x61\x72\x74\x5b\x25\x73\x5d" "\n"
,llllIlI(lllIl));lllIl->power_budget=(0x2bd+5939-0x19f0);lllIl->state=
HC_STATE_RUNNING;lllIl->uses_new_polling=(0x1bb+313-0x2f3);for(i=
(0x11f+7764-0x1f73);i<IllIIIl;i++){
#if KERNEL_GT_EQ((0x5d4+5880-0x1cca),(0x181+7768-0x1fd3),(0xf46+447-0x10de)) || \
RHEL_RELEASE_GT_EQ((0x1506+897-0x1881),(0x1631+1644-0x1c9a)) 
if(lllIl->speed==HCD_USB3){IlIllll(lIIllII(lllIl),i,lIllIlII,(0xdfa+6144-0x25fa)
);}else
#endif
{IlllIIl(lIIllII(lllIl),i,lIllIlII,(0x17f9+2451-0x218c));}}return
(0x96b+1213-0xe28);}static void lllIlIIIl(struct usb_hcd*lllIl){int i;lIlll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x73\x74\x6f\x70\x5b\x25\x73\x5d" "\n",
llllIlI(lllIl));for(i=(0x13a3+3303-0x208a);i<IllIIIl;i++){
#if KERNEL_GT_EQ((0xb7b+6991-0x26c8),(0x1887+1424-0x1e11),(0x1116+2377-0x1a38)) \
|| RHEL_RELEASE_GT_EQ((0x464+3491-0x1201),(0x366+8460-0x246f)) 
if(lllIl->speed==HCD_USB3){IlIllll(lIIllII(lllIl),i,IIlIIlII,(0x1aa+381-0x327));
}else
#endif
{IlllIIl(lIIllII(lllIl),i,IIlIIlII,(0x1d8+4944-0x1528));}}}static int IIIllIIlI(
struct usb_hcd*lllIl){lIlll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x67\x65\x74\x5f\x66\x72\x61\x6d\x65\x5f\x6e\x75\x6d\x62\x65\x72\x5b\x25\x73\x5d" "\n"
,llllIlI(lllIl));return(0x1367+4319-0x2446);}int IIllIlllI(struct lIlIIl*lIllI,
struct lllIIl**lIllIIlI,struct urb*IlllI){lIlll(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x61\x64\x64\x5f\x75\x72\x62\x3a\x20\x75\x72\x62\x3d\x25\x70" "\n"
,IlllI);if(*lIllIIlI){struct lllllII*lIlIII;lIlll(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x61\x64\x64\x5f\x75\x72\x62\x3a\x20\x65\x78\x69\x73\x74\x69\x6e\x67\x20\x70\x76\x72\x65\x71" "\n"
);lIlIII=IllIllI(sizeof(struct lllllII),GFP_ATOMIC);if(lIlIII){lIlIII->IlllI=
IlllI;list_add_tail(&lIlIII->IIIIll,&(*lIllIIlI)->lllIlll);}else{lIlll(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x61\x64\x64\x5f\x75\x72\x62\x3a\x20\x6e\x6f\x20\x6d\x65\x6d\x6f\x72\x79\x20\x66\x6f\x72\x20\x75\x72\x62\x5f\x6c\x69\x73\x74" "\n"
);return-ENOMEM;}}else{lIlll(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x61\x64\x64\x5f\x75\x72\x62\x3a\x20\x6e\x65\x77\x20\x70\x76\x72\x65\x71" "\n"
);*lIllIIlI=IIIIlllll(lIllI,GFP_ATOMIC);if(*lIllIIlI==NULL){lIlll(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x61\x64\x64\x5f\x75\x72\x62\x3a\x20\x6e\x6f\x20\x6d\x65\x6d\x6f\x72\x79\x20\x66\x6f\x72\x20\x71\x75\x65\x75\x65\x5f\x65\x6e\x74\x72\x79" "\n"
);return-ENOMEM;}else{(*lIllIIlI)->urb.IlllI=IlllI;list_add_tail(&(*lIllIIlI)->
urb.IIIIll,&(*lIllIIlI)->lllIlll);}}return(0x749+2161-0xfba);}
#if KERNEL_LT((0x6bb+6680-0x20d1),(0x159a+4400-0x26c4),(0x862+512-0xa4a))
static int IIllIlll(struct usb_hcd*lllIl,struct usb_host_endpoint*ep,struct urb*
urb,gfp_t llllI)
#else
static int IIllIlll(struct usb_hcd*lllIl,struct urb*urb,gfp_t llllI)
#endif
{int IlIlI=-EINPROGRESS;struct lIIIII*Illll=lIIllII(lllIl);struct lIlIIl*lIllI=
NULL;struct lllIIl*IllII=NULL;unsigned long flags;int IIIlllIlI=
(0x19d4+3157-0x2629);lIlll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x75\x72\x62\x5f\x65\x6e\x71\x75\x65\x75\x65\x5b\x25\x73\x5d\x3a\x20\x2b\x2b\x20\x75\x72\x62\x3d\x30\x78\x25\x70\x20\x75\x73\x62\x5f\x64\x65\x76\x69\x63\x65\x3d\x30\x78\x25\x70\x20\x70\x61\x72\x65\x6e\x74\x3d\x30\x78\x25\x70\x20\x64\x65\x76\x6e\x75\x6d\x3d\x25\x64\x20\x6e\x75\x6d\x5f\x73\x67\x73\x3d\x25\x64" "\n"
,llllIlI(lllIl),urb,urb->dev,urb->dev->dev.parent,urb->dev->devnum,
#if KERNEL_GT_EQ((0x10fc+3019-0x1cc5),(0x5a5+2344-0xec7),(0xa9a+5013-0x1e10))
urb->num_sgs);
#else
(0xf05+4239-0x1f94));
#endif
IIIlIIIll(urb,(0x20a+8403-0x22dd));do
{
#if KERNEL_GT_EQ((0x835+1874-0xf85),(0x1e0b+2140-0x2661),(0x7e0+3359-0x14e7))
struct usb_host_endpoint*ep=urb->ep;
#endif
spin_lock_irqsave(&Illll->lock,flags);
#if KERNEL_GT_EQ((0xfa+2217-0x9a1),(0x7bf+3327-0x14b8),(0x199+2504-0xb49))


IlIlI=usb_hcd_link_urb_to_ep(lllIl,urb);
#else
spin_lock(&urb->lock);IlIlI=(urb->status==-EINPROGRESS)?(0x38b+7275-0x1ff6):urb
->status;spin_unlock(&urb->lock);
#endif
if(IlIlI!=(0x347+9128-0x26ef)){spin_unlock_irqrestore(&Illll->lock,flags);lIlll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x75\x72\x62\x5f\x65\x6e\x71\x75\x65\x75\x65\x3a\x20\x75\x72\x62\x20\x61\x6c\x72\x65\x61\x64\x79\x20\x75\x6e\x6c\x69\x6e\x6b\x65\x64" "\n"
);break;}
#if KERNEL_GT_EQ((0x449+215-0x51e),(0x325+6669-0x1d2c),(0xeb6+2450-0x1821)) || \
RHEL_RELEASE_GT_EQ((0x8b+4170-0x10cf),(0xeed+4997-0x226f)) 








if(lllIl->speed==HCD_USB3){
lIllI=IIIIIlIII(lllIl,urb->dev->portnum);}else
#endif
{
lIllI=IlIIlIIll(lllIl,usb_pipedevice(urb->pipe));}if(lIllI==NULL){
#if KERNEL_GT_EQ((0x1cfc+1962-0x24a4),(0x6ab+1293-0xbb2),(0x168+6979-0x1c93))
usb_hcd_unlink_urb_from_ep(lllIl,urb);
#endif
spin_unlock_irqrestore(&Illll->lock,flags);lIlll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x75\x72\x62\x5f\x65\x6e\x71\x75\x65\x75\x65\x3a\x20\x64\x65\x76\x69\x63\x65\x20\x6e\x6f\x74\x20\x66\x6f\x75\x6e\x64" "\n"
);IlIlI=-ENODEV;break;}if(usb_pipedevice(urb->pipe)==(0x5bc+1684-0xc50)&&
usb_pipetype(urb->pipe)==PIPE_CONTROL){struct usb_ctrlrequest*llIlll=(struct 
usb_ctrlrequest*)urb->setup_packet;if(!llIlll){
#if KERNEL_GT_EQ((0x125+589-0x370),(0xc09+3397-0x1948),(0x18e7+1292-0x1ddb))
usb_hcd_unlink_urb_from_ep(lllIl,urb);
#endif
spin_unlock_irqrestore(&Illll->lock,flags);lIlll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x75\x72\x62\x5f\x65\x6e\x71\x75\x65\x75\x65\x3a\x20\x69\x6e\x76\x61\x6c\x69\x64\x20\x63\x6f\x6e\x74\x72\x6f\x6c\x20\x74\x72\x61\x6e\x73\x66\x65\x72\x20\x75\x72\x62" "\n"
);IlIlI=-EINVAL;break;}if(llIlll->bRequest==USB_REQ_SET_ADDRESS){lIlll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x75\x72\x62\x5f\x65\x6e\x71\x75\x65\x75\x65\x3a\x20\x55\x53\x42\x5f\x52\x45\x51\x5f\x53\x45\x54\x5f\x41\x44\x44\x52\x45\x53\x53\x20\x61\x64\x64\x72\x65\x73\x73\x3d\x25\x64" "\n"
,llIlll->wValue);lIllI->IllIlIl=le16_to_cpu(llIlll->wValue);
#if KERNEL_GT_EQ((0x557+1426-0xae7),(0x1b8+4042-0x117c),(0x18+7818-0x1e8a))
usb_hcd_unlink_urb_from_ep(lllIl,urb);
#endif
spin_unlock(&Illll->lock);
#if KERNEL_LT((0x1dca+1999-0x2597),(0xe9d+3200-0x1b17),(0x45d+1546-0xa4f))

spin_lock(&urb->lock);if(urb->status==-EINPROGRESS){urb->status=
(0x1693+3823-0x2582);}spin_unlock(&urb->lock);
#else

#endif
#if KERNEL_LT((0xbc7+4168-0x1c0d),(0x37d+8819-0x25ea),(0x14b0+4143-0x24cc))
usb_hcd_giveback_urb(lIllI->parent,urb,NULL);
#elif KERNEL_LT((0x218c+247-0x2281),(0x8d1+83-0x91e),(0x14b8+795-0x17bb))
usb_hcd_giveback_urb(lIllI->parent,urb);
#else
usb_hcd_giveback_urb(lIllI->parent,urb,(0xbb+4472-0x1233));
#endif
local_irq_restore(flags);IlIlI=(0x192c+1962-0x20d6);break;}}IllII=ep->hcpriv;
IlIlI=IIllIlllI(lIllI,&IllII,urb);if(IlIlI!=(0x1bfc+319-0x1d3b)){
#if KERNEL_GT_EQ((0xc3b+6141-0x2436),(0x1986+1430-0x1f16),(0xfb5+1809-0x16ae))
usb_hcd_unlink_urb_from_ep(lllIl,urb);
#endif
spin_unlock_irqrestore(&Illll->lock,flags);break;}urb->hcpriv=IllII;if((
usb_pipetype(urb->pipe)==PIPE_BULK)&&((urb->transfer_flags&URB_NO_INTERRUPT)||(
lIllI->vid==(0xa93+3242-0x1289)&&lIllI->IlIlIII==(0xd2b+4776-0x1edf)))&&
((usb_pipein(urb->pipe)&&(urb->transfer_flags&URB_SHORT_NOT_OK))||(usb_pipeout(
urb->pipe)&&!(urb->transfer_flags&URB_ZERO_PACKET)))){lIlll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x75\x72\x62\x5f\x65\x6e\x71\x75\x65\x75\x65\x3a\x20\x6d\x65\x72\x67\x65\x20\x73\x70\x6c\x69\x74\x74\x65\x64\x20\x75\x72\x62" "\n"
);if(ep->hcpriv==NULL){ep->hcpriv=IllII;
spin_lock(&lIllI->IIllII);list_add_tail(&IllII->llllIl,&lIllI->IllIIlI);
spin_unlock(&lIllI->IIllII);}}else{spin_lock(&lIllI->IIllII);if(ep->hcpriv){ep->
hcpriv=NULL;
list_del(&IllII->llllIl);}list_add_tail(&IllII->llllIl,&lIllI->llIllIl);
IIIlllIlI=(0x1d0+7832-0x2067);spin_unlock(&lIllI->IIllII);}
spin_unlock_irqrestore(&Illll->lock,flags);if(IIIlllIlI){wake_up(&lIllI->lIIllI)
;}IlIlI=-EINPROGRESS;}while((0x14fb+2757-0x1fc0));if(lIllI){
IlIllIIl(lIllI);}if(IlIlI==-EINPROGRESS){
lIlll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x75\x72\x62\x5f\x65\x6e\x71\x75\x65\x75\x65\x3a\x20\x2d\x2d\x20\x72\x65\x73\x75\x6c\x74\x3d\x25\x64" "\n"
,(0xbf1+4207-0x1c60));return(0x3f7+3789-0x12c4);}lIlll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x75\x72\x62\x5f\x65\x6e\x71\x75\x65\x75\x65\x3a\x20\x2d\x2d\x20\x72\x65\x73\x75\x6c\x74\x3d\x25\x64" "\n"
,IlIlI);return IlIlI;}
#if KERNEL_LT((0x199b+282-0x1ab3),(0x820+717-0xae7),(0x3d9+1333-0x8f6))
static int lIlIIIlI(struct usb_hcd*lllIl,struct urb*urb)
#else
static int lIlIIIlI(struct usb_hcd*lllIl,struct urb*urb,int status)
#endif
{struct lIIIII*Illll=lIIllII(lllIl);struct lllIIl*IllII;IIlII IIlIl;int IlIlI=
(0x7cf+5067-0x1b9a);int unlinked;unsigned long flags;lIlll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x75\x72\x62\x5f\x64\x65\x71\x75\x65\x75\x65\x5b\x25\x73\x5d\x3a\x20\x2b\x2b\x20\x75\x72\x62\x3d\x30\x78\x25\x70" "\n"
,llllIlI(lllIl),urb);do
{spin_lock_irqsave(&Illll->lock,flags);
#if KERNEL_GT_EQ((0x1158+3785-0x201f),(0x5e2+1786-0xcd6),(0xdb5+5684-0x23d1))
IlIlI=usb_hcd_check_unlink_urb(lllIl,urb,status);if(IlIlI!=(0xdb4+5131-0x21bf)){

spin_unlock_irqrestore(&Illll->lock,flags);break;}
#endif
IllII=(struct lllIIl*)urb->hcpriv;if(!IllII){

lIlll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x75\x72\x62\x5f\x64\x65\x71\x75\x65\x75\x65\x3a\x20\x6e\x6f\x20\x64\x65\x76\x69\x63\x65\x21" "\n"
);spin_unlock_irqrestore(&Illll->lock,flags);break;}spin_lock(&IllII->lIllI->
IIllII);unlinked=lIllIIIll(IllII);spin_unlock(&IllII->lIllI->IIllII);
spin_unlock_irqrestore(&Illll->lock,flags);if(unlinked){
#if KERNEL_LT((0x145b+319-0x1598),(0x1baf+2215-0x2450),(0x986+6592-0x232e))
IllIIllI(IllII,-ECONNRESET);
#else
IllIIllI(IllII,status);
#endif
IIlIl=IllIllI(sizeof(lllllIlIl),GFP_ATOMIC);if(!IIlIl){lIlll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x75\x72\x62\x5f\x64\x65\x71\x75\x65\x75\x65\x3a\x20\x6e\x6f\x20\x6d\x65\x6d\x6f\x72\x79\x20\x66\x6f\x72\x20\x75\x6e\x72\x62" "\n"
);IIlIlllI(IllII);break;}IIlIl->IlIII.IIIlIl=IllII->lIlIl;IIlIl->IlIII.IllllII=
(0x2c4+7520-0x2024);IIlIl->IlIII.IIIII=sizeof(lllllIlIl);IIlIl->IlIII.IIIlIIl=
llIIlIll;IIlIl->IlIII.Status=(0x1bbd+2230-0x2473);IIlIl->IlIII.Context=
(0x1617+2690-0x2099);INIT_LIST_HEAD(&IllII->lllIlll);IllII->urb.IlllI=NULL;IllII
->IIlIl=IIlIl;spin_lock_irqsave(&IllII->lIllI->IIllII,flags);list_add_tail(&
IllII->llllIl,&IllII->lIllI->llIllIl);spin_unlock_irqrestore(&IllII->lIllI->
IIllII,flags);wake_up(&IllII->lIllI->lIIllI);}else{

lIlll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x75\x72\x62\x5f\x64\x65\x71\x75\x65\x75\x65\x3a\x20\x75\x72\x62\x20\x6e\x6f\x74\x20\x66\x6f\x75\x6e\x64\x20\x69\x6e\x20\x71\x75\x65\x75\x65" "\n"
);}}while((0x303+2123-0xb4e));lIlll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x75\x72\x62\x5f\x64\x65\x71\x75\x65\x75\x65\x3a\x20\x2d\x2d\x20\x72\x65\x73\x75\x6c\x74\x3d\x25\x64" "\n"
,IlIlI);return IlIlI;}void IllllIlIl(struct usb_hcd*lllIl,struct 
usb_host_endpoint*ep){unsigned long flags;struct lIIIII*Illll=lIIllII(lllIl);
lIlll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x68\x75\x62\x5f\x63\x6f\x6e\x74\x72\x6f\x6c\x5b\x25\x73\x5d\x3a\x20\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x65\x6e\x64\x70\x6f\x69\x6e\x74\x5f\x64\x69\x73\x61\x62\x6c\x65\x2b\x2b\x20\x65\x70\x3d\x25\x70" "\n"
,llllIlI(lllIl),ep);spin_lock_irqsave(&Illll->lock,flags);if(ep->hcpriv){lIlll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x68\x75\x62\x5f\x63\x6f\x6e\x74\x72\x6f\x6c\x3a\x20\x63\x6c\x65\x61\x6e\x69\x6e\x67\x20\x75\x70\x20\x68\x63\x70\x72\x69\x76" "\n"
);ep->hcpriv=NULL;}spin_unlock_irqrestore(&Illll->lock,flags);lIlll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x68\x75\x62\x5f\x63\x6f\x6e\x74\x72\x6f\x6c\x3a\x20\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x65\x6e\x64\x70\x6f\x69\x6e\x74\x5f\x64\x69\x73\x61\x62\x6c\x65\x2d\x2d" "\n"
);}
#if KERNEL_GT_EQ((0x557+7815-0x23dc),(0x62f+8047-0x2598),(0x1b98+247-0x1c68)) ||\
 RHEL_RELEASE_GT_EQ((0xf8+4481-0x1273),(0x9ea+3533-0x17b4)) 
#define IIIllIlll \
		( USB_PORT_STAT_C_CONNECTION \
		| USB_PORT_STAT_C_ENABLE \
		| USB_PORT_STAT_C_SUSPEND \
		| USB_PORT_STAT_C_OVERCURRENT \
		| USB_PORT_STAT_C_RESET \
		| USB_PORT_STAT_C_BH_RESET \
		| USB_PORT_STAT_C_LINK_STATE \
		| USB_PORT_STAT_C_CONFIG_ERROR )
#else
#define IIIllIlll \
		( USB_PORT_STAT_C_CONNECTION \
		| USB_PORT_STAT_C_ENABLE \
		| USB_PORT_STAT_C_SUSPEND \
		| USB_PORT_STAT_C_OVERCURRENT \
		| USB_PORT_STAT_C_RESET )
#endif
#if KERNEL_GT_EQ((0x1199+2846-0x1cb5),(0x1421+1472-0x19db),(0x130c+2987-0x1e90))\
 || RHEL_RELEASE_GT_EQ((0x4c9+3210-0x114d),(0x1a85+2592-0x24a2)) 
size_t llIllIIlI(void*IllIl,size_t IIlIIl){struct{struct usb_bos_descriptor 
lIIlIIll;struct usb_ss_cap_descriptor ss_cap;}__packed IIlllII;memset(&IIlllII,
(0x1ce5+2503-0x26ac),sizeof(IIlllII));IIlllII.lIIlIIll.bLength=USB_DT_BOS_SIZE,
IIlllII.lIIlIIll.bDescriptorType=USB_DT_BOS,IIlllII.lIIlIIll.wTotalLength=
cpu_to_le16(sizeof(IIlllII)),IIlllII.lIIlIIll.bNumDeviceCaps=(0xb39+3020-0x1704)
,IIlllII.ss_cap.bLength=USB_DT_USB_SS_CAP_SIZE,IIlllII.ss_cap.bDescriptorType=
USB_DT_DEVICE_CAPABILITY,IIlllII.ss_cap.bDevCapabilityType=USB_SS_CAP_TYPE,
IIlllII.ss_cap.wSpeedSupported=cpu_to_le16(USB_5GBPS_OPERATION),IIlllII.ss_cap.
bFunctionalitySupport=ilog2(USB_5GBPS_OPERATION),IIlIIl=min(sizeof(IIlllII),
IIlIIl);memcpy(IllIl,&IIlllII,IIlIIl);return IIlIIl;}size_t IIlIIIlll(void*IllIl
,size_t IIlIIl){struct usb_hub_descriptor desc;memset(&desc,(0x1435+510-0x1633),
sizeof(desc));desc.bDescLength=(0x19d+5798-0x1837);desc.bDescriptorType=
(0x694+8320-0x26ea);desc.bNbrPorts=IllIIIl;
desc.wHubCharacteristics=cpu_to_le16((0x1b9+6136-0x19b0));desc.u.ss.
bHubHdrDecLat=(0x19cd+831-0x1d08);
desc.u.ss.DeviceRemovable=cpu_to_le16(65534&(65535>>((0x717+6411-0x2013)-IllIIIl
)));IIlIIl=min((size_t)desc.bDescLength,IIlIIl);memcpy(IllIl,&desc,IIlIIl);
return IIlIIl;}
#endif 
size_t IIIIIIIlI(void*IllIl,size_t IIlIIl){__u8*IIlIllIl;struct 
usb_hub_descriptor desc;memset(&desc,(0x1c7+8676-0x23ab),sizeof(desc));desc.
bDescLength=(0x16d6+2858-0x21f9)+lIIIIIlI*(0x175f+2293-0x2052);desc.
bDescriptorType=(0x327+2261-0xbd3);desc.bNbrPorts=IllIIIl;desc.
wHubCharacteristics=cpu_to_le16((0xc9+7615-0x1e87));
#if KERNEL_GT_EQ((0x1167+1999-0x1934),(0x172+3871-0x108b),(0xf46+2227-0x17d2)) \
|| RHEL_RELEASE_GT_EQ((0x1896+2319-0x219f),(0x3a0+3499-0x1149))
IIlIllIl=desc.u.hs.DeviceRemovable;
#else
IIlIllIl=desc.DeviceRemovable;
#endif
memset(&IIlIllIl[(0x15f+4976-0x14cf)],(0x15a3+4247-0x263a),lIIIIIlI);memset(&
IIlIllIl[lIIIIIlI],(0x47a+5583-0x194a),lIIIIIlI);IIlIIl=min((size_t)desc.
bDescLength,IIlIIl);memcpy(IllIl,&desc,IIlIIl);return IIlIIl;}static int 
IlllIlIII(struct usb_hcd*lllIl,u16 IIIIIIlII,u16 wValue,u16 wIndex,char*IllIl,
u16 wLength){struct lIIIII*Illll=lIIllII(lllIl);int IlIlI=(0x14fd+1937-0x1c8e);
int lIIlI=-(0xf69+1036-0x1374);int IlIlllIll=(0x22a1+370-0x2413);unsigned long 
flags;lIlll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x68\x75\x62\x5f\x63\x6f\x6e\x74\x72\x6f\x6c\x5b\x25\x73\x5d\x3a\x20\x2b\x2b" "\n"
,llllIlI(lllIl));if(!test_bit(HCD_FLAG_HW_ACCESSIBLE,&lllIl->flags)){return-
ETIMEDOUT;}spin_lock_irqsave(&Illll->lock,flags);switch(IIIIIIlII){case 
GetHubDescriptor:lIlll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x68\x75\x62\x5f\x63\x6f\x6e\x74\x72\x6f\x6c\x3a\x20\x47\x65\x74\x48\x75\x62\x44\x65\x73\x63\x72\x69\x70\x74\x6f\x72" "\n"
);
#if KERNEL_GT_EQ((0x10e2+989-0x14bd),(0x1028+1647-0x1691),(0x468+4545-0x1602)) \
|| RHEL_RELEASE_GT_EQ((0x725+3170-0x1381),(0x67c+2342-0xf9f)) 
if(lllIl->speed==HCD_USB3){if((wValue>>(0x96f+6158-0x2175))!=USB_DT_SS_HUB){
IlIlI=-EPIPE;break;}

IIlIIIlll(IllIl,wLength);}else
#endif
{if((wValue>>(0x16b8+2066-0x1ec2))!=USB_DT_HUB){IlIlI=-EPIPE;break;}IIIIIIIlI(
IllIl,wLength);}break;
#if KERNEL_GT_EQ((0x6fb+5660-0x1d15),(0x1bc+5484-0x1722),(0xc30+409-0xda2)) || \
RHEL_RELEASE_GT_EQ((0x5f4+335-0x73d),(0x17a1+1470-0x1d5c)) 
case DeviceRequest|USB_REQ_GET_DESCRIPTOR:if(lllIl->speed!=HCD_USB3){IlIlI=-
EPIPE;break;}if((wValue>>(0xddd+3481-0x1b6e))!=USB_DT_BOS){IlIlI=-EPIPE;break;}
IlIlI=llIllIIlI(IllIl,wLength);break;case GetPortErrorCount:
if(lllIl->speed!=HCD_USB3){IlIlI=-EPIPE;break;}
*(__le16*)IllIl=cpu_to_le16((0xdaf+2691-0x1832));break;case SetHubDepth:
if(lllIl->speed!=HCD_USB3){IlIlI=-EPIPE;break;}
break;
#endif
case GetHubStatus:lIlll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x68\x75\x62\x5f\x63\x6f\x6e\x74\x72\x6f\x6c\x3a\x20\x47\x65\x74\x48\x75\x62\x53\x74\x61\x74\x75\x73" "\n"
);*(__le32*)IllIl=cpu_to_le32((0x7d5+1068-0xc01));break;case SetHubFeature:lIlll
(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x68\x75\x62\x5f\x63\x6f\x6e\x74\x72\x6f\x6c\x3a\x20\x53\x65\x74\x48\x75\x62\x46\x65\x61\x74\x75\x72\x65" "\n"
);
IlIlI=-EPIPE;break;case ClearHubFeature:lIlll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x68\x75\x62\x5f\x63\x6f\x6e\x74\x72\x6f\x6c\x3a\x20\x43\x6c\x65\x61\x72\x48\x75\x62\x46\x65\x61\x74\x75\x72\x65" "\n"
);
break;case GetPortStatus:lIlll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x68\x75\x62\x5f\x63\x6f\x6e\x74\x72\x6f\x6c\x3a\x20\x47\x65\x74\x50\x6f\x72\x74\x53\x74\x61\x74\x75\x73" "\n"
);lIIlI=(wIndex&(0x16df+3316-0x22d4))-(0xeec+2788-0x19cf);lIlll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x68\x75\x62\x5f\x63\x6f\x6e\x74\x72\x6f\x6c\x3a\x20\x70\x6f\x72\x74\x3d\x25\x64" "\n"
,lIIlI);if(lIIlI<(0x1022+121-0x109b)||lIIlI>=IllIIIl){lIIlI=-
(0x21c5+1133-0x2631);IlIlI=-EPIPE;break;}

if(Illll->IlllIII[lIIlI]&&time_after_eq(jiffies,Illll->IlllIII[lIIlI])){if(Illll
->lllllIIl[lIIlI]==lllIllI){Illll->IlIIlII[lIIlI]->IllIlIl=(0x543+2066-0xd55);}
#if KERNEL_GT_EQ((0x1cbc+96-0x1d1a),(0x1d62+892-0x20d8),(0x32f+3912-0x1250)) || \
RHEL_RELEASE_GT_EQ((0x5a4+1036-0x9aa),(0x1076+1691-0x170e)) 
if(lllIl->speed==HCD_USB3){IlIllll(Illll,lIIlI,lIlIlIIl,(0xf44+819-0x1277));}
else
#endif
{IlllIIl(Illll,lIIlI,lIlIlIIl,(0x101b+2062-0x1829));}}((__le16*)IllIl)[
(0x1836+2628-0x227a)]=cpu_to_le16(Illll->lIIIIIl[lIIlI]);((__le16*)IllIl)[
(0x2294+973-0x2660)]=cpu_to_le16(Illll->lIIlIII[lIIlI]);break;case 
SetPortFeature:lIIlI=(wIndex&(0x6ad+3313-0x129f))-(0xfb6+531-0x11c8);if(lIIlI<
(0xe7f+1294-0x138d)||lIIlI>=IllIIIl){lIlll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x68\x75\x62\x5f\x63\x6f\x6e\x74\x72\x6f\x6c\x3a\x20\x53\x65\x74\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x20\x69\x6e\x76\x61\x6c\x69\x64\x20\x70\x6f\x72\x74\x20\x6e\x75\x6d\x62\x65\x72\x20\x28\x25\x64\x29" "\n"
,lIIlI);lIIlI=-(0x1240+890-0x15b9);IlIlI=-EPIPE;break;}
#if KERNEL_GT_EQ((0x63c+745-0x923),(0xd5d+289-0xe78),(0xff8+240-0x10c1)) || \
RHEL_RELEASE_GT_EQ((0x1d0a+393-0x1e8d),(0x100a+164-0x10ab)) 
if(lllIl->speed==HCD_USB3){IlIlI=IlIIIlIlI(Illll,lIIlI,wValue,wIndex>>
(0xcda+4902-0x1ff8));}else
#endif
{IlIlI=IllIllllI(Illll,lIIlI,wValue,wIndex>>(0x8b3+1157-0xd30));}break;case 
ClearPortFeature:lIIlI=(wIndex&(0x381+8384-0x2342))-(0x1854+1069-0x1c80);if(
lIIlI<(0x1d96+2077-0x25b3)||lIIlI>=IllIIIl){lIlll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x68\x75\x62\x5f\x63\x6f\x6e\x74\x72\x6f\x6c\x3a\x20\x43\x6c\x65\x61\x72\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x20\x69\x6e\x76\x61\x6c\x69\x64\x20\x70\x6f\x72\x74\x20\x6e\x75\x6d\x62\x65\x72\x20\x28\x25\x64\x29" "\n"
,lIIlI);lIIlI=-(0x76b+6540-0x20f6);IlIlI=-EPIPE;break;}
#if KERNEL_GT_EQ((0x80b+363-0x974),(0xb18+3717-0x1997),(0x1b2c+358-0x1c6b)) || \
RHEL_RELEASE_GT_EQ((0x213+8275-0x2260),(0x2208+450-0x23c7)) 
if(lllIl->speed==HCD_USB3){IlIlI=lllIIIlIl(Illll,lIIlI,wValue);}else
#endif
{IlIlI=IIlIlIlII(Illll,lIIlI,wValue);}break;default:lIlll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x68\x75\x62\x5f\x63\x6f\x6e\x74\x72\x6f\x6c\x3a\x20\x52\x65\x71\x3d\x30\x78\x25\x30\x34\x58\x20\x56\x61\x6c\x75\x65\x3d\x30\x78\x25\x30\x34\x58\x20\x49\x6e\x64\x65\x78\x3d\x30\x78\x25\x30\x34\x58\x69\x20\x4c\x65\x6e\x67\x74\x68\x3d\x25\x64" "\n"
,IIIIIIlII,wValue,wIndex,wLength);
IlIlI=-EPIPE;break;}
IlIlllIll=(lIIlI!=-(0x1e1d+377-0x1f95))&&((Illll->lIIlIII[lIIlI]&IIIllIlll)!=
(0x280+4456-0x13e8));spin_unlock_irqrestore(&Illll->lock,flags);if(IlIlllIll){
usb_hcd_poll_rh_status(lllIl);}lIlll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x68\x75\x62\x5f\x63\x6f\x6e\x74\x72\x6f\x6c\x2d\x2d\x20\x72\x65\x73\x75\x6c\x74\x20\x3d\x20\x25\x64" "\n"
,IlIlI);return IlIlI;}static int IllIllllI(struct lIIIII*Illll,int lIIlI,int 
IIIllll,int lIIIIII){int IlIlI=(0x13+6430-0x1931);switch(IIIllll){case 
USB_PORT_FEAT_ENABLE:lIlll(
"\x53\x65\x74\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x28\x25\x64\x2c\x55\x53\x42\x5f\x50\x4f\x52\x54\x5f\x46\x45\x41\x54\x5f\x45\x4e\x41\x42\x4c\x45\x29" "\n"
,lIIlI);


IlIlI=-EPIPE;break;case USB_PORT_FEAT_SUSPEND:lIlll(
"\x53\x65\x74\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x28\x25\x64\x2c\x55\x53\x42\x5f\x50\x4f\x52\x54\x5f\x46\x45\x41\x54\x5f\x53\x55\x53\x50\x45\x4e\x44\x29" "\n"
,lIIlI);




IlllIIl(Illll,lIIlI,llllIlIIl,(0x3d7+5386-0x18e1));break;case 
USB_PORT_FEAT_RESET:lIlll(
"\x53\x65\x74\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x28\x25\x64\x2c\x55\x53\x42\x5f\x50\x4f\x52\x54\x5f\x46\x45\x41\x54\x5f\x52\x45\x53\x45\x54\x29" "\n"
,lIIlI);





IlllIIl(Illll,lIIlI,llllIlII,(0x12ad+1847-0x19e4));if(Illll->IlIIlII[lIIlI]&&
Illll->IlIIlII[lIIlI]->IllIlIl>(0xfc+9150-0x24ba)){llIIIlIIl(Illll->IlIIlII[
lIIlI]);}break;case USB_PORT_FEAT_POWER:lIlll(
"\x53\x65\x74\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x28\x25\x64\x2c\x55\x53\x42\x5f\x50\x4f\x52\x54\x5f\x46\x45\x41\x54\x5f\x50\x4f\x57\x45\x52\x29" "\n"
,lIIlI);


IlllIIl(Illll,lIIlI,lIIIIlll,(0xa99+5124-0x1e9d));break;case USB_PORT_FEAT_TEST:
lIlll(
"\x53\x65\x74\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x28\x25\x64\x2c\x55\x53\x42\x5f\x50\x4f\x52\x54\x5f\x46\x45\x41\x54\x5f\x54\x45\x53\x54\x29" "\n"
,lIIlI);
break;case USB_PORT_FEAT_INDICATOR:lIlll(
"\x53\x65\x74\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x28\x25\x64\x2c\x55\x53\x42\x5f\x50\x4f\x52\x54\x5f\x46\x45\x41\x54\x5f\x49\x4e\x44\x49\x43\x41\x54\x4f\x52\x29" "\n"
,lIIlI);
break;case USB_PORT_FEAT_CONNECTION:case USB_PORT_FEAT_OVER_CURRENT:case 
USB_PORT_FEAT_C_CONNECTION:case USB_PORT_FEAT_C_OVER_CURRENT:case 
USB_PORT_FEAT_C_RESET:case USB_PORT_FEAT_LOWSPEED:case USB_PORT_FEAT_C_ENABLE:
case USB_PORT_FEAT_C_SUSPEND:


break;default:
lIlll(
"\x53\x65\x74\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x28\x25\x64\x2c\x20\x25\x64\x29" "\n"
,lIIlI,IIIllll);IlIlI=-EPIPE;break;}return IlIlI;}static int IIlIlIlII(struct 
lIIIII*Illll,int lIIlI,int IIIllll){int IlIlI=(0x7e2+5320-0x1caa);switch(IIIllll
){case USB_PORT_FEAT_ENABLE:lIlll(
"\x43\x6c\x65\x61\x72\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x28\x25\x64\x2c\x55\x53\x42\x5f\x50\x4f\x52\x54\x5f\x46\x45\x41\x54\x5f\x45\x4e\x41\x42\x4c\x45\x29" "\n"
,lIIlI);



IlllIIl(Illll,lIIlI,IIlIIlll,(0x3dd+8498-0x250f));break;case 
USB_PORT_FEAT_SUSPEND:lIlll(
"\x43\x6c\x65\x61\x72\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x28\x25\x64\x2c\x55\x53\x42\x5f\x50\x4f\x52\x54\x5f\x46\x45\x41\x54\x5f\x53\x55\x53\x50\x45\x4e\x44\x29" "\n"
,lIIlI);



IlllIIl(Illll,lIIlI,IIlIlIIlI,(0xb94+418-0xd36));break;case USB_PORT_FEAT_POWER:
lIlll(
"\x43\x6c\x65\x61\x72\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x28\x25\x64\x2c\x55\x53\x42\x5f\x50\x4f\x52\x54\x5f\x46\x45\x41\x54\x5f\x50\x4f\x57\x45\x52\x29" "\n"
,lIIlI);

IlllIIl(Illll,lIIlI,IIIIlIll,(0x300+3910-0x1246));break;case 
USB_PORT_FEAT_C_CONNECTION:lIlll(
"\x43\x6c\x65\x61\x72\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x28\x25\x64\x2c\x55\x53\x42\x5f\x50\x4f\x52\x54\x5f\x46\x45\x41\x54\x5f\x43\x5f\x43\x4f\x4e\x4e\x45\x43\x54\x49\x4f\x4e\x29" "\n"
,lIIlI);IlllIIl(Illll,lIIlI,lllllIII,(0x735+1938-0xec7));break;case 
USB_PORT_FEAT_C_ENABLE:lIlll(
"\x43\x6c\x65\x61\x72\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x28\x25\x64\x2c\x55\x53\x42\x5f\x50\x4f\x52\x54\x5f\x46\x45\x41\x54\x5f\x43\x5f\x45\x4e\x41\x42\x4c\x45\x29" "\n"
,lIIlI);IlllIIl(Illll,lIIlI,lIlllIlIl,(0xb38+2253-0x1405));break;case 
USB_PORT_FEAT_C_SUSPEND:lIlll(
"\x43\x6c\x65\x61\x72\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x28\x25\x64\x2c\x55\x53\x42\x5f\x50\x4f\x52\x54\x5f\x46\x45\x41\x54\x5f\x43\x5f\x53\x55\x53\x50\x45\x4e\x44\x29" "\n"
,lIIlI);IlllIIl(Illll,lIIlI,IIllllllI,(0x115f+2533-0x1b44));break;case 
USB_PORT_FEAT_C_OVER_CURRENT:lIlll(
"\x43\x6c\x65\x61\x72\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x28\x25\x64\x2c\x55\x53\x42\x5f\x50\x4f\x52\x54\x5f\x46\x45\x41\x54\x5f\x43\x5f\x4f\x56\x45\x52\x5f\x43\x55\x52\x52\x45\x4e\x54\x29" "\n"
,lIIlI);
break;case USB_PORT_FEAT_C_RESET:lIlll(
"\x43\x6c\x65\x61\x72\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x28\x25\x64\x2c\x55\x53\x42\x5f\x50\x4f\x52\x54\x5f\x46\x45\x41\x54\x5f\x43\x5f\x52\x45\x53\x45\x54\x29" "\n"
,lIIlI);IlllIIl(Illll,lIIlI,lllIlIll,(0x11ad+2128-0x19fd));break;case 
USB_PORT_FEAT_INDICATOR:lIlll(
"\x43\x6c\x65\x61\x72\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x28\x25\x64\x2c\x55\x53\x42\x5f\x50\x4f\x52\x54\x5f\x46\x45\x41\x54\x5f\x49\x4e\x44\x49\x43\x41\x54\x4f\x52\x29" "\n"
,lIIlI);
break;case USB_PORT_FEAT_CONNECTION:case USB_PORT_FEAT_OVER_CURRENT:case 
USB_PORT_FEAT_RESET:case USB_PORT_FEAT_TEST:


break;default:lIlll(
"\x43\x6c\x65\x61\x72\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x28\x25\x64\x2c\x20\x25\x64\x29" "\n"
,lIIlI,IIIllll);IlIlI=-EPIPE;break;}return IlIlI;}
#if KERNEL_GT_EQ((0x235c+70-0x23a0),(0x1f72+1858-0x26ae),(0xcba+4019-0x1c46)) ||\
 RHEL_RELEASE_GT_EQ((0x13af+1142-0x181f),(0x244+4825-0x151a)) 
static int IlIIIlIlI(struct lIIIII*Illll,int lIIlI,int IIIllll,int lIIIIII){int 
IlIlI=(0x152d+810-0x1857);switch(IIIllll){case USB_PORT_FEAT_BH_PORT_RESET:lIlll
(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x68\x75\x62\x5f\x63\x6f\x6e\x74\x72\x6f\x6c\x3a\x20\x53\x65\x74\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x28\x25\x64\x2c\x55\x53\x42\x5f\x50\x4f\x52\x54\x5f\x46\x45\x41\x54\x5f\x42\x48\x5f\x50\x4f\x52\x54\x5f\x52\x45\x53\x45\x54\x29" "\n"
,lIIlI);







case USB_PORT_FEAT_RESET:lIlll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x68\x75\x62\x5f\x63\x6f\x6e\x74\x72\x6f\x6c\x3a\x20\x53\x65\x74\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x28\x25\x64\x2c\x55\x53\x42\x5f\x50\x4f\x52\x54\x5f\x46\x45\x41\x54\x5f\x52\x45\x53\x45\x54\x29" "\n"
,lIIlI);





IlIllll(Illll,lIIlI,llllIlII,(0xfc+5090-0x14de));if(Illll->IlIIlII[lIIlI]&&Illll
->IlIIlII[lIIlI]->IllIlIl>(0x13d2+1171-0x1865)){llIIIlIIl(Illll->IlIIlII[lIIlI])
;}break;case USB_PORT_FEAT_LINK_STATE:lIlll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x68\x75\x62\x5f\x63\x6f\x6e\x74\x72\x6f\x6c\x3a\x20\x53\x65\x74\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x28\x25\x64\x2c\x55\x53\x42\x5f\x50\x4f\x52\x54\x5f\x46\x45\x41\x54\x5f\x4c\x49\x4e\x4b\x5f\x53\x54\x41\x54\x45\x2c\x20\x30\x78\x25\x30\x34\x78\x29" "\n"
,lIIlI,lIIIIII);


IlIllll(Illll,lIIlI,IlIIIIll,lIIIIII);break;case USB_PORT_FEAT_POWER:lIlll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x68\x75\x62\x5f\x63\x6f\x6e\x74\x72\x6f\x6c\x3a\x20\x53\x65\x74\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x28\x25\x64\x2c\x55\x53\x42\x5f\x50\x4f\x52\x54\x5f\x46\x45\x41\x54\x5f\x50\x4f\x57\x45\x52\x29" "\n"
,lIIlI);

IlIllll(Illll,lIIlI,lIIIIlll,(0x16e0+2085-0x1f05));break;case 
USB_PORT_FEAT_U1_TIMEOUT:case USB_PORT_FEAT_U2_TIMEOUT:lIlll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x68\x75\x62\x5f\x63\x6f\x6e\x74\x72\x6f\x6c\x3a\x20\x53\x65\x74\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x28\x25\x64\x2c\x55\x53\x42\x5f\x50\x4f\x52\x54\x5f\x46\x45\x41\x54\x5f\x55\x31\x2f\x55\x32\x5f\x54\x49\x4d\x45\x4f\x55\x54\x29" "\n"
,lIIlI);


break;case USB_PORT_FEAT_REMOTE_WAKE_MASK:lIlll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x68\x75\x62\x5f\x63\x6f\x6e\x74\x72\x6f\x6c\x3a\x20\x53\x65\x74\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x28\x25\x64\x2c\x55\x53\x42\x5f\x50\x4f\x52\x54\x5f\x46\x45\x41\x54\x5f\x52\x45\x4d\x4f\x54\x45\x5f\x57\x41\x4b\x45\x5f\x4d\x41\x53\x4b\x29" "\n"
,lIIlI);

break;case USB_PORT_FEAT_FORCE_LINKPM_ACCEPT:lIlll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x68\x75\x62\x5f\x63\x6f\x6e\x74\x72\x6f\x6c\x3a\x20\x53\x65\x74\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x28\x25\x64\x2c\x55\x53\x42\x5f\x50\x4f\x52\x54\x5f\x46\x45\x41\x54\x5f\x46\x4f\x52\x43\x45\x5f\x4c\x49\x4e\x4b\x50\x4d\x5f\x41\x43\x43\x45\x50\x54\x29" "\n"
,lIIlI);
break;case USB_PORT_FEAT_CONNECTION:case USB_PORT_FEAT_OVER_CURRENT:case 
USB_PORT_FEAT_C_CONNECTION:case USB_PORT_FEAT_C_OVER_CURRENT:case 
USB_PORT_FEAT_C_RESET:case USB_PORT_FEAT_C_PORT_LINK_STATE:case 
USB_PORT_FEAT_C_PORT_CONFIG_ERROR:case USB_PORT_FEAT_C_BH_PORT_RESET:


break;default:
lIlll(
"\x53\x65\x74\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x28\x25\x64\x2c\x20\x25\x64\x29" "\n"
,lIIlI,IIIllll);IlIlI=-EPIPE;break;}return IlIlI;}static int lllIIIlIl(struct 
lIIIII*Illll,int lIIlI,int IIIllll){int IlIlI=(0x1ea+1722-0x8a4);switch(IIIllll)
{case USB_PORT_FEAT_POWER:lIlll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x68\x75\x62\x5f\x63\x6f\x6e\x74\x72\x6f\x6c\x3a\x20\x43\x6c\x65\x61\x72\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x28\x25\x64\x2c\x55\x53\x42\x5f\x50\x4f\x52\x54\x5f\x46\x45\x41\x54\x5f\x50\x4f\x57\x45\x52\x29" "\n"
,lIIlI);

IlIllll(Illll,lIIlI,IIIIlIll,(0x1626+3281-0x22f7));break;case 
USB_PORT_FEAT_C_CONNECTION:lIlll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x68\x75\x62\x5f\x63\x6f\x6e\x74\x72\x6f\x6c\x3a\x20\x43\x6c\x65\x61\x72\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x28\x25\x64\x2c\x55\x53\x42\x5f\x50\x4f\x52\x54\x5f\x46\x45\x41\x54\x5f\x43\x5f\x43\x4f\x4e\x4e\x45\x43\x54\x49\x4f\x4e\x29" "\n"
,lIIlI);IlIllll(Illll,lIIlI,lllllIII,(0x423+7584-0x21c3));break;case 
USB_PORT_FEAT_C_OVER_CURRENT:lIlll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x68\x75\x62\x5f\x63\x6f\x6e\x74\x72\x6f\x6c\x3a\x20\x43\x6c\x65\x61\x72\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x28\x25\x64\x2c\x55\x53\x42\x5f\x50\x4f\x52\x54\x5f\x46\x45\x41\x54\x5f\x43\x5f\x4f\x56\x45\x52\x5f\x43\x55\x52\x52\x45\x4e\x54\x29" "\n"
,lIIlI);
break;case USB_PORT_FEAT_C_RESET:lIlll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x68\x75\x62\x5f\x63\x6f\x6e\x74\x72\x6f\x6c\x3a\x20\x43\x6c\x65\x61\x72\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x28\x25\x64\x2c\x55\x53\x42\x5f\x50\x4f\x52\x54\x5f\x46\x45\x41\x54\x5f\x43\x5f\x52\x45\x53\x45\x54\x29" "\n"
,lIIlI);IlIllll(Illll,lIIlI,lllIlIll,(0x7d8+7878-0x269e));break;case 
USB_PORT_FEAT_C_PORT_LINK_STATE:lIlll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x68\x75\x62\x5f\x63\x6f\x6e\x74\x72\x6f\x6c\x3a\x20\x43\x6c\x65\x61\x72\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x28\x25\x64\x2c\x55\x53\x42\x5f\x50\x4f\x52\x54\x5f\x46\x45\x41\x54\x5f\x43\x5f\x50\x4f\x52\x54\x5f\x4c\x49\x4e\x4b\x5f\x53\x54\x41\x54\x45\x29" "\n"
,lIIlI);IlIllll(Illll,lIIlI,lIIlIlllI,(0x16c0+3726-0x254e));break;case 
USB_PORT_FEAT_C_PORT_CONFIG_ERROR:lIlll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x68\x75\x62\x5f\x63\x6f\x6e\x74\x72\x6f\x6c\x3a\x20\x43\x6c\x65\x61\x72\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x28\x25\x64\x2c\x55\x53\x42\x5f\x50\x4f\x52\x54\x5f\x46\x45\x41\x54\x5f\x43\x5f\x50\x4f\x52\x54\x5f\x43\x4f\x4e\x46\x49\x47\x5f\x45\x52\x52\x4f\x52\x29" "\n"
,lIIlI);
break;case USB_PORT_FEAT_C_BH_PORT_RESET:lIlll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x68\x75\x62\x5f\x63\x6f\x6e\x74\x72\x6f\x6c\x3a\x20\x43\x6c\x65\x61\x72\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x28\x25\x64\x2c\x55\x53\x42\x5f\x50\x4f\x52\x54\x5f\x46\x45\x41\x54\x5f\x43\x5f\x42\x48\x5f\x50\x4f\x52\x54\x5f\x52\x45\x53\x45\x54\x29" "\n"
,lIIlI);IlIllll(Illll,lIIlI,IIIIIIlIl,(0xd72+3411-0x1ac5));break;case 
USB_PORT_FEAT_FORCE_LINKPM_ACCEPT:lIlll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x68\x75\x62\x5f\x63\x6f\x6e\x74\x72\x6f\x6c\x3a\x20\x43\x6c\x65\x61\x72\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x28\x25\x64\x2c\x55\x53\x42\x5f\x50\x4f\x52\x54\x5f\x46\x45\x41\x54\x5f\x46\x4f\x52\x43\x45\x5f\x4c\x49\x4e\x4b\x50\x4d\x5f\x41\x43\x43\x45\x50\x54\x29" "\n"
,lIIlI);
break;case USB_PORT_FEAT_CONNECTION:case USB_PORT_FEAT_OVER_CURRENT:case 
USB_PORT_FEAT_RESET:case USB_PORT_FEAT_LINK_STATE:case USB_PORT_FEAT_U1_TIMEOUT:
case USB_PORT_FEAT_U2_TIMEOUT:case USB_PORT_FEAT_REMOTE_WAKE_MASK:case 
USB_PORT_FEAT_BH_PORT_RESET:


break;default:lIlll(
"\x43\x6c\x65\x61\x72\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x28\x25\x64\x2c\x20\x25\x64\x29" "\n"
,lIIlI,IIIllll);IlIlI=-EPIPE;break;}return IlIlI;}
#endif 
static int IIIIllIlI(struct usb_hcd*lllIl,char*IllIl){int IlIlI=
(0xe9+5849-0x17c2);struct lIIIII*Illll=lIIllII(lllIl);u32*lllllIllI=(u32*)IllIl;
unsigned long flags;lIlll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x68\x75\x62\x5f\x73\x74\x61\x74\x75\x73\x5f\x64\x61\x74\x61\x5b\x25\x73\x5d\x2b\x2b" "\n"
,llllIlI(lllIl));spin_lock_irqsave(&Illll->lock,flags);do
{int i;int IIlIlIlll=(0xc82+3379-0x19b5);if(!test_bit(HCD_FLAG_HW_ACCESSIBLE,&
lllIl->flags)){break;}for(i=(0x9af+2667-0x141a);i<IllIIIl;i++){if(Illll->lIIlIII
[i]&IIIllIlll){lIlll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x68\x75\x62\x5f\x73\x74\x61\x74\x75\x73\x5f\x64\x61\x74\x61\x3a\x20\x70\x6f\x72\x74\x20\x25\x64\x20\x68\x61\x73\x20\x63\x68\x61\x6e\x67\x65\x64\x2e\x20\x77\x50\x6f\x72\x74\x53\x74\x61\x74\x75\x73\x3d\x30\x78\x25\x30\x34\x58\x20\x77\x50\x6f\x72\x74\x43\x68\x61\x6e\x67\x65\x3d\x30\x78\x25\x30\x34\x58" "\n"
,i,Illll->lIIIIIl[i],Illll->lIIlIII[i]);if(IIlIlIlll==(0xd8+4889-0x13f1)){*
lllllIllI=(0x17d4+3144-0x241c);}IIlIlIlll=(0x15ed+2505-0x1fb5);
*lllllIllI|=(0x11e9+4043-0x21b3)<<(i+(0x11e6+423-0x138c));}}if(IIlIlIlll){IlIlI=
lIIIIIlI;if(Illll->IllllIlII){usb_hcd_resume_root_hub(lllIl);}}}while(
(0x1457+228-0x153b));spin_unlock_irqrestore(&Illll->lock,flags);lIlll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x68\x75\x62\x5f\x73\x74\x61\x74\x75\x73\x5f\x64\x61\x74\x61\x2d\x2d\x20\x72\x65\x73\x75\x6c\x74\x20\x3d\x20\x25\x64\x20\x6d\x61\x73\x6b\x20\x3d\x20\x30\x78\x25\x30\x38\x58" "\n"
,IlIlI,(u32)*lllllIllI);return IlIlI;}static int lIllIIlII(struct usb_hcd*lllIl)
{
struct lIIIII*Illll=lIIllII(lllIl);Illll->IllllIlII=(0xaea+6407-0x23f0);lIlll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x62\x75\x73\x5f\x73\x75\x73\x70\x65\x6e\x64\x5b\x25\x73\x5d" "\n"
,llllIlI(lllIl));return(0xecd+1215-0x138c);}static int IIlIIlIII(struct usb_hcd*
lllIl){
struct lIIIII*Illll=lIIllII(lllIl);Illll->IllllIlII=(0x1431+3812-0x2315);lIlll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x62\x75\x73\x5f\x72\x65\x73\x75\x6d\x65\x5b\x25\x73\x5d" "\n"
,llllIlI(lllIl));return(0x968+6768-0x23d8);}
#if KERNEL_GT_EQ((0x1e94+1903-0x2601),(0x518+5957-0x1c57),(0x1354+2912-0x1e8d)) \
|| RHEL_RELEASE_GT_EQ((0x1caa+1766-0x238a),(0xcaa+1878-0x13fd)) 
static int llllIlllI(struct usb_hcd*lllIl,struct usb_device*IlIIl,struct 
usb_host_endpoint**lllllIIll,unsigned int lllIIIllI,unsigned int llIllllll,gfp_t
 llllI){lIlll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x61\x6c\x6c\x6f\x63\x5f\x73\x74\x72\x65\x61\x6d\x73\x5b\x25\x73\x5d" "\n"
,llllIlI(lllIl));
return(0xa43+1042-0xe55);}static int lllIlIlll(struct usb_hcd*lllIl,struct 
usb_device*IlIIl,struct usb_host_endpoint**lllllIIll,unsigned int lllIIIllI,
gfp_t llllI){lIlll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x66\x72\x65\x65\x5f\x73\x74\x72\x65\x61\x6d\x73\x5b\x25\x73\x5d" "\n"
,llllIlI(lllIl));
return(0x102a+2396-0x1986);}
#endif 


int IlIIlIlII(void){int IlIlI=(0x144c+2795-0x1f37);int lIIIllIll=
(0x419+2931-0xf8c);int lllIllIIl=(0x148d+4541-0x264a);lIlll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x69\x6e\x69\x74\x5f\x6d\x6f\x64\x75\x6c\x65\x3a\x20\x2b\x2b" "\n"
);do
{struct sysinfo lIlIIll;INIT_LIST_HEAD(&IIllIII);spin_lock_init(&IIlIII);
si_meminfo(&lIlIIll);lIlll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x69\x6e\x69\x74\x5f\x6d\x6f\x64\x75\x6c\x65\x3a\x20\x74\x6f\x74\x61\x6c\x72\x61\x6d\x3d\x25\x6c\x75\x20\x62\x79\x74\x65\x73\x20\x74\x6f\x74\x61\x6c\x68\x69\x67\x68\x3d\x25\x6c\x75\x20\x62\x79\x74\x65\x73" "\n"
,lIlIIll.totalram*lIlIIll.mem_unit,lIlIIll.totalhigh*lIlIIll.mem_unit);
#if defined(CONFIG_X86_32) && !defined(_USBD_VHCI_NO_DMA_)
























lllIIlll=(lIlIIll.totalhigh>(0x7ac+4033-0x176d));
#endif
IlIlI=platform_driver_register(&lIIIIlIlI);if(IlIlI!=(0x868+1830-0xf8e)){lIlll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x69\x6e\x69\x74\x5f\x6d\x6f\x64\x75\x6c\x65\x3a\x20\x70\x6c\x61\x74\x66\x6f\x72\x6d\x5f\x64\x72\x69\x76\x65\x72\x5f\x72\x65\x67\x69\x73\x74\x65\x72\x20\x66\x61\x69\x6c\x65\x64\x2e\x20\x45\x72\x72\x6f\x72\x20\x6e\x75\x6d\x62\x65\x72\x20\x25\x64" "\n"
,IlIlI);break;}lIIIllIll=(0x13f8+4023-0x23ae);IlIlI=platform_device_register(&
llIlllII);if(IlIlI!=(0xd75+3763-0x1c28)){lIlll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x69\x6e\x69\x74\x5f\x6d\x6f\x64\x75\x6c\x65\x3a\x20\x70\x6c\x61\x74\x66\x6f\x72\x6d\x5f\x64\x65\x76\x69\x63\x65\x5f\x72\x65\x67\x69\x73\x74\x65\x72\x20\x66\x61\x69\x6c\x65\x64\x2e\x20\x45\x72\x72\x6f\x72\x20\x6e\x75\x6d\x62\x65\x72\x20\x25\x64" "\n"
,IlIlI);break;}lllIllIIl=(0x10d5+2205-0x1971);IlllIIll=IIIlIllIl();if(IlllIIll==
NULL){IlIlI=-ENOMEM;lIlll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x69\x6e\x69\x74\x5f\x6d\x6f\x64\x75\x6c\x65\x3a\x20\x61\x6c\x6c\x6f\x63\x20\x6d\x69\x6e\x6f\x72\x20\x66\x61\x69\x6c\x65\x64\x2e\x20\x45\x72\x72\x6f\x72\x20\x6e\x75\x6d\x62\x65\x72\x20\x25\x64" "\n"
,IlIlI);break;}}while((0x38d+9075-0x2700));if(IlIlI!=(0x10ea+5521-0x267b)){if(
IlllIIll){IIlIIIIlI(IlllIIll);IlllIIll=NULL;}if(lllIllIIl){
platform_device_unregister(&llIlllII);}if(lIIIllIll){platform_driver_unregister(
&lIIIIlIlI);}}lIlll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x69\x6e\x69\x74\x5f\x6d\x6f\x64\x75\x6c\x65\x3a\x20\x2d\x2d\x20\x72\x65\x73\x75\x6c\x74\x20\x3d\x20\x25\x64" "\n"
,IlIlI);return IlIlI;}void IllIIIlI(void){lIlll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x64\x65\x69\x6e\x69\x74\x5f\x6d\x6f\x64\x75\x6c\x65\x3a\x20\x2b\x2b" "\n"
);if(IlllIIll){IIlIIIIlI(IlllIIll);IlllIIll=NULL;}spin_lock(&IIlIII);while(!
list_empty(&IIllIII)){struct lIlIIl*lIllI=(struct lIlIIl*)IIllIII.next;IlllllII(
lIllI);spin_unlock(&IIlIII);IlIIllII(lIllI);IlIllIIl(lIllI);spin_lock(&IIlIII);}
spin_unlock(&IIlIII);platform_device_unregister(&llIlllII);
platform_driver_unregister(&lIIIIlIlI);lIlll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x64\x65\x69\x6e\x69\x74\x5f\x6d\x6f\x64\x75\x6c\x65\x3a\x20\x2d\x2d" "\n"
);}struct lIlIIl*llIIIIlIl(u16 vid,u16 IlIlIII,u16 lIlIlll,int speed){struct 
lIlIIl*lIllI=NULL;do
{struct usb_hcd*parent;
#if KERNEL_GT_EQ((0x1e93+1793-0x2592),(0x1009+961-0x13c4),(0x811+5373-0x1ce7)) \
|| RHEL_RELEASE_GT_EQ((0x15a+2892-0xca0),(0xee1+936-0x1286)) 
parent=(speed==USB_SPEED_SUPER)?lllIlIl:llIIIII;
#else
parent=llIIIII;
#endif
if(parent==NULL){lIlll(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x63\x72\x65\x61\x74\x65\x3a\x20\x76\x68\x63\x64\x20\x6e\x6f\x74\x20\x69\x6e\x69\x74\x69\x61\x6c\x69\x7a\x65\x64\x2e" "\n"
);break;}lIllI=lIllllI(sizeof(*lIllI),GFP_KERNEL);if(!lIllI){lIlll(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x63\x72\x65\x61\x74\x65\x3a\x20\x6b\x6d\x61\x6c\x6c\x6f\x63\x20\x66\x61\x69\x6c\x65\x64\x2e" "\n"
);break;}if(llllIlIII(lIllI)<(0xfb6+2433-0x1937)){lIlll(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x63\x72\x65\x61\x74\x65\x3a\x20\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x61\x6c\x6c\x6f\x63\x5f\x6d\x69\x6e\x6f\x72\x20\x66\x61\x69\x6c\x65\x64\x2e" "\n"
);break;}
#ifdef _USBD_DEBUG_MEMORY_
atomic_inc(&Illllllll);
#endif
init_waitqueue_head(&lIllI->lIIllI);spin_lock_init(&lIllI->IIllII);
INIT_LIST_HEAD(&lIllI->IllIIlI);INIT_LIST_HEAD(&lIllI->llIllIl);INIT_LIST_HEAD(&
lIllI->lllIlllI);kref_init(&lIllI->IllIll);lIllI->vid=vid;lIllI->IlIlIII=IlIlIII
;lIllI->lIlIlll=lIlIlll;lIllI->speed=speed;lIllI->parent=parent;lIllI->lIIlI=-
(0x1249+3255-0x1eff);spin_lock(&IIlIII);list_add(&lIllI->IIIIll,&IIllIII);
spin_unlock(&IIlIII);return lIllI;}while((0x618+6726-0x205e));if(lIllI){
lIllllIIl(lIllI);lIlIll(lIllI);}return NULL;}void IlIIllII(struct lIlIIl*lIllI){
struct list_head*lIllIIIl;lIlll(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x72\x65\x6d\x6f\x76\x65\x2b\x2b" "\n"
);
spin_lock(&IIlIII);list_for_each(lIllIIIl,&IIllIII){if(lIllIIIl==&lIllI->IIIIll)
{list_del_init(&lIllI->IIIIll);break;}}spin_unlock(&IIlIII);


if(lIllIIIl==&lIllI->IIIIll){
#ifdef _USBD_DEBUG_MEMORY_
atomic_inc(&IlIIlllI);
#endif


IlllIIIll(lIllI);IlIllIIl(lIllI);}lIlll(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x72\x65\x6d\x6f\x76\x65\x2d\x2d" "\n"
);}void lIlllllII(void){struct lIlIIl*lIllI;lIlll(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x72\x65\x6d\x6f\x76\x65\x5f\x61\x6c\x6c\x2b\x2b" "\n"
);spin_lock(&IIlIII);while(!list_empty(&IIllIII)){lIllI=list_entry(IIllIII.next,
struct lIlIIl,IIIIll);list_del_init(&lIllI->IIIIll);spin_unlock(&IIlIII);
#ifdef _USBD_DEBUG_MEMORY_
atomic_inc(&IlIIlllI);
#endif
IlllIIIll(lIllI);IlIllIIl(lIllI);spin_lock(&IIlIII);}spin_unlock(&IIlIII);lIlll(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x72\x65\x6d\x6f\x76\x65\x5f\x61\x6c\x6c\x2d\x2d" "\n"
);}int lllIIlllI(struct lIlIIl*lIllI){int IlIlI;unsigned long flags;int lIIlI;
struct lIIIII*Illll;struct lIIIII*llIlIIlI;lIlll(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x70\x6c\x75\x67\x3a\x20\x2b\x2b" "\n"
);IlIlI=lIllIllII(lIllI);if(IlIlI<(0x1009+2892-0x1b55)){lIlll(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x70\x6c\x75\x67\x3a\x20\x2d\x2d\x20\x72\x65\x73\x75\x6c\x74\x3d\x25\x64" "\n"
,IlIlI);return IlIlI;}Illll=lIIllII(lIllI->parent);llIlIIlI=Illll->llllllll?
lIIllII(Illll->llllllll):NULL;spin_lock_irqsave(&Illll->lock,flags);if(llIlIIlI)
{spin_lock(&llIlIIlI->lock);}IlIlI=-ENOENT;for(lIIlI=(0x2079+37-0x209e);lIIlI<
IllIIIl;lIIlI++){if((Illll->IlIIlII[lIIlI]==NULL)&&((llIlIIlI==NULL)||(llIlIIlI
->IlIIlII[lIIlI]==NULL))){lIlll(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x70\x6c\x75\x67\x3a\x20\x66\x6f\x75\x6e\x64\x20\x66\x72\x65\x65\x20\x70\x6f\x72\x74\x20\x25\x64" "\n"
,lIIlI);IlllllII(lIllI);lIllI->lIIlI=lIIlI;lIllI->IllIlIl=-(0x15b7+1939-0x1d49);
Illll->IlIIlII[lIIlI]=lIllI;
#if KERNEL_GT_EQ((0x2c+35-0x4d),(0x14aa+765-0x17a1),(0x8dc+2737-0x1366)) || \
RHEL_RELEASE_GT_EQ((0x453+7649-0x222e),(0xdac+5776-0x2439)) 
if(lIllI->parent->speed==HCD_USB3){IlIllll(Illll,lIIlI,lIIlIllI,
(0x25d6+141-0x2663));}else
#endif
{IlllIIl(Illll,lIIlI,lIIlIllI,(0x10aa+1227-0x1575));}IlIlI=(0x3d1+7741-0x220e);
break;}}if(llIlIIlI){spin_unlock(&llIlIIlI->lock);}spin_unlock_irqrestore(&Illll
->lock,flags);if(IlIlI<(0xf76+4620-0x2182)){
llllIIlI(lIllI);}else{
usb_hcd_poll_rh_status(lIllI->parent);}lIlll(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x70\x6c\x75\x67\x3a\x20\x2d\x2d\x20\x72\x65\x73\x75\x6c\x74\x3d\x25\x64" "\n"
,IlIlI);return IlIlI;}void IlllIIIll(struct lIlIIl*lIllI){unsigned long flags;
struct lIIIII*Illll=lIIllII(lIllI->parent);lIlll(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x75\x6e\x70\x6c\x75\x67\x3a\x20\x2b\x2b" "\n"
);
llllIIlI(lIllI);spin_lock_irqsave(&Illll->lock,flags);if(lIllI->lIIlI!=-
(0x10cc+1451-0x1676)){lIlll(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x75\x6e\x70\x6c\x75\x67\x3a\x20\x75\x6e\x70\x6c\x75\x67\x67\x69\x6e\x67\x20\x76\x69\x72\x74\x75\x61\x6c\x20\x64\x65\x76\x69\x63\x65\x20\x61\x74\x20\x70\x6f\x72\x74\x20\x25\x64" "\n"
,lIllI->lIIlI);

Illll->IlIIlII[lIllI->lIIlI]=NULL;
#if KERNEL_GT_EQ((0x963+844-0xcad),(0x163a+900-0x19b8),(0xdf5+6332-0x268a)) || \
RHEL_RELEASE_GT_EQ((0x173a+1717-0x1de9),(0x8bf+3441-0x162d)) 
if(lIllI->parent->speed==HCD_USB3){IlIllll(Illll,lIllI->lIIlI,IIIlllII,
(0x695+8047-0x2604));}else
#endif
{IlllIIl(Illll,lIllI->lIIlI,IIIlllII,(0x1152+2257-0x1a23));}lIllI->lIIlI=-
(0x756+3777-0x1616);spin_unlock_irqrestore(&Illll->lock,flags);
usb_hcd_poll_rh_status(lIllI->parent);lllllIIIl(lIllI,-ENODEV);IlIllIIl(lIllI);}
else{spin_unlock_irqrestore(&Illll->lock,flags);}lIlll(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x75\x6e\x70\x6c\x75\x67\x3a\x20\x2d\x2d" "\n"
);}struct lIlIIl*lIlIIIIll(int lIllllIlI){struct lIlIIl*lIllI;lIlll(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x66\x69\x6e\x64\x31\x3a\x20\x2b\x2b" "\n"
);spin_lock(&IIlIII);list_for_each_entry(lIllI,&IIllIII,IIIIll){if(IIIllIlI(
lIllI->lllll)==lIllllIlI){IlllllII(lIllI);spin_unlock(&IIlIII);lIlll(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x66\x69\x6e\x64\x31\x3a\x20\x2d\x2d\x20\x66\x6f\x75\x6e\x64\x21" "\n"
);return lIllI;}}spin_unlock(&IIlIII);lIlll(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x66\x69\x6e\x64\x31\x3a\x20\x2d\x2d\x20\x6e\x6f\x74\x20\x66\x6f\x75\x6e\x64" "\n"
);return NULL;}
struct lIlIIl*IlIIlIIll(struct usb_hcd*lllIl,int IllIlIl){struct lIIIII*Illll=
lIIllII(lllIl);struct lIlIIl*lIllI=NULL;int lIIlI;lIlll(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x66\x69\x6e\x64\x32\x28\x29\x3a\x20\x2b\x2b\x20\x61\x64\x64\x72\x65\x73\x73\x20\x3d\x20\x25\x64" "\n"
,IllIlIl);if(Illll==NULL){return NULL;}if(IllIlIl<(0x19f7+3124-0x262b)){return 
NULL;}for(lIIlI=(0x1e9f+1208-0x2357);lIIlI<IllIIIl;lIIlI++){if(Illll->IlIIlII[
lIIlI]&&Illll->IlIIlII[lIIlI]->IllIlIl==IllIlIl){lIllI=Illll->IlIIlII[lIIlI];
IlllllII(lIllI);break;}}lIlll(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x66\x69\x6e\x64\x32\x3a\x20\x2d\x2d\x20\x25\x73" "\n"
,lIllI?"\x66\x6f\x75\x6e\x64":"\x6e\x6f\x74\x20\x66\x6f\x75\x6e\x64");return 
lIllI;}
struct lIlIIl*IIIIIlIII(struct usb_hcd*lllIl,int lIIlI){struct lIIIII*Illll=
lIIllII(lllIl);struct lIlIIl*lIllI=NULL;lIlll(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x66\x69\x6e\x64\x33\x28\x29\x3a\x20\x2b\x2b\x20\x70\x6f\x72\x74\x20\x3d\x20\x25\x64" "\n"
,lIIlI);if(Illll==NULL){return NULL;}if(lIIlI<=(0x138d+1291-0x1898)||lIIlI>
IllIIIl){return NULL;}lIIlI--;
if(Illll->IlIIlII[lIIlI]){lIllI=Illll->IlIIlII[lIIlI];IlllllII(lIllI);}lIlll(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x66\x69\x6e\x64\x33\x3a\x20\x2d\x2d\x20\x25\x73" "\n"
,lIllI?"\x66\x6f\x75\x6e\x64":"\x6e\x6f\x74\x20\x66\x6f\x75\x6e\x64");return 
lIllI;}void llIIIlIIl(struct lIlIIl*lIllI){IIlII IIlIl;struct lllIIl*IllII;
unsigned long flags;IIlIl=IllIllI(sizeof(IIIlIIllI),GFP_ATOMIC);if(!IIlIl){lIlll
(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x73\x65\x6e\x64\x5f\x72\x65\x73\x65\x74\x5f\x70\x6f\x72\x74\x3a\x20\x6e\x6f\x20\x6d\x65\x6d\x6f\x72\x79" "\n"
);return;}IllII=IIIIlllll(lIllI,GFP_ATOMIC);if(!IllII){lIlll(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x73\x65\x6e\x64\x5f\x72\x65\x73\x65\x74\x5f\x70\x6f\x72\x74\x3a\x20\x6e\x6f\x20\x6d\x65\x6d\x6f\x72\x79" "\n"
);lIlIll(IIlIl);return;}IIlIl->IlIII.IIIlIl=IllII->lIlIl;IIlIl->IlIII.IllllII=
(0x6b3+666-0x94d);IIlIl->IlIII.IIIII=sizeof(IIIlIIllI);IIlIl->IlIII.IIIlIIl=
llIIlIII;IIlIl->IlIII.Status=(0xd6+207-0x1a5);IIlIl->IlIII.Context=lIllI->lIIlI;
IllII->IIlIl=IIlIl;spin_lock_irqsave(&lIllI->IIllII,flags);list_add_tail(&IllII
->llllIl,&lIllI->llIllIl);spin_unlock_irqrestore(&lIllI->IIllII,flags);wake_up(&
lIllI->lIIllI);}struct lllIIl*IIIIlllll(struct lIlIIl*lIllI,gfp_t llllI){struct 
lllIIl*IllII;IllII=lIllllI(sizeof(struct lllIIl),llllI);if(!IllII){lIlll(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x63\x72\x65\x61\x74\x65\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x6e\x6f\x20\x6d\x65\x6d\x6f\x72\x79" "\n"
);return NULL;}
#ifdef _USBD_DEBUG_MEMORY_
atomic_inc(&lIlIIlIIl);
#endif
INIT_LIST_HEAD(&IllII->llllIl);INIT_LIST_HEAD(&IllII->lllIlll);INIT_LIST_HEAD(&
IllII->urb.IIIIll);IllII->lIlIl=lIllIIlll();IllII->lIllI=IlllllII(lIllI);return 
IllII;}void IIlIlllI(struct lllIIl*IllII){


#ifdef _USBD_DEBUG_MEMORY_
atomic_inc(&IllllllIl);
#endif
if(IllII->lIllI){IlIllIIl(IllII->lIllI);}lIlIll(IllII);}
int lIllIIIll(struct lllIIl*IllII){struct usb_host_endpoint*ep;struct lllIIl*
Illllll;if(!list_empty(&IllII->lllIlll)){struct lllllII*lIlIII=list_entry(IllII
->lllIlll.next,struct lllllII,IIIIll);
#if KERNEL_LT((0xffa+4921-0x2331),(0xc76+1943-0x1407),(0x51+7553-0x1dba))
ep=(usb_pipein(lIlIII->IlllI->pipe)?lIlIII->IlllI->dev->ep_in:lIlIII->IlllI->dev
->ep_out)[usb_pipeendpoint(lIlIII->IlllI->pipe)];
#else
ep=lIlIII->IlllI->ep;
#endif

if(ep&&ep->hcpriv==IllII){ep->hcpriv=NULL;

list_del_init(&IllII->llllIl);return(0x804+3936-0x1763);}}
list_for_each_entry(Illllll,&IllII->lIllI->IllIIlI,llllIl){if(Illllll==IllII){
list_del_init(&IllII->llllIl);return(0x189b+2943-0x2419);}}
list_for_each_entry(Illllll,&IllII->lIllI->lllIlllI,llllIl){if(Illllll==IllII){
list_del_init(&IllII->llllIl);return(0x2442+59-0x247c);}}
list_for_each_entry(Illllll,&IllII->lIllI->llIllIl,llllIl){if(Illllll==IllII){
list_del_init(&IllII->llllIl);return(0xa6f+3438-0x17dc);}}return
(0x113+3195-0xd8e);}int lIIIlIII(struct lllIIl*IllII){struct lllllII*lIlIII;
list_for_each_entry(lIlIII,&IllII->lllIlll,IIIIll){
#if KERNEL_LT((0x1282+4091-0x227b),(0x9cb+38-0x9eb),(0x1908+3023-0x24bf))
spin_lock(&lIlIII->IlllI->lock);if(lIlIII->IlllI->status!=-EINPROGRESS){
spin_unlock(&lIlIII->IlllI->lock);return(0x925+3159-0x157b);}spin_unlock(&lIlIII
->IlllI->lock);
#else
if(lIlIII->IlllI->unlinked){return(0x4ec+8685-0x26d8);}
#endif
}return(0x1750+765-0x1a4d);}void lllllIIIl(struct lIlIIl*lIllI,int status){
unsigned long flags;struct list_head lIIlIlII;struct lllIIl*IllII;INIT_LIST_HEAD
(&lIIlIlII);spin_lock_irqsave(&lIIllII(lIllI->parent)->lock,flags);spin_lock(&
lIllI->IIllII);list_for_each_entry(IllII,&lIllI->IllIIlI,llllIl){struct lllllII*
IlIIlI;list_for_each_entry(IlIIlI,&IllII->lllIlll,IIIIll){struct 
usb_host_endpoint*ep;
#if KERNEL_LT((0x280+7069-0x1e1b),(0x90d+4518-0x1aad),(0x114d+2455-0x1acc))
ep=(usb_pipein(IlIIlI->IlllI->pipe)?IlIIlI->IlllI->dev->ep_in:IlIIlI->IlllI->dev
->ep_out)[usb_pipeendpoint(IlIIlI->IlllI->pipe)];
#else
ep=IlIIlI->IlllI->ep;
#endif
if(ep)ep->hcpriv=NULL;}}list_splice_init(&lIllI->IllIIlI,&lIIlIlII);
list_splice_init(&lIllI->llIllIl,&lIIlIlII);list_splice_init(&lIllI->lllIlllI,&
lIIlIlII);spin_unlock(&lIllI->IIllII);spin_unlock_irqrestore(&lIIllII(lIllI->
parent)->lock,flags);while(!list_empty(&lIIlIlII)){struct lllIIl*IllII=
list_entry(lIIlIlII.next,struct lllIIl,llllIl);list_del_init(&IllII->llllIl);
IllIIllI(IllII,status);IIlIlllI(IllII);}}void IllIIllI(struct lllIIl*IllII,int 
status){struct lIlIIl*lIllI=IllII->lIllI;
#if KERNEL_GT_EQ((0x2ac+7996-0x21e6),(0xc0f+5489-0x217a),(0x199+4482-0x1303))
struct lIIIII*Illll=lIIllII(lIllI->parent);
#endif
unsigned long flags;int llIlIlIlI=(0x219+5755-0x1894);lIlll(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x67\x69\x76\x65\x62\x61\x63\x6b\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x72\x65\x71\x75\x65\x73\x74\x20\x30\x78\x25\x70\x20\x73\x74\x61\x74\x75\x73\x3d\x25\x64" "\n"
,IllII,status);local_irq_save(flags);while(!list_empty(&IllII->lllIlll)){struct 
lllllII*lIlIII=list_entry(IllII->lllIlll.next,struct lllllII,IIIIll);if(lIlIII->
IlllI){int IllllllI=status;

if(usb_pipetype(lIlIII->IlllI->pipe)==PIPE_BULK||usb_pipetype(lIlIII->IlllI->
pipe)==PIPE_INTERRUPT){






switch(llIlIlIlI){case(0x1518+4559-0x26e7):if(lIlIII->IlllI->actual_length<
lIlIII->IlllI->transfer_buffer_length){if((status==(0xc18+2474-0x15c2))&&(lIlIII
->IlllI->transfer_flags&URB_SHORT_NOT_OK)){IllllllI=-EREMOTEIO;}else{IllllllI=
status;}llIlIlIlI=(0x13f+5767-0x17c5);}else if(lIlIII->IIIIll.next==&IllII->
lllIlll){IllllllI=status;llIlIlIlI=(0x3e2+128-0x461);}else{IllllllI=
(0x142a+1583-0x1a59);}break;case(0x2386+499-0x2578):IllllllI=-ECONNRESET;break;}
}lIlll(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x67\x69\x76\x65\x62\x61\x63\x6b\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x67\x69\x76\x65\x62\x61\x63\x6b\x20\x75\x72\x62\x20\x30\x78\x25\x70\x20\x77\x69\x74\x68\x20\x73\x74\x61\x74\x75\x73\x20\x25\x64" "\n"
,lIlIII->IlllI,IllllllI);
#if KERNEL_LT((0x1a2c+1424-0x1fba),(0x1375+3019-0x1f3a),(0x618+822-0x936))


spin_lock(&lIlIII->IlllI->lock);if(lIlIII->IlllI->status==-EINPROGRESS){lIlIII->
IlllI->status=IllllllI;}spin_unlock(&lIlIII->IlllI->lock);
#else


spin_lock(&Illll->lock);usb_hcd_unlink_urb_from_ep(lIllI->parent,lIlIII->IlllI);
spin_unlock(&Illll->lock);
#endif



lIlIII->IlllI->hcpriv=NULL;
#if KERNEL_LT((0x11f5+1849-0x192c),(0x1081+3125-0x1cb0),(0x816+5577-0x1dcc))
usb_hcd_giveback_urb(lIllI->parent,lIlIII->IlllI,NULL);
#elif KERNEL_LT((0x1527+4160-0x2565),(0xe1+5120-0x14db),(0x80a+3615-0x1611))
usb_hcd_giveback_urb(lIllI->parent,lIlIII->IlllI);
#else
usb_hcd_giveback_urb(lIllI->parent,lIlIII->IlllI,IllllllI);
#endif
}list_del_init(&lIlIII->IIIIll);if(lIlIII!=&IllII->urb){lIlIll(lIlIII);}}
local_irq_restore(flags);if(IllII->IIlIl){if(IllII->IIlIl->IlIII.IIIlIIl==
llIIlIII){lIlll(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x67\x69\x76\x65\x62\x61\x63\x6b\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x72\x65\x73\x65\x74\x20\x63\x6f\x6d\x70\x6c\x65\x74\x65\x64" "\n"
);lIllI->IlIlIIll=(0x4ab+3549-0x1288);wake_up(&lIllI->lIIllI);}lIlll(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x67\x69\x76\x65\x62\x61\x63\x6b\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x66\x72\x65\x65\x69\x6e\x67\x20\x75\x6e\x72\x62" "\n"
);lIlIll(IllII->IIlIl);IllII->IIlIl=NULL;}}int IIIIlIIIl(struct lIlIIl*lIllI,
struct lllIIl*IllII,void*llIIl,size_t IlIIIl){int IlIlI=(0x1f92+1768-0x267a);if(
!list_empty(&IllII->lllIlll)){IlIlI=llIlIlllI(&IllII->lllIlll,IllII->lIlIl,llIIl
,IlIIIl);}else if(IllII->IIlIl){if(IlIIIl<IllII->IIlIl->IlIII.IIIII){IlIlI=-
EMSGSIZE;}else{memcpy(llIIl,IllII->IIlIl,IllII->IIlIl->IlIII.IIIII);if(IllII->
IIlIl->IlIII.IIIlIIl==llIIlIII){lIllI->IlIlIIll=(0x812+901-0xb96);}}}else{IlIlI=
-EIO;}lIlll(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x70\x61\x63\x6b\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x72\x65\x73\x75\x6c\x74\x20\x3d\x20\x25\x64" "\n"
,IlIlI);return IlIlI;}int IlIIlIllI(struct lIlIIl*lIllI,struct lllIIl*IllII,
IIlII IIlIl,int*status){int IlIlI;if(!list_empty(&IllII->lllIlll)){lIlll(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x75\x6e\x70\x61\x63\x6b\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x75\x6e\x70\x61\x63\x6b\x69\x6e\x67\x20\x75\x72\x62" "\n"
);IlIlI=IIIllIlIl(IIlIl,&IllII->lllIlll,status);}else{*status=lIllllIl(IIlIl->
IlIII.Status);IlIlI=(0xcec+4006-0x1c92);}return IlIlI;}void lIlIllIlI(struct 
kref*IIllIlI){struct lIlIIl*lIllI=container_of(IIllIlI,struct lIlIIl,IllIll);
lIlll(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x64\x65\x73\x74\x72\x6f\x79\x28\x70\x76\x73\x74\x75\x62\x3d\x30\x78\x25\x70\x29" "\n"
,lIllI);
#ifdef _USBD_DEBUG_MEMORY_
atomic_inc(&IIlIlIIll);
#endif
lIllllIIl(lIllI);lIlIll(lIllI);}
static inline size_t lIIIIllII(struct urb*IlllI,void*llIIl){int i;void*lllIll;if
(!IlllI->transfer_buffer){return(0xb58+4119-0x1b6f);}lllIll=llIIl;for(i=
(0xb28+1816-0x1240);i<IlllI->number_of_packets;i++){memcpy(IlllI->
transfer_buffer+IlllI->iso_frame_desc[i].offset,lllIll,IlllI->iso_frame_desc[i].
actual_length);lllIll+=IlllI->iso_frame_desc[i].actual_length;}return(size_t)(
lllIll-llIIl);}
#if defined(CONFIG_X86_32) && !defined(_USBD_VHCI_NO_DMA_)






int llIlIlll(void*llIIl,struct urb*IlllI,int IIIIl){
if(IIIIl==(0x1b2+7260-0x1e0e)){return(0x364+8312-0x23dc);}if(lllIIlll&&((IlllI->
transfer_buffer==NULL)||(IlllI->transfer_flags&URB_NO_TRANSFER_DMA_MAP))&&(IlllI
->transfer_dma!=(0x228+6116-0x1a0c))&&(IlllI->transfer_dma!=~(dma_addr_t)
(0x6a4+7889-0x2575))){llIlIIlIl(llIIl,IlllI->transfer_dma,IIIIl);}else if(IlllI
->transfer_buffer){memcpy(llIIl,IlllI->transfer_buffer,IIIIl);}else return-
EINVAL;return IIIIl;}





int IIlIllII(struct urb*IlllI,void*llIIl,int IIIIl){
if(IIIIl==(0x370+5183-0x17af)){return(0x1465+3259-0x2120);}if(lllIIlll&&((IlllI
->transfer_buffer==NULL)||(IlllI->transfer_flags&URB_NO_TRANSFER_DMA_MAP))&&(
IlllI->transfer_dma!=(0x3a8+5959-0x1aef))&&(IlllI->transfer_dma!=~(dma_addr_t)
(0x859+2238-0x1117))){lIIIlIlII(IlllI->transfer_dma,llIIl,IIIIl);}else if(IlllI
->transfer_buffer){memcpy(IlllI->transfer_buffer,llIIl,IIIIl);}else{return-
EINVAL;}return IIIIl;}





int llIlIIlll(void*llIIl,struct urb*IlllI,int IIIIl){
if(IIIIl==(0x14cd+3861-0x23e2)){return(0xecd+3251-0x1b80);}
#if KERNEL_LT_EQ((0x919+1919-0x1096),(0x8d2+2953-0x1455),(0x114a+3073-0x1d29))
if(lllIIlll&&((IlllI->setup_packet==NULL)||(IlllI->transfer_flags&
URB_NO_SETUP_DMA_MAP))&&(IlllI->setup_dma!=(0x17f4+162-0x1896))&&(IlllI->
setup_dma!=~(dma_addr_t)(0x107a+5240-0x24f2))){llIlIIlIl(llIIl,IlllI->setup_dma,
IIIIl);}else
#endif
if(IlllI->setup_packet){memcpy(llIIl,IlllI->setup_packet,IIIIl);}else{return-
EINVAL;}return IIIIl;}





int IIlIllIll(struct urb*IlllI,void*llIIl,int IIIIl){
if(IIIIl==(0x72+4945-0x13c3)){return(0xa9c+6113-0x227d);}
#if KERNEL_LT_EQ((0x102d+4427-0x2176),(0x31a+224-0x3f4),(0x714+6580-0x20a6))
if(lllIIlll&&((IlllI->setup_packet==NULL)||(IlllI->transfer_flags&
URB_NO_SETUP_DMA_MAP))&&(IlllI->setup_dma!=(0xd7c+4739-0x1fff))&&(IlllI->
setup_dma!=~(dma_addr_t)(0x22b+4779-0x14d6))){lIIIlIlII(IlllI->setup_dma,llIIl,
IIIIl);}else
#endif
if(IlllI->setup_packet){memcpy(IlllI->setup_packet,llIIl,IIIIl);}else{return-
EINVAL;}return IIIIl;}


static inline size_t IIIIlllII(void*llIIl,struct urb*IlllI){if(lllIIlll&&((IlllI
->transfer_buffer==NULL)||(IlllI->transfer_flags&URB_NO_TRANSFER_DMA_MAP))&&(
IlllI->transfer_dma!=(0x10b4+3465-0x1e3d))&&(IlllI->transfer_dma!=~(dma_addr_t)
(0x1565+3696-0x23d5))){int i;void*IIIIIll=llIIl;dma_addr_t lllIll;void*lIIIlI;
unsigned long flags;unsigned long llIlIlI,IIlIIl;unsigned long IlIlIll,IIIIIIl,
IlIlIlI,IIlllll;IlIlIlI=(0x7e2+7164-0x23de);lIIIlI=NULL;local_irq_save(flags);
for(i=(0x9c1+618-0xc2b);i<IlllI->number_of_packets;i++){IIlIIl=IlllI->
iso_frame_desc[i].length;lllIll=IlllI->transfer_dma+IlllI->iso_frame_desc[i].
offset;while(IIlIIl){IIlllll=lllIll>>PAGE_SHIFT;if(IIlllll!=IlIlIlI){if(IlIlIlI)
{
#if KERNEL_GT_EQ((0x1ba+3002-0xd72),(0xe34+1820-0x154a),(0x19c2+283-0x1ab8))
kunmap_atomic(lIIIlI);
#else
kunmap_atomic(lIIIlI,KM_IRQ0);
#endif
}IlIlIlI=IIlllll;
#if KERNEL_GT_EQ((0x13a9+882-0x1719),(0x105b+5616-0x2645),(0x298+6581-0x1c28))
lIIIlI=kmap_atomic(pfn_to_page(IIlllll));
#else
lIIIlI=kmap_atomic(pfn_to_page(IIlllll),KM_IRQ0);
#endif
}IlIlIll=lllIll&(PAGE_SIZE-(0xc35+145-0xcc5));IIIIIIl=PAGE_SIZE-IlIlIll;llIlIlI=
(IIIIIIl<IIlIIl)?IIIIIIl:IIlIIl;memcpy(IIIIIll,lIIIlI+IlIlIll,llIlIlI);lllIll+=
llIlIlI;IIIIIll+=llIlIlI;IIlIIl-=llIlIlI;}}if(IlIlIlI){
#if KERNEL_GT_EQ((0x13fa+2136-0x1c50),(0x1cb4+644-0x1f32),(0x1497+2969-0x200b))
kunmap_atomic(lIIIlI);
#else
kunmap_atomic(lIIIlI,KM_IRQ0);
#endif
}local_irq_restore(flags);lIlll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x70\x61\x63\x6b\x5f\x69\x73\x6f\x63\x68\x5f\x62\x75\x66\x3a\x20\x70\x61\x63\x6b\x65\x64\x3d\x25\x6c\x75" "\n"
,(unsigned long)(IIIIIll-llIIl));return(size_t)(IIIIIll-llIIl);}else if(IlllI->
transfer_buffer){return IlIIIllI(IlllI->iso_frame_desc,IlllI->number_of_packets,
llIIl,IlllI->transfer_buffer,(0xfa+848-0x44a));}lIlll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x70\x61\x63\x6b\x5f\x69\x73\x6f\x63\x68\x5f\x62\x75\x66\x3a\x20\x6e\x6f\x20\x62\x75\x66\x66\x65\x72" "\n"
);return(0xfb3+705-0x1274);}static inline size_t lIlIIlIII(struct urb*IlllI,void
*llIIl){if(lllIIlll&&((IlllI->transfer_buffer==NULL)||(IlllI->transfer_flags&
URB_NO_TRANSFER_DMA_MAP))&&(IlllI->transfer_dma!=(0x1d16+2380-0x2662))&&(IlllI->
transfer_dma!=~(dma_addr_t)(0x1cb6+2561-0x26b7))){int i;void*lllIll=llIIl;
dma_addr_t IIIIIll;void*lIIIlI;unsigned long flags;unsigned long llIlIlI,IIlIIl;
unsigned long IlIlIll,IIIIIIl,IlIlIlI,IIlllll;IlIlIlI=(0x1c61+1578-0x228b);
lIIIlI=NULL;local_irq_save(flags);for(i=(0xe3+5081-0x14bc);i<IlllI->
number_of_packets;i++){IIlIIl=IlllI->iso_frame_desc[i].actual_length;IIIIIll=
IlllI->transfer_dma+IlllI->iso_frame_desc[i].offset;while(IIlIIl){IIlllll=
IIIIIll>>PAGE_SHIFT;if(IIlllll!=IlIlIlI){if(IlIlIlI){
#if KERNEL_GT_EQ((0x15ec+3293-0x22c7),(0xcda+2025-0x14bd),(0x123d+4590-0x2406))
kunmap_atomic(lIIIlI);
#else
kunmap_atomic(lIIIlI,KM_IRQ0);
#endif
}IlIlIlI=IIlllll;
#if KERNEL_GT_EQ((0x4b5+6832-0x1f63),(0x101a+2335-0x1933),(0x5f7+303-0x701))
lIIIlI=kmap_atomic(pfn_to_page(IIlllll));
#else
lIIIlI=kmap_atomic(pfn_to_page(IIlllll),KM_IRQ0);
#endif
}IlIlIll=IIIIIll&(PAGE_SIZE-(0x78b+5000-0x1b12));IIIIIIl=PAGE_SIZE-IlIlIll;
llIlIlI=(IIIIIIl<IIlIIl)?IIIIIIl:IIlIIl;memcpy(lIIIlI+IlIlIll,lllIll,llIlIlI);
lllIll+=llIlIlI;IIIIIll+=llIlIlI;IIlIIl-=llIlIlI;}}if(IlIlIlI){
#if KERNEL_GT_EQ((0xc93+1530-0x128b),(0x4d1+5628-0x1ac7),(0x128+4682-0x134d))
kunmap_atomic(lIIIlI);
#else
kunmap_atomic(lIIIlI,KM_IRQ0);
#endif
}local_irq_restore(flags);lIlll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x75\x6e\x70\x61\x63\x6b\x5f\x69\x73\x6f\x63\x68\x5f\x62\x75\x66\x3a\x20\x70\x61\x63\x6b\x65\x64\x3d\x25\x6c\x75" "\n"
,(unsigned long)(lllIll-llIIl));return(size_t)(lllIll-llIIl);}else if(IlllI->
transfer_buffer){return lIIIIllII(IlllI,llIIl);}lIlll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x75\x6e\x70\x61\x63\x6b\x5f\x69\x73\x6f\x63\x68\x5f\x62\x75\x66\x3a\x20\x6e\x6f\x20\x62\x75\x66\x66\x65\x72" "\n"
);return(0x1bcb+1383-0x2132);}
#else 

static inline int IIlIllII(struct urb*IlllI,void*llIIl,int IIIIl){if(!IIIIl){
return(0x148+2010-0x922);}if(!IlllI->transfer_buffer){return-EINVAL;}memcpy(
IlllI->transfer_buffer,llIIl,IIIIl);return IIIIl;}static inline int llIlIlll(
void*llIIl,struct urb*IlllI,int IIIIl){if(!IIIIl){return(0x976+6764-0x23e2);}if(
!IlllI->transfer_buffer){return-EINVAL;}memcpy(llIIl,IlllI->transfer_buffer,
IIIIl);return IIIIl;}static inline int IIlIllIll(struct urb*IlllI,void*llIIl,int
 IIIIl){if(!IIIIl){return(0x182+627-0x3f5);}if(!IlllI->setup_packet){return-
EINVAL;}memcpy(IlllI->setup_packet,llIIl,IIIIl);return IIIIl;}static inline int 
llIlIIlll(void*llIIl,struct urb*IlllI,int IIIIl){if(!IIIIl){return
(0xd0c+5753-0x2385);}if(!IlllI->setup_packet){return-EINVAL;}memcpy(llIIl,IlllI
->setup_packet,IIIIl);return IIIIl;}static inline size_t IIIIlllII(void*llIIl,
struct urb*IlllI){if(!IlllI->transfer_buffer){return(0x787+7952-0x2697);}return 
IlIIIllI(IlllI->iso_frame_desc,IlllI->number_of_packets,llIIl,IlllI->
transfer_buffer,(0xb50+3909-0x1a95));}

static inline size_t lIlIIlIII(struct urb*IlllI,void*llIIl){return lIIIIllII(
IlllI,llIIl);}
#endif 




static inline int IlIllllIIl(struct list_head*llllllI,llIIII lIlIl,void*llIIl,
size_t IlIIIl){int IlIlI=(0x569+7173-0x216e);int llIllII=sizeof(IIIlIlllI);IIlII
 IIlIl=llIIl;struct lllllII*IlIIlI;IIlIl->IlIII.IIIlIl=lIlIl;IIlIl->IlIII.
IllllII=(0x14da+1081-0x1913);IIlIl->IlIII.IIIII=llIllII;IIlIl->IlIII.IIIlIIl=
IIllIIIl;IIlIl->IlIII.Status=(0x3d9+3957-0x134e);IIlIl->IlIII.Context=
(0x8af+74-0x8f9);if(IlIIIl<IIlIl->IlIII.IIIII){return-EMSGSIZE;}IlIIlI=
list_entry(llllllI->prev,struct lllllII,IIIIll);IIlIl->lllllI.IllllI=
(0x1baf+2224-0x245f);IIlIl->lllllI.Endpoint=usb_pipeendpoint(IlIIlI->IlllI->pipe
);IIlIl->lllllI.Flags=usb_pipein(IlIIlI->IlllI->pipe)?IIIllI:(0xa93+3089-0x16a4)
;
if(usb_pipein(IlIIlI->IlllI->pipe)&&!(IlIIlI->IlllI->transfer_flags&
URB_SHORT_NOT_OK)){IIlIl->lllllI.Flags|=lIIlIll;}


list_for_each_entry(IlIIlI,llllllI,IIIIll){if(usb_pipeout(IlIIlI->IlllI->pipe)){
if(IlIIIl>=(IIlIl->IlIII.IIIII+IlIIlI->IlllI->transfer_buffer_length)){if(
llIlIlll((char*)llIIl+IIlIl->IlIII.IIIII,IlIIlI->IlllI,IlIIlI->IlllI->
transfer_buffer_length)<(0x51f+241-0x610)){return-EINVAL;}}IIlIl->IlIII.IIIII+=
IlIIlI->IlllI->transfer_buffer_length;}IIlIl->lllllI.IllllI+=IlIIlI->IlllI->
transfer_buffer_length;}if(IlIIIl<IIlIl->IlIII.IIIII){return-EMSGSIZE;}return 
IlIlI;}static inline int IIllIllIl(struct urb*IlllI,llIIII lIlIl,void*llIIl,
size_t IlIIIl){int IlIlI=(0x825+4781-0x1ad2);int llIllII=sizeof(lIIllIllI);IIlII
 IIlIl=llIIl;IIlIl->IlIII.IIIlIl=lIlIl;IIlIl->IlIII.IllllII=(0x1ef9+1952-0x2699)
;IIlIl->IlIII.IIIII=llIllII;IIlIl->IlIII.IIIlIIl=lIlllIIl;IIlIl->IlIII.Status=
(0x1907+3108-0x252b);IIlIl->IlIII.Context=(0xf50+2648-0x19a8);if(IlIIIl<IIlIl->
IlIII.IIIII){return-EMSGSIZE;}IIlIl->llIIlI.IllllI=IlllI->transfer_buffer_length
;IIlIl->llIIlI.Interval=IlllI->interval;IIlIl->llIIlI.Endpoint=usb_pipeendpoint(
IlllI->pipe);IIlIl->llIIlI.Flags=usb_pipein(IlllI->pipe)?IIIllI:
(0x90d+6573-0x22ba);IIlIl->llIIlI.Flags|=(IlllI->transfer_flags&URB_SHORT_NOT_OK
)?(0x1240+4846-0x252e):lIIlIll;if(usb_pipeout(IlllI->pipe)){if(IlIIIl>=(IIlIl->
IlIII.IIIII+IlllI->transfer_buffer_length)){if(llIlIlll((char*)llIIl+IIlIl->
IlIII.IIIII,IlllI,IlllI->transfer_buffer_length)<(0x70+8741-0x2295)){return-
EINVAL;}}IIlIl->IlIII.IIIII+=IlllI->transfer_buffer_length;}if(IlIIIl<IIlIl->
IlIII.IIIII){return-EMSGSIZE;}return IlIlI;}static inline int IllIlIIll(struct 
urb*IlllI,llIIII lIlIl,void*llIIl,size_t IlIIIl){int IlIlI=(0x6cc+3469-0x1459);
IIlII IIlIl=llIIl;int i;int llIllII=sizeof(lIIllIIlI)-sizeof(IllIlIII)+sizeof(
IllIlIII)*IlllI->number_of_packets;IIlIl->IlIII.IIIlIl=lIlIl;IIlIl->IlIII.
IllllII=(0x416+4848-0x1706);IIlIl->IlIII.IIIII=llIllII;IIlIl->IlIII.IIIlIIl=
lllIlIIl;IIlIl->IlIII.Status=(0x5d6+4513-0x1777);IIlIl->IlIII.Context=
(0x7bb+1181-0xc58);if(IlIIIl<IIlIl->IlIII.IIIII){return-EMSGSIZE;}IIlIl->llIll.
Endpoint=usb_pipeendpoint(IlllI->pipe);IIlIl->llIll.Flags=usb_pipein(IlllI->pipe
)?IIIllI:(0xf53+550-0x1179);IIlIl->llIll.Flags|=(IlllI->transfer_flags&
URB_SHORT_NOT_OK)?(0x1a9+7999-0x20e8):lIIlIll;


























IIlIl->llIll.Flags|=IlIllIIII;
IIlIl->llIll.IllllI=IlllI->transfer_buffer_length;IIlIl->llIll.Interval=IlllI->
interval;IIlIl->llIll.IIlIlIIl=(0x2dc+6675-0x1cef);
IIlIl->llIll.llIIIIIl=(0x29+2783-0xb08);IIlIl->llIll.IIlIlIl=IlllI->
number_of_packets;for(i=(0x58c+1379-0xaef);i<IlllI->number_of_packets;i++){IIlIl
->llIll.llIIIIl[i].Offset=IlllI->iso_frame_desc[i].offset;IIlIl->llIll.llIIIIl[i
].Length=IlllI->iso_frame_desc[i].length;IIlIl->llIll.llIIIIl[i].Status=
(0x1609+2512-0x1fd9);}if(usb_pipeout(IlllI->pipe)){if(IlIIIl>=(IIlIl->IlIII.
IIIII+IlllI->transfer_buffer_length)){IIlIl->IlIII.IIIII+=IIIIlllII((char*)llIIl
+IIlIl->IlIII.IIIII,IlllI);}else{
IIlIl->IlIII.IIIII+=IlllI->transfer_buffer_length;}}if(IlIIIl<IIlIl->IlIII.IIIII
){return-EMSGSIZE;}return IlIlI;}static inline int lIlIllllII(struct urb*IlllI,
llIIII lIlIl,struct usb_ctrlrequest*IlllIll,void*llIIl,size_t IlIIIl){int IlIlI=
(0x5a4+6034-0x1d36);IIlII IIlIl=llIIl;int llIllII=sizeof(IllIIlIll);IIlIl->IlIII
.IIIlIl=lIlIl;IIlIl->IlIII.IllllII=(0x1f41+1337-0x247a);IIlIl->IlIII.IIIII=
llIllII;IIlIl->IlIII.IIIlIIl=llIIIIlI;IIlIl->IlIII.Status=(0x74f+6041-0x1ee8);
IIlIl->IlIII.Context=(0xaf+7051-0x1c3a);if(IlIIIl<IIlIl->IlIII.IIIII){return-
EMSGSIZE;}IIlIl->lllIII.Endpoint=usb_pipeendpoint(IlllI->pipe);IIlIl->lllIII.
Flags=usb_pipein(IlllI->pipe)?IIIllI:(0x7d2+2566-0x11d8);if(usb_pipein(IlllI->
pipe)){IIlIl->lllIII.Flags|=(IlllI->transfer_flags&URB_SHORT_NOT_OK)?
(0x5af+986-0x989):lIIlIll;}IIlIl->lllIII.IIllIll=IlllIll->bRequestType;IIlIl->
lllIII.IIIIllIII=IlllIll->bRequest;IIlIl->lllIII.IlIlIlII=le16_to_cpu(IlllIll->
wValue);IIlIl->lllIII.IIlIlllIl=le16_to_cpu(IlllIll->wIndex);IIlIl->lllIII.
IllllI=IlllI->transfer_buffer_length;if(usb_pipeout(IlllI->pipe)){if(IlIIIl>=(
IIlIl->IlIII.IIIII+IlllI->transfer_buffer_length)){if(llIlIlll((char*)llIIl+
llIllII,IlllI,IlllI->transfer_buffer_length)<(0xa4d+1387-0xfb8)){return-EINVAL;}
}IIlIl->IlIII.IIIII+=IlllI->transfer_buffer_length;}if(IlIIIl<IIlIl->IlIII.IIIII
){return-EMSGSIZE;}return IlIlI;}static inline int IIIllllll(struct urb*IlllI,
llIIII lIlIl,struct usb_ctrlrequest*IlllIll,int IlllIlll,void*llIIl,size_t 
IlIIIl){int IlIlI=(0x613+3059-0x1206);IIlII IIlIl=llIIl;int llIllII=sizeof(
IIIIlIlll);IIlIl->IlIII.IIIlIl=lIlIl;IIlIl->IlIII.IllllII=(0x2c7+9271-0x26fe);
IIlIl->IlIII.IIIII=llIllII;IIlIl->IlIII.IIIlIIl=IlllIlll?llIIllll:lIlIllll;IIlIl
->IlIII.Status=(0x792+4979-0x1b05);IIlIl->IlIII.Context=(0x1057+2003-0x182a);if(
IlIIIl<IIlIl->IlIII.IIIII){return-EMSGSIZE;}IIlIl->IIlllI.lIIlIIlI=le16_to_cpu(
IlllIll->wIndex);IIlIl->IIlllI.IllllI=IlllI->transfer_buffer_length;IIlIl->
IIlllI.lllllllI=(le16_to_cpu(IlllIll->wValue)>>(0x6f+6880-0x1b47))&
(0x688+7440-0x2299);IIlIl->IIlllI.lIlIIlll=le16_to_cpu(IlllIll->wValue)&
(0x3b5+6511-0x1c25);switch(IlllIll->bRequestType&USB_TYPE_MASK){case 
USB_TYPE_STANDARD:IIlIl->IIlllI.IIllIll=lllllIIIII;break;case USB_TYPE_CLASS:
IIlIl->IIlllI.IIllIll=lIIIlllII;break;case USB_TYPE_VENDOR:IIlIl->IIlllI.IIllIll
=lIllllllI;break;case USB_TYPE_RESERVED:IIlIl->IIlllI.IIllIll=IlIlIIIll;break;
default:IIlIl->IIlllI.IIllIll=(0x1da7+419-0x1f4a);}switch(IlllIll->bRequestType&
USB_RECIP_MASK){case USB_RECIP_DEVICE:IIlIl->IIlllI.llIlIIll=IIIlIlIlI;break;
case USB_RECIP_INTERFACE:IIlIl->IIlllI.llIlIIll=IlllllIlI;break;case 
USB_RECIP_ENDPOINT:IIlIl->IIlllI.llIlIIll=IIllIIlII;break;case USB_RECIP_OTHER:
IIlIl->IIlllI.llIlIIll=llIllIlll;break;default:IIlIl->IIlllI.IIllIll=
(0x74+4505-0x120d);}if(!IlllIlll){if(IlIIIl>=(IIlIl->IlIII.IIIII+IlllI->
transfer_buffer_length)){if(llIlIlll((char*)llIIl+llIllII,IlllI,IlllI->
transfer_buffer_length)<(0x1da+6701-0x1c07)){return-EINVAL;}}IIlIl->IlIII.IIIII
+=IlllI->transfer_buffer_length;}if(IlIIIl<IIlIl->IlIII.IIIII){return-EMSGSIZE;}
return IlIlI;}static inline int IlIIlIlIl(struct urb*IlllI,llIIII lIlIl,struct 
usb_ctrlrequest*IlllIll,void*llIIl,size_t IlIIIl){int IlIlI=(0x13ec+1713-0x1a9d)
;IIlII IIlIl=llIIl;int IIIllIII=sizeof(IllIIllll);IIlIl->IlIII.IIIlIl=lIlIl;
IIlIl->IlIII.IllllII=(0xe59+1615-0x14a8);IIlIl->IlIII.IIIII=IIIllIII;IIlIl->
IlIII.IIIlIIl=IIlIlIII;IIlIl->IlIII.Status=(0x5f2+2863-0x1121);IIlIl->IlIII.
Context=(0xcf4+3366-0x1a1a);if(IlIIIl<IIlIl->IlIII.IIIII){return-EMSGSIZE;}IIlIl
->IlIIIIl.IlIllIl=(lIllIl)le16_to_cpu(IlllIll->wIndex);IIlIl->IlIIIIl.llIlllI=(
lIllIl)le16_to_cpu(IlllIll->wValue);return IlIlI;}static inline int IIIIIlIIl(
struct urb*IlllI,llIIII lIlIl,struct usb_ctrlrequest*IlllIll,void*llIIl,size_t 
IlIIIl){int IlIlI=(0xeca+2792-0x19b2);IIlII IIlIl=llIIl;int IIIllIII=sizeof(
lIIlllIlI)-sizeof(IIlIl->lIllIll.llIIlII[(0x99c+4280-0x1a54)]);IIlIl->IlIII.
IIIlIl=lIlIl;IIlIl->IlIII.IllllII=(0x5d+1512-0x645);IIlIl->IlIII.IIIII=IIIllIII;
IIlIl->IlIII.IIIlIIl=llIlllIl;IIlIl->IlIII.Status=(0x3d6+6364-0x1cb2);IIlIl->
IlIII.Context=(0xf39+4346-0x2033);if(IlIIIl<IIlIl->IlIII.IIIII){return-EMSGSIZE;
}IIlIl->lIllIll.lllIllIl=(lIllIl)le16_to_cpu(IlllIll->wValue);IIlIl->lIllIll.
IlllllIl=(0x49a+2594-0xebc);return IlIlI;}static inline int lIIllIlIl(struct urb
*IlllI,llIIII lIlIl,struct usb_ctrlrequest*IlllIll,void*llIIl,size_t IlIIIl){int
 IlIlI=(0x110+6591-0x1acf);IIlII IIlIl=llIIl;int IIIllIII=sizeof(IIlllllIl);
IIlIl->IlIII.IIIlIl=lIlIl;IIlIl->IlIII.IllllII=(0x35b+8236-0x2387);IIlIl->IlIII.
IIIII=IIIllIII;IIlIl->IlIII.IIIlIIl=IIIIlllI;IIlIl->IlIII.Status=
(0xecd+697-0x1186);IIlIl->IlIII.Context=(0x14eb+1773-0x1bd8);if(IlIIIl<IIlIl->
IlIII.IIIII){return-EMSGSIZE;}IIlIl->lIllIII.Endpoint=IlllIll->wIndex&
(0x44d+3892-0x1372);
IIlIl->lIllIII.Flags=(IlllIll->wIndex&USB_DIR_IN)?IIIllI:(0x19eb+2541-0x23d8);
return IlIlI;}int llIlIlllI(struct list_head*llllllI,llIIII lIlIl,void*llIIl,
size_t IlIIIl){int IlIlI=-EINVAL;do
{struct usb_ctrlrequest llIlll;struct urb*IlllI;struct lllllII*IlIIlI;IlIIlI=
list_entry(llllllI->next,struct lllllII,IIIIll);IlllI=IlIIlI->IlllI;if(!IlllI){
lIlll(
"\x75\x73\x62\x64\x5f\x70\x61\x63\x6b\x5f\x75\x72\x62\x5f\x6c\x69\x73\x74\x3a\x20\x70\x75\x72\x62\x20\x69\x73\x20\x6e\x75\x6c\x6c\x28\x30\x78\x25\x70\x29\x2c\x20\x70\x76\x75\x72\x62\x3d\x30\x78\x25\x70\x20\x70\x75\x72\x62\x5f\x6c\x69\x73\x74\x3d\x30\x78\x25\x70" "\n"
,IlllI,IlIIlI,llllllI);break;}switch(usb_pipetype(IlllI->pipe)){case PIPE_BULK:
IlIlI=IlIllllIIl(llllllI,lIlIl,llIIl,IlIIIl);break;case PIPE_INTERRUPT:IlIlI=
IIllIllIl(IlllI,lIlIl,llIIl,IlIIIl);break;case PIPE_ISOCHRONOUS:IlIlI=IllIlIIll(
IlllI,lIlIl,llIIl,IlIIIl);break;case PIPE_CONTROL:IlIlI=llIlIIlll(&llIlll,IlllI,
sizeof(llIlll));if(IlIlI<(0x481+4512-0x1621)){break;}if(IlIlI!=sizeof(llIlll)){
IlIlI=-EINVAL;break;}if(llIlll.bRequestType==(USB_DIR_IN|USB_TYPE_STANDARD|
USB_RECIP_DEVICE)&&llIlll.bRequest==USB_REQ_GET_DESCRIPTOR){
IlIlI=IIIllllll(IlllI,lIlIl,&llIlll,(0x1a26+1922-0x21a7),llIIl,IlIIIl);}else if(
llIlll.bRequestType==(USB_DIR_OUT|USB_TYPE_STANDARD|USB_RECIP_DEVICE)&&llIlll.
bRequest==USB_REQ_SET_DESCRIPTOR){
IlIlI=IIIllllll(IlllI,lIlIl,&llIlll,(0x1a3b+2453-0x23d0),llIIl,IlIIIl);}else if(
llIlll.bRequestType==(USB_DIR_OUT|USB_TYPE_STANDARD|USB_RECIP_DEVICE)&&llIlll.
bRequest==USB_REQ_SET_CONFIGURATION){
IlIlI=IIIIIlIIl(IlllI,lIlIl,&llIlll,llIIl,IlIIIl);}else if(llIlll.bRequestType==
(USB_DIR_OUT|USB_TYPE_STANDARD|USB_RECIP_INTERFACE)&&llIlll.bRequest==
USB_REQ_SET_INTERFACE){
IlIlI=IlIIlIlIl(IlllI,lIlIl,&llIlll,llIIl,IlIIIl);}else if(llIlll.bRequestType==
(USB_DIR_OUT|USB_TYPE_STANDARD|USB_RECIP_ENDPOINT)&&llIlll.bRequest==
USB_REQ_CLEAR_FEATURE&&llIlll.wValue==USB_ENDPOINT_HALT){
IlIlI=lIIllIlIl(IlllI,lIlIl,&llIlll,llIIl,IlIIIl);}else{
IlIlI=lIlIllllII(IlllI,lIlIl,&llIlll,llIIl,IlIIIl);}break;default:IIllIl(
"\x75\x6e\x6b\x6e\x6f\x77\x6e\x20\x70\x69\x70\x65\x20\x74\x79\x70\x65\x20\x25\x64\x20\x69\x6e\x20\x75\x72\x62" "\n"
,usb_pipetype(IlllI->pipe));IlIlI=-EINVAL;break;}}while((0x2cb+768-0x5cb));if(
IlIlI<(0xf54+4366-0x2062)&&IlIlI!=-EMSGSIZE){IIllIl(
"\x62\x72\x6f\x6b\x65\x6e\x20\x75\x72\x62\x20\x64\x65\x74\x65\x63\x74\x65\x64\x2c\x20\x65\x72\x72\x6f\x72\x20\x63\x6f\x64\x65\x20\x25\x64" "\n"
,IlIlI);}return IlIlI;}



static inline int IlIlllIIl(IIlII IIlIl,struct urb*IlllI,int IlllIlll){int IlIlI
=(0x1fc+7563-0x1f87);IlllI->actual_length=min((lllII)IlllI->
transfer_buffer_length,IIlIl->IIlllI.IllllI);if(IlllIlll){IIlIllII(IlllI,(char*)
IIlIl+sizeof(IIlIl->IIlllI),IlllI->actual_length);}return IlIlI;}static inline 
int llIlIIIIll(IIlII IIlIl,struct list_head*llllllI){int IlIlI=
(0x631+5434-0x1b6b);struct lllllII*IlIIlI;unsigned long lllIlIlIl;unsigned char*
llIIl;lllIlIlIl=IIlIl->lllllI.IllllI;llIIl=(unsigned char*)IIlIl+sizeof(IIlIl->
lllllI);


list_for_each_entry(IlIIlI,llllllI,IIIIll){IlIIlI->IlllI->actual_length=min((
unsigned long)IlIIlI->IlllI->transfer_buffer_length,lllIlIlIl);if(usb_pipein(
IlIIlI->IlllI->pipe)){lIlll(
"\x75\x73\x62\x64\x5f\x75\x6e\x70\x61\x63\x6b\x5f\x75\x72\x62\x5f\x62\x75\x6c\x6b\x3a\x20\x63\x6f\x70\x79\x20\x25\x64\x20\x62\x79\x74\x65\x73\x20\x74\x6f\x20\x75\x72\x62\x20\x25\x70" "\n"
,IlIIlI->IlllI->actual_length,IlIIlI->IlllI);IIlIllII(IlIIlI->IlllI,llIIl,IlIIlI
->IlllI->actual_length);}lllIlIlIl-=IlIIlI->IlllI->actual_length;llIIl+=IlIIlI->
IlllI->actual_length;}return IlIlI;}static inline int lIIIllIIll(IIlII IIlIl,
struct urb*IlllI){int i;int IlIlI=(0x18d7+1892-0x203b);lIllIl*IIIllllIIl=(lIllIl
*)IIlIl+IlIlIlll(IIlIl);if(IIlIl->llIll.IIlIlIl!=IlllI->number_of_packets){
return-EINVAL;}IlllI->start_frame=IIlIl->llIll.IIlIlIIl;IlllI->error_count=IIlIl
->llIll.llIIIIIl;IlllI->actual_length=(0xe0f+2499-0x17d2);for(i=
(0x1d38+702-0x1ff6);i<IlllI->number_of_packets;i++){IlllI->iso_frame_desc[i].
status=lIllllIl(IIlIl->llIll.llIIIIl[i].Status);IlllI->iso_frame_desc[i].
actual_length=IIlIl->llIll.llIIIIl[i].Length;IlllI->actual_length+=IlllI->
iso_frame_desc[i].actual_length;}if(usb_pipein(IlllI->pipe)){lIlIIlIII(IlllI,
IIIllllIIl);}return IlIlI;}static inline int lIlIIlIIll(IIlII IIlIl,struct urb*
IlllI){int IlIlI=(0x11bd+516-0x13c1);IlllI->actual_length=min((lllII)IlllI->
transfer_buffer_length,IIlIl->lllIII.IllllI);if(usb_pipein(IlllI->pipe)){
IIlIllII(IlllI,(char*)IIlIl+sizeof(IIlIl->lllIII),IlllI->actual_length);}return 
IlIlI;}static inline int llIlllllII(IIlII IIlIl,struct urb*IlllI){int IlIlI=
(0x1a41+1842-0x2173);IlllI->actual_length=min((lllII)IlllI->
transfer_buffer_length,IIlIl->llIIlI.IllllI);if(usb_pipein(IlllI->pipe)){
IIlIllII(IlllI,(char*)IIlIl+sizeof(IIlIl->llIIlI),IlllI->actual_length);}return 
IlIlI;}int IIIllIlIl(IIlII IIlIl,struct list_head*llllllI,int*status){int IlIlI=
(0xe24+4051-0x1df7);struct lllllII*IlIIlI=list_entry(llllllI->next,struct 
lllllII,IIIIll);struct urb*IlllI=IlIIlI->IlllI;*status=lIllllIl(IIlIl->IlIII.
Status);switch(IIlIl->IlIII.IIIlIIl){case llIIllll:lIlll(
"\x75\x73\x62\x64\x5f\x75\x6e\x70\x61\x63\x6b\x5f\x75\x72\x62\x3a\x20\x47\x65\x74\x44\x65\x73\x63\x72\x69\x70\x74\x6f\x72" "\n"
);IlIlI=IlIlllIIl(IIlIl,IlllI,(0x386+8784-0x25d5));break;case lIlIllll:lIlll(
"\x75\x73\x62\x64\x5f\x75\x6e\x70\x61\x63\x6b\x5f\x75\x72\x62\x3a\x20\x53\x65\x74\x44\x65\x73\x63\x72\x69\x70\x74\x6f\x72" "\n"
);IlIlI=IlIlllIIl(IIlIl,IlllI,(0x4b4+5088-0x1894));break;case llIlllIl:lIlll(
"\x75\x73\x62\x64\x5f\x75\x6e\x70\x61\x63\x6b\x5f\x75\x72\x62\x3a\x20\x53\x65\x6c\x65\x63\x74\x43\x6f\x6e\x66\x69\x67\x75\x72\x61\x74\x69\x6f\x6e" "\n"
);IlIlI=(0x6d+4384-0x118d);break;case IIlIlIII:lIlll(
"\x75\x73\x62\x64\x5f\x75\x6e\x70\x61\x63\x6b\x5f\x75\x72\x62\x3a\x20\x53\x65\x6c\x65\x63\x74\x49\x6e\x74\x65\x72\x66\x61\x63\x65" "\n"
);IlIlI=(0x1671+1220-0x1b35);break;case llIIIIlI:lIlll(
"\x75\x73\x62\x64\x5f\x75\x6e\x70\x61\x63\x6b\x5f\x75\x72\x62\x3a\x20\x43\x6f\x6e\x74\x72\x6f\x6c\x54\x72\x61\x6e\x73\x66\x65\x72" "\n"
);IlIlI=lIlIIlIIll(IIlIl,IlllI);break;case IIllIIIl:lIlll(
"\x75\x73\x62\x64\x5f\x75\x6e\x70\x61\x63\x6b\x5f\x75\x72\x62\x3a\x20\x42\x75\x6c\x6b\x54\x72\x61\x6e\x73\x66\x65\x72" "\n"
);IlIlI=llIlIIIIll(IIlIl,llllllI);break;case lllIlIIl:lIlll(
"\x75\x73\x62\x64\x5f\x75\x6e\x70\x61\x63\x6b\x5f\x75\x72\x62\x3a\x20\x49\x73\x6f\x63\x68\x54\x72\x61\x6e\x73\x66\x65\x72" "\n"
);IlIlI=lIIIllIIll(IIlIl,IlllI);break;case lIlllIIl:lIlll(
"\x75\x73\x62\x64\x5f\x75\x6e\x70\x61\x63\x6b\x5f\x75\x72\x62\x3a\x20\x49\x6e\x74\x65\x72\x72\x75\x70\x74\x54\x72\x61\x6e\x73\x66\x65\x72" "\n"
);IlIlI=llIlllllII(IIlIl,IlllI);break;case IIIIlllI:lIlll(
"\x75\x73\x62\x64\x5f\x75\x6e\x70\x61\x63\x6b\x5f\x75\x72\x62\x3a\x20\x43\x6c\x65\x61\x72\x53\x74\x61\x6c\x6c" "\n"
);IlIlI=(0x1436+1999-0x1c05);break;case llIIlIII:lIlll(
"\x75\x73\x62\x64\x5f\x75\x6e\x70\x61\x63\x6b\x5f\x75\x72\x62\x3a\x20\x52\x65\x73\x65\x74\x50\x6f\x72\x74" "\n"
);IlIlI=(0xbe9+6562-0x258b);break;default:lIlll(
"\x75\x73\x62\x64\x5f\x75\x6e\x70\x61\x63\x6b\x5f\x75\x72\x62\x3a\x20\x75\x6e\x6b\x6e\x6f\x77\x6e\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e" "\n"
);IlIlI=-EINVAL;break;}return IlIlI;}void IllIlIlII(struct lIlIIl*lIllI,lllII*
busnum,lllII*devnum){if(busnum){*busnum=lIllI->parent->self.busnum;}
if(devnum){*devnum=lIllI->IllIlIl;}}
























































void IlllIIl(struct lIIIII*Illll,int lIIlI,int llllII,int lIIIIII){
switch(llllII){case IlIllllI:case lIllIlII:case IIlIIlII:llllIll(Illll,lIIlI,
IIlllllI);break;case IIIIlIll:llllIll(Illll,lIIlI,IIlllllI);break;case lllllIII:
Illll->lIIlIII[lIIlI]&=~USB_PORT_STAT_C_CONNECTION;break;case lIlllIlIl:Illll->
lIIlIII[lIIlI]&=~USB_PORT_STAT_C_ENABLE;break;case IIllllllI:Illll->lIIlIII[
lIIlI]&=~USB_PORT_STAT_C_SUSPEND;break;case lllIlIll:Illll->lIIlIII[lIIlI]&=~
USB_PORT_STAT_C_RESET;break;}
switch(Illll->lllllIIl[lIIlI]){case IIlllllI:if(llllII==lIIIIlll){llllIll(Illll,
lIIlI,lllIIll);}break;case lllIIll:if(llllII==lIIlIllI){llllIll(Illll,lIIlI,
llIlIII);}break;case llIlIII:if(llllII==IIIlllII){llllIll(Illll,lIIlI,lllIIll);}
if(llllII==llllIlII){llllIll(Illll,lIIlI,lllIllI);}break;case lllIllI:if(llllII
==IIIlllII){llllIll(Illll,lIIlI,lllIIll);}if(llllII==IIlIIlll){llllIll(Illll,
lIIlI,llIlIII);}if(llllII==lIlIlIIl){llllIll(Illll,lIIlI,IIIlIIll);}break;case 
IIIlIIll:if(llllII==IIIlllII){llllIll(Illll,lIIlI,lllIIll);}if(llllII==IIlIIlll)
{llllIll(Illll,lIIlI,llIlIII);}if(llllII==llllIlII){llllIll(Illll,lIIlI,lllIllI)
;}if(llllII==llllIlIIl){llllIll(Illll,lIIlI,IlIlIlIlI);}break;case IlIlIlIlI:if(
llllII==IIIlllII){llllIll(Illll,lIIlI,lllIIll);}if(llllII==IIlIIlll){llllIll(
Illll,lIIlI,llIlIII);}if(llllII==llllIlII){llllIll(Illll,lIIlI,lllIllI);}if(
llllII==IIlIlIIlI||llllII==llIIIllIl){llllIll(Illll,lIIlI,lIIllIlI);}break;case 
lIIllIlI:if(llllII==IIIlllII){llllIll(Illll,lIIlI,lllIIll);}if(llllII==IIlIIlll)
{llllIll(Illll,lIIlI,llIlIII);}if(llllII==llllIlII){llllIll(Illll,lIIlI,lllIllI)
;}if(llllII==lIlIlIIl){llllIll(Illll,lIIlI,IIIlIIll);}break;}}static inline int 
IllIIllIl(int speed){switch(speed){case USB_SPEED_HIGH:return 
USB_PORT_STAT_HIGH_SPEED;case USB_SPEED_LOW:return USB_PORT_STAT_LOW_SPEED;case 
USB_SPEED_FULL:return(0x50b+8197-0x2510);}return(0xe3b+1719-0x14f2);}
void llllIll(struct lIIIII*Illll,int lIIlI,int llllIlll){
int IIIIIlll=Illll->lllllIIl[lIIlI];if(llllIlll==IIIIIlll){return;}Illll->
lllllIIl[lIIlI]=llllIlll;Illll->IlllIII[lIIlI]=(0x7ed+2170-0x1067);if(IIIIIlll==
lllIllI){Illll->lIIlIII[lIIlI]|=USB_PORT_STAT_C_RESET;}if(IIIIIlll==lIIllIlI){
Illll->lIIlIII[lIIlI]|=USB_PORT_STAT_C_SUSPEND;}switch(llllIlll){case IIlllllI:
Illll->lIIIIIl[lIIlI]=(0xcb9+4689-0x1f0a);Illll->lIIlIII[lIIlI]=
(0x1adf+2406-0x2445);
break;case lllIIll:Illll->lIIIIIl[lIIlI]=USB_PORT_STAT_POWER;if(IIIIIlll!=
IIlllllI){Illll->lIIlIII[lIIlI]|=USB_PORT_STAT_C_CONNECTION;}
if(Illll->IlIIlII[lIIlI]){llllIll(Illll,lIIlI,llIlIII);}break;case llIlIII:Illll
->lIIIIIl[lIIlI]=USB_PORT_STAT_POWER|USB_PORT_STAT_CONNECTION;if(IIIIIlll==
lllIIll){Illll->lIIlIII[lIIlI]|=USB_PORT_STAT_C_CONNECTION;}break;case lllIllI:
Illll->lIIIIIl[lIIlI]=USB_PORT_STAT_POWER|USB_PORT_STAT_CONNECTION|
USB_PORT_STAT_RESET;
Illll->IlllIII[lIIlI]=jiffies+msecs_to_jiffies((0x44+7368-0x1cda));
Illll->IlllIII[lIIlI]+=Illll->IlllIII[lIIlI]?(0x3ef+4212-0x1463):
(0x1567+58-0x15a0);break;case IIIlIIll:Illll->lIIIIIl[lIIlI]=USB_PORT_STAT_POWER
|USB_PORT_STAT_CONNECTION|USB_PORT_STAT_ENABLE|IllIIllIl(Illll->IlIIlII[lIIlI]->
speed);break;case IlIlIlIlI:Illll->lIIIIIl[lIIlI]=USB_PORT_STAT_POWER|
USB_PORT_STAT_CONNECTION|USB_PORT_STAT_ENABLE|USB_PORT_STAT_SUSPEND|IllIIllIl(
Illll->IlIIlII[lIIlI]->speed);break;case lIIllIlI:Illll->lIIIIIl[lIIlI]=
USB_PORT_STAT_POWER|USB_PORT_STAT_CONNECTION|USB_PORT_STAT_ENABLE|
USB_PORT_STAT_SUSPEND|IllIIllIl(Illll->IlIIlII[lIIlI]->speed);
Illll->IlllIII[lIIlI]=jiffies+msecs_to_jiffies((0x807+7244-0x243f));
Illll->IlllIII[lIIlI]+=Illll->IlllIII[lIIlI]?(0x41c+8546-0x257e):
(0x1100+1851-0x183a);break;default:IIllIl(
"\x69\x6e\x76\x61\x6c\x69\x64\x20\x6e\x65\x77\x20\x70\x6f\x72\x74\x20\x73\x74\x61\x74\x65" "\n"
);break;}}
#if KERNEL_GT_EQ((0x74d+4369-0x185c),(0x14b7+1197-0x195e),(0x17dc+3879-0x26dc)) \
|| RHEL_RELEASE_GT_EQ((0x1e6f+1400-0x23e1),(0x4d9+2354-0xe08)) 

























void IlIllll(struct lIIIII*Illll,int lIIlI,int llllII,int lIIIIII){
switch(llllII){case IlIllllI:case IIlIIlII:llIIllI(Illll,lIIlI,IIlllllI);return;
case lllllIII:Illll->lIIlIII[lIIlI]&=~USB_PORT_STAT_C_CONNECTION;return;case 
lllIlIll:Illll->lIIlIII[lIIlI]&=~USB_PORT_STAT_C_RESET;return;case IIIIIIlIl:
Illll->lIIlIII[lIIlI]&=~USB_PORT_STAT_C_BH_RESET;return;case lIIlIlllI:Illll->
lIIlIII[lIIlI]&=~USB_PORT_STAT_C_LINK_STATE;return;case IlIIIIll:if(lIIIIII==
(0x7d6+2526-0x11b0)){
llIIllI(Illll,lIIlI,llIlIII);return;}break;}
switch(Illll->lllllIIl[lIIlI]){case IIlllllI:if(llllII==lIllIlII){llIIllI(Illll,
lIIlI,lllIIll);}break;case llIlIIIl:if(llllII==lIIIIlll){llIIllI(Illll,lIIlI,
lllIIll);}if(llllII==llllIlII){llIIllI(Illll,lIIlI,lllIllI);}break;case lllIIll:
if(llllII==IIIIlIll){llIIllI(Illll,lIIlI,llIlIIIl);}if(llllII==lIIlIllI){llIIllI
(Illll,lIIlI,IIIlIIll);}break;case llIlIII:if(llllII==IIIIlIll){llIIllI(Illll,
lIIlI,llIlIIIl);}if(llllII==llllIlII){llIIllI(Illll,lIIlI,lllIllI);}if(llllII==
IlIIIIll&&lIIIIII==(0x4c3+4943-0x180d)){


llIIllI(Illll,lIIlI,lllIIll);}break;case IIIlIIll:if(llllII==IIIIlIll){llIIllI(
Illll,lIIlI,llIlIIIl);}if(llllII==IIIlllII){llIIllI(Illll,lIIlI,lllIIll);}if(
llllII==llllIlII){llIIllI(Illll,lIIlI,lllIllI);}if(llllII==IlIIIIll&&lIIIIII==
(0x1d23+1035-0x212e)){
if(Illll->IlIIIll[lIIlI]==USB_SS_PORT_LS_U3){

Illll->lIIlIII[lIIlI]|=USB_PORT_STAT_C_LINK_STATE;}lllIIlI(Illll,lIIlI,
USB_SS_PORT_LS_U0);}if(llllII==IlIIIIll&&lIIIIII==(0x1043+4506-0x21dc)){

if(Illll->IlIIIll[lIIlI]==USB_SS_PORT_LS_U0){lllIIlI(Illll,lIIlI,
USB_SS_PORT_LS_U1);}}if(llllII==IlIIIIll&&lIIIIII==(0x532+3691-0x139b)){

if(Illll->IlIIIll[lIIlI]==USB_SS_PORT_LS_U0){lllIIlI(Illll,lIIlI,
USB_SS_PORT_LS_U2);}}if(llllII==IlIIIIll&&lIIIIII==(0x1f93+752-0x2280)){

if(Illll->IlIIIll[lIIlI]==USB_SS_PORT_LS_U0||Illll->IlIIIll[lIIlI]==
USB_SS_PORT_LS_U1||Illll->IlIIIll[lIIlI]==USB_SS_PORT_LS_U2){

if(Illll->IlIIIll[lIIlI]!=USB_SS_PORT_LS_U0){lllIIlI(Illll,lIIlI,
USB_SS_PORT_LS_U0);}lllIIlI(Illll,lIIlI,USB_SS_PORT_LS_U3);}}break;case lllIllI:
if(llllII==IIIIlIll){llIIllI(Illll,lIIlI,llIlIIIl);}if(llllII==IIIlllII){llIIllI
(Illll,lIIlI,lllIIll);}if(llllII==lIlIlIIl){llIIllI(Illll,lIIlI,IIIlIIll);}break
;}}static inline int IllIlIlIl(int speed){switch(speed){case USB_SPEED_SUPER:
return USB_PORT_STAT_SPEED_5GBPS;default:return(0x1147+2061-0x1954);}return
(0x684+1752-0xd5c);}
void llIIllI(struct lIIIII*Illll,int lIIlI,int llllIlll){int lIIlllIII=Illll->
lIIIIIl[lIIlI];int IIIIIlll=Illll->lllllIIl[lIIlI];if(llllIlll==IIIIIlll){return
;}Illll->lllllIIl[lIIlI]=llllIlll;Illll->IlllIII[lIIlI]=(0x848+4929-0x1b89);
switch(llllIlll){case IIlllllI:lllIIlI(Illll,lIIlI,USB_SS_PORT_LS_SS_DISABLED);
Illll->lIIIIIl[lIIlI]=Illll->IlIIIll[lIIlI];Illll->lIIlIII[lIIlI]=
(0x1835+3411-0x2588);
break;case llIlIIIl:lllIIlI(Illll,lIIlI,USB_SS_PORT_LS_RX_DETECT);Illll->lIIIIIl
[lIIlI]=Illll->IlIIIll[lIIlI];Illll->lIIlIII[lIIlI]=(0xf91+2927-0x1b00);
break;case llIlIII:lllIIlI(Illll,lIIlI,USB_SS_PORT_LS_SS_DISABLED);Illll->
lIIIIIl[lIIlI]=Illll->IlIIIll[lIIlI]|USB_SS_PORT_STAT_POWER;if(lIIlllIII&
USB_PORT_STAT_CONNECTION){Illll->lIIlIII[lIIlI]|=USB_PORT_STAT_C_CONNECTION;
}break;case lllIIll:lllIIlI(Illll,lIIlI,USB_SS_PORT_LS_RX_DETECT);Illll->lIIIIIl
[lIIlI]=Illll->IlIIIll[lIIlI]|USB_SS_PORT_STAT_POWER;if(lIIlllIII&
USB_PORT_STAT_CONNECTION){Illll->lIIlIII[lIIlI]|=USB_PORT_STAT_C_CONNECTION;
}
if(Illll->IlIIlII[lIIlI]){llIIllI(Illll,lIIlI,IIIlIIll);}break;case IIIlIIll:
lllIIlI(Illll,lIIlI,USB_SS_PORT_LS_U0);Illll->lIIIIIl[lIIlI]=Illll->IlIIIll[
lIIlI]|USB_SS_PORT_STAT_POWER|USB_PORT_STAT_CONNECTION|USB_PORT_STAT_ENABLE|
IllIlIlIl(Illll->IlIIlII[lIIlI]->speed);if(IIIIIlll==lllIllI){Illll->lIIlIII[
lIIlI]|=USB_PORT_STAT_C_RESET;
}if(IIIIIlll==lllIIll){Illll->lIIlIII[lIIlI]|=USB_PORT_STAT_C_CONNECTION;
}break;case lllIllI:Illll->lIIIIIl[lIIlI]=Illll->IlIIIll[lIIlI]|
USB_SS_PORT_STAT_POWER|USB_PORT_STAT_RESET|(lIIlllIII&USB_PORT_STAT_CONNECTION);

Illll->IlllIII[lIIlI]=jiffies+msecs_to_jiffies((0x11d5+1506-0x1785));
Illll->IlllIII[lIIlI]+=Illll->IlllIII[lIIlI]?(0x1127+2726-0x1bcd):
(0xc84+1129-0x10ec);break;default:lIlll(
"\x69\x6e\x76\x61\x6c\x69\x64\x20\x70\x6f\x72\x74\x20\x73\x74\x61\x74\x65" "\n")
;break;}}
void lllIIlI(struct lIIIII*Illll,int lIIlI,int IlIIIIlII){switch(IlIIIIlII){case
 USB_SS_PORT_LS_U0:lIlll(
"\x73\x65\x74\x5f\x6c\x69\x6e\x6b\x5f\x73\x74\x61\x74\x65\x20\x55\x53\x42\x5f\x53\x53\x5f\x50\x4f\x52\x54\x5f\x4c\x53\x5f\x55\x30" "\n"
);
Illll->IlIIIll[lIIlI]=USB_SS_PORT_LS_U0;break;case USB_SS_PORT_LS_U1:lIlll(
"\x73\x65\x74\x5f\x6c\x69\x6e\x6b\x5f\x73\x74\x61\x74\x65\x20\x55\x53\x42\x5f\x53\x53\x5f\x50\x4f\x52\x54\x5f\x4c\x53\x5f\x55\x31" "\n"
);
Illll->IlIIIll[lIIlI]=USB_SS_PORT_LS_U1;break;case USB_SS_PORT_LS_U2:lIlll(
"\x73\x65\x74\x5f\x6c\x69\x6e\x6b\x5f\x73\x74\x61\x74\x65\x20\x55\x53\x42\x5f\x53\x53\x5f\x50\x4f\x52\x54\x5f\x4c\x53\x5f\x55\x32" "\n"
);
Illll->IlIIIll[lIIlI]=USB_SS_PORT_LS_U2;break;case USB_SS_PORT_LS_U3:lIlll(
"\x73\x65\x74\x5f\x6c\x69\x6e\x6b\x5f\x73\x74\x61\x74\x65\x20\x55\x53\x42\x5f\x53\x53\x5f\x50\x4f\x52\x54\x5f\x4c\x53\x5f\x55\x33" "\n"
);
Illll->IlIIIll[lIIlI]=USB_SS_PORT_LS_U3;break;case USB_SS_PORT_LS_SS_DISABLED:
lIlll(
"\x73\x65\x74\x5f\x6c\x69\x6e\x6b\x5f\x73\x74\x61\x74\x65\x20\x55\x53\x42\x5f\x53\x53\x5f\x50\x4f\x52\x54\x5f\x4c\x53\x5f\x53\x53\x5f\x44\x49\x53\x41\x42\x4c\x45\x44" "\n"
);
Illll->IlIIIll[lIIlI]=USB_SS_PORT_LS_SS_DISABLED;break;case 
USB_SS_PORT_LS_RX_DETECT:lIlll(
"\x73\x65\x74\x5f\x6c\x69\x6e\x6b\x5f\x73\x74\x61\x74\x65\x20\x55\x53\x42\x5f\x53\x53\x5f\x50\x4f\x52\x54\x5f\x4c\x53\x5f\x52\x58\x5f\x44\x45\x54\x45\x43\x54" "\n"
);
Illll->IlIIIll[lIIlI]=USB_SS_PORT_LS_RX_DETECT;break;}Illll->lIIIIIl[lIIlI]&=~
USB_PORT_STAT_LINK_STATE;Illll->lIIIIIl[lIIlI]|=Illll->IlIIIll[lIIlI];}
#endif 
#endif 

