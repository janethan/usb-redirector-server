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
struct IIIlll*IlllIllI=NULL;struct usb_hcd*IIIllll=NULL;
#if KERNEL_GT_EQ((0x1ac1+139-0x1b4a),(0x1adf+1188-0x1f7d),(0x701+8016-0x262a)) \
|| RHEL_RELEASE_GT_EQ((0xae0+4008-0x1a82),(0xffc+426-0x11a3)) 
struct usb_hcd*IIlIllI=NULL;
#define IIIIIIl(IIIIlI) (((IIIIlI)->speed == HCD_USB3) ? "\x75\x73\x62\x33" : \
"\x75\x73\x62\x32")
#else
#define IIIIIIl(IIIIlI) "\x55\x53\x42\x32"
#endif
#if defined(CONFIG_X86_32) && !defined(_USBD_VHCI_NO_DMA_)
int IlllIIll=(0x1775+572-0x19b1);
#endif
#ifdef _USBD_DEBUG_MEMORY_
extern atomic_t llIIlIIIl;extern atomic_t IlIllllII;extern atomic_t IlIlIIllI;
extern atomic_t IlIIlllI;extern atomic_t IIlIlIIll;
#endif 


static int IlIllIllI(struct platform_device*);static int IlllIlllI(struct 
platform_device*);static void IlllIIIIl(struct device*dev);static int IlIllllll(
struct usb_hcd*IllIl);static int IlIlIIlll(struct usb_hcd*IllIl);static void 
lllIlIIIl(struct usb_hcd*IllIl);static int IIIllIIlI(struct usb_hcd*IllIl);
#if KERNEL_LT((0x1829+1356-0x1d73),(0x9e8+3014-0x15a8),(0x78d+5849-0x1e4e))
static int lIlIIIlI(struct usb_hcd*IllIl,struct urb*urb);static int lIllllIl(
struct usb_hcd*IllIl,struct usb_host_endpoint*ep,struct urb*urb,gfp_t llIlI);
#else
static int lIlIIIlI(struct usb_hcd*IllIl,struct urb*urb,int status);static int 
lIllllIl(struct usb_hcd*IllIl,struct urb*urb,gfp_t llIlI);
#endif
static void llllIlllI(struct usb_hcd*IllIl,struct usb_host_endpoint*ep);static 
int lIlIllIIl(struct usb_hcd*IllIl,u16 lIIIlIlII,u16 wValue,u16 wIndex,char*
IIIlI,u16 wLength);static int IlIllIlll(struct usb_hcd*IllIl,char*IIIlI);static 
int lIllIIlII(struct usb_hcd*IllIl);static int IIlIIlIII(struct usb_hcd*IllIl);
#if KERNEL_GT_EQ((0x1d5d+753-0x204c),(0x1d9c+1031-0x219d),(0xc27+5363-0x20f3)) \
|| RHEL_RELEASE_GT_EQ((0x668+5099-0x1a4d),(0xe4f+420-0xff0)) 
static int IllllIlIl(struct usb_hcd*IllIl,struct usb_device*llIII,struct 
usb_host_endpoint**llIIlIIlI,unsigned int IllllIlII,unsigned int llIllllll,gfp_t
 llIlI);static int lIIlIIllI(struct usb_hcd*IllIl,struct usb_device*llIII,struct
 usb_host_endpoint**llIIlIIlI,unsigned int IllllIlII,gfp_t llIlI);
#endif
static int lllIllIII(struct lIIIII*lIIII,int lIllI,int IlIlIll,int lllllII);
static int IIlIlIlII(struct lIIIII*lIIII,int lIllI,int IlIlIll);static void 
IlIIIII(struct lIIIII*lIIII,int lIllI,int lIIlIIIl);static void IlllIIl(struct 
lIIIII*lIIII,int lIllI,int llllII,int lllllII);
#if KERNEL_GT_EQ((0x206f+961-0x242e),(0x11d+5915-0x1832),(0x120a+2379-0x1b2e)) \
|| RHEL_RELEASE_GT_EQ((0x645+2827-0x114a),(0x127a+1443-0x181a)) 
static int IlIIIlIlI(struct lIIIII*lIIII,int lIllI,int IlIlIll,int lllllII);
static int lllIIIlIl(struct lIIIII*lIIII,int lIllI,int IlIlIll);static void 
IIlIlIl(struct lIIIII*lIIII,int lIllI,int llllII,int lllllII);static void 
llIIllI(struct lIIIII*lIIII,int lIllI,int lIIlIIIl);static void lllIIlI(struct 
lIIIII*lIIII,int lIllI,int IlIIIIlII);
#endif
#define lIIlIII(IllIl) ((struct lIIIII*)(IllIl->hcd_priv))
static struct platform_driver IlIIIllll={.probe=IlIllIllI,.remove=IlllIlllI,.
driver={.name=IlIlIIl,.owner=THIS_MODULE,},};static struct platform_device 
llIllIlI={.name=IlIlIIl,.id=-(0x15f3+2522-0x1fcc),.dev={
.release=IlllIIIIl,},};static struct hc_driver IlIIllIII={.description=IlIlIIl,.
product_desc=
"\x56\x69\x72\x74\x75\x61\x6c\x20\x55\x53\x42\x20\x48\x6f\x73\x74\x20\x43\x6f\x6e\x74\x72\x6f\x6c\x6c\x65\x72"
,.hcd_priv_size=sizeof(struct lIIIII),
#if KERNEL_GT_EQ((0xcad+2116-0x14ef),(0x119f+404-0x132d),(0x56a+8366-0x25f1)) ||\
 RHEL_RELEASE_GT_EQ((0x3fd+4165-0x143c),(0x1d90+27-0x1da8)) 
.flags=HCD_USB3|HCD_SHARED,
#else
.flags=HCD_USB2,
#endif
.reset=IlIllllll,.start=IlIlIIlll,.stop=lllIlIIIl,.urb_enqueue=lIllllIl,.
urb_dequeue=lIlIIIlI,.endpoint_disable=llllIlllI,.get_frame_number=IIIllIIlI,.
hub_status_data=IlIllIlll,.hub_control=lIlIllIIl,.bus_suspend=lIllIIlII,.
bus_resume=IIlIIlIII,
#if KERNEL_GT_EQ((0x1163+1020-0x155d),(0x147f+2743-0x1f30),(0x1188+1360-0x16b1))\
 || RHEL_RELEASE_GT_EQ((0x1924+3517-0x26db),(0x121f+4375-0x2333)) 
.alloc_streams=IllllIlIl,.free_streams=lIIlIIllI,
#endif
};static struct list_head IIllIII;static spinlock_t IIlIII;
#if defined(CONFIG_X86_32) && !defined(_USBD_VHCI_NO_DMA_)
#  if KERNEL_LT((0x77f+6143-0x1f7c),(0x172d+3807-0x2606),(0xb2+9834-0x2704))
static u64 IllllIIII=DMA_32BIT_MASK;
#  else
static u64 IllllIIII=DMA_BIT_MASK((0x1ab7+1014-0x1e8d));
#  endif
#endif
static int IlIllIllI(struct platform_device*IIIlIl){struct lIIIII*lIIII;int 
IIIll=(0x616+8041-0x257f);int i;Illll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x70\x6c\x61\x74\x66\x6f\x72\x6d\x5f\x64\x72\x69\x76\x65\x72\x5f\x70\x72\x6f\x62\x65\x3a\x20\x2b\x2b" "\n"
);do{
#if defined(CONFIG_X86_32) && !defined(_USBD_VHCI_NO_DMA_)
if(IlllIIll)IIIlIl->dev.dma_mask=&IllllIIII;
#endif

IIIllll=usb_create_hcd(&IlIIllIII,&IIIlIl->dev,llIIIl(&IIIlIl->dev));if(IIIllll
==NULL){IIIll=-ENOMEM;break;}
#if KERNEL_GT_EQ((0x8ca+1160-0xd50),(0x99b+635-0xc10),(0x201+8478-0x2305))
IIIllll->has_tt=(0x1ad1+1008-0x1ec0);
#endif
lIIII=lIIlIII(IIIllll);memset(lIIII,(0x566+135-0x5ed),sizeof(*lIIII));lIIII->
IllIl=IIIllll;spin_lock_init(&lIIII->lock);for(i=(0x1453+230-0x1539);i<llIlIlI;i
++){IlllIIl(lIIII,i,llllIIll,(0x133+3632-0xf63));}IIIll=usb_add_hcd(IIIllll,
(0xcd5+5050-0x208f),(0xe80+1343-0x13bf));if(IIIll!=(0x78c+7434-0x2496)){break;}
#if KERNEL_GT_EQ((0x42b+6359-0x1d00),(0x81c+3670-0x166c),(0x757+3741-0x15cd)) ||\
 RHEL_RELEASE_GT_EQ((0x12d3+4454-0x2433),(0x1321+3804-0x21fa)) 

IIlIllI=usb_create_shared_hcd(&IlIIllIII,&IIIlIl->dev,llIIIl(&IIIlIl->dev),
IIIllll);if(IIlIllI==NULL){IIIll=-ENOMEM;break;}lIIII=lIIlIII(IIlIllI);memset(
lIIII,(0x1a0+6863-0x1c6f),sizeof(*lIIII));lIIII->IllIl=IIlIllI;spin_lock_init(&
lIIII->lock);for(i=(0x75+2666-0xadf);i<llIlIlI;i++){IIlIlIl(lIIII,i,llllIIll,
(0x214+9350-0x269a));}IIIll=usb_add_hcd(IIlIllI,(0x5dc+6762-0x2046),
(0xb86+3318-0x187c));if(IIIll!=(0x994+6616-0x236c)){break;}lIIlIII(IIIllll)->
llllllll=IIlIllI;lIIlIII(IIlIllI)->llllllll=IIIllll;
#endif 
}while((0x573+7957-0x2488));if(IIIll!=(0xd8d+6453-0x26c2)){if(IIIllll){
usb_put_hcd(IIIllll);IIIllll=NULL;}
#if KERNEL_GT_EQ((0x1276+1570-0x1896),(0x71f+7272-0x2381),(0xaf3+6757-0x2531)) \
|| RHEL_RELEASE_GT_EQ((0x241+5531-0x17d6),(0xba7+2965-0x1739)) 
if(IIlIllI){usb_put_hcd(IIlIllI);IIlIllI=NULL;}
#endif
}Illll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x70\x6c\x61\x74\x66\x6f\x72\x6d\x5f\x64\x72\x69\x76\x65\x72\x5f\x70\x72\x6f\x62\x65\x3a\x20\x2d\x2d\x20\x72\x65\x73\x75\x6c\x74\x20\x3d\x20\x25\x64" "\n"
,IIIll);return IIIll;}static int IlllIlllI(struct platform_device*IIIlIl){struct
 usb_hcd*IllIl=platform_get_drvdata(IIIlIl);struct lIIIII*lIIII=lIIlIII(IllIl);
Illll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x70\x6c\x61\x74\x66\x6f\x72\x6d\x5f\x64\x72\x69\x76\x65\x72\x5f\x72\x65\x6d\x6f\x76\x65\x5b\x25\x73\x5d\x3a\x20\x2b\x2b" "\n"
,IIIIIIl(IllIl));if(lIIII->llllllll){usb_remove_hcd(lIIII->llllllll);usb_put_hcd
(lIIII->llllllll);lIIII->llllllll=NULL;}usb_remove_hcd(IllIl);usb_put_hcd(IllIl)
;Illll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x70\x6c\x61\x74\x66\x6f\x72\x6d\x5f\x64\x72\x69\x76\x65\x72\x5f\x72\x65\x6d\x6f\x76\x65\x3a\x20\x2d\x2d" "\n"
);return(0x23bb+54-0x23f1);}static void IlllIIIIl(struct device*dev){return;}
static int IlIllllll(struct usb_hcd*IllIl){Illll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x72\x65\x73\x65\x74\x5b\x25\x73\x5d" "\n"
,IIIIIIl(IllIl));


#if KERNEL_GT_EQ((0x1a08+900-0x1d8a),(0x69b+1338-0xbcf),(0xbab+4039-0x1b4b)) || \
RHEL_RELEASE_GT_EQ((0x1c5d+2149-0x24bc),(0xa60+5177-0x1e96)) 
if(usb_hcd_is_primary_hcd(IllIl)){
Illll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x72\x65\x73\x65\x74\x3a\x20\x73\x65\x74\x74\x69\x6e\x67\x20\x75\x70\x20\x55\x53\x42\x32\x20\x68\x63\x64" "\n"
);IllIl->speed=HCD_USB2;IllIl->self.root_hub->speed=USB_SPEED_HIGH;}
#endif
return(0x56d+7334-0x2213);}static int IlIlIIlll(struct usb_hcd*IllIl){int i;
Illll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x73\x74\x61\x72\x74\x5b\x25\x73\x5d" "\n"
,IIIIIIl(IllIl));IllIl->power_budget=(0x2003+1147-0x247e);IllIl->state=
HC_STATE_RUNNING;IllIl->uses_new_polling=(0xeac+2429-0x1828);for(i=
(0xc9+4729-0x1342);i<llIlIlI;i++){
#if KERNEL_GT_EQ((0x64d+8279-0x26a2),(0x986+7561-0x2709),(0x13b2+4158-0x23c9)) \
|| RHEL_RELEASE_GT_EQ((0x53f+8570-0x26b3),(0xe5c+3520-0x1c19)) 
if(IllIl->speed==HCD_USB3){IIlIlIl(lIIlIII(IllIl),i,lIllIIll,(0x16e4+934-0x1a8a)
);}else
#endif
{IlllIIl(lIIlIII(IllIl),i,lIllIIll,(0x1af8+2467-0x249b));}}return
(0x2460+364-0x25cc);}static void lllIlIIIl(struct usb_hcd*IllIl){int i;Illll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x73\x74\x6f\x70\x5b\x25\x73\x5d" "\n",
IIIIIIl(IllIl));for(i=(0xba6+406-0xd3c);i<llIlIlI;i++){
#if KERNEL_GT_EQ((0x162c+4223-0x26a9),(0x105f+635-0x12d4),(0x404+3321-0x10d6)) \
|| RHEL_RELEASE_GT_EQ((0x9d5+4740-0x1c53),(0x16a8+2376-0x1fed)) 
if(IllIl->speed==HCD_USB3){IIlIlIl(lIIlIII(IllIl),i,IlIlIIII,(0x7b2+7337-0x245b)
);}else
#endif
{IlllIIl(lIIlIII(IllIl),i,IlIlIIII,(0x950+4607-0x1b4f));}}}static int IIIllIIlI(
struct usb_hcd*IllIl){Illll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x67\x65\x74\x5f\x66\x72\x61\x6d\x65\x5f\x6e\x75\x6d\x62\x65\x72\x5b\x25\x73\x5d" "\n"
,IIIIIIl(IllIl));return(0xa1c+4880-0x1d2c);}int IIllIlllI(struct lIlIIl*llllI,
struct lllIIl**lIllIIlI,struct urb*lIlll){Illll(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x61\x64\x64\x5f\x75\x72\x62\x3a\x20\x75\x72\x62\x3d\x25\x70" "\n"
,lIlll);if(*lIllIIlI){struct IIIlIll*IllIlI;Illll(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x61\x64\x64\x5f\x75\x72\x62\x3a\x20\x65\x78\x69\x73\x74\x69\x6e\x67\x20\x70\x76\x72\x65\x71" "\n"
);IllIlI=IllIllI(sizeof(struct IIIlIll),GFP_ATOMIC);if(IllIlI){IllIlI->lIlll=
lIlll;list_add_tail(&IllIlI->IIIIll,&(*lIllIIlI)->IIIIlIl);}else{Illll(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x61\x64\x64\x5f\x75\x72\x62\x3a\x20\x6e\x6f\x20\x6d\x65\x6d\x6f\x72\x79\x20\x66\x6f\x72\x20\x75\x72\x62\x5f\x6c\x69\x73\x74" "\n"
);return-ENOMEM;}}else{Illll(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x61\x64\x64\x5f\x75\x72\x62\x3a\x20\x6e\x65\x77\x20\x70\x76\x72\x65\x71" "\n"
);*lIllIIlI=lIlllIIIl(llllI,GFP_ATOMIC);if(*lIllIIlI==NULL){Illll(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x61\x64\x64\x5f\x75\x72\x62\x3a\x20\x6e\x6f\x20\x6d\x65\x6d\x6f\x72\x79\x20\x66\x6f\x72\x20\x71\x75\x65\x75\x65\x5f\x65\x6e\x74\x72\x79" "\n"
);return-ENOMEM;}else{(*lIllIIlI)->urb.lIlll=lIlll;list_add_tail(&(*lIllIIlI)->
urb.IIIIll,&(*lIllIIlI)->IIIIlIl);}}return(0xce3+938-0x108d);}
#if KERNEL_LT((0xe2b+358-0xf8f),(0x21fd+572-0x2433),(0x3a4+985-0x765))
static int lIllllIl(struct usb_hcd*IllIl,struct usb_host_endpoint*ep,struct urb*
urb,gfp_t llIlI)
#else
static int lIllllIl(struct usb_hcd*IllIl,struct urb*urb,gfp_t llIlI)
#endif
{int IIIll=-EINPROGRESS;struct lIIIII*lIIII=lIIlIII(IllIl);struct lIlIIl*llllI=
NULL;struct lllIIl*IIlIl=NULL;unsigned long flags;int IIIlllIlI=
(0x566+7054-0x20f4);Illll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x75\x72\x62\x5f\x65\x6e\x71\x75\x65\x75\x65\x5b\x25\x73\x5d\x3a\x20\x2b\x2b\x20\x75\x72\x62\x3d\x30\x78\x25\x70\x20\x75\x73\x62\x5f\x64\x65\x76\x69\x63\x65\x3d\x30\x78\x25\x70\x20\x70\x61\x72\x65\x6e\x74\x3d\x30\x78\x25\x70\x20\x64\x65\x76\x6e\x75\x6d\x3d\x25\x64\x20\x6e\x75\x6d\x5f\x73\x67\x73\x3d\x25\x64" "\n"
,IIIIIIl(IllIl),urb,urb->dev,urb->dev->dev.parent,urb->dev->devnum,
#if KERNEL_GT_EQ((0xc79+5914-0x2391),(0x9d5+5829-0x2094),(0x1a46+2557-0x2424))
urb->num_sgs);
#else
(0xa70+5626-0x206a));
#endif
llIIllIII(urb,(0x154+3355-0xe6f));do
{
#if KERNEL_GT_EQ((0x38a+551-0x5af),(0x2fc+1692-0x992),(0x42f+5877-0x1b0c))
struct usb_host_endpoint*ep=urb->ep;
#endif
spin_lock_irqsave(&lIIII->lock,flags);
#if KERNEL_GT_EQ((0x4bd+5594-0x1a95),(0xce4+3729-0x1b6f),(0x135f+5036-0x26f3))


IIIll=usb_hcd_link_urb_to_ep(IllIl,urb);
#else
spin_lock(&urb->lock);IIIll=(urb->status==-EINPROGRESS)?(0x1779+356-0x18dd):urb
->status;spin_unlock(&urb->lock);
#endif
if(IIIll!=(0x18f3+2770-0x23c5)){spin_unlock_irqrestore(&lIIII->lock,flags);Illll
(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x75\x72\x62\x5f\x65\x6e\x71\x75\x65\x75\x65\x3a\x20\x75\x72\x62\x20\x61\x6c\x72\x65\x61\x64\x79\x20\x75\x6e\x6c\x69\x6e\x6b\x65\x64" "\n"
);break;}
#if KERNEL_GT_EQ((0x4c6+116-0x538),(0x1ee6+545-0x2101),(0x168a+4072-0x264b)) || \
RHEL_RELEASE_GT_EQ((0x60f+8053-0x257e),(0x1596+2645-0x1fe8)) 








if(IllIl->speed==HCD_USB3){
llllI=IIIIIllIl(IllIl,urb->dev->portnum);}else
#endif
{
llllI=IlIIlIIll(IllIl,usb_pipedevice(urb->pipe));}if(llllI==NULL){
#if KERNEL_GT_EQ((0xab5+5860-0x2197),(0x1d21+2264-0x25f3),(0x1580+1623-0x1bbf))
usb_hcd_unlink_urb_from_ep(IllIl,urb);
#endif
spin_unlock_irqrestore(&lIIII->lock,flags);Illll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x75\x72\x62\x5f\x65\x6e\x71\x75\x65\x75\x65\x3a\x20\x64\x65\x76\x69\x63\x65\x20\x6e\x6f\x74\x20\x66\x6f\x75\x6e\x64" "\n"
);IIIll=-ENODEV;break;}if(usb_pipedevice(urb->pipe)==(0xad5+1716-0x1189)&&
usb_pipetype(urb->pipe)==PIPE_CONTROL){struct usb_ctrlrequest*llIlll=(struct 
usb_ctrlrequest*)urb->setup_packet;if(!llIlll){
#if KERNEL_GT_EQ((0xa5b+1152-0xed9),(0x19d7+2690-0x2453),(0x10b3+876-0x1407))
usb_hcd_unlink_urb_from_ep(IllIl,urb);
#endif
spin_unlock_irqrestore(&lIIII->lock,flags);Illll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x75\x72\x62\x5f\x65\x6e\x71\x75\x65\x75\x65\x3a\x20\x69\x6e\x76\x61\x6c\x69\x64\x20\x63\x6f\x6e\x74\x72\x6f\x6c\x20\x74\x72\x61\x6e\x73\x66\x65\x72\x20\x75\x72\x62" "\n"
);IIIll=-EINVAL;break;}if(llIlll->bRequest==USB_REQ_SET_ADDRESS){Illll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x75\x72\x62\x5f\x65\x6e\x71\x75\x65\x75\x65\x3a\x20\x55\x53\x42\x5f\x52\x45\x51\x5f\x53\x45\x54\x5f\x41\x44\x44\x52\x45\x53\x53\x20\x61\x64\x64\x72\x65\x73\x73\x3d\x25\x64" "\n"
,llIlll->wValue);llllI->llIIlll=le16_to_cpu(llIlll->wValue);
#if KERNEL_GT_EQ((0x1712+653-0x199d),(0x425+5923-0x1b42),(0x2599+6-0x2587))
usb_hcd_unlink_urb_from_ep(IllIl,urb);
#endif
spin_unlock(&lIIII->lock);
#if KERNEL_LT((0xcd0+1546-0x12d8),(0x1133+202-0x11f7),(0x188a+3050-0x245c))

