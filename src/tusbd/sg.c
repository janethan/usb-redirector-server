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
#if KERNEL_GT_EQ((0x90f+328-0xa55),(0xa11+5919-0x212a),(0x1064+2647-0x1a9c))
int IlIlIlIIl(struct lIlIIlIl*llIIll,size_t length,int llIIIIlI){int i;size_t 
IIIIIIIll=IIlIIlI-(IIlIIlI%llIIIIlI);int num_sgs=(length+IIIIIIIll-
(0xea9+1000-0x1290))/IIIIIIIll;struct scatterlist*sg;
#if KERNEL_LT_EQ((0x773+4263-0x1818),(0x1e62+1915-0x25d7),(0xab4+7159-0x2689)) 

int IIIlllllI=((PAGE_SIZE-sizeof(*llIIll->lIIlIIl))&~((0x18c+2828-0xc90)-
(0x3b2+6208-0x1bf1)))/sizeof(*llIIll->sg);
#else

int IIIlllllI=PAGE_SIZE/sizeof(*llIIll->sg);
#endif
if(num_sgs>IIIlllllI){Illll(
"\x75\x73\x62\x64\x5f\x73\x67\x5f\x61\x6c\x6c\x6f\x63\x3a\x20\x74\x6f\x6f\x20\x6c\x61\x72\x67\x65" "\n"
);return-EOVERFLOW;}llIIll->num_sgs=num_sgs;
#if KERNEL_LT_EQ((0x4bd+2160-0xd2b),(0x6e9+1611-0xd2e),(0xdad+5510-0x2311)) 

llIIll->sg=lIllllI(ALIGN(num_sgs*sizeof(*llIIll->sg),sizeof(void*))+sizeof(*
llIIll->lIIlIIl),GFP_KERNEL);llIIll->lIIlIIl=(struct usb_sg_request*)((char*)
llIIll->sg+ALIGN(num_sgs*sizeof(*llIIll->sg),(0xcc6+4332-0x1daa)));llIIll->
lIIlIIl->sg=llIIll->sg;
#else

llIIll->sg=lIllllI(num_sgs*sizeof(*llIIll->lIIlIIl),GFP_KERNEL);llIIll->lIIlIIl=
llIIll->sg;
#endif
if(llIIll->sg==NULL){Illll(
"\x75\x73\x62\x64\x5f\x73\x67\x5f\x61\x6c\x6c\x6f\x63\x3a\x20\x73\x67\x20\x61\x6c\x6c\x6f\x63\x20\x66\x61\x69\x6c\x65\x64\x28\x31\x29" "\n"
);return-ENOMEM;}sg_init_table(llIIll->sg,llIIll->num_sgs);for_each_sg(llIIll->
sg,sg,llIIll->num_sgs,i){size_t lllllll=min(length,IIIIIIIll);void*IlllIllll=
IllIllI(lllllll,GFP_KERNEL);if(IlllIllll==NULL)break;sg_set_buf(sg,IlllIllll,
lllllll);length-=lllllll;}if(i<llIIll->num_sgs){Illll(
"\x75\x73\x62\x64\x5f\x61\x6c\x6c\x6f\x63\x5f\x6e\x5f\x63\x6f\x70\x79\x5f\x70\x61\x72\x74\x69\x6f\x74\x69\x6f\x6e\x65\x64\x5f\x75\x6e\x72\x62\x3a\x20\x73\x67\x20\x61\x6c\x6c\x6f\x63\x20\x66\x61\x69\x6c\x65\x64\x28\x32\x29" "\n"
);llIIll->num_sgs=i;IlllllIIl(llIIll);return-ENOMEM;}return(0x1ee3+731-0x21be);}
void IlllllIIl(struct lIlIIlIl*llIIll){if(llIIll->sg){int i;struct scatterlist*
sg;for_each_sg(llIIll->sg,sg,llIIll->num_sgs,i){lIlIll(sg_virt(sg));}lIlIll(
llIIll->sg);}llIIll->sg=NULL;llIIll->lIIlIIl=NULL;llIIll->num_sgs=
(0x574+249-0x66d);}size_t llllIllII(struct lIlIIlIl*llIIll,const void __user*
IIIlI,size_t length){int i;size_t IIIll=(0x553+6355-0x1e26);struct scatterlist*
sg;for_each_sg(llIIll->sg,sg,llIIll->num_sgs,i){size_t lIlIIII;if(length==
(0x537+8268-0x2583))break;lIlIIII=min((size_t)sg->length,length);if(
__copy_from_user(sg_virt(sg),IIIlI,lIlIIII)){break;}length-=lIlIIII;IIIlI+=
lIlIIII;IIIll+=lIlIIII;}return IIIll;}size_t llIlIlIII(struct lIlIIlIl*llIIll,
void __user*IIIlI,size_t length){int i;size_t IIIll=(0x235f+782-0x266d);struct 
scatterlist*sg;for_each_sg(llIIll->sg,sg,llIIll->num_sgs,i){size_t lIlIIII;if(
length==(0x12a8+5057-0x2669))break;lIlIIII=min((size_t)sg->length,length);if(
__copy_to_user(IIIlI,sg_virt(sg),lIlIIII)){break;}length-=lIlIIII;IIIlI+=lIlIIII
;IIIll+=lIlIIII;}return IIIll;}
#endif 

