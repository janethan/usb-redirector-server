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
#if KERNEL_GT_EQ((0x764+2882-0x12a4),(0x1d93+1936-0x251d),(0x71f+2693-0x1185))
int IlIlIlIIl(struct IIIlllIl*IllIlI,size_t length,int Illlllll){int i;size_t 
lIIlIIIll=IIlIIlI-(IIlIIlI%Illlllll);int num_sgs=(length+lIIlIIIll-
(0x1ddf+140-0x1e6a))/lIIlIIIll;struct scatterlist*sg;
#if KERNEL_LT_EQ((0x1f59+1782-0x264d),(0x2f2+4067-0x12cf),(0xe0c+4632-0x2002)) 

int IIIlllllI=((PAGE_SIZE-sizeof(*IllIlI->lIIlIIl))&~((0x1570+81-0x15b9)-
(0x141c+1084-0x1857)))/sizeof(*IllIlI->sg);
#else

int IIIlllllI=PAGE_SIZE/sizeof(*IllIlI->sg);
#endif
if(num_sgs>IIIlllllI){lIlll(
"\x75\x73\x62\x64\x5f\x73\x67\x5f\x61\x6c\x6c\x6f\x63\x3a\x20\x74\x6f\x6f\x20\x6c\x61\x72\x67\x65" "\n"
);return-EOVERFLOW;}IllIlI->num_sgs=num_sgs;
#if KERNEL_LT_EQ((0x1903+1684-0x1f95),(0x666+1719-0xd17),(0x1189+3840-0x2067)) 

IllIlI->sg=lIllllI(ALIGN(num_sgs*sizeof(*IllIlI->sg),sizeof(void*))+sizeof(*
IllIlI->lIIlIIl),GFP_KERNEL);IllIlI->lIIlIIl=(struct usb_sg_request*)((char*)
IllIlI->sg+ALIGN(num_sgs*sizeof(*IllIlI->sg),(0x20af+564-0x22db)));IllIlI->
lIIlIIl->sg=IllIlI->sg;
#else

IllIlI->sg=lIllllI(num_sgs*sizeof(*IllIlI->lIIlIIl),GFP_KERNEL);IllIlI->lIIlIIl=
IllIlI->sg;
#endif
if(IllIlI->sg==NULL){lIlll(
"\x75\x73\x62\x64\x5f\x73\x67\x5f\x61\x6c\x6c\x6f\x63\x3a\x20\x73\x67\x20\x61\x6c\x6c\x6f\x63\x20\x66\x61\x69\x6c\x65\x64\x28\x31\x29" "\n"
);return-ENOMEM;}sg_init_table(IllIlI->sg,IllIlI->num_sgs);for_each_sg(IllIlI->
sg,sg,IllIlI->num_sgs,i){size_t IIIlIll=min(length,lIIlIIIll);void*IlllIllll=
IllIllI(IIIlIll,GFP_KERNEL);if(IlllIllll==NULL){break;}sg_set_buf(sg,IlllIllll,
IIIlIll);length-=IIIlIll;}if(i<IllIlI->num_sgs){lIlll(
"\x75\x73\x62\x64\x5f\x61\x6c\x6c\x6f\x63\x5f\x6e\x5f\x63\x6f\x70\x79\x5f\x70\x61\x72\x74\x69\x6f\x74\x69\x6f\x6e\x65\x64\x5f\x75\x6e\x72\x62\x3a\x20\x73\x67\x20\x61\x6c\x6c\x6f\x63\x20\x66\x61\x69\x6c\x65\x64\x28\x32\x29" "\n"
);IllIlI->num_sgs=i;llIIllIII(IllIlI);return-ENOMEM;}return(0x185c+1547-0x1e67);
}void llIIllIII(struct IIIlllIl*IllIlI){if(IllIlI->sg){int i;struct scatterlist*
sg;for_each_sg(IllIlI->sg,sg,IllIlI->num_sgs,i){lIlIll(sg_virt(sg));}lIlIll(
IllIlI->sg);}IllIlI->sg=NULL;IllIlI->lIIlIIl=NULL;IllIlI->num_sgs=
(0x350+5102-0x173e);}size_t llllIllII(struct IIIlllIl*IllIlI,const void __user*
IllIl,size_t length){int i;size_t IlIlI=(0x501+6594-0x1ec3);struct scatterlist*
sg;for_each_sg(IllIlI->sg,sg,IllIlI->num_sgs,i){size_t lIlIlIl;if(length==
(0x250c+96-0x256c)){break;}lIlIlIl=min((size_t)sg->length,length);if(
__copy_from_user(sg_virt(sg),IllIl,lIlIlIl)){break;}length-=lIlIlIl;IllIl+=
lIlIlIl;IlIlI+=lIlIlIl;}return IlIlI;}size_t llIlIlIII(struct IIIlllIl*IllIlI,
void __user*IllIl,size_t length){int i;size_t IlIlI=(0x4e6+5642-0x1af0);struct 
scatterlist*sg;for_each_sg(IllIlI->sg,sg,IllIlI->num_sgs,i){size_t lIlIlIl;if(
length==(0x1746+3312-0x2436)){break;}lIlIlIl=min((size_t)sg->length,length);if(
__copy_to_user(IllIl,sg_virt(sg),lIlIlIl)){break;}length-=lIlIlIl;IllIl+=lIlIlIl
;IlIlI+=lIlIlIl;}return IlIlI;}
#endif 