spin_lock(&urb->lock);if(urb->status==-EINPROGRESS)urb->status=
(0x17d5+1630-0x1e33);spin_unlock(&urb->lock);
#else

#endif
#if KERNEL_LT((0x1228+2980-0x1dca),(0x13fb+500-0x15e9),(0x1014+4867-0x2304))
usb_hcd_giveback_urb(llllI->parent,urb,NULL);
#elif KERNEL_LT((0x1dc3+458-0x1f8b),(0x2ef+1798-0x9ef),(0x278+8676-0x2444))
usb_hcd_giveback_urb(llllI->parent,urb);
#else
usb_hcd_giveback_urb(llllI->parent,urb,(0xc22+4780-0x1ece));
#endif
local_irq_restore(flags);IIIll=(0x16fa+814-0x1a28);break;}}IIlIl=ep->hcpriv;
IIIll=IIllIlllI(llllI,&IIlIl,urb);if(IIIll!=(0x4ec+717-0x7b9)){
#if KERNEL_GT_EQ((0x1c88+2527-0x2665),(0x705+5417-0x1c28),(0x95f+4024-0x18ff))
usb_hcd_unlink_urb_from_ep(IllIl,urb);
#endif
spin_unlock_irqrestore(&lIIII->lock,flags);break;}urb->hcpriv=IIlIl;if((
usb_pipetype(urb->pipe)==PIPE_BULK)&&(urb->transfer_flags&URB_NO_INTERRUPT)&&((
usb_pipein(urb->pipe)&&(urb->transfer_flags&URB_SHORT_NOT_OK))||(usb_pipeout(urb
->pipe)&&!(urb->transfer_flags&URB_ZERO_PACKET)))){Illll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x75\x72\x62\x5f\x65\x6e\x71\x75\x65\x75\x65\x3a\x20\x6d\x65\x72\x67\x65\x20\x73\x70\x6c\x69\x74\x74\x65\x64\x20\x75\x72\x62" "\n"
);if(ep->hcpriv==NULL){ep->hcpriv=IIlIl;
spin_lock(&llllI->IllIll);list_add_tail(&IIlIl->llllIl,&llllI->IlIIlII);
spin_unlock(&llllI->IllIll);}}else{spin_lock(&llllI->IllIll);if(ep->hcpriv){ep->
hcpriv=NULL;
list_del(&IIlIl->llllIl);}list_add_tail(&IIlIl->llllIl,&llllI->IIlllll);
IIIlllIlI=(0xdc0+5650-0x23d1);spin_unlock(&llllI->IllIll);}
spin_unlock_irqrestore(&lIIII->lock,flags);if(IIIlllIlI){wake_up(&llllI->lIIllI)
;}IIIll=-EINPROGRESS;}while((0x11d7+4678-0x241d));if(llllI){
IlIllIIl(llllI);}if(IIIll==-EINPROGRESS){
Illll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x75\x72\x62\x5f\x65\x6e\x71\x75\x65\x75\x65\x3a\x20\x2d\x2d\x20\x72\x65\x73\x75\x6c\x74\x3d\x25\x64" "\n"
,(0x914+4086-0x190a));return(0x10e4+3872-0x2004);}Illll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x75\x72\x62\x5f\x65\x6e\x71\x75\x65\x75\x65\x3a\x20\x2d\x2d\x20\x72\x65\x73\x75\x6c\x74\x3d\x25\x64" "\n"
,IIIll);return IIIll;}
#if KERNEL_LT((0xb00+1862-0x1244),(0x13c7+135-0x1448),(0x10a+1257-0x5db))
static int lIlIIIlI(struct usb_hcd*IllIl,struct urb*urb)
#else
static int lIlIIIlI(struct usb_hcd*IllIl,struct urb*urb,int status)
#endif
{struct lIIIII*lIIII=lIIlIII(IllIl);struct lllIIl*IIlIl;IIIII IlIlI;int IIIll=
(0x340+7615-0x20ff);int unlinked;unsigned long flags;Illll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x75\x72\x62\x5f\x64\x65\x71\x75\x65\x75\x65\x5b\x25\x73\x5d\x3a\x20\x2b\x2b\x20\x75\x72\x62\x3d\x30\x78\x25\x70" "\n"
,IIIIIIl(IllIl),urb);do{spin_lock_irqsave(&lIIII->lock,flags);
#if KERNEL_GT_EQ((0xb77+3093-0x178a),(0x8db+1563-0xef0),(0xbc+1892-0x808))
IIIll=usb_hcd_check_unlink_urb(IllIl,urb,status);if(IIIll!=(0xdff+6355-0x26d2)){

spin_unlock_irqrestore(&lIIII->lock,flags);break;}
#endif
IIlIl=(struct lllIIl*)urb->hcpriv;if(!IIlIl){

Illll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x75\x72\x62\x5f\x64\x65\x71\x75\x65\x75\x65\x3a\x20\x6e\x6f\x20\x64\x65\x76\x69\x63\x65\x21" "\n"
);spin_unlock_irqrestore(&lIIII->lock,flags);break;}spin_lock(&IIlIl->llllI->
IllIll);unlinked=lIlIIIlII(IIlIl);spin_unlock(&IIlIl->llllI->IllIll);
spin_unlock_irqrestore(&lIIII->lock,flags);if(unlinked){
#if KERNEL_LT((0x59d+1501-0xb78),(0xeda+5218-0x2336),(0x674+753-0x94d))
IllIIllI(IIlIl,-ECONNRESET);
#else
IllIIllI(IIlIl,status);
#endif
IlIlI=IllIllI(sizeof(lIIllIIII),GFP_ATOMIC);if(!IlIlI){Illll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x75\x72\x62\x5f\x64\x65\x71\x75\x65\x75\x65\x3a\x20\x6e\x6f\x20\x6d\x65\x6d\x6f\x72\x79\x20\x66\x6f\x72\x20\x75\x6e\x72\x62" "\n"
);IIlIlllI(IIlIl);break;}IlIlI->lllII.IlIIll=IIlIl->lllIl;IlIlI->lllII.IllllII=
(0x2f+4219-0x10aa);IlIlI->lllII.IIllI=sizeof(lIIllIIII);IlIlI->lllII.llIIlIl=
llIIlIll;IlIlI->lllII.Status=(0x1f2+3503-0xfa1);IlIlI->lllII.Context=
(0xf0+9052-0x244c);INIT_LIST_HEAD(&IIlIl->IIIIlIl);IIlIl->urb.lIlll=NULL;IIlIl->
IlIlI=IlIlI;spin_lock_irqsave(&IIlIl->llllI->IllIll,flags);list_add_tail(&IIlIl
->llllIl,&IIlIl->llllI->IIlllll);spin_unlock_irqrestore(&IIlIl->llllI->IllIll,
flags);wake_up(&IIlIl->llllI->lIIllI);}else{

Illll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x75\x72\x62\x5f\x64\x65\x71\x75\x65\x75\x65\x3a\x20\x75\x72\x62\x20\x6e\x6f\x74\x20\x66\x6f\x75\x6e\x64\x20\x69\x6e\x20\x71\x75\x65\x75\x65" "\n"
);}}while((0x1120+1722-0x17da));Illll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x75\x72\x62\x5f\x64\x65\x71\x75\x65\x75\x65\x3a\x20\x2d\x2d\x20\x72\x65\x73\x75\x6c\x74\x3d\x25\x64" "\n"
,IIIll);return IIIll;}void llllIlllI(struct usb_hcd*IllIl,struct 
usb_host_endpoint*ep){unsigned long flags;struct lIIIII*lIIII=lIIlIII(IllIl);
Illll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x68\x75\x62\x5f\x63\x6f\x6e\x74\x72\x6f\x6c\x5b\x25\x73\x5d\x3a\x20\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x65\x6e\x64\x70\x6f\x69\x6e\x74\x5f\x64\x69\x73\x61\x62\x6c\x65\x2b\x2b\x20\x65\x70\x3d\x25\x70" "\n"
,IIIIIIl(IllIl),ep);spin_lock_irqsave(&lIIII->lock,flags);if(ep->hcpriv){Illll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x68\x75\x62\x5f\x63\x6f\x6e\x74\x72\x6f\x6c\x3a\x20\x63\x6c\x65\x61\x6e\x69\x6e\x67\x20\x75\x70\x20\x68\x63\x70\x72\x69\x76" "\n"
);ep->hcpriv=NULL;}spin_unlock_irqrestore(&lIIII->lock,flags);Illll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x68\x75\x62\x5f\x63\x6f\x6e\x74\x72\x6f\x6c\x3a\x20\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x65\x6e\x64\x70\x6f\x69\x6e\x74\x5f\x64\x69\x73\x61\x62\x6c\x65\x2d\x2d" "\n"
);}
#if KERNEL_GT_EQ((0xe84+2557-0x187f),(0x1885+69-0x18c4),(0x2b7+6441-0x1bb9)) || \
RHEL_RELEASE_GT_EQ((0xbff+329-0xd42),(0x126f+2376-0x1bb4)) 
#define IlIIIlIIl \
		( USB_PORT_STAT_C_CONNECTION \
		| USB_PORT_STAT_C_ENABLE \
		| USB_PORT_STAT_C_SUSPEND \
		| USB_PORT_STAT_C_OVERCURRENT \
		| USB_PORT_STAT_C_RESET \
		| USB_PORT_STAT_C_BH_RESET \
		| USB_PORT_STAT_C_LINK_STATE \
		| USB_PORT_STAT_C_CONFIG_ERROR )
#else
#define IlIIIlIIl \
		( USB_PORT_STAT_C_CONNECTION \
		| USB_PORT_STAT_C_ENABLE \
		| USB_PORT_STAT_C_SUSPEND \
		| USB_PORT_STAT_C_OVERCURRENT \
		| USB_PORT_STAT_C_RESET )
#endif
#if KERNEL_GT_EQ((0x4ed+1534-0xae9),(0x11d+1193-0x5c0),(0x147+2822-0xc26)) || \
RHEL_RELEASE_GT_EQ((0x1238+4602-0x242c),(0xe0b+1243-0x12e3)) 
size_t lIIllIlll(void*IIIlI,size_t IIlIIl){struct{struct usb_bos_descriptor 
IIllIlll;struct usb_ss_cap_descriptor ss_cap;}__packed IIIlIII;memset(&IIIlIII,
(0x195+4593-0x1386),sizeof(IIIlIII));IIIlIII.IIllIlll.bLength=USB_DT_BOS_SIZE,
IIIlIII.IIllIlll.bDescriptorType=USB_DT_BOS,IIIlIII.IIllIlll.wTotalLength=
cpu_to_le16(sizeof(IIIlIII)),IIIlIII.IIllIlll.bNumDeviceCaps=(0x937+3484-0x16d2)
,IIIlIII.ss_cap.bLength=USB_DT_USB_SS_CAP_SIZE,IIIlIII.ss_cap.bDescriptorType=
USB_DT_DEVICE_CAPABILITY,IIIlIII.ss_cap.bDevCapabilityType=USB_SS_CAP_TYPE,
IIIlIII.ss_cap.wSpeedSupported=cpu_to_le16(USB_5GBPS_OPERATION),IIIlIII.ss_cap.
bFunctionalitySupport=ilog2(USB_5GBPS_OPERATION),IIlIIl=min(sizeof(IIIlIII),
IIlIIl);memcpy(IIIlI,&IIIlIII,IIlIIl);return IIlIIl;}size_t IlIllIlII(void*IIIlI
,size_t IIlIIl){struct usb_hub_descriptor desc;memset(&desc,(0x304+3819-0x11ef),
sizeof(desc));desc.bDescLength=(0x1711+2132-0x1f59);desc.bDescriptorType=
(0x10b9+4737-0x2310);desc.bNbrPorts=llIlIlI;
desc.wHubCharacteristics=cpu_to_le16((0xeea+2869-0x1a1e));desc.u.ss.
bHubHdrDecLat=(0xf47+5583-0x2512);
desc.u.ss.DeviceRemovable=cpu_to_le16(65534&(65535>>((0xd57+5711-0x2397)-llIlIlI
)));IIlIIl=min((size_t)desc.bDescLength,IIlIIl);memcpy(IIIlI,&desc,IIlIIl);
return IIlIIl;}
#endif 
size_t IIIIIIIlI(void*IIIlI,size_t IIlIIl){__u8*llIIIlll;struct 
usb_hub_descriptor desc;memset(&desc,(0x56f+1210-0xa29),sizeof(desc));desc.
bDescLength=(0x3d4+5434-0x1907)+lIIIIIlI*(0xecd+5828-0x258f);desc.
bDescriptorType=(0x15da+617-0x181a);desc.bNbrPorts=llIlIlI;desc.
wHubCharacteristics=cpu_to_le16((0x22c+1209-0x6e4));
#if KERNEL_GT_EQ((0x6b4+3690-0x151c),(0x664+4457-0x17c7),(0xb6d+5724-0x21a2)) ||\
 RHEL_RELEASE_GT_EQ((0x1fe8+893-0x235f),(0xdf4+2367-0x1731))
llIIIlll=desc.u.hs.DeviceRemovable;
#else
llIIIlll=desc.DeviceRemovable;
#endif
memset(&llIIIlll[(0xe1f+81-0xe70)],(0x12e5+1907-0x1a58),lIIIIIlI);memset(&
llIIIlll[lIIIIIlI],(0xae5+4922-0x1d20),lIIIIIlI);IIlIIl=min((size_t)desc.
bDescLength,IIlIIl);memcpy(IIIlI,&desc,IIlIIl);return IIlIIl;}static int 
lIlIllIIl(struct usb_hcd*IllIl,u16 lIIIlIlII,u16 wValue,u16 wIndex,char*IIIlI,
u16 wLength){struct lIIIII*lIIII=lIIlIII(IllIl);int IIIll=(0x724+4933-0x1a69);
int lIllI=-(0xc98+3201-0x1918);int IlIlllIll=(0xb7c+3082-0x1786);unsigned long 
flags;Illll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x68\x75\x62\x5f\x63\x6f\x6e\x74\x72\x6f\x6c\x5b\x25\x73\x5d\x3a\x20\x2b\x2b" "\n"
,IIIIIIl(IllIl));if(!test_bit(HCD_FLAG_HW_ACCESSIBLE,&IllIl->flags))return-
ETIMEDOUT;spin_lock_irqsave(&lIIII->lock,flags);switch(lIIIlIlII){case 
GetHubDescriptor:Illll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x68\x75\x62\x5f\x63\x6f\x6e\x74\x72\x6f\x6c\x3a\x20\x47\x65\x74\x48\x75\x62\x44\x65\x73\x63\x72\x69\x70\x74\x6f\x72" "\n"
);
#if KERNEL_GT_EQ((0x12a6+2583-0x1cbb),(0x547+2448-0xed1),(0xce0+1292-0x11c5)) ||\
 RHEL_RELEASE_GT_EQ((0x1a58+2755-0x2515),(0xbc9+4523-0x1d71)) 
if(IllIl->speed==HCD_USB3){if((wValue>>(0x1a89+208-0x1b51))!=USB_DT_SS_HUB){
IIIll=-EPIPE;break;}

IlIllIlII(IIIlI,wLength);}else
#endif
{if((wValue>>(0x1826+2130-0x2070))!=USB_DT_HUB){IIIll=-EPIPE;break;}IIIIIIIlI(
IIIlI,wLength);}break;
#if KERNEL_GT_EQ((0x1fbf+1195-0x2468),(0xf40+2544-0x192a),(0x1faa+1451-0x252e)) \
|| RHEL_RELEASE_GT_EQ((0xde4+4380-0x1efa),(0x3ea+2977-0xf88)) 
case DeviceRequest|USB_REQ_GET_DESCRIPTOR:if(IllIl->speed!=HCD_USB3){IIIll=-
EPIPE;break;}if((wValue>>(0x424+8095-0x23bb))!=USB_DT_BOS){IIIll=-EPIPE;break;}
IIIll=lIIllIlll(IIIlI,wLength);break;case GetPortErrorCount:
if(IllIl->speed!=HCD_USB3){IIIll=-EPIPE;break;}
*(__le16*)IIIlI=cpu_to_le16((0x21f2+1186-0x2694));break;case SetHubDepth:
if(IllIl->speed!=HCD_USB3){IIIll=-EPIPE;break;}
break;
#endif
case GetHubStatus:Illll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x68\x75\x62\x5f\x63\x6f\x6e\x74\x72\x6f\x6c\x3a\x20\x47\x65\x74\x48\x75\x62\x53\x74\x61\x74\x75\x73" "\n"
);*(__le32*)IIIlI=cpu_to_le32((0x17cc+706-0x1a8e));break;case SetHubFeature:
Illll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x68\x75\x62\x5f\x63\x6f\x6e\x74\x72\x6f\x6c\x3a\x20\x53\x65\x74\x48\x75\x62\x46\x65\x61\x74\x75\x72\x65" "\n"
);
IIIll=-EPIPE;break;case ClearHubFeature:Illll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x68\x75\x62\x5f\x63\x6f\x6e\x74\x72\x6f\x6c\x3a\x20\x43\x6c\x65\x61\x72\x48\x75\x62\x46\x65\x61\x74\x75\x72\x65" "\n"
);
break;case GetPortStatus:Illll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x68\x75\x62\x5f\x63\x6f\x6e\x74\x72\x6f\x6c\x3a\x20\x47\x65\x74\x50\x6f\x72\x74\x53\x74\x61\x74\x75\x73" "\n"
);lIllI=(wIndex&(0x1a39+1144-0x1db2))-(0x3d7+3469-0x1163);Illll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x68\x75\x62\x5f\x63\x6f\x6e\x74\x72\x6f\x6c\x3a\x20\x70\x6f\x72\x74\x3d\x25\x64" "\n"
,lIllI);if(lIllI<(0xcb9+3743-0x1b58)||lIllI>=llIlIlI){lIllI=-(0x32a+8658-0x24fb)
;IIIll=-EPIPE;break;}

if(lIIII->IlllIII[lIllI]&&time_after_eq(jiffies,lIIII->IlllIII[lIllI])){if(lIIII
->lllllIIl[lIllI]==lllIllI){lIIII->llIlIll[lIllI]->llIIlll=(0x5b0+5659-0x1bcb);}
#if KERNEL_GT_EQ((0x37d+2602-0xda5),(0xc47+3203-0x18c4),(0x132+1599-0x74a)) || \
RHEL_RELEASE_GT_EQ((0xf8b+5631-0x2584),(0xbbf+4033-0x1b7d)) 
if(IllIl->speed==HCD_USB3){IIlIlIl(lIIII,lIllI,lIlIlIIl,(0x62a+6063-0x1dd9));}
else
#endif
{IlllIIl(lIIII,lIllI,lIlIlIIl,(0x1284+737-0x1565));}}((__le16*)IIIlI)[
(0x42f+6343-0x1cf6)]=cpu_to_le16(lIIII->lIIlIlI[lIllI]);((__le16*)IIIlI)[
(0x10d2+783-0x13e0)]=cpu_to_le16(lIIII->IIIlllI[lIllI]);break;case 
SetPortFeature:lIllI=(wIndex&(0x1761+2024-0x1e4a))-(0x1101+1703-0x17a7);if(lIllI
<(0x1708+2975-0x22a7)||lIllI>=llIlIlI){Illll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x68\x75\x62\x5f\x63\x6f\x6e\x74\x72\x6f\x6c\x3a\x20\x53\x65\x74\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x20\x69\x6e\x76\x61\x6c\x69\x64\x20\x70\x6f\x72\x74\x20\x6e\x75\x6d\x62\x65\x72\x20\x28\x25\x64\x29" "\n"
,lIllI);lIllI=-(0x577+246-0x66c);IIIll=-EPIPE;break;}
#if KERNEL_GT_EQ((0x16f9+2018-0x1ed9),(0xea1+3577-0x1c94),(0xd02+4616-0x1ee3)) \
|| RHEL_RELEASE_GT_EQ((0x13a5+2261-0x1c74),(0x16ff+1309-0x1c19)) 
if(IllIl->speed==HCD_USB3){IIIll=IlIIIlIlI(lIIII,lIllI,wValue,wIndex>>
(0xe97+1396-0x1403));}else
#endif
{IIIll=lllIllIII(lIIII,lIllI,wValue,wIndex>>(0x1c0c+2246-0x24ca));}break;case 
ClearPortFeature:lIllI=(wIndex&(0x1454+3943-0x22bc))-(0x20a2+629-0x2316);if(
lIllI<(0x15e0+983-0x19b7)||lIllI>=llIlIlI){Illll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x68\x75\x62\x5f\x63\x6f\x6e\x74\x72\x6f\x6c\x3a\x20\x43\x6c\x65\x61\x72\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x20\x69\x6e\x76\x61\x6c\x69\x64\x20\x70\x6f\x72\x74\x20\x6e\x75\x6d\x62\x65\x72\x20\x28\x25\x64\x29" "\n"
,lIllI);lIllI=-(0x1098+1534-0x1695);IIIll=-EPIPE;break;}
#if KERNEL_GT_EQ((0x3c+1619-0x68d),(0xc5d+5677-0x2284),(0x544+5978-0x1c77)) || \
RHEL_RELEASE_GT_EQ((0x6b8+3694-0x1520),(0x11b2+1710-0x185d)) 
if(IllIl->speed==HCD_USB3){IIIll=lllIIIlIl(lIIII,lIllI,wValue);}else
#endif
{IIIll=IIlIlIlII(lIIII,lIllI,wValue);}break;default:Illll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x68\x75\x62\x5f\x63\x6f\x6e\x74\x72\x6f\x6c\x3a\x20\x52\x65\x71\x3d\x30\x78\x25\x30\x34\x58\x20\x56\x61\x6c\x75\x65\x3d\x30\x78\x25\x30\x34\x58\x20\x49\x6e\x64\x65\x78\x3d\x30\x78\x25\x30\x34\x58\x69\x20\x4c\x65\x6e\x67\x74\x68\x3d\x25\x64" "\n"
,lIIIlIlII,wValue,wIndex,wLength);
IIIll=-EPIPE;break;}
IlIlllIll=(lIllI!=-(0xad3+4607-0x1cd1))&&((lIIII->IIIlllI[lIllI]&IlIIIlIIl)!=
(0x11bf+3539-0x1f92));spin_unlock_irqrestore(&lIIII->lock,flags);if(IlIlllIll)
usb_hcd_poll_rh_status(IllIl);Illll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x68\x75\x62\x5f\x63\x6f\x6e\x74\x72\x6f\x6c\x2d\x2d\x20\x72\x65\x73\x75\x6c\x74\x20\x3d\x20\x25\x64" "\n"
,IIIll);return IIIll;}static int lllIllIII(struct lIIIII*lIIII,int lIllI,int 
IlIlIll,int lllllII){int IIIll=(0x7a7+1382-0xd0d);switch(IlIlIll){case 
USB_PORT_FEAT_ENABLE:Illll(
"\x53\x65\x74\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x28\x25\x64\x2c\x55\x53\x42\x5f\x50\x4f\x52\x54\x5f\x46\x45\x41\x54\x5f\x45\x4e\x41\x42\x4c\x45\x29" "\n"
,lIllI);


IIIll=-EPIPE;break;case USB_PORT_FEAT_SUSPEND:Illll(
"\x53\x65\x74\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x28\x25\x64\x2c\x55\x53\x42\x5f\x50\x4f\x52\x54\x5f\x46\x45\x41\x54\x5f\x53\x55\x53\x50\x45\x4e\x44\x29" "\n"
,lIllI);




IlllIIl(lIIII,lIllI,llllIlIIl,(0x73d+1316-0xc61));break;case USB_PORT_FEAT_RESET
:Illll(
"\x53\x65\x74\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x28\x25\x64\x2c\x55\x53\x42\x5f\x50\x4f\x52\x54\x5f\x46\x45\x41\x54\x5f\x52\x45\x53\x45\x54\x29" "\n"
,lIllI);





IlllIIl(lIIII,lIllI,IIlIllll,(0x196c+2256-0x223c));if(lIIII->llIlIll[lIllI]&&
lIIII->llIlIll[lIllI]->llIIlll>(0x288+7122-0x1e5a)){IIllllIII(lIIII->llIlIll[
lIllI]);}break;case USB_PORT_FEAT_POWER:Illll(
"\x53\x65\x74\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x28\x25\x64\x2c\x55\x53\x42\x5f\x50\x4f\x52\x54\x5f\x46\x45\x41\x54\x5f\x50\x4f\x57\x45\x52\x29" "\n"
,lIllI);


IlllIIl(lIIII,lIllI,lllIIlIl,(0x123c+996-0x1620));break;case USB_PORT_FEAT_TEST:
Illll(
"\x53\x65\x74\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x28\x25\x64\x2c\x55\x53\x42\x5f\x50\x4f\x52\x54\x5f\x46\x45\x41\x54\x5f\x54\x45\x53\x54\x29" "\n"
,lIllI);
break;case USB_PORT_FEAT_INDICATOR:Illll(
"\x53\x65\x74\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x28\x25\x64\x2c\x55\x53\x42\x5f\x50\x4f\x52\x54\x5f\x46\x45\x41\x54\x5f\x49\x4e\x44\x49\x43\x41\x54\x4f\x52\x29" "\n"
,lIllI);
break;case USB_PORT_FEAT_CONNECTION:case USB_PORT_FEAT_OVER_CURRENT:case 
USB_PORT_FEAT_C_CONNECTION:case USB_PORT_FEAT_C_OVER_CURRENT:case 
USB_PORT_FEAT_C_RESET:case USB_PORT_FEAT_LOWSPEED:case USB_PORT_FEAT_C_ENABLE:
case USB_PORT_FEAT_C_SUSPEND:


break;default:
Illll(
"\x53\x65\x74\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x28\x25\x64\x2c\x20\x25\x64\x29" "\n"
,lIllI,IlIlIll);IIIll=-EPIPE;break;}return IIIll;}static int IIlIlIlII(struct 
lIIIII*lIIII,int lIllI,int IlIlIll){int IIIll=(0x1118+1134-0x1586);switch(
IlIlIll){case USB_PORT_FEAT_ENABLE:Illll(
"\x43\x6c\x65\x61\x72\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x28\x25\x64\x2c\x55\x53\x42\x5f\x50\x4f\x52\x54\x5f\x46\x45\x41\x54\x5f\x45\x4e\x41\x42\x4c\x45\x29" "\n"
,lIllI);



IlllIIl(lIIII,lIllI,IIlIIlll,(0x967+1326-0xe95));break;case 
USB_PORT_FEAT_SUSPEND:Illll(
"\x43\x6c\x65\x61\x72\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x28\x25\x64\x2c\x55\x53\x42\x5f\x50\x4f\x52\x54\x5f\x46\x45\x41\x54\x5f\x53\x55\x53\x50\x45\x4e\x44\x29" "\n"
,lIllI);



IlllIIl(lIIII,lIllI,IIlIlIIlI,(0xa07+2024-0x11ef));break;case 
USB_PORT_FEAT_POWER:Illll(
"\x43\x6c\x65\x61\x72\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x28\x25\x64\x2c\x55\x53\x42\x5f\x50\x4f\x52\x54\x5f\x46\x45\x41\x54\x5f\x50\x4f\x57\x45\x52\x29" "\n"
,lIllI);

IlllIIl(lIIII,lIllI,IIIIlIll,(0x420+8791-0x2677));break;case 
USB_PORT_FEAT_C_CONNECTION:Illll(
"\x43\x6c\x65\x61\x72\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x28\x25\x64\x2c\x55\x53\x42\x5f\x50\x4f\x52\x54\x5f\x46\x45\x41\x54\x5f\x43\x5f\x43\x4f\x4e\x4e\x45\x43\x54\x49\x4f\x4e\x29" "\n"
,lIllI);IlllIIl(lIIII,lIllI,llIIlIlI,(0xcb8+6000-0x2428));break;case 
USB_PORT_FEAT_C_ENABLE:Illll(
"\x43\x6c\x65\x61\x72\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x28\x25\x64\x2c\x55\x53\x42\x5f\x50\x4f\x52\x54\x5f\x46\x45\x41\x54\x5f\x43\x5f\x45\x4e\x41\x42\x4c\x45\x29" "\n"
,lIllI);IlllIIl(lIIII,lIllI,lIlllIlIl,(0x416+7182-0x2024));break;case 
USB_PORT_FEAT_C_SUSPEND:Illll(
"\x43\x6c\x65\x61\x72\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x28\x25\x64\x2c\x55\x53\x42\x5f\x50\x4f\x52\x54\x5f\x46\x45\x41\x54\x5f\x43\x5f\x53\x55\x53\x50\x45\x4e\x44\x29" "\n"
,lIllI);IlllIIl(lIIII,lIllI,IllIIIlll,(0x12b4+1625-0x190d));break;case 
USB_PORT_FEAT_C_OVER_CURRENT:Illll(
"\x43\x6c\x65\x61\x72\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x28\x25\x64\x2c\x55\x53\x42\x5f\x50\x4f\x52\x54\x5f\x46\x45\x41\x54\x5f\x43\x5f\x4f\x56\x45\x52\x5f\x43\x55\x52\x52\x45\x4e\x54\x29" "\n"
,lIllI);
break;case USB_PORT_FEAT_C_RESET:Illll(
"\x43\x6c\x65\x61\x72\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x28\x25\x64\x2c\x55\x53\x42\x5f\x50\x4f\x52\x54\x5f\x46\x45\x41\x54\x5f\x43\x5f\x52\x45\x53\x45\x54\x29" "\n"
,lIllI);IlllIIl(lIIII,lIllI,lllIlIll,(0xd6f+6112-0x254f));break;case 
USB_PORT_FEAT_INDICATOR:Illll(
"\x43\x6c\x65\x61\x72\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x28\x25\x64\x2c\x55\x53\x42\x5f\x50\x4f\x52\x54\x5f\x46\x45\x41\x54\x5f\x49\x4e\x44\x49\x43\x41\x54\x4f\x52\x29" "\n"
,lIllI);
break;case USB_PORT_FEAT_CONNECTION:case USB_PORT_FEAT_OVER_CURRENT:case 
USB_PORT_FEAT_RESET:case USB_PORT_FEAT_TEST:


break;default:Illll(
"\x43\x6c\x65\x61\x72\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x28\x25\x64\x2c\x20\x25\x64\x29" "\n"
,lIllI,IlIlIll);IIIll=-EPIPE;break;}return IIIll;}
#if KERNEL_GT_EQ((0xe58+6163-0x2669),(0x5d6+3448-0x1348),(0x4f9+3016-0x109a)) ||\
 RHEL_RELEASE_GT_EQ((0x15f8+3190-0x2268),(0x1869+951-0x1c1d)) 
static int IlIIIlIlI(struct lIIIII*lIIII,int lIllI,int IlIlIll,int lllllII){int 
IIIll=(0xafc+1849-0x1235);switch(IlIlIll){case USB_PORT_FEAT_BH_PORT_RESET:Illll
(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x68\x75\x62\x5f\x63\x6f\x6e\x74\x72\x6f\x6c\x3a\x20\x53\x65\x74\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x28\x25\x64\x2c\x55\x53\x42\x5f\x50\x4f\x52\x54\x5f\x46\x45\x41\x54\x5f\x42\x48\x5f\x50\x4f\x52\x54\x5f\x52\x45\x53\x45\x54\x29" "\n"
,lIllI);







case USB_PORT_FEAT_RESET:Illll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x68\x75\x62\x5f\x63\x6f\x6e\x74\x72\x6f\x6c\x3a\x20\x53\x65\x74\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x28\x25\x64\x2c\x55\x53\x42\x5f\x50\x4f\x52\x54\x5f\x46\x45\x41\x54\x5f\x52\x45\x53\x45\x54\x29" "\n"
,lIllI);





IIlIlIl(lIIII,lIllI,IIlIllll,(0x691+4965-0x19f6));if(lIIII->llIlIll[lIllI]&&
lIIII->llIlIll[lIllI]->llIIlll>(0x19d0+2012-0x21ac)){IIllllIII(lIIII->llIlIll[
lIllI]);}break;case USB_PORT_FEAT_LINK_STATE:Illll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x68\x75\x62\x5f\x63\x6f\x6e\x74\x72\x6f\x6c\x3a\x20\x53\x65\x74\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x28\x25\x64\x2c\x55\x53\x42\x5f\x50\x4f\x52\x54\x5f\x46\x45\x41\x54\x5f\x4c\x49\x4e\x4b\x5f\x53\x54\x41\x54\x45\x2c\x20\x30\x78\x25\x30\x34\x78\x29" "\n"
,lIllI,lllllII);


IIlIlIl(lIIII,lIllI,IlIIIIll,lllllII);break;case USB_PORT_FEAT_POWER:Illll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x68\x75\x62\x5f\x63\x6f\x6e\x74\x72\x6f\x6c\x3a\x20\x53\x65\x74\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x28\x25\x64\x2c\x55\x53\x42\x5f\x50\x4f\x52\x54\x5f\x46\x45\x41\x54\x5f\x50\x4f\x57\x45\x52\x29" "\n"
,lIllI);

IIlIlIl(lIIII,lIllI,lllIIlIl,(0x997+7199-0x25b6));break;case 
USB_PORT_FEAT_U1_TIMEOUT:case USB_PORT_FEAT_U2_TIMEOUT:Illll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x68\x75\x62\x5f\x63\x6f\x6e\x74\x72\x6f\x6c\x3a\x20\x53\x65\x74\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x28\x25\x64\x2c\x55\x53\x42\x5f\x50\x4f\x52\x54\x5f\x46\x45\x41\x54\x5f\x55\x31\x2f\x55\x32\x5f\x54\x49\x4d\x45\x4f\x55\x54\x29" "\n"
,lIllI);


break;case USB_PORT_FEAT_REMOTE_WAKE_MASK:Illll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x68\x75\x62\x5f\x63\x6f\x6e\x74\x72\x6f\x6c\x3a\x20\x53\x65\x74\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x28\x25\x64\x2c\x55\x53\x42\x5f\x50\x4f\x52\x54\x5f\x46\x45\x41\x54\x5f\x52\x45\x4d\x4f\x54\x45\x5f\x57\x41\x4b\x45\x5f\x4d\x41\x53\x4b\x29" "\n"
,lIllI);

break;case USB_PORT_FEAT_FORCE_LINKPM_ACCEPT:Illll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x68\x75\x62\x5f\x63\x6f\x6e\x74\x72\x6f\x6c\x3a\x20\x53\x65\x74\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x28\x25\x64\x2c\x55\x53\x42\x5f\x50\x4f\x52\x54\x5f\x46\x45\x41\x54\x5f\x46\x4f\x52\x43\x45\x5f\x4c\x49\x4e\x4b\x50\x4d\x5f\x41\x43\x43\x45\x50\x54\x29" "\n"
,lIllI);
break;case USB_PORT_FEAT_CONNECTION:case USB_PORT_FEAT_OVER_CURRENT:case 
USB_PORT_FEAT_C_CONNECTION:case USB_PORT_FEAT_C_OVER_CURRENT:case 
USB_PORT_FEAT_C_RESET:case USB_PORT_FEAT_C_PORT_LINK_STATE:case 
USB_PORT_FEAT_C_PORT_CONFIG_ERROR:case USB_PORT_FEAT_C_BH_PORT_RESET:


break;default:
Illll(
"\x53\x65\x74\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x28\x25\x64\x2c\x20\x25\x64\x29" "\n"
,lIllI,IlIlIll);IIIll=-EPIPE;break;}return IIIll;}static int lllIIIlIl(struct 
lIIIII*lIIII,int lIllI,int IlIlIll){int IIIll=(0x7d0+5976-0x1f28);switch(IlIlIll
){case USB_PORT_FEAT_POWER:Illll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x68\x75\x62\x5f\x63\x6f\x6e\x74\x72\x6f\x6c\x3a\x20\x43\x6c\x65\x61\x72\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x28\x25\x64\x2c\x55\x53\x42\x5f\x50\x4f\x52\x54\x5f\x46\x45\x41\x54\x5f\x50\x4f\x57\x45\x52\x29" "\n"
,lIllI);

IIlIlIl(lIIII,lIllI,IIIIlIll,(0x8d+1354-0x5d7));break;case 
USB_PORT_FEAT_C_CONNECTION:Illll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x68\x75\x62\x5f\x63\x6f\x6e\x74\x72\x6f\x6c\x3a\x20\x43\x6c\x65\x61\x72\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x28\x25\x64\x2c\x55\x53\x42\x5f\x50\x4f\x52\x54\x5f\x46\x45\x41\x54\x5f\x43\x5f\x43\x4f\x4e\x4e\x45\x43\x54\x49\x4f\x4e\x29" "\n"
,lIllI);IIlIlIl(lIIII,lIllI,llIIlIlI,(0xf5+703-0x3b4));break;case 
USB_PORT_FEAT_C_OVER_CURRENT:Illll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x68\x75\x62\x5f\x63\x6f\x6e\x74\x72\x6f\x6c\x3a\x20\x43\x6c\x65\x61\x72\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x28\x25\x64\x2c\x55\x53\x42\x5f\x50\x4f\x52\x54\x5f\x46\x45\x41\x54\x5f\x43\x5f\x4f\x56\x45\x52\x5f\x43\x55\x52\x52\x45\x4e\x54\x29" "\n"
,lIllI);
break;case USB_PORT_FEAT_C_RESET:Illll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x68\x75\x62\x5f\x63\x6f\x6e\x74\x72\x6f\x6c\x3a\x20\x43\x6c\x65\x61\x72\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x28\x25\x64\x2c\x55\x53\x42\x5f\x50\x4f\x52\x54\x5f\x46\x45\x41\x54\x5f\x43\x5f\x52\x45\x53\x45\x54\x29" "\n"
,lIllI);IIlIlIl(lIIII,lIllI,lllIlIll,(0xddc+2807-0x18d3));break;case 
USB_PORT_FEAT_C_PORT_LINK_STATE:Illll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x68\x75\x62\x5f\x63\x6f\x6e\x74\x72\x6f\x6c\x3a\x20\x43\x6c\x65\x61\x72\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x28\x25\x64\x2c\x55\x53\x42\x5f\x50\x4f\x52\x54\x5f\x46\x45\x41\x54\x5f\x43\x5f\x50\x4f\x52\x54\x5f\x4c\x49\x4e\x4b\x5f\x53\x54\x41\x54\x45\x29" "\n"
,lIllI);IIlIlIl(lIIII,lIllI,lIIlIlllI,(0x1510+2402-0x1e72));break;case 
USB_PORT_FEAT_C_PORT_CONFIG_ERROR:Illll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x68\x75\x62\x5f\x63\x6f\x6e\x74\x72\x6f\x6c\x3a\x20\x43\x6c\x65\x61\x72\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x28\x25\x64\x2c\x55\x53\x42\x5f\x50\x4f\x52\x54\x5f\x46\x45\x41\x54\x5f\x43\x5f\x50\x4f\x52\x54\x5f\x43\x4f\x4e\x46\x49\x47\x5f\x45\x52\x52\x4f\x52\x29" "\n"
,lIllI);
break;case USB_PORT_FEAT_C_BH_PORT_RESET:Illll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x68\x75\x62\x5f\x63\x6f\x6e\x74\x72\x6f\x6c\x3a\x20\x43\x6c\x65\x61\x72\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x28\x25\x64\x2c\x55\x53\x42\x5f\x50\x4f\x52\x54\x5f\x46\x45\x41\x54\x5f\x43\x5f\x42\x48\x5f\x50\x4f\x52\x54\x5f\x52\x45\x53\x45\x54\x29" "\n"
,lIllI);IIlIlIl(lIIII,lIllI,IIIIIIlIl,(0xc58+5284-0x20fc));break;case 
USB_PORT_FEAT_FORCE_LINKPM_ACCEPT:Illll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x68\x75\x62\x5f\x63\x6f\x6e\x74\x72\x6f\x6c\x3a\x20\x43\x6c\x65\x61\x72\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x28\x25\x64\x2c\x55\x53\x42\x5f\x50\x4f\x52\x54\x5f\x46\x45\x41\x54\x5f\x46\x4f\x52\x43\x45\x5f\x4c\x49\x4e\x4b\x50\x4d\x5f\x41\x43\x43\x45\x50\x54\x29" "\n"
,lIllI);
break;case USB_PORT_FEAT_CONNECTION:case USB_PORT_FEAT_OVER_CURRENT:case 
USB_PORT_FEAT_RESET:case USB_PORT_FEAT_LINK_STATE:case USB_PORT_FEAT_U1_TIMEOUT:
case USB_PORT_FEAT_U2_TIMEOUT:case USB_PORT_FEAT_REMOTE_WAKE_MASK:case 
USB_PORT_FEAT_BH_PORT_RESET:


break;default:Illll(
"\x43\x6c\x65\x61\x72\x50\x6f\x72\x74\x46\x65\x61\x74\x75\x72\x65\x28\x25\x64\x2c\x20\x25\x64\x29" "\n"
,lIllI,IlIlIll);IIIll=-EPIPE;break;}return IIIll;}
#endif 
static int IlIllIlll(struct usb_hcd*IllIl,char*IIIlI){int IIIll=
(0x1b3+584-0x3fb);struct lIIIII*lIIII=lIIlIII(IllIl);u32*lllllIllI=(u32*)IIIlI;
unsigned long flags;Illll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x68\x75\x62\x5f\x73\x74\x61\x74\x75\x73\x5f\x64\x61\x74\x61\x5b\x25\x73\x5d\x2b\x2b" "\n"
,IIIIIIl(IllIl));spin_lock_irqsave(&lIIII->lock,flags);do
{int i;int lIlllIIll=(0x1b69+1502-0x2147);if(!test_bit(HCD_FLAG_HW_ACCESSIBLE,&
IllIl->flags))break;for(i=(0xbc2+3337-0x18cb);i<llIlIlI;i++){if(lIIII->IIIlllI[i
]&IlIIIlIIl){Illll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x68\x75\x62\x5f\x73\x74\x61\x74\x75\x73\x5f\x64\x61\x74\x61\x3a\x20\x70\x6f\x72\x74\x20\x25\x64\x20\x68\x61\x73\x20\x63\x68\x61\x6e\x67\x65\x64\x2e\x20\x77\x50\x6f\x72\x74\x53\x74\x61\x74\x75\x73\x3d\x30\x78\x25\x30\x34\x58\x20\x77\x50\x6f\x72\x74\x43\x68\x61\x6e\x67\x65\x3d\x30\x78\x25\x30\x34\x58" "\n"
,i,lIIII->lIIlIlI[i],lIIII->IIIlllI[i]);if(lIlllIIll==(0x40+9655-0x25f7))*
lllllIllI=(0x966+4972-0x1cd2);lIlllIIll=(0x122d+2239-0x1aeb);
*lllllIllI|=(0xcdf+2036-0x14d2)<<(i+(0x1433+3154-0x2084));}}if(lIlllIIll){IIIll=
lIIIIIlI;if(lIIII->llIIlllll){usb_hcd_resume_root_hub(IllIl);}}}while(
(0x1e15+1561-0x242e));spin_unlock_irqrestore(&lIIII->lock,flags);Illll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x68\x75\x62\x5f\x73\x74\x61\x74\x75\x73\x5f\x64\x61\x74\x61\x2d\x2d\x20\x72\x65\x73\x75\x6c\x74\x20\x3d\x20\x25\x64\x20\x6d\x61\x73\x6b\x20\x3d\x20\x30\x78\x25\x30\x38\x58" "\n"
,IIIll,(u32)*lllllIllI);return IIIll;}static int lIllIIlII(struct usb_hcd*IllIl)
{
struct lIIIII*lIIII=lIIlIII(IllIl);lIIII->llIIlllll=(0x5d7+5550-0x1b84);Illll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x62\x75\x73\x5f\x73\x75\x73\x70\x65\x6e\x64\x5b\x25\x73\x5d" "\n"
,IIIIIIl(IllIl));return(0x908+207-0x9d7);}static int IIlIIlIII(struct usb_hcd*
IllIl){
struct lIIIII*lIIII=lIIlIII(IllIl);lIIII->llIIlllll=(0x14a6+1071-0x18d5);Illll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x62\x75\x73\x5f\x72\x65\x73\x75\x6d\x65\x5b\x25\x73\x5d" "\n"
,IIIIIIl(IllIl));return(0x1750+3422-0x24ae);}
#if KERNEL_GT_EQ((0x570+4348-0x166a),(0xd9a+1745-0x1465),(0x2ff+828-0x614)) || \
RHEL_RELEASE_GT_EQ((0x1ba+6925-0x1cc1),(0x400+6913-0x1efe)) 
static int IllllIlIl(struct usb_hcd*IllIl,struct usb_device*llIII,struct 
usb_host_endpoint**llIIlIIlI,unsigned int IllllIlII,unsigned int llIllllll,gfp_t
 llIlI){Illll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x61\x6c\x6c\x6f\x63\x5f\x73\x74\x72\x65\x61\x6d\x73\x5b\x25\x73\x5d" "\n"
,IIIIIIl(IllIl));
return(0x167b+3581-0x2478);}static int lIIlIIllI(struct usb_hcd*IllIl,struct 
usb_device*llIII,struct usb_host_endpoint**llIIlIIlI,unsigned int IllllIlII,
gfp_t llIlI){Illll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x66\x72\x65\x65\x5f\x73\x74\x72\x65\x61\x6d\x73\x5b\x25\x73\x5d" "\n"
,IIIIIIl(IllIl));
return(0x3c0+5872-0x1ab0);}
#endif 


int IlIIlIlII(void){int IIIll=(0x198d+1903-0x20fc);int IllIIIlII=
(0x19bd+2420-0x2331);int lllIllIIl=(0x397+1399-0x90e);Illll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x69\x6e\x69\x74\x5f\x6d\x6f\x64\x75\x6c\x65\x3a\x20\x2b\x2b" "\n"
);do{struct sysinfo llllIlI;INIT_LIST_HEAD(&IIllIII);spin_lock_init(&IIlIII);
si_meminfo(&llllIlI);Illll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x69\x6e\x69\x74\x5f\x6d\x6f\x64\x75\x6c\x65\x3a\x20\x74\x6f\x74\x61\x6c\x72\x61\x6d\x3d\x25\x6c\x75\x20\x62\x79\x74\x65\x73\x20\x74\x6f\x74\x61\x6c\x68\x69\x67\x68\x3d\x25\x6c\x75\x20\x62\x79\x74\x65\x73" "\n"
,llllIlI.totalram*llllIlI.mem_unit,llllIlI.totalhigh*llllIlI.mem_unit);
#if defined(CONFIG_X86_32) && !defined(_USBD_VHCI_NO_DMA_)
























IlllIIll=(llllIlI.totalhigh>(0x3a1+2920-0xf09));
#endif
IIIll=platform_driver_register(&IlIIIllll);if(IIIll!=(0x371+5154-0x1793)){Illll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x69\x6e\x69\x74\x5f\x6d\x6f\x64\x75\x6c\x65\x3a\x20\x70\x6c\x61\x74\x66\x6f\x72\x6d\x5f\x64\x72\x69\x76\x65\x72\x5f\x72\x65\x67\x69\x73\x74\x65\x72\x20\x66\x61\x69\x6c\x65\x64\x2e\x20\x45\x72\x72\x6f\x72\x20\x6e\x75\x6d\x62\x65\x72\x20\x25\x64" "\n"
,IIIll);break;}IllIIIlII=(0xcc9+1499-0x12a3);IIIll=platform_device_register(&
llIllIlI);if(IIIll!=(0x13f2+1637-0x1a57)){Illll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x69\x6e\x69\x74\x5f\x6d\x6f\x64\x75\x6c\x65\x3a\x20\x70\x6c\x61\x74\x66\x6f\x72\x6d\x5f\x64\x65\x76\x69\x63\x65\x5f\x72\x65\x67\x69\x73\x74\x65\x72\x20\x66\x61\x69\x6c\x65\x64\x2e\x20\x45\x72\x72\x6f\x72\x20\x6e\x75\x6d\x62\x65\x72\x20\x25\x64" "\n"
,IIIll);break;}lllIllIIl=(0x638+7103-0x21f6);IlllIllI=IIIlIllIl();if(IlllIllI==
NULL){IIIll=-ENOMEM;Illll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x69\x6e\x69\x74\x5f\x6d\x6f\x64\x75\x6c\x65\x3a\x20\x61\x6c\x6c\x6f\x63\x20\x6d\x69\x6e\x6f\x72\x20\x66\x61\x69\x6c\x65\x64\x2e\x20\x45\x72\x72\x6f\x72\x20\x6e\x75\x6d\x62\x65\x72\x20\x25\x64" "\n"
,IIIll);break;}}while((0x158c+3339-0x2297));if(IIIll!=(0x114c+602-0x13a6)){if(
IlllIllI){IIIIIIlII(IlllIllI);IlllIllI=NULL;}if(lllIllIIl){
platform_device_unregister(&llIllIlI);}if(IllIIIlII){platform_driver_unregister(
&IlIIIllll);}}Illll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x69\x6e\x69\x74\x5f\x6d\x6f\x64\x75\x6c\x65\x3a\x20\x2d\x2d\x20\x72\x65\x73\x75\x6c\x74\x20\x3d\x20\x25\x64" "\n"
,IIIll);return IIIll;}void IIllllll(void){Illll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x64\x65\x69\x6e\x69\x74\x5f\x6d\x6f\x64\x75\x6c\x65\x3a\x20\x2b\x2b" "\n"
);if(IlllIllI){IIIIIIlII(IlllIllI);IlllIllI=NULL;}spin_lock(&IIlIII);while(!
list_empty(&IIllIII)){struct lIlIIl*llllI=(struct lIlIIl*)IIllIII.next;IlllllII(
llllI);spin_unlock(&IIlIII);lIlIlIll(llllI);IlIllIIl(llllI);spin_lock(&IIlIII);}
spin_unlock(&IIlIII);platform_device_unregister(&llIllIlI);
platform_driver_unregister(&IlIIIllll);Illll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x64\x65\x69\x6e\x69\x74\x5f\x6d\x6f\x64\x75\x6c\x65\x3a\x20\x2d\x2d" "\n"
);}struct lIlIIl*llIIIIlIl(u16 vid,u16 IIlllII,u16 lIlIlll,int speed){struct 
lIlIIl*llllI=NULL;do{struct usb_hcd*parent;
#if KERNEL_GT_EQ((0xa0+3997-0x103b),(0x214a+1325-0x2671),(0x3aa+4252-0x141f)) ||\
 RHEL_RELEASE_GT_EQ((0x102d+917-0x13bc),(0x126f+3326-0x1f6a)) 
parent=(speed==USB_SPEED_SUPER)?IIlIllI:IIIllll;
#else
parent=IIIllll;
#endif
if(parent==NULL){Illll(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x63\x72\x65\x61\x74\x65\x3a\x20\x76\x68\x63\x64\x20\x6e\x6f\x74\x20\x69\x6e\x69\x74\x69\x61\x6c\x69\x7a\x65\x64\x2e" "\n"
);break;}llllI=lIllllI(sizeof(*llllI),GFP_KERNEL);if(!llllI){Illll(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x63\x72\x65\x61\x74\x65\x3a\x20\x6b\x6d\x61\x6c\x6c\x6f\x63\x20\x66\x61\x69\x6c\x65\x64\x2e" "\n"
);break;}if(IllIIlllI(llllI)<(0x1864+669-0x1b01)){Illll(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x63\x72\x65\x61\x74\x65\x3a\x20\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x61\x6c\x6c\x6f\x63\x5f\x6d\x69\x6e\x6f\x72\x20\x66\x61\x69\x6c\x65\x64\x2e" "\n"
);break;}
#ifdef _USBD_DEBUG_MEMORY_
atomic_inc(&IlIlIIllI);
#endif
init_waitqueue_head(&llllI->lIIllI);spin_lock_init(&llllI->IllIll);
INIT_LIST_HEAD(&llllI->IlIIlII);INIT_LIST_HEAD(&llllI->IIlllll);INIT_LIST_HEAD(&
llllI->Illlllll);kref_init(&llllI->IIllII);llllI->vid=vid;llllI->IIlllII=IIlllII
;llllI->lIlIlll=lIlIlll;llllI->speed=speed;llllI->parent=parent;llllI->lIllI=-
(0x1895+1639-0x1efb);spin_lock(&IIlIII);list_add(&llllI->IIIIll,&IIllIII);
spin_unlock(&IIlIII);return llllI;}while((0x6c6+6840-0x217e));if(llllI){
lIllllIIl(llllI);lIlIll(llllI);}return NULL;}void lIlIlIll(struct lIlIIl*llllI){
struct list_head*lIllIIIl;Illll(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x72\x65\x6d\x6f\x76\x65\x2b\x2b" "\n"
);
spin_lock(&IIlIII);list_for_each(lIllIIIl,&IIllIII){if(lIllIIIl==&llllI->IIIIll)
{list_del_init(&llllI->IIIIll);break;}}spin_unlock(&IIlIII);


if(lIllIIIl==&llllI->IIIIll){
#ifdef _USBD_DEBUG_MEMORY_
atomic_inc(&IlIIlllI);
#endif


IIIIIllII(llllI);IlIllIIl(llllI);}Illll(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x72\x65\x6d\x6f\x76\x65\x2d\x2d" "\n"
);}void lIlllllII(void){struct lIlIIl*llllI;Illll(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x72\x65\x6d\x6f\x76\x65\x5f\x61\x6c\x6c\x2b\x2b" "\n"
);spin_lock(&IIlIII);while(!list_empty(&IIllIII)){llllI=list_entry(IIllIII.next,
struct lIlIIl,IIIIll);list_del_init(&llllI->IIIIll);spin_unlock(&IIlIII);
#ifdef _USBD_DEBUG_MEMORY_
atomic_inc(&IlIIlllI);
#endif
IIIIIllII(llllI);IlIllIIl(llllI);spin_lock(&IIlIII);}spin_unlock(&IIlIII);Illll(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x72\x65\x6d\x6f\x76\x65\x5f\x61\x6c\x6c\x2d\x2d" "\n"
);}int lllIIlllI(struct lIlIIl*llllI){int IIIll;unsigned long flags;int lIllI;
struct lIIIII*lIIII;struct lIIIII*llIlIIlI;Illll(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x70\x6c\x75\x67\x3a\x20\x2b\x2b" "\n"
);IIIll=lIllIllII(llllI);if(IIIll<(0x78b+7674-0x2585)){Illll(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x70\x6c\x75\x67\x3a\x20\x2d\x2d\x20\x72\x65\x73\x75\x6c\x74\x3d\x25\x64" "\n"
,IIIll);return IIIll;}lIIII=lIIlIII(llllI->parent);llIlIIlI=lIIII->llllllll?
lIIlIII(lIIII->llllllll):NULL;spin_lock_irqsave(&lIIII->lock,flags);if(llIlIIlI)
spin_lock(&llIlIIlI->lock);IIIll=-ENOENT;for(lIllI=(0x67a+4883-0x198d);lIllI<
llIlIlI;lIllI++){if((lIIII->llIlIll[lIllI]==NULL)&&((llIlIIlI==NULL)||(llIlIIlI
->llIlIll[lIllI]==NULL))){Illll(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x70\x6c\x75\x67\x3a\x20\x66\x6f\x75\x6e\x64\x20\x66\x72\x65\x65\x20\x70\x6f\x72\x74\x20\x25\x64" "\n"
,lIllI);IlllllII(llllI);llllI->lIllI=lIllI;llllI->llIIlll=-(0x7c9+184-0x880);
lIIII->llIlIll[lIllI]=llllI;
#if KERNEL_GT_EQ((0x1238+3792-0x2106),(0x897+6871-0x2368),(0x22e1+87-0x2311)) ||\
 RHEL_RELEASE_GT_EQ((0x92d+7066-0x24c1),(0x1c41+370-0x1db0)) 
if(llllI->parent->speed==HCD_USB3){IIlIlIl(lIIII,lIllI,IIIlIlII,
(0x92+3448-0xe0a));}else
#endif
{IlllIIl(lIIII,lIllI,IIIlIlII,(0xab0+1622-0x1106));}IIIll=(0x6b5+4228-0x1739);
break;}}if(llIlIIlI)spin_unlock(&llIlIIlI->lock);spin_unlock_irqrestore(&lIIII->
lock,flags);if(IIIll<(0x1076+3925-0x1fcb)){
IlIIIIII(llllI);}else{
usb_hcd_poll_rh_status(llllI->parent);}Illll(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x70\x6c\x75\x67\x3a\x20\x2d\x2d\x20\x72\x65\x73\x75\x6c\x74\x3d\x25\x64" "\n"
,IIIll);return IIIll;}void IIIIIllII(struct lIlIIl*llllI){unsigned long flags;
struct lIIIII*lIIII=lIIlIII(llllI->parent);Illll(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x75\x6e\x70\x6c\x75\x67\x3a\x20\x2b\x2b" "\n"
);
IlIIIIII(llllI);spin_lock_irqsave(&lIIII->lock,flags);if(llllI->lIllI!=-
(0x17c+5599-0x175a)){Illll(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x75\x6e\x70\x6c\x75\x67\x3a\x20\x75\x6e\x70\x6c\x75\x67\x67\x69\x6e\x67\x20\x76\x69\x72\x74\x75\x61\x6c\x20\x64\x65\x76\x69\x63\x65\x20\x61\x74\x20\x70\x6f\x72\x74\x20\x25\x64" "\n"
,llllI->lIllI);

lIIII->llIlIll[llllI->lIllI]=NULL;
#if KERNEL_GT_EQ((0x101a+90-0x1072),(0x591+5983-0x1cea),(0x698+8285-0x26ce)) || \
RHEL_RELEASE_GT_EQ((0x1650+3134-0x2288),(0x159f+539-0x17b7)) 
if(llllI->parent->speed==HCD_USB3){IIlIlIl(lIIII,llllI->lIllI,IlIIIlll,
(0x15a2+4255-0x2641));}else
#endif
{IlllIIl(lIIII,llllI->lIllI,IlIIIlll,(0x35f+323-0x4a2));}llllI->lIllI=-
(0x767+7631-0x2535);spin_unlock_irqrestore(&lIIII->lock,flags);
usb_hcd_poll_rh_status(llllI->parent);lllllIIIl(llllI,-ENODEV);IlIllIIl(llllI);}
else{spin_unlock_irqrestore(&lIIII->lock,flags);}Illll(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x75\x6e\x70\x6c\x75\x67\x3a\x20\x2d\x2d" "\n"
);}struct lIlIIl*lIlIIIIll(int lIllllIlI){struct lIlIIl*llllI;Illll(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x66\x69\x6e\x64\x31\x3a\x20\x2b\x2b" "\n"
);spin_lock(&IIlIII);list_for_each_entry(llllI,&IIllIII,IIIIll){if(IIIIllII(
llllI->IIlII)==lIllllIlI){IlllllII(llllI);spin_unlock(&IIlIII);Illll(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x66\x69\x6e\x64\x31\x3a\x20\x2d\x2d\x20\x66\x6f\x75\x6e\x64\x21" "\n"
);return llllI;}}spin_unlock(&IIlIII);Illll(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x66\x69\x6e\x64\x31\x3a\x20\x2d\x2d\x20\x6e\x6f\x74\x20\x66\x6f\x75\x6e\x64" "\n"
);return NULL;}
struct lIlIIl*IlIIlIIll(struct usb_hcd*IllIl,int llIIlll){struct lIIIII*lIIII=
lIIlIII(IllIl);struct lIlIIl*llllI=NULL;int lIllI;Illll(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x66\x69\x6e\x64\x32\x28\x29\x3a\x20\x2b\x2b\x20\x61\x64\x64\x72\x65\x73\x73\x20\x3d\x20\x25\x64" "\n"
,llIIlll);if(lIIII==NULL)return NULL;if(llIIlll<(0x6a6+7600-0x2456))return NULL;
for(lIllI=(0x6b9+5399-0x1bd0);lIllI<llIlIlI;lIllI++){if(lIIII->llIlIll[lIllI]&&
lIIII->llIlIll[lIllI]->llIIlll==llIIlll){llllI=lIIII->llIlIll[lIllI];IlllllII(
llllI);break;}}Illll(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x66\x69\x6e\x64\x32\x3a\x20\x2d\x2d\x20\x25\x73" "\n"
,llllI?"\x66\x6f\x75\x6e\x64":"\x6e\x6f\x74\x20\x66\x6f\x75\x6e\x64");return 
llllI;}
struct lIlIIl*IIIIIllIl(struct usb_hcd*IllIl,int lIllI){struct lIIIII*lIIII=
lIIlIII(IllIl);struct lIlIIl*llllI=NULL;Illll(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x66\x69\x6e\x64\x33\x28\x29\x3a\x20\x2b\x2b\x20\x70\x6f\x72\x74\x20\x3d\x20\x25\x64" "\n"
,lIllI);if(lIIII==NULL)return NULL;if(lIllI<=(0xc42+5869-0x232f)||lIllI>llIlIlI)
return NULL;lIllI--;
if(lIIII->llIlIll[lIllI]){llllI=lIIII->llIlIll[lIllI];IlllllII(llllI);}Illll(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x66\x69\x6e\x64\x33\x3a\x20\x2d\x2d\x20\x25\x73" "\n"
,llllI?"\x66\x6f\x75\x6e\x64":"\x6e\x6f\x74\x20\x66\x6f\x75\x6e\x64");return 
llllI;}void IIllllIII(struct lIlIIl*llllI){IIIII IlIlI;struct lllIIl*IIlIl;
unsigned long flags;IlIlI=IllIllI(sizeof(llIIllIll),GFP_ATOMIC);if(!IlIlI){Illll
(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x73\x65\x6e\x64\x5f\x72\x65\x73\x65\x74\x5f\x70\x6f\x72\x74\x3a\x20\x6e\x6f\x20\x6d\x65\x6d\x6f\x72\x79" "\n"
);return;}IIlIl=lIlllIIIl(llllI,GFP_ATOMIC);if(!IIlIl){Illll(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x73\x65\x6e\x64\x5f\x72\x65\x73\x65\x74\x5f\x70\x6f\x72\x74\x3a\x20\x6e\x6f\x20\x6d\x65\x6d\x6f\x72\x79" "\n"
);lIlIll(IlIlI);return;}IlIlI->lllII.IlIIll=IIlIl->lllIl;IlIlI->lllII.IllllII=
(0x12+4832-0x12f2);IlIlI->lllII.IIllI=sizeof(llIIllIll);IlIlI->lllII.llIIlIl=
IllllllI;IlIlI->lllII.Status=(0x2392+454-0x2558);IlIlI->lllII.Context=llllI->
lIllI;IIlIl->IlIlI=IlIlI;spin_lock_irqsave(&llllI->IllIll,flags);list_add_tail(&
IIlIl->llllIl,&llllI->IIlllll);spin_unlock_irqrestore(&llllI->IllIll,flags);
wake_up(&llllI->lIIllI);}struct lllIIl*lIlllIIIl(struct lIlIIl*llllI,gfp_t llIlI
){struct lllIIl*IIlIl;IIlIl=lIllllI(sizeof(struct lllIIl),llIlI);if(!IIlIl){
Illll(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x63\x72\x65\x61\x74\x65\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x6e\x6f\x20\x6d\x65\x6d\x6f\x72\x79" "\n"
);return NULL;}
#ifdef _USBD_DEBUG_MEMORY_
atomic_inc(&llIIlIIIl);
#endif
INIT_LIST_HEAD(&IIlIl->llllIl);INIT_LIST_HEAD(&IIlIl->IIIIlIl);INIT_LIST_HEAD(&
IIlIl->urb.IIIIll);IIlIl->lllIl=lIllIIlll();IIlIl->llllI=IlllllII(llllI);return 
IIlIl;}void IIlIlllI(struct lllIIl*IIlIl){


#ifdef _USBD_DEBUG_MEMORY_
atomic_inc(&IlIllllII);
#endif
if(IIlIl->llllI)IlIllIIl(IIlIl->llllI);lIlIll(IIlIl);}
int lIlIIIlII(struct lllIIl*IIlIl){struct usb_host_endpoint*ep;struct lllIIl*
Illllll;if(!list_empty(&IIlIl->IIIIlIl)){struct IIIlIll*IllIlI=list_entry(IIlIl
->IIIIlIl.next,struct IIIlIll,IIIIll);
#if KERNEL_LT((0xcff+1742-0x13cb),(0xbf9+5748-0x2267),(0x1712+412-0x1896))
ep=(usb_pipein(IllIlI->lIlll->pipe)?IllIlI->lIlll->dev->ep_in:IllIlI->lIlll->dev
->ep_out)[usb_pipeendpoint(IllIlI->lIlll->pipe)];
#else
ep=IllIlI->lIlll->ep;
#endif

if(ep&&ep->hcpriv==IIlIl){ep->hcpriv=NULL;

list_del_init(&IIlIl->llllIl);return(0x1c47+1775-0x2335);}}
list_for_each_entry(Illllll,&IIlIl->llllI->IlIIlII,llllIl){if(Illllll==IIlIl){
list_del_init(&IIlIl->llllIl);return(0x4df+1297-0x9ef);}}
list_for_each_entry(Illllll,&IIlIl->llllI->Illlllll,llllIl){if(Illllll==IIlIl){
list_del_init(&IIlIl->llllIl);return(0x125d+3639-0x2093);}}
list_for_each_entry(Illllll,&IIlIl->llllI->IIlllll,llllIl){if(Illllll==IIlIl){
list_del_init(&IIlIl->llllIl);return(0x926+7452-0x2641);}}return
(0x58d+1094-0x9d3);}int lIIIIIIl(struct lllIIl*IIlIl){struct IIIlIll*IllIlI;
list_for_each_entry(IllIlI,&IIlIl->IIIIlIl,IIIIll){
#if KERNEL_LT((0x9e2+1397-0xf55),(0x260+5855-0x1939),(0x21d6+508-0x23ba))
spin_lock(&IllIlI->lIlll->lock);if(IllIlI->lIlll->status!=-EINPROGRESS){
spin_unlock(&IllIlI->lIlll->lock);return(0x414+8035-0x2376);}spin_unlock(&IllIlI
->lIlll->lock);
#else
if(IllIlI->lIlll->unlinked)return(0x52d+5157-0x1951);
#endif
}return(0xb30+3544-0x1908);}void lllllIIIl(struct lIlIIl*llllI,int status){
unsigned long flags;struct list_head IlIIllIl;struct lllIIl*IIlIl;INIT_LIST_HEAD
(&IlIIllIl);spin_lock_irqsave(&lIIlIII(llllI->parent)->lock,flags);spin_lock(&
llllI->IllIll);list_for_each_entry(IIlIl,&llllI->IlIIlII,llllIl){struct IIIlIll*
lllIII;list_for_each_entry(lllIII,&IIlIl->IIIIlIl,IIIIll){struct 
usb_host_endpoint*ep;
#if KERNEL_LT((0x1c1f+628-0x1e91),(0xb1+5619-0x169e),(0xa7b+7265-0x26c4))
ep=(usb_pipein(lllIII->lIlll->pipe)?lllIII->lIlll->dev->ep_in:lllIII->lIlll->dev
->ep_out)[usb_pipeendpoint(lllIII->lIlll->pipe)];
#else
ep=lllIII->lIlll->ep;
#endif
if(ep)ep->hcpriv=NULL;}}list_splice_init(&llllI->IlIIlII,&IlIIllIl);
list_splice_init(&llllI->IIlllll,&IlIIllIl);list_splice_init(&llllI->Illlllll,&
IlIIllIl);spin_unlock(&llllI->IllIll);spin_unlock_irqrestore(&lIIlIII(llllI->
parent)->lock,flags);while(!list_empty(&IlIIllIl)){struct lllIIl*IIlIl=
list_entry(IlIIllIl.next,struct lllIIl,llllIl);list_del_init(&IIlIl->llllIl);
IllIIllI(IIlIl,status);IIlIlllI(IIlIl);}}void IllIIllI(struct lllIIl*IIlIl,int 
status){struct lIlIIl*llllI=IIlIl->llllI;
#if KERNEL_GT_EQ((0x1784+3663-0x25d1),(0x22f+3495-0xfd0),(0x7ed+2073-0xfee))
struct lIIIII*lIIII=lIIlIII(llllI->parent);
#endif
unsigned long flags;int llIlIlIlI=(0x1e0+3901-0x111d);Illll(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x67\x69\x76\x65\x62\x61\x63\x6b\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x72\x65\x71\x75\x65\x73\x74\x20\x30\x78\x25\x70\x20\x73\x74\x61\x74\x75\x73\x3d\x25\x64" "\n"
,IIlIl,status);local_irq_save(flags);while(!list_empty(&IIlIl->IIIIlIl)){struct 
IIIlIll*IllIlI=list_entry(IIlIl->IIIIlIl.next,struct IIIlIll,IIIIll);if(IllIlI->
lIlll){int lIIlllII=status;

if(usb_pipetype(IllIlI->lIlll->pipe)==PIPE_BULK||usb_pipetype(IllIlI->lIlll->
pipe)==PIPE_INTERRUPT){






switch(llIlIlIlI){case(0x597+7387-0x2272):if(IllIlI->lIlll->actual_length<IllIlI
->lIlll->transfer_buffer_length){if((status==(0x54f+293-0x674))&&(IllIlI->lIlll
->transfer_flags&URB_SHORT_NOT_OK)){lIIlllII=-EREMOTEIO;}else{lIIlllII=status;}
llIlIlIlI=(0xbcc+1459-0x117e);}else if(IllIlI->IIIIll.next==&IIlIl->IIIIlIl){
lIIlllII=status;llIlIlIlI=(0x1607+3793-0x24d7);}else{lIIlllII=(0x503+358-0x669);
}break;case(0x14b5+4557-0x2681):lIIlllII=-ECONNRESET;break;}}Illll(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x67\x69\x76\x65\x62\x61\x63\x6b\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x67\x69\x76\x65\x62\x61\x63\x6b\x20\x75\x72\x62\x20\x30\x78\x25\x70\x20\x77\x69\x74\x68\x20\x73\x74\x61\x74\x75\x73\x20\x25\x64" "\n"
,IllIlI->lIlll,lIIlllII);
#if KERNEL_LT((0x2129+978-0x24f9),(0x1032+5369-0x2525),(0x8b3+5817-0x1f54))


spin_lock(&IllIlI->lIlll->lock);if(IllIlI->lIlll->status==-EINPROGRESS)IllIlI->
lIlll->status=lIIlllII;spin_unlock(&IllIlI->lIlll->lock);
#else


spin_lock(&lIIII->lock);usb_hcd_unlink_urb_from_ep(llllI->parent,IllIlI->lIlll);
spin_unlock(&lIIII->lock);
#endif



IllIlI->lIlll->hcpriv=NULL;
#if KERNEL_LT((0x22c0+885-0x2633),(0x1104+5222-0x2564),(0x1051+5444-0x2582))
usb_hcd_giveback_urb(llllI->parent,IllIlI->lIlll,NULL);
#elif KERNEL_LT((0x321+3425-0x1080),(0x1586+3586-0x2382),(0x2250+142-0x22c6))
usb_hcd_giveback_urb(llllI->parent,IllIlI->lIlll);
#else
usb_hcd_giveback_urb(llllI->parent,IllIlI->lIlll,lIIlllII);
#endif
}list_del_init(&IllIlI->IIIIll);if(IllIlI!=&IIlIl->urb)lIlIll(IllIlI);}
local_irq_restore(flags);if(IIlIl->IlIlI){if(IIlIl->IlIlI->lllII.llIIlIl==
IllllllI){Illll(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x67\x69\x76\x65\x62\x61\x63\x6b\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x72\x65\x73\x65\x74\x20\x63\x6f\x6d\x70\x6c\x65\x74\x65\x64" "\n"
);llllI->IIlIIllI=(0x88+4699-0x12e3);wake_up(&llllI->lIIllI);}Illll(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x67\x69\x76\x65\x62\x61\x63\x6b\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x66\x72\x65\x65\x69\x6e\x67\x20\x75\x6e\x72\x62" "\n"
);lIlIll(IIlIl->IlIlI);IIlIl->IlIlI=NULL;}}int IIIIlIIIl(struct lIlIIl*llllI,
struct lllIIl*IIlIl,void*IlIIl,size_t IlIIIl){int IIIll=(0x27b+3596-0x1087);if(!
list_empty(&IIlIl->IIIIlIl)){IIIll=llIlIlllI(&IIlIl->IIIIlIl,IIlIl->lllIl,IlIIl,
IlIIIl);}else if(IIlIl->IlIlI){if(IlIIIl<IIlIl->IlIlI->lllII.IIllI){IIIll=-
EMSGSIZE;}else{memcpy(IlIIl,IIlIl->IlIlI,IIlIl->IlIlI->lllII.IIllI);if(IIlIl->
IlIlI->lllII.llIIlIl==IllllllI){llllI->IIlIIllI=(0xc0b+5080-0x1fe2);}}}else{
IIIll=-EIO;}Illll(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x70\x61\x63\x6b\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x72\x65\x73\x75\x6c\x74\x20\x3d\x20\x25\x64" "\n"
,IIIll);return IIIll;}int IIlIlIIIl(struct lIlIIl*llllI,struct lllIIl*IIlIl,
IIIII IlIlI,int*status){int IIIll;if(!list_empty(&IIlIl->IIIIlIl)){Illll(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x75\x6e\x70\x61\x63\x6b\x5f\x72\x65\x71\x75\x65\x73\x74\x3a\x20\x75\x6e\x70\x61\x63\x6b\x69\x6e\x67\x20\x75\x72\x62" "\n"
);IIIll=lIlIlllII(IlIlI,&IIlIl->IIIIlIl,status);}else{*status=lllIIIll(IlIlI->
lllII.Status);IIIll=(0x69c+2491-0x1057);}return IIIll;}void lIIIlllIl(struct 
kref*lllIlIl){struct lIlIIl*llllI=container_of(lllIlIl,struct lIlIIl,IIllII);
Illll(
"\x75\x73\x62\x64\x5f\x76\x73\x74\x75\x62\x5f\x64\x65\x73\x74\x72\x6f\x79\x28\x70\x76\x73\x74\x75\x62\x3d\x30\x78\x25\x70\x29" "\n"
,llllI);
#ifdef _USBD_DEBUG_MEMORY_
atomic_inc(&IIlIlIIll);
#endif
lIllllIIl(llllI);lIlIll(llllI);}
static inline size_t lIIIllIII(struct urb*lIlll,void*IlIIl){int i;void*lllIll;if
(!lIlll->transfer_buffer)return(0x14f2+1188-0x1996);lllIll=IlIIl;for(i=
(0x1ba2+60-0x1bde);i<lIlll->number_of_packets;i++){memcpy(lIlll->transfer_buffer
+lIlll->iso_frame_desc[i].offset,lllIll,lIlll->iso_frame_desc[i].actual_length);
lllIll+=lIlll->iso_frame_desc[i].actual_length;}return(size_t)(lllIll-IlIIl);}
#if defined(CONFIG_X86_32) && !defined(_USBD_VHCI_NO_DMA_)






int llIlIlll(void*IlIIl,struct urb*lIlll,int IlIII){
if(IlIII==(0x1ac3+784-0x1dd3))return(0xa7a+554-0xca4);if(IlllIIll&&((lIlll->
transfer_buffer==NULL)||(lIlll->transfer_flags&URB_NO_TRANSFER_DMA_MAP))&&(lIlll
->transfer_dma!=(0x107+514-0x309))&&(lIlll->transfer_dma!=~(dma_addr_t)
(0x595+562-0x7c7))){llIlllIlI(IlIIl,lIlll->transfer_dma,IlIII);}else if(lIlll->
transfer_buffer){memcpy(IlIIl,lIlll->transfer_buffer,IlIII);}else return-EINVAL;
return IlIII;}





int IIlIllII(struct urb*lIlll,void*IlIIl,int IlIII){
if(IlIII==(0x1cd+5987-0x1930))return(0xc85+481-0xe66);if(IlllIIll&&((lIlll->
transfer_buffer==NULL)||(lIlll->transfer_flags&URB_NO_TRANSFER_DMA_MAP))&&(lIlll
->transfer_dma!=(0x1555+2271-0x1e34))&&(lIlll->transfer_dma!=~(dma_addr_t)
(0x1108+3111-0x1d2f))){IlIIIIlll(lIlll->transfer_dma,IlIIl,IlIII);}else if(lIlll
->transfer_buffer){memcpy(lIlll->transfer_buffer,IlIIl,IlIII);}else return-
EINVAL;return IlIII;}





int llIlIIlll(void*IlIIl,struct urb*lIlll,int IlIII){
if(IlIII==(0x106c+1442-0x160e))return(0x17+1862-0x75d);
#if KERNEL_LT_EQ((0x775+5121-0x1b74),(0xb35+341-0xc84),(0x1733+83-0x1764))
if(IlllIIll&&((lIlll->setup_packet==NULL)||(lIlll->transfer_flags&
URB_NO_SETUP_DMA_MAP))&&(lIlll->setup_dma!=(0x17b8+1233-0x1c89))&&(lIlll->
setup_dma!=~(dma_addr_t)(0x9a8+1891-0x110b))){llIlllIlI(IlIIl,lIlll->setup_dma,
IlIII);}else
#endif
if(lIlll->setup_packet){memcpy(IlIIl,lIlll->setup_packet,IlIII);}else return-
EINVAL;return IlIII;}





int IIlIllIll(struct urb*lIlll,void*IlIIl,int IlIII){
if(IlIII==(0xb5c+1036-0xf68))return(0x3fb+7529-0x2164);
#if KERNEL_LT_EQ((0x24d6+38-0x24fa),(0xbc9+6963-0x26f6),(0x1b52+2716-0x25cc))
if(IlllIIll&&((lIlll->setup_packet==NULL)||(lIlll->transfer_flags&
URB_NO_SETUP_DMA_MAP))&&(lIlll->setup_dma!=(0x63f+7729-0x2470))&&(lIlll->
setup_dma!=~(dma_addr_t)(0x82f+7438-0x253d))){IlIIIIlll(lIlll->setup_dma,IlIIl,
IlIII);}else
#endif
if(lIlll->setup_packet){memcpy(lIlll->setup_packet,IlIIl,IlIII);}else return-
EINVAL;return IlIII;}


static inline size_t lIIlIllll(void*IlIIl,struct urb*lIlll){if(IlllIIll&&((lIlll
->transfer_buffer==NULL)||(lIlll->transfer_flags&URB_NO_TRANSFER_DMA_MAP))&&(
lIlll->transfer_dma!=(0x318+3527-0x10df))&&(lIlll->transfer_dma!=~(dma_addr_t)
(0x53a+1560-0xb52))){int i;void*IIIIIll=IlIIl;dma_addr_t lllIll;void*llllll;
unsigned long flags;unsigned long IIlIIll,IIlIIl;unsigned long IlIllll,IllllIl,
lIIllll,IlIlIlI;lIIllll=(0x1a11+2426-0x238b);llllll=NULL;local_irq_save(flags);
for(i=(0x61f+2377-0xf68);i<lIlll->number_of_packets;i++){IIlIIl=lIlll->
iso_frame_desc[i].length;lllIll=lIlll->transfer_dma+lIlll->iso_frame_desc[i].
offset;while(IIlIIl){IlIlIlI=lllIll>>PAGE_SHIFT;if(IlIlIlI!=lIIllll){if(lIIllll)
#if KERNEL_GT_EQ((0x1c00+2485-0x25b3),(0x4bb+4090-0x14af),(0xde6+2212-0x1665))
kunmap_atomic(llllll);
#else
kunmap_atomic(llllll,KM_IRQ0);
#endif
lIIllll=IlIlIlI;
#if KERNEL_GT_EQ((0x113a+4332-0x2224),(0x338+6637-0x1d1f),(0x12b+6940-0x1c22))
llllll=kmap_atomic(pfn_to_page(IlIlIlI));
#else
llllll=kmap_atomic(pfn_to_page(IlIlIlI),KM_IRQ0);
#endif
}IlIllll=lllIll&(PAGE_SIZE-(0x16f+1843-0x8a1));IllllIl=PAGE_SIZE-IlIllll;IIlIIll
=(IllllIl<IIlIIl)?IllllIl:IIlIIl;memcpy(IIIIIll,llllll+IlIllll,IIlIIll);lllIll+=
IIlIIll;IIIIIll+=IIlIIll;IIlIIl-=IIlIIll;}}if(lIIllll)
#if KERNEL_GT_EQ((0x608+7996-0x2542),(0x33a+5576-0x18fc),(0x2f2+950-0x683))
kunmap_atomic(llllll);
#else
kunmap_atomic(llllll,KM_IRQ0);
#endif
local_irq_restore(flags);Illll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x70\x61\x63\x6b\x5f\x69\x73\x6f\x63\x68\x5f\x62\x75\x66\x3a\x20\x70\x61\x63\x6b\x65\x64\x3d\x25\x6c\x75" "\n"
,(unsigned long)(IIIIIll-IlIIl));return(size_t)(IIIIIll-IlIIl);}else if(lIlll->
transfer_buffer){return IlIIIllI(lIlll->iso_frame_desc,lIlll->number_of_packets,
IlIIl,lIlll->transfer_buffer,(0x26f+261-0x374));}Illll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x70\x61\x63\x6b\x5f\x69\x73\x6f\x63\x68\x5f\x62\x75\x66\x3a\x20\x6e\x6f\x20\x62\x75\x66\x66\x65\x72" "\n"
);return(0x411+2428-0xd8d);}static inline size_t lIIIlIlIl(struct urb*lIlll,void
*IlIIl){if(IlllIIll&&((lIlll->transfer_buffer==NULL)||(lIlll->transfer_flags&
URB_NO_TRANSFER_DMA_MAP))&&(lIlll->transfer_dma!=(0x8f6+4079-0x18e5))&&(lIlll->
transfer_dma!=~(dma_addr_t)(0x1d8+4208-0x1248))){int i;void*lllIll=IlIIl;
dma_addr_t IIIIIll;void*llllll;unsigned long flags;unsigned long IIlIIll,IIlIIl;
unsigned long IlIllll,IllllIl,lIIllll,IlIlIlI;lIIllll=(0x484+2283-0xd6f);llllll=
NULL;local_irq_save(flags);for(i=(0x1074+5195-0x24bf);i<lIlll->number_of_packets
;i++){IIlIIl=lIlll->iso_frame_desc[i].actual_length;IIIIIll=lIlll->transfer_dma+
lIlll->iso_frame_desc[i].offset;while(IIlIIl){IlIlIlI=IIIIIll>>PAGE_SHIFT;if(
IlIlIlI!=lIIllll){if(lIIllll)
#if KERNEL_GT_EQ((0xc66+3502-0x1a12),(0x1f0+8021-0x213f),(0xdd7+4835-0x2095))
kunmap_atomic(llllll);
#else
kunmap_atomic(llllll,KM_IRQ0);
#endif
lIIllll=IlIlIlI;
#if KERNEL_GT_EQ((0x136f+3328-0x206d),(0x365+2879-0xe9e),(0xe0c+1446-0x138d))
llllll=kmap_atomic(pfn_to_page(IlIlIlI));
#else
llllll=kmap_atomic(pfn_to_page(IlIlIlI),KM_IRQ0);
#endif
}IlIllll=IIIIIll&(PAGE_SIZE-(0x505+8653-0x26d1));IllllIl=PAGE_SIZE-IlIllll;
IIlIIll=(IllllIl<IIlIIl)?IllllIl:IIlIIl;memcpy(llllll+IlIllll,lllIll,IIlIIll);
lllIll+=IIlIIll;IIIIIll+=IIlIIll;IIlIIl-=IIlIIll;}}if(lIIllll)
#if KERNEL_GT_EQ((0x5c7+6133-0x1dba),(0x11a7+2447-0x1b30),(0x46d+2467-0xdeb))
kunmap_atomic(llllll);
#else
kunmap_atomic(llllll,KM_IRQ0);
#endif
local_irq_restore(flags);Illll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x75\x6e\x70\x61\x63\x6b\x5f\x69\x73\x6f\x63\x68\x5f\x62\x75\x66\x3a\x20\x70\x61\x63\x6b\x65\x64\x3d\x25\x6c\x75" "\n"
,(unsigned long)(lllIll-IlIIl));return(size_t)(lllIll-IlIIl);}else if(lIlll->
transfer_buffer){return lIIIllIII(lIlll,IlIIl);}Illll(
"\x75\x73\x62\x64\x5f\x76\x68\x63\x69\x5f\x75\x6e\x70\x61\x63\x6b\x5f\x69\x73\x6f\x63\x68\x5f\x62\x75\x66\x3a\x20\x6e\x6f\x20\x62\x75\x66\x66\x65\x72" "\n"
);return(0x637+2361-0xf70);}
#else 

static inline int IIlIllII(struct urb*lIlll,void*IlIIl,int IlIII){if(!IlIII)
return(0x1c82+33-0x1ca3);if(!lIlll->transfer_buffer)return-EINVAL;memcpy(lIlll->
transfer_buffer,IlIIl,IlIII);return IlIII;}static inline int llIlIlll(void*IlIIl
,struct urb*lIlll,int IlIII){if(!IlIII)return(0x54a+4392-0x1672);if(!lIlll->
transfer_buffer)return-EINVAL;memcpy(IlIIl,lIlll->transfer_buffer,IlIII);return 
IlIII;}static inline int IIlIllIll(struct urb*lIlll,void*IlIIl,int IlIII){if(!
IlIII)return(0xa27+5250-0x1ea9);if(!lIlll->setup_packet)return-EINVAL;memcpy(
lIlll->setup_packet,IlIIl,IlIII);return IlIII;}static inline int llIlIIlll(void*
IlIIl,struct urb*lIlll,int IlIII){if(!IlIII)return(0x7c6+946-0xb78);if(!lIlll->
setup_packet)return-EINVAL;memcpy(IlIIl,lIlll->setup_packet,IlIII);return IlIII;
}static inline size_t lIIlIllll(void*IlIIl,struct urb*lIlll){if(!lIlll->
transfer_buffer)return(0x17a2+1560-0x1dba);return IlIIIllI(lIlll->iso_frame_desc
,lIlll->number_of_packets,IlIIl,lIlll->transfer_buffer,(0x265+3111-0xe8c));}

static inline size_t lIIIlIlIl(struct urb*lIlll,void*IlIIl){return lIIIllIII(
lIlll,IlIIl);}
#endif 




static inline int IllIIllIll(struct list_head*llllllI,IlIIlI lllIl,void*IlIIl,
size_t IlIIIl){int IIIll=(0x1911+1680-0x1fa1);int llIllII=sizeof(IIIlIlllI);
IIIII IlIlI=IlIIl;struct IIIlIll*lllIII;IlIlI->lllII.IlIIll=lllIl;IlIlI->lllII.
IllllII=(0xf20+1366-0x1476);IlIlI->lllII.IIllI=llIllII;IlIlI->lllII.llIIlIl=
IIllIIIl;IlIlI->lllII.Status=(0xbcb+6784-0x264b);IlIlI->lllII.Context=
(0xe4c+128-0xecc);if(IlIIIl<IlIlI->lllII.IIllI){return-EMSGSIZE;}lllIII=
list_entry(llllllI->prev,struct IIIlIll,IIIIll);IlIlI->IllllI.lllllI=
(0x133a+1449-0x18e3);IlIlI->IllllI.Endpoint=usb_pipeendpoint(lllIII->lIlll->pipe
);IlIlI->IllllI.Flags=usb_pipein(lllIII->lIlll->pipe)?IIIllI:(0x8fc+7222-0x2532)
;
if(usb_pipein(lllIII->lIlll->pipe)&&!(lllIII->lIlll->transfer_flags&
URB_SHORT_NOT_OK)){IlIlI->IllllI.Flags|=lIlIlIl;}


list_for_each_entry(lllIII,llllllI,IIIIll){if(usb_pipeout(lllIII->lIlll->pipe)){
if(IlIIIl>=(IlIlI->lllII.IIllI+lllIII->lIlll->transfer_buffer_length)){if(
llIlIlll((char*)IlIIl+IlIlI->lllII.IIllI,lllIII->lIlll,lllIII->lIlll->
transfer_buffer_length)<(0x1c32+1549-0x223f))return-EINVAL;}IlIlI->lllII.IIllI+=
lllIII->lIlll->transfer_buffer_length;}IlIlI->IllllI.lllllI+=lllIII->lIlll->
transfer_buffer_length;}if(IlIIIl<IlIlI->lllII.IIllI){return-EMSGSIZE;}return 
IIIll;}static inline int IIllIllIl(struct urb*lIlll,IlIIlI lllIl,void*IlIIl,
size_t IlIIIl){int IIIll=(0x809+768-0xb09);int llIllII=sizeof(IlIIIllII);IIIII 
IlIlI=IlIIl;IlIlI->lllII.IlIIll=lllIl;IlIlI->lllII.IllllII=(0x10b+8464-0x221b);
IlIlI->lllII.IIllI=llIllII;IlIlI->lllII.llIIlIl=lIlllIIl;IlIlI->lllII.Status=
(0x16e6+1343-0x1c25);IlIlI->lllII.Context=(0x21d0+395-0x235b);if(IlIIIl<IlIlI->
lllII.IIllI){return-EMSGSIZE;}IlIlI->llIIlI.lllllI=lIlll->transfer_buffer_length
;IlIlI->llIIlI.Interval=lIlll->interval;IlIlI->llIIlI.Endpoint=usb_pipeendpoint(
lIlll->pipe);IlIlI->llIIlI.Flags=usb_pipein(lIlll->pipe)?IIIllI:
(0x450+3791-0x131f);IlIlI->llIIlI.Flags|=(lIlll->transfer_flags&URB_SHORT_NOT_OK
)?(0x16d+7311-0x1dfc):lIlIlIl;if(usb_pipeout(lIlll->pipe)){if(IlIIIl>=(IlIlI->
lllII.IIllI+lIlll->transfer_buffer_length)){if(llIlIlll((char*)IlIIl+IlIlI->
lllII.IIllI,lIlll,lIlll->transfer_buffer_length)<(0x114a+2394-0x1aa4))return-
EINVAL;}IlIlI->lllII.IIllI+=lIlll->transfer_buffer_length;}if(IlIIIl<IlIlI->
lllII.IIllI){return-EMSGSIZE;}return IIIll;}static inline int IllIlIIll(struct 
urb*lIlll,IlIIlI lllIl,void*IlIIl,size_t IlIIIl){int IIIll=(0x1a0d+2582-0x2423);
IIIII IlIlI=IlIIl;int i;int llIllII=sizeof(IIlIllIlI)-sizeof(IIIlIIll)+sizeof(
IIIlIIll)*lIlll->number_of_packets;IlIlI->lllII.IlIIll=lllIl;IlIlI->lllII.
IllllII=(0x13f1+2017-0x1bd2);IlIlI->lllII.IIllI=llIllII;IlIlI->lllII.llIIlIl=
llIIlllI;IlIlI->lllII.Status=(0x1823+978-0x1bf5);IlIlI->lllII.Context=
(0x1250+1583-0x187f);if(IlIIIl<IlIlI->lllII.IIllI){return-EMSGSIZE;}IlIlI->llIIl
.Endpoint=usb_pipeendpoint(lIlll->pipe);IlIlI->llIIl.Flags=usb_pipein(lIlll->
pipe)?IIIllI:(0xc90+4987-0x200b);IlIlI->llIIl.Flags|=(lIlll->transfer_flags&
URB_SHORT_NOT_OK)?(0x3b6+7234-0x1ff8):lIlIlIl;


























IlIlI->llIIl.Flags|=IIlIlIlll;
IlIlI->llIIl.lllllI=lIlll->transfer_buffer_length;IlIlI->llIIl.Interval=lIlll->
interval;IlIlI->llIIl.IIlIlIIl=(0x623+600-0x87b);
IlIlI->llIIl.llIIIIIl=(0x159+8479-0x2278);IlIlI->llIIl.IlIllIl=lIlll->
number_of_packets;for(i=(0x25c+9334-0x26d2);i<lIlll->number_of_packets;i++){
IlIlI->llIIl.IlllIlI[i].Offset=lIlll->iso_frame_desc[i].offset;IlIlI->llIIl.
IlllIlI[i].Length=lIlll->iso_frame_desc[i].length;IlIlI->llIIl.IlllIlI[i].Status
=(0xaf7+1137-0xf68);}if(usb_pipeout(lIlll->pipe)){if(IlIIIl>=(IlIlI->lllII.IIllI
+lIlll->transfer_buffer_length)){IlIlI->lllII.IIllI+=lIIlIllll((char*)IlIIl+
IlIlI->lllII.IIllI,lIlll);}else{
IlIlI->lllII.IIllI+=lIlll->transfer_buffer_length;}}if(IlIIIl<IlIlI->lllII.IIllI
){return-EMSGSIZE;}return IIIll;}static inline int llllllllll(struct urb*lIlll,
IlIIlI lllIl,struct usb_ctrlrequest*IlllIll,void*IlIIl,size_t IlIIIl){int IIIll=
(0x1eaf+2123-0x26fa);IIIII IlIlI=IlIIl;int llIllII=sizeof(IllIIlIll);IlIlI->
lllII.IlIIll=lllIl;IlIlI->lllII.IllllII=(0xfd+8890-0x23b7);IlIlI->lllII.IIllI=
llIllII;IlIlI->lllII.llIIlIl=IlIIlIII;IlIlI->lllII.Status=(0x1224+4754-0x24b6);
IlIlI->lllII.Context=(0x10d4+1187-0x1577);if(IlIIIl<IlIlI->lllII.IIllI){return-
EMSGSIZE;}IlIlI->llIIII.Endpoint=usb_pipeendpoint(lIlll->pipe);IlIlI->llIIII.
Flags=usb_pipein(lIlll->pipe)?IIIllI:(0x150b+4362-0x2615);if(usb_pipein(lIlll->
pipe))IlIlI->llIIII.Flags|=(lIlll->transfer_flags&URB_SHORT_NOT_OK)?
(0x20d8+150-0x216e):lIlIlIl;IlIlI->llIIII.IIllIll=IlllIll->bRequestType;IlIlI->
llIIII.IlIlIIlII=IlllIll->bRequest;IlIlI->llIIII.llIllIll=le16_to_cpu(IlllIll->
wValue);IlIlI->llIIII.IIIlIIllI=le16_to_cpu(IlllIll->wIndex);IlIlI->llIIII.
lllllI=lIlll->transfer_buffer_length;if(usb_pipeout(lIlll->pipe)){if(IlIIIl>=(
IlIlI->lllII.IIllI+lIlll->transfer_buffer_length)){if(llIlIlll((char*)IlIIl+
llIllII,lIlll,lIlll->transfer_buffer_length)<(0x27f+8429-0x236c))return-EINVAL;}
IlIlI->lllII.IIllI+=lIlll->transfer_buffer_length;}if(IlIIIl<IlIlI->lllII.IIllI)
{return-EMSGSIZE;}return IIIll;}static inline int IIIllllll(struct urb*lIlll,
IlIIlI lllIl,struct usb_ctrlrequest*IlllIll,int lIllllll,void*IlIIl,size_t 
IlIIIl){int IIIll=(0x1f31+980-0x2305);IIIII IlIlI=IlIIl;int llIllII=sizeof(
IIIIlIlll);IlIlI->lllII.IlIIll=lllIl;IlIlI->lllII.IllllII=(0x1000+2702-0x1a8e);
IlIlI->lllII.IIllI=llIllII;IlIlI->lllII.llIIlIl=lIllllll?llllllIl:lllIlIII;IlIlI
->lllII.Status=(0x154b+4273-0x25fc);IlIlI->lllII.Context=(0xa59+6718-0x2497);if(
IlIIIl<IlIlI->lllII.IIllI){return-EMSGSIZE;}IlIlI->IIlllI.IIIIIIII=le16_to_cpu(
IlllIll->wIndex);IlIlI->IIlllI.lllllI=lIlll->transfer_buffer_length;IlIlI->
IIlllI.lIIIIlll=(le16_to_cpu(IlllIll->wValue)>>(0xa13+6974-0x2549))&
(0x111c+4539-0x21d8);IlIlI->IIlllI.IIIlllll=le16_to_cpu(IlllIll->wValue)&
(0x14e7+4071-0x23cf);switch(IlllIll->bRequestType&USB_TYPE_MASK){case 
USB_TYPE_STANDARD:IlIlI->IIlllI.IIllIll=IllllllIll;break;case USB_TYPE_CLASS:
IlIlI->IIlllI.IIllIll=lllllllII;break;case USB_TYPE_VENDOR:IlIlI->IIlllI.IIllIll
=lIllllllI;break;case USB_TYPE_RESERVED:IlIlI->IIlllI.IIllIll=IlIlIIIll;break;
default:IlIlI->IIlllI.IIllIll=(0x25a+1805-0x967);}switch(IlllIll->bRequestType&
USB_RECIP_MASK){case USB_RECIP_DEVICE:IlIlI->IIlllI.IllIlIll=lllIIIIII;break;
case USB_RECIP_INTERFACE:IlIlI->IIlllI.IllIlIll=IlllllIlI;break;case 
USB_RECIP_ENDPOINT:IlIlI->IIlllI.IllIlIll=IIllIIlII;break;case USB_RECIP_OTHER:
IlIlI->IIlllI.IllIlIll=llIllIlll;break;default:IlIlI->IIlllI.IIllIll=
(0x984+7362-0x2646);}if(!lIllllll){if(IlIIIl>=(IlIlI->lllII.IIllI+lIlll->
transfer_buffer_length)){if(llIlIlll((char*)IlIIl+llIllII,lIlll,lIlll->
transfer_buffer_length)<(0x60d+7457-0x232e))return-EINVAL;}IlIlI->lllII.IIllI+=
lIlll->transfer_buffer_length;}if(IlIIIl<IlIlI->lllII.IIllI){return-EMSGSIZE;}
return IIIll;}static inline int IlIIlIlIl(struct urb*lIlll,IlIIlI lllIl,struct 
usb_ctrlrequest*IlllIll,void*IlIIl,size_t IlIIIl){int IIIll=(0x67a+4596-0x186e);
IIIII IlIlI=IlIIl;int IlIIlIIl=sizeof(IllIIllll);IlIlI->lllII.IlIIll=lllIl;IlIlI
->lllII.IllllII=(0x921+5961-0x206a);IlIlI->lllII.IIllI=IlIIlIIl;IlIlI->lllII.
llIIlIl=lIIIIllI;IlIlI->lllII.Status=(0x1527+1646-0x1b95);IlIlI->lllII.Context=
(0x101d+4828-0x22f9);if(IlIIIl<IlIlI->lllII.IIllI){return-EMSGSIZE;}IlIlI->
IlIIIIl.lIlllII=(lIllIl)le16_to_cpu(IlllIll->wIndex);IlIlI->IlIIIIl.llIlllI=(
lIllIl)le16_to_cpu(IlllIll->wValue);return IIIll;}static inline int IIIIIlIIl(
struct urb*lIlll,IlIIlI lllIl,struct usb_ctrlrequest*IlllIll,void*IlIIl,size_t 
IlIIIl){int IIIll=(0x767+3427-0x14ca);IIIII IlIlI=IlIIl;int IlIIlIIl=sizeof(
lIIlllIlI)-sizeof(IlIlI->lIIllII.llIIlII[(0x1537+3762-0x23e9)]);IlIlI->lllII.
IlIIll=lllIl;IlIlI->lllII.IllllII=(0x642+5783-0x1cd9);IlIlI->lllII.IIllI=
IlIIlIIl;IlIlI->lllII.llIIlIl=IlIIlIll;IlIlI->lllII.Status=(0x1715+1201-0x1bc6);
IlIlI->lllII.Context=(0x403+129-0x484);if(IlIIIl<IlIlI->lllII.IIllI){return-
EMSGSIZE;}IlIlI->lIIllII.IIllIIlI=(lIllIl)le16_to_cpu(IlllIll->wValue);IlIlI->
lIIllII.IlllllIl=(0x10df+1203-0x1592);return IIIll;}static inline int lIIllIlIl(
struct urb*lIlll,IlIIlI lllIl,struct usb_ctrlrequest*IlllIll,void*IlIIl,size_t 
IlIIIl){int IIIll=(0x8d9+4591-0x1ac8);IIIII IlIlI=IlIIl;int IlIIlIIl=sizeof(
IIlllllIl);IlIlI->lllII.IlIIll=lllIl;IlIlI->lllII.IllllII=(0x1b6+8030-0x2114);
IlIlI->lllII.IIllI=IlIIlIIl;IlIlI->lllII.llIIlIl=IIIIlIII;IlIlI->lllII.Status=
(0xdc+258-0x1de);IlIlI->lllII.Context=(0x4f3+4604-0x16ef);if(IlIIIl<IlIlI->lllII
.IIllI){return-EMSGSIZE;}IlIlI->IlIIIll.Endpoint=IlllIll->wIndex&
(0x1759+2837-0x225f);
IlIlI->IlIIIll.Flags=(IlllIll->wIndex&USB_DIR_IN)?IIIllI:(0x1cfa+189-0x1db7);
return IIIll;}int llIlIlllI(struct list_head*llllllI,IlIIlI lllIl,void*IlIIl,
size_t IlIIIl){int IIIll=-EINVAL;do
{struct usb_ctrlrequest llIlll;struct urb*lIlll;struct IIIlIll*lllIII;lllIII=
list_entry(llllllI->next,struct IIIlIll,IIIIll);lIlll=lllIII->lIlll;if(!lIlll){
Illll(
"\x75\x73\x62\x64\x5f\x70\x61\x63\x6b\x5f\x75\x72\x62\x5f\x6c\x69\x73\x74\x3a\x20\x70\x75\x72\x62\x20\x69\x73\x20\x6e\x75\x6c\x6c\x28\x30\x78\x25\x70\x29\x2c\x20\x70\x76\x75\x72\x62\x3d\x30\x78\x25\x70\x20\x70\x75\x72\x62\x5f\x6c\x69\x73\x74\x3d\x30\x78\x25\x70" "\n"
,lIlll,lllIII,llllllI);break;}switch(usb_pipetype(lIlll->pipe)){case PIPE_BULK:
IIIll=IllIIllIll(llllllI,lllIl,IlIIl,IlIIIl);break;case PIPE_INTERRUPT:IIIll=
IIllIllIl(lIlll,lllIl,IlIIl,IlIIIl);break;case PIPE_ISOCHRONOUS:IIIll=IllIlIIll(
lIlll,lllIl,IlIIl,IlIIIl);break;case PIPE_CONTROL:IIIll=llIlIIlll(&llIlll,lIlll,
sizeof(llIlll));if(IIIll<(0xdcf+4655-0x1ffe))break;if(IIIll!=sizeof(llIlll)){
IIIll=-EINVAL;break;}if(llIlll.bRequestType==(USB_DIR_IN|USB_TYPE_STANDARD|
USB_RECIP_DEVICE)&&llIlll.bRequest==USB_REQ_GET_DESCRIPTOR){
IIIll=IIIllllll(lIlll,lllIl,&llIlll,(0x28+9550-0x2575),IlIIl,IlIIIl);}else if(
llIlll.bRequestType==(USB_DIR_OUT|USB_TYPE_STANDARD|USB_RECIP_DEVICE)&&llIlll.
bRequest==USB_REQ_SET_DESCRIPTOR){
IIIll=IIIllllll(lIlll,lllIl,&llIlll,(0xc97+752-0xf87),IlIIl,IlIIIl);}else if(
llIlll.bRequestType==(USB_DIR_OUT|USB_TYPE_STANDARD|USB_RECIP_DEVICE)&&llIlll.
bRequest==USB_REQ_SET_CONFIGURATION){
IIIll=IIIIIlIIl(lIlll,lllIl,&llIlll,IlIIl,IlIIIl);}else if(llIlll.bRequestType==
(USB_DIR_OUT|USB_TYPE_STANDARD|USB_RECIP_INTERFACE)&&llIlll.bRequest==
USB_REQ_SET_INTERFACE){
IIIll=IlIIlIlIl(lIlll,lllIl,&llIlll,IlIIl,IlIIIl);}else if(llIlll.bRequestType==
(USB_DIR_OUT|USB_TYPE_STANDARD|USB_RECIP_ENDPOINT)&&llIlll.bRequest==
USB_REQ_CLEAR_FEATURE&&llIlll.wValue==USB_ENDPOINT_HALT){
IIIll=lIIllIlIl(lIlll,lllIl,&llIlll,IlIIl,IlIIIl);}else{
IIIll=llllllllll(lIlll,lllIl,&llIlll,IlIIl,IlIIIl);}break;default:IIllIl(
"\x75\x6e\x6b\x6e\x6f\x77\x6e\x20\x70\x69\x70\x65\x20\x74\x79\x70\x65\x20\x25\x64\x20\x69\x6e\x20\x75\x72\x62" "\n"
,usb_pipetype(lIlll->pipe));IIIll=-EINVAL;break;}}while((0x695+2416-0x1005));if(
IIIll<(0x10da+397-0x1267)&&IIIll!=-EMSGSIZE){IIllIl(
"\x62\x72\x6f\x6b\x65\x6e\x20\x75\x72\x62\x20\x64\x65\x74\x65\x63\x74\x65\x64\x2c\x20\x65\x72\x72\x6f\x72\x20\x63\x6f\x64\x65\x20\x25\x64" "\n"
,IIIll);}return IIIll;}



static inline int IlIlllIIl(IIIII IlIlI,struct urb*lIlll,int lIllllll){int IIIll
=(0x59d+4986-0x1917);lIlll->actual_length=min((IIIIl)lIlll->
transfer_buffer_length,IlIlI->IIlllI.lllllI);if(lIllllll){IIlIllII(lIlll,(char*)
IlIlI+sizeof(IlIlI->IIlllI),lIlll->actual_length);}return IIIll;}static inline 
int lIIIlIlIlI(IIIII IlIlI,struct list_head*llllllI){int IIIll=
(0x1356+134-0x13dc);struct IIIlIll*lllIII;unsigned long lIlIIlIIl;unsigned char*
IlIIl;lIlIIlIIl=IlIlI->IllllI.lllllI;IlIIl=(unsigned char*)IlIlI+sizeof(IlIlI->
IllllI);


list_for_each_entry(lllIII,llllllI,IIIIll){lllIII->lIlll->actual_length=min((
unsigned long)lllIII->lIlll->transfer_buffer_length,lIlIIlIIl);if(usb_pipein(
lllIII->lIlll->pipe)){Illll(
"\x75\x73\x62\x64\x5f\x75\x6e\x70\x61\x63\x6b\x5f\x75\x72\x62\x5f\x62\x75\x6c\x6b\x3a\x20\x63\x6f\x70\x79\x20\x25\x64\x20\x62\x79\x74\x65\x73\x20\x74\x6f\x20\x75\x72\x62\x20\x25\x70" "\n"
,lllIII->lIlll->actual_length,lllIII->lIlll);IIlIllII(lllIII->lIlll,IlIIl,lllIII
->lIlll->actual_length);}lIlIIlIIl-=lllIII->lIlll->actual_length;IlIIl+=lllIII->
lIlll->actual_length;}return IIIll;}static inline int IIIIlIlllI(IIIII IlIlI,
struct urb*lIlll){int i;int IIIll=(0x17e4+1207-0x1c9b);lIllIl*IlIIIlllIl=(lIllIl
*)IlIlI+IlIlIlll(IlIlI);if(IlIlI->llIIl.IlIllIl!=lIlll->number_of_packets)return
-EINVAL;lIlll->start_frame=IlIlI->llIIl.IIlIlIIl;lIlll->error_count=IlIlI->llIIl
.llIIIIIl;lIlll->actual_length=(0x5df+5024-0x197f);for(i=(0xd88+1479-0x134f);i<
lIlll->number_of_packets;i++){lIlll->iso_frame_desc[i].status=lllIIIll(IlIlI->
llIIl.IlllIlI[i].Status);lIlll->iso_frame_desc[i].actual_length=IlIlI->llIIl.
IlllIlI[i].Length;lIlll->actual_length+=lIlll->iso_frame_desc[i].actual_length;}
if(usb_pipein(lIlll->pipe))lIIIlIlIl(lIlll,IlIIIlllIl);return IIIll;}static 
inline int lIIIIllIII(IIIII IlIlI,struct urb*lIlll){int IIIll=(0xa93+988-0xe6f);
lIlll->actual_length=min((IIIIl)lIlll->transfer_buffer_length,IlIlI->llIIII.
lllllI);if(usb_pipein(lIlll->pipe)){IIlIllII(lIlll,(char*)IlIlI+sizeof(IlIlI->
llIIII),lIlll->actual_length);}return IIIll;}static inline int llIIlIIlII(IIIII 
IlIlI,struct urb*lIlll){int IIIll=(0x160+6570-0x1b0a);lIlll->actual_length=min((
IIIIl)lIlll->transfer_buffer_length,IlIlI->llIIlI.lllllI);if(usb_pipein(lIlll->
pipe)){IIlIllII(lIlll,(char*)IlIlI+sizeof(IlIlI->llIIlI),lIlll->actual_length);}
return IIIll;}int lIlIlllII(IIIII IlIlI,struct list_head*llllllI,int*status){int
 IIIll=(0xbe5+6074-0x239f);struct IIIlIll*lllIII=list_entry(llllllI->next,struct
 IIIlIll,IIIIll);struct urb*lIlll=lllIII->lIlll;*status=lllIIIll(IlIlI->lllII.
Status);switch(IlIlI->lllII.llIIlIl){case llllllIl:Illll(
"\x75\x73\x62\x64\x5f\x75\x6e\x70\x61\x63\x6b\x5f\x75\x72\x62\x3a\x20\x47\x65\x74\x44\x65\x73\x63\x72\x69\x70\x74\x6f\x72" "\n"
);IIIll=IlIlllIIl(IlIlI,lIlll,(0xf71+2774-0x1a46));break;case lllIlIII:Illll(
"\x75\x73\x62\x64\x5f\x75\x6e\x70\x61\x63\x6b\x5f\x75\x72\x62\x3a\x20\x53\x65\x74\x44\x65\x73\x63\x72\x69\x70\x74\x6f\x72" "\n"
);IIIll=IlIlllIIl(IlIlI,lIlll,(0xef2+706-0x11b4));break;case IlIIlIll:Illll(
"\x75\x73\x62\x64\x5f\x75\x6e\x70\x61\x63\x6b\x5f\x75\x72\x62\x3a\x20\x53\x65\x6c\x65\x63\x74\x43\x6f\x6e\x66\x69\x67\x75\x72\x61\x74\x69\x6f\x6e" "\n"
);IIIll=(0x1147+3040-0x1d27);break;case lIIIIllI:Illll(
"\x75\x73\x62\x64\x5f\x75\x6e\x70\x61\x63\x6b\x5f\x75\x72\x62\x3a\x20\x53\x65\x6c\x65\x63\x74\x49\x6e\x74\x65\x72\x66\x61\x63\x65" "\n"
);IIIll=(0x581+1387-0xaec);break;case IlIIlIII:Illll(
"\x75\x73\x62\x64\x5f\x75\x6e\x70\x61\x63\x6b\x5f\x75\x72\x62\x3a\x20\x43\x6f\x6e\x74\x72\x6f\x6c\x54\x72\x61\x6e\x73\x66\x65\x72" "\n"
);IIIll=lIIIIllIII(IlIlI,lIlll);break;case IIllIIIl:Illll(
"\x75\x73\x62\x64\x5f\x75\x6e\x70\x61\x63\x6b\x5f\x75\x72\x62\x3a\x20\x42\x75\x6c\x6b\x54\x72\x61\x6e\x73\x66\x65\x72" "\n"
);IIIll=lIIIlIlIlI(IlIlI,llllllI);break;case llIIlllI:Illll(
"\x75\x73\x62\x64\x5f\x75\x6e\x70\x61\x63\x6b\x5f\x75\x72\x62\x3a\x20\x49\x73\x6f\x63\x68\x54\x72\x61\x6e\x73\x66\x65\x72" "\n"
);IIIll=IIIIlIlllI(IlIlI,lIlll);break;case lIlllIIl:Illll(
"\x75\x73\x62\x64\x5f\x75\x6e\x70\x61\x63\x6b\x5f\x75\x72\x62\x3a\x20\x49\x6e\x74\x65\x72\x72\x75\x70\x74\x54\x72\x61\x6e\x73\x66\x65\x72" "\n"
);IIIll=llIIlIIlII(IlIlI,lIlll);break;case IIIIlIII:Illll(
"\x75\x73\x62\x64\x5f\x75\x6e\x70\x61\x63\x6b\x5f\x75\x72\x62\x3a\x20\x43\x6c\x65\x61\x72\x53\x74\x61\x6c\x6c" "\n"
);IIIll=(0x2a8+2632-0xcf0);break;case IllllllI:Illll(
"\x75\x73\x62\x64\x5f\x75\x6e\x70\x61\x63\x6b\x5f\x75\x72\x62\x3a\x20\x52\x65\x73\x65\x74\x50\x6f\x72\x74" "\n"
);IIIll=(0x6d7+7663-0x24c6);break;default:Illll(
"\x75\x73\x62\x64\x5f\x75\x6e\x70\x61\x63\x6b\x5f\x75\x72\x62\x3a\x20\x75\x6e\x6b\x6e\x6f\x77\x6e\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e" "\n"
);IIIll=-EINVAL;break;}return IIIll;}void IllIlIlII(struct lIlIIl*llllI,IIIIl*
busnum,IIIIl*devnum){if(busnum)*busnum=llllI->parent->self.busnum;
if(devnum)*devnum=llllI->llIIlll;}
























































void IlllIIl(struct lIIIII*lIIII,int lIllI,int llllII,int lllllII){
switch(llllII){case llllIIll:case lIllIIll:case IlIlIIII:IlIIIII(lIIII,lIllI,
IIlllllI);break;case IIIIlIll:IlIIIII(lIIII,lIllI,IIlllllI);break;case llIIlIlI:
lIIII->IIIlllI[lIllI]&=~USB_PORT_STAT_C_CONNECTION;break;case lIlllIlIl:lIIII->
IIIlllI[lIllI]&=~USB_PORT_STAT_C_ENABLE;break;case IllIIIlll:lIIII->IIIlllI[
lIllI]&=~USB_PORT_STAT_C_SUSPEND;break;case lllIlIll:lIIII->IIIlllI[lIllI]&=~
USB_PORT_STAT_C_RESET;break;}
switch(lIIII->lllllIIl[lIllI]){case IIlllllI:if(llllII==lllIIlIl)IlIIIII(lIIII,
lIllI,lllIIll);break;case lllIIll:if(llllII==IIIlIlII)IlIIIII(lIIII,lIllI,
llIlIII);break;case llIlIII:if(llllII==IlIIIlll)IlIIIII(lIIII,lIllI,lllIIll);if(
llllII==IIlIllll)IlIIIII(lIIII,lIllI,lllIllI);break;case lllIllI:if(llllII==
IlIIIlll)IlIIIII(lIIII,lIllI,lllIIll);if(llllII==IIlIIlll)IlIIIII(lIIII,lIllI,
llIlIII);if(llllII==lIlIlIIl)IlIIIII(lIIII,lIllI,lIIllIIl);break;case lIIllIIl:
if(llllII==IlIIIlll)IlIIIII(lIIII,lIllI,lllIIll);if(llllII==IIlIIlll)IlIIIII(
lIIII,lIllI,llIlIII);if(llllII==IIlIllll)IlIIIII(lIIII,lIllI,lllIllI);if(llllII
==llllIlIIl)IlIIIII(lIIII,lIllI,IIIllIllI);break;case IIIllIllI:if(llllII==
IlIIIlll)IlIIIII(lIIII,lIllI,lllIIll);if(llllII==IIlIIlll)IlIIIII(lIIII,lIllI,
llIlIII);if(llllII==IIlIllll)IlIIIII(lIIII,lIllI,lllIllI);if(llllII==IIlIlIIlI||
llllII==lIIllllIl)IlIIIII(lIIII,lIllI,lIIlllIl);break;case lIIlllIl:if(llllII==
IlIIIlll)IlIIIII(lIIII,lIllI,lllIIll);if(llllII==IIlIIlll)IlIIIII(lIIII,lIllI,
llIlIII);if(llllII==IIlIllll)IlIIIII(lIIII,lIllI,lllIllI);if(llllII==lIlIlIIl)
IlIIIII(lIIII,lIllI,lIIllIIl);break;}}static inline int IllIIllIl(int speed){
switch(speed){case USB_SPEED_HIGH:return USB_PORT_STAT_HIGH_SPEED;case 
USB_SPEED_LOW:return USB_PORT_STAT_LOW_SPEED;case USB_SPEED_FULL:return
(0x998+6447-0x22c7);}return(0x1596+979-0x1969);}
void IlIIIII(struct lIIIII*lIIII,int lIllI,int lIIlIIIl){
int IIIIlIlI=lIIII->lllllIIl[lIllI];if(lIIlIIIl==IIIIlIlI)return;lIIII->lllllIIl
[lIllI]=lIIlIIIl;lIIII->IlllIII[lIllI]=(0x263a+211-0x270d);if(IIIIlIlI==lllIllI)
lIIII->IIIlllI[lIllI]|=USB_PORT_STAT_C_RESET;if(IIIIlIlI==lIIlllIl)lIIII->
IIIlllI[lIllI]|=USB_PORT_STAT_C_SUSPEND;switch(lIIlIIIl){case IIlllllI:lIIII->
lIIlIlI[lIllI]=(0x1780+2068-0x1f94);lIIII->IIIlllI[lIllI]=(0x7ec+3547-0x15c7);
break;case lllIIll:lIIII->lIIlIlI[lIllI]=USB_PORT_STAT_POWER;if(IIIIlIlI!=
IIlllllI)lIIII->IIIlllI[lIllI]|=USB_PORT_STAT_C_CONNECTION;
if(lIIII->llIlIll[lIllI]){IlIIIII(lIIII,lIllI,llIlIII);}break;case llIlIII:lIIII
->lIIlIlI[lIllI]=USB_PORT_STAT_POWER|USB_PORT_STAT_CONNECTION;if(IIIIlIlI==
lllIIll)lIIII->IIIlllI[lIllI]|=USB_PORT_STAT_C_CONNECTION;break;case lllIllI:
lIIII->lIIlIlI[lIllI]=USB_PORT_STAT_POWER|USB_PORT_STAT_CONNECTION|
USB_PORT_STAT_RESET;
lIIII->IlllIII[lIllI]=jiffies+msecs_to_jiffies((0x1a68+541-0x1c53));
lIIII->IlllIII[lIllI]+=lIIII->IlllIII[lIllI]?(0x154a+1273-0x1a43):
(0x80+1444-0x623);break;case lIIllIIl:lIIII->lIIlIlI[lIllI]=USB_PORT_STAT_POWER|
USB_PORT_STAT_CONNECTION|USB_PORT_STAT_ENABLE|IllIIllIl(lIIII->llIlIll[lIllI]->
speed);break;case IIIllIllI:lIIII->lIIlIlI[lIllI]=USB_PORT_STAT_POWER|
USB_PORT_STAT_CONNECTION|USB_PORT_STAT_ENABLE|USB_PORT_STAT_SUSPEND|IllIIllIl(
lIIII->llIlIll[lIllI]->speed);break;case lIIlllIl:lIIII->lIIlIlI[lIllI]=
USB_PORT_STAT_POWER|USB_PORT_STAT_CONNECTION|USB_PORT_STAT_ENABLE|
USB_PORT_STAT_SUSPEND|IllIIllIl(lIIII->llIlIll[lIllI]->speed);
lIIII->IlllIII[lIllI]=jiffies+msecs_to_jiffies((0x536+997-0x907));
lIIII->IlllIII[lIllI]+=lIIII->IlllIII[lIllI]?(0x2f8+7495-0x203f):
(0xd48+1725-0x1404);break;default:IIllIl(
"\x69\x6e\x76\x61\x6c\x69\x64\x20\x6e\x65\x77\x20\x70\x6f\x72\x74\x20\x73\x74\x61\x74\x65" "\n"
);break;}}
#if KERNEL_GT_EQ((0x7eb+284-0x905),(0x15d9+48-0x1603),(0x6cc+2934-0x121b)) || \
RHEL_RELEASE_GT_EQ((0x1fdd+343-0x212e),(0x1870+974-0x1c3b)) 

























void IIlIlIl(struct lIIIII*lIIII,int lIllI,int llllII,int lllllII){
switch(llllII){case llllIIll:case IlIlIIII:llIIllI(lIIII,lIllI,IIlllllI);return;
case llIIlIlI:lIIII->IIIlllI[lIllI]&=~USB_PORT_STAT_C_CONNECTION;return;case 
lllIlIll:lIIII->IIIlllI[lIllI]&=~USB_PORT_STAT_C_RESET;return;case IIIIIIlIl:
lIIII->IIIlllI[lIllI]&=~USB_PORT_STAT_C_BH_RESET;return;case lIIlIlllI:lIIII->
IIIlllI[lIllI]&=~USB_PORT_STAT_C_LINK_STATE;return;case IlIIIIll:if(lllllII==
(0x1255+2044-0x1a4d)){
llIIllI(lIIII,lIllI,llIlIII);return;}break;}
switch(lIIII->lllllIIl[lIllI]){case IIlllllI:if(llllII==lIllIIll)llIIllI(lIIII,
lIllI,lllIIll);break;case llIlllIl:if(llllII==lllIIlIl)llIIllI(lIIII,lIllI,
lllIIll);if(llllII==IIlIllll)llIIllI(lIIII,lIllI,lllIllI);break;case lllIIll:if(
llllII==IIIIlIll)llIIllI(lIIII,lIllI,llIlllIl);if(llllII==IIIlIlII)llIIllI(lIIII
,lIllI,lIIllIIl);break;case llIlIII:if(llllII==IIIIlIll)llIIllI(lIIII,lIllI,
llIlllIl);if(llllII==IIlIllll)llIIllI(lIIII,lIllI,lllIllI);if(llllII==IlIIIIll&&
lllllII==(0x1117+1202-0x15c4)){


llIIllI(lIIII,lIllI,lllIIll);}break;case lIIllIIl:if(llllII==IIIIlIll)llIIllI(
lIIII,lIllI,llIlllIl);if(llllII==IlIIIlll)llIIllI(lIIII,lIllI,lllIIll);if(llllII
==IIlIllll)llIIllI(lIIII,lIllI,lllIllI);if(llllII==IlIIIIll&&lllllII==
(0x18ca+1026-0x1ccc)){
if(lIIII->lIlIlII[lIllI]==USB_SS_PORT_LS_U3){

lIIII->IIIlllI[lIllI]|=USB_PORT_STAT_C_LINK_STATE;}lllIIlI(lIIII,lIllI,
USB_SS_PORT_LS_U0);}if(llllII==IlIIIIll&&lllllII==(0x8bc+179-0x96e)){

if(lIIII->lIlIlII[lIllI]==USB_SS_PORT_LS_U0){lllIIlI(lIIII,lIllI,
USB_SS_PORT_LS_U1);}}if(llllII==IlIIIIll&&lllllII==(0x17ff+665-0x1a96)){

if(lIIII->lIlIlII[lIllI]==USB_SS_PORT_LS_U0){lllIIlI(lIIII,lIllI,
USB_SS_PORT_LS_U2);}}if(llllII==IlIIIIll&&lllllII==(0x11+3691-0xe79)){

if(lIIII->lIlIlII[lIllI]==USB_SS_PORT_LS_U0||lIIII->lIlIlII[lIllI]==
USB_SS_PORT_LS_U1||lIIII->lIlIlII[lIllI]==USB_SS_PORT_LS_U2){

if(lIIII->lIlIlII[lIllI]!=USB_SS_PORT_LS_U0){lllIIlI(lIIII,lIllI,
USB_SS_PORT_LS_U0);}lllIIlI(lIIII,lIllI,USB_SS_PORT_LS_U3);}}break;case lllIllI:
if(llllII==IIIIlIll)llIIllI(lIIII,lIllI,llIlllIl);if(llllII==IlIIIlll)llIIllI(
lIIII,lIllI,lllIIll);if(llllII==lIlIlIIl)llIIllI(lIIII,lIllI,lIIllIIl);break;}}
static inline int llIllllIl(int speed){switch(speed){case USB_SPEED_SUPER:return
 USB_PORT_STAT_SPEED_5GBPS;default:return(0x7c3+2662-0x1229);}return
(0x814+3082-0x141e);}
void llIIllI(struct lIIIII*lIIII,int lIllI,int lIIlIIIl){int llIIIlIIl=lIIII->
lIIlIlI[lIllI];int IIIIlIlI=lIIII->lllllIIl[lIllI];if(lIIlIIIl==IIIIlIlI)return;
lIIII->lllllIIl[lIllI]=lIIlIIIl;lIIII->IlllIII[lIllI]=(0xda+5875-0x17cd);switch(
lIIlIIIl){case IIlllllI:lllIIlI(lIIII,lIllI,USB_SS_PORT_LS_SS_DISABLED);lIIII->
lIIlIlI[lIllI]=lIIII->lIlIlII[lIllI];lIIII->IIIlllI[lIllI]=(0x1ff0+789-0x2305);
break;case llIlllIl:lllIIlI(lIIII,lIllI,USB_SS_PORT_LS_RX_DETECT);lIIII->lIIlIlI
[lIllI]=lIIII->lIlIlII[lIllI];lIIII->IIIlllI[lIllI]=(0x7ba+324-0x8fe);
break;case llIlIII:lllIIlI(lIIII,lIllI,USB_SS_PORT_LS_SS_DISABLED);lIIII->
lIIlIlI[lIllI]=lIIII->lIlIlII[lIllI]|USB_SS_PORT_STAT_POWER;if(llIIIlIIl&
USB_PORT_STAT_CONNECTION)lIIII->IIIlllI[lIllI]|=USB_PORT_STAT_C_CONNECTION;
break;case lllIIll:lllIIlI(lIIII,lIllI,USB_SS_PORT_LS_RX_DETECT);lIIII->lIIlIlI[
lIllI]=lIIII->lIlIlII[lIllI]|USB_SS_PORT_STAT_POWER;if(llIIIlIIl&
USB_PORT_STAT_CONNECTION)lIIII->IIIlllI[lIllI]|=USB_PORT_STAT_C_CONNECTION;

if(lIIII->llIlIll[lIllI]){llIIllI(lIIII,lIllI,lIIllIIl);}break;case lIIllIIl:
lllIIlI(lIIII,lIllI,USB_SS_PORT_LS_U0);lIIII->lIIlIlI[lIllI]=lIIII->lIlIlII[
lIllI]|USB_SS_PORT_STAT_POWER|USB_PORT_STAT_CONNECTION|USB_PORT_STAT_ENABLE|
llIllllIl(lIIII->llIlIll[lIllI]->speed);if(IIIIlIlI==lllIllI)lIIII->IIIlllI[
lIllI]|=USB_PORT_STAT_C_RESET;
if(IIIIlIlI==lllIIll)lIIII->IIIlllI[lIllI]|=USB_PORT_STAT_C_CONNECTION;
break;case lllIllI:lIIII->lIIlIlI[lIllI]=lIIII->lIlIlII[lIllI]|
USB_SS_PORT_STAT_POWER|USB_PORT_STAT_RESET|(llIIIlIIl&USB_PORT_STAT_CONNECTION);

lIIII->IlllIII[lIllI]=jiffies+msecs_to_jiffies((0x6fb+1-0x6ca));
lIIII->IlllIII[lIllI]+=lIIII->IlllIII[lIllI]?(0xca8+6716-0x26e4):
(0x507+2642-0xf58);break;default:Illll(
"\x69\x6e\x76\x61\x6c\x69\x64\x20\x70\x6f\x72\x74\x20\x73\x74\x61\x74\x65" "\n")
;break;}}
void lllIIlI(struct lIIIII*lIIII,int lIllI,int IlIIIIlII){switch(IlIIIIlII){case
 USB_SS_PORT_LS_U0:Illll(
"\x73\x65\x74\x5f\x6c\x69\x6e\x6b\x5f\x73\x74\x61\x74\x65\x20\x55\x53\x42\x5f\x53\x53\x5f\x50\x4f\x52\x54\x5f\x4c\x53\x5f\x55\x30" "\n"
);
lIIII->lIlIlII[lIllI]=USB_SS_PORT_LS_U0;break;case USB_SS_PORT_LS_U1:Illll(
"\x73\x65\x74\x5f\x6c\x69\x6e\x6b\x5f\x73\x74\x61\x74\x65\x20\x55\x53\x42\x5f\x53\x53\x5f\x50\x4f\x52\x54\x5f\x4c\x53\x5f\x55\x31" "\n"
);
lIIII->lIlIlII[lIllI]=USB_SS_PORT_LS_U1;break;case USB_SS_PORT_LS_U2:Illll(
"\x73\x65\x74\x5f\x6c\x69\x6e\x6b\x5f\x73\x74\x61\x74\x65\x20\x55\x53\x42\x5f\x53\x53\x5f\x50\x4f\x52\x54\x5f\x4c\x53\x5f\x55\x32" "\n"
);
lIIII->lIlIlII[lIllI]=USB_SS_PORT_LS_U2;break;case USB_SS_PORT_LS_U3:Illll(
"\x73\x65\x74\x5f\x6c\x69\x6e\x6b\x5f\x73\x74\x61\x74\x65\x20\x55\x53\x42\x5f\x53\x53\x5f\x50\x4f\x52\x54\x5f\x4c\x53\x5f\x55\x33" "\n"
);
lIIII->lIlIlII[lIllI]=USB_SS_PORT_LS_U3;break;case USB_SS_PORT_LS_SS_DISABLED:
Illll(
"\x73\x65\x74\x5f\x6c\x69\x6e\x6b\x5f\x73\x74\x61\x74\x65\x20\x55\x53\x42\x5f\x53\x53\x5f\x50\x4f\x52\x54\x5f\x4c\x53\x5f\x53\x53\x5f\x44\x49\x53\x41\x42\x4c\x45\x44" "\n"
);
lIIII->lIlIlII[lIllI]=USB_SS_PORT_LS_SS_DISABLED;break;case 
USB_SS_PORT_LS_RX_DETECT:Illll(
"\x73\x65\x74\x5f\x6c\x69\x6e\x6b\x5f\x73\x74\x61\x74\x65\x20\x55\x53\x42\x5f\x53\x53\x5f\x50\x4f\x52\x54\x5f\x4c\x53\x5f\x52\x58\x5f\x44\x45\x54\x45\x43\x54" "\n"
);
lIIII->lIlIlII[lIllI]=USB_SS_PORT_LS_RX_DETECT;break;}lIIII->lIIlIlI[lIllI]&=~
USB_PORT_STAT_LINK_STATE;lIIII->lIIlIlI[lIllI]|=lIIII->lIlIlII[lIllI];}
#endif 
#endif 

