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
int lIlIIlIlI(void*,int);int IIllllIIl(void*,int);void IlIlIIIIl(void*context);
void IIIIlIllI(void*context);unsigned int llIIIllll(void*,struct file*,
poll_table*lIIllI);long IlIIllIIl(void*context,unsigned int lIIIIl,unsigned long
 IlIIII);
#ifdef CONFIG_COMPAT
long lIlIIlIII(void*context,unsigned int lIIIIl,unsigned long IlIIII);
#endif
int lllllIIlI(struct lIlIl*IlllI);void lIIIIIlll(struct lIlIl*IlllI,int status,
gfp_t llIlI);void lllIIIII(struct lIlIl*IlllI,gfp_t llIlI);void IIlIll(struct 
lIlIl*IlllI,int status);void lIIlIlIIl(struct lIlIl*IlIllII,gfp_t llIlI);void 
IIllIIllI(struct lIlIl*IlIllII,gfp_t llIlI);void llllIllll(struct lIlIl*IlIllII,
gfp_t llIlI);void lIIlIIlIl(struct lIlIl*IlIllII,gfp_t llIlI);void lIlllIIlI(
struct lIlIl*IlIllII,gfp_t llIlI);void IlIIllllI(struct lIlIl*IlIllII,gfp_t 
llIlI);void lllIllIlI(struct lIlIl*IlIllII,gfp_t llIlI);
#if KERNEL_GT_EQ((0x5d4+7278-0x2240),(0x1003+5038-0x23ab),(0x2148+964-0x24ed))
void IllllIIIl(struct lIlIl*IlIllII,gfp_t llIlI);
#endif
void lIlIllIlI(struct lIlIl*IlIllII,gfp_t llIlI);void IIllIlIII(struct lIlIl*
IlIllII,gfp_t llIlI);
#if KERNEL_GT_EQ((0x1282+2347-0x1bab),(0x10d0+4538-0x2284),(0xb10+298-0xc1b))
void IIlIlIlIl(struct lIlIl*IlIllII,gfp_t llIlI);
#endif
void llIIlllIl(struct lIlIl*IlIllII,gfp_t llIlI);void IlllIIlIl(struct lIlIl*
IlIllII,gfp_t llIlI);void llIIllIlI(struct lIlIl*IlIllII,gfp_t llIlI);void 
lllIIllll(struct lIlIl*IlIllII,gfp_t llIlI);void lIllIlllI(struct lIlIl*IlIllII,
gfp_t llIlI);void IIIlIlIIl(struct lIlIl*IlIllII,gfp_t llIlI);void lIIllIlII(
struct lIlIl*IlIllII,gfp_t llIlI);void lIIIIllIl(struct lIlIl*IlIllII,gfp_t 
llIlI);void IlIllIIIl(struct lIlIl*IlIllII,gfp_t llIlI);void lIlllIlII(struct 
lIlIl*IlllI,int status,gfp_t llIlI);void IllIlIIl(struct lIlIl*IlllI,int status,
gfp_t llIlI);void IlllIIlll(struct lIlIl*IlllI,int status,gfp_t llIlI);void 
IllIIIIIl(struct lIlIl*IlllI,int status,gfp_t llIlI);void IlIlIlIll(struct lIlIl
*IlllI,int status,gfp_t llIlI);void IlIIlIllI(struct lIlIl*IlllI,int status,
gfp_t llIlI);void IllIllllI(struct lIlIl*IlllI,int status,gfp_t llIlI);void 
IIllllllI(struct lIlIl*IlllI,int status,gfp_t llIlI);void lIIllIIlI(struct lIlIl
*IlllI,int status,gfp_t llIlI);void IllIlIl(struct lIlIl*IlllI,int status,gfp_t 
llIlI);void IlllIlIl(struct lIlIl*IlllI,int status,gfp_t llIlI);void lIIIIlIl(
struct lIlIl*IlllI,int status,gfp_t llIlI);
#if KERNEL_LT((0x1fcb+252-0x20c5),(0x11ac+1551-0x17b5),(0x660+942-0x9fb))
void IIlIIIlII(struct urb*lIlll,struct pt_regs*lIllIlI);void llIlllll(struct urb
*lIlll,struct pt_regs*lIllIlI);void lIIllllI(struct urb*lIlll,struct pt_regs*
lIllIlI);void lIlIlIlI(struct urb*lIlll,struct pt_regs*lIllIlI);void lIlIIllII(
struct urb*lIlll,struct pt_regs*lIllIlI);static void lIIIIlllI(struct urb*lIlll,
struct pt_regs*lIllIlI);static void IlIIIIIl(struct urb*lIlll,struct pt_regs*
lIllIlI);static void IIIIlIIlI(struct urb*lIlll,struct pt_regs*lIllIlI);
#else
void IIlIIIlII(struct urb*lIlll);void llIlllll(struct urb*lIlll);void lIIllllI(
struct urb*lIlll);void lIlIlIlI(struct urb*lIlll);void lIlIIllII(struct urb*
lIlll);static void lIIIIlllI(struct urb*lIlll);static void IlIIIIIl(struct urb*
lIlll);static void IIIIlIIlI(struct urb*lIlll);
#endif
void IIIlIlIII(struct IlIlII*lIIIl);void IllIlIIlI(struct IlIlII*lIIIl);int 
lIllIlll(struct lllll*lIlII);int lllIlllIl(struct lIlIl*IlllI,gfp_t llIlI);int 
IIIIIlIlI(struct lllll*lIlII,IlIIlI lllIl);void lIIlllll(struct lllll*lIlII);
void IIIllIlI(struct lllll*lIlII,int IlllllI,int lIIlIlll);void llIIIIlII(struct
 lIlIII*IllII,int status,gfp_t llIlI);void IIlIIIIlI(struct lIlIII*IllII,int 
status,gfp_t llIlI);void IIIlllIll(struct lIlIII*IllII,int status,gfp_t llIlI);
void lIllIlII(struct lIlIII*IllII);void IIIIlIlII(struct lIlIII*IllII);void 
IIlIIlIlI(struct lIlIII*IllII,struct llIlIIII*llIllIl);void llllIIlIll(struct 
kref*lllIlIl);void llIlllIll(struct lIlIII*IllII);struct lIlIII*lllIlIIlI(struct
 lllll*lIlII,gfp_t llIlI);int IIlIIIIIl(struct lIlIl*IlllI);int IIlIIIlIl(struct
 lIlIl*IlllI);int IIIIIlllI(struct lIlIl*IlllI);int IIIlIlIll(struct lIlIII*
IllII);static inline void IlIlIlIlI(struct lIlIII*IllII,gfp_t llIlI);static 
inline void llIlllllI(struct lIlIII*IllII,gfp_t llIlI);static inline void 
IlIIllIll(struct lIlIII*IllII,gfp_t llIlI);static inline void IIIllllI(struct 
lIlIII*IllII);static inline void IllIlll(struct lIlIII*IllII);void lIlIIlll(
struct lllll*lIlII,IlIIlI lllIl);struct lIlIl*lIIIlIII(struct lllll*lIlII,IlIIlI
 lllIl);static struct lllIIIlI llIIIlIll[]={{"\x74\x79\x70\x65",
"\x73\x74\x75\x62",NULL},{"\x64\x65\x76",NULL,IllIIllII},{
"\x73\x75\x70\x70\x72\x65\x73\x73",NULL,llIIlIIII},{NULL,NULL,NULL},};int 
IIIIIIIII(struct lllll*lIlII){struct IIIlll*IIlII;IIlII=lIllllI(sizeof(*IIlII),
GFP_KERNEL);if(IIlII){mutex_init(&IIlII->mutex);IIlII->context=lIlII;IIlII->
llIllI=-(0xa4f+4890-0x1d68);IIlII->ops.open=lIlIIlIlI;IIlII->ops.release=
IIllllIIl;IIlII->ops.poll=llIIIllll;IIlII->ops.unlocked_ioctl=IlIIllIIl;
#ifdef CONFIG_COMPAT
IIlII->ops.compat_ioctl=lIlIIlIII;
#endif
IIlII->ops.IlIllIII=IlIlIIIIl;IIlII->ops.llIIllll=IIIIlIllI;IIlII->IIllllIl=
llIIIlIll;lIlII->IIlII=IIlII;return(0x462+802-0x784);}return-ENOMEM;}void 
lIlIlIlII(struct lllll*lIlII){if(lIlII->IIlII){IIIllllII(lIlII);lIlIll(lIlII->
IIlII);lIlII->IIlII=NULL;}}int IlIlIIlIl(struct lllll*lIlII){return IllllIlI(
lIlII->IIlII,(0xfeb+4398-0x2117),-(0x192+237-0x27e));}void IIIllllII(struct 
lllll*lIlII){lllIllII(lIlII->IIlII);}int llllllIII(struct lllll*lIlII,void 
__user*IIIlI){int IIIll=(0x16c8+3842-0x25ca);unsigned long flags;struct lIlIl*
IlllI;IIIIl lIIIIIlII;Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x69\x6f\x63\x74\x6c\x5f\x72\x65\x61\x64\x5f\x75\x6e\x72\x62\x3a\x20\x2b\x2b" "\n"
);
#if KERNEL_GT_EQ((0x92d+3422-0x1686),(0x31a+2893-0xe67),(0x15a+7611-0x1f15))
if(!access_ok(IIIlI,sizeof(IlIllI)))
#else
if(!access_ok(VERIFY_READ,IIIlI,sizeof(IlIllI)))
#endif
{Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x69\x6f\x63\x74\x6c\x5f\x72\x65\x61\x64\x5f\x75\x6e\x72\x62\x3a\x20\x2d\x2d\x20\x6d\x65\x6d\x6f\x72\x79\x20\x61\x63\x63\x65\x73\x73\x20\x63\x68\x65\x63\x6b\x20\x66\x61\x69\x6c\x65\x64" "\n"
);return-EINVAL;}
if(get_user(lIIIIIlII,&((IlIllI*)IIIlI)->IIllI)<(0x307+7975-0x222e)){Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x69\x6f\x63\x74\x6c\x5f\x72\x65\x61\x64\x5f\x75\x6e\x72\x62\x3a\x20\x2d\x2d\x20\x63\x61\x6e\x6e\x6f\x74\x20\x72\x65\x61\x64\x20\x66\x72\x6f\x6d\x20\x75\x73\x65\x72\x20\x62\x75\x66\x66\x65\x72" "\n"
);return-EFAULT;}IlllI=NULL;spin_lock_irqsave(&lIlII->lIIIIll,flags);if(!
list_empty(&lIlII->llllIlll)){IlllI=list_entry(lIlII->llllIlll.next,struct lIlIl
,llllIl);list_del_init(&IlllI->llllIl);}spin_unlock_irqrestore(&lIlII->lIIIIll,
flags);if(IlllI){IIIll=IIIIlllIl(IlllI,IIIlI,lIIIIIlII);if(IIIll==-EMSGSIZE){




spin_lock_irqsave(&lIlII->lIIIIll,flags);list_add(&IlllI->llllIl,&lIlII->
llllIlll);spin_unlock_irqrestore(&lIlII->lIIIIll,flags);
wake_up(&lIlII->lIIllI);}else{lIIIIlI(IlllI);}}else{Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x69\x6f\x63\x74\x6c\x5f\x72\x65\x61\x64\x5f\x75\x6e\x72\x62\x3a\x20\x6e\x6f\x20\x6d\x6f\x72\x65\x20\x64\x61\x74\x61" "\n"
);IIIll=-ENODATA;}Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x69\x6f\x63\x74\x6c\x5f\x72\x65\x61\x64\x5f\x75\x6e\x72\x62\x3a\x20\x2d\x2d\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67\x20\x25\x64" "\n"
,IIIll);return IIIll;}int IlIIIIllI(struct lllll*lIlII,void __user*IIIlI){int 
IIIll;IIIII IlIlI;struct lIlIl*IlllI;IlIllI llIIlIIl;size_t IlIIIlII;Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x69\x6f\x63\x74\x6c\x5f\x77\x72\x69\x74\x65\x5f\x75\x6e\x72\x62\x3a\x20\x2b\x2b" "\n"
);if(unlikely(lIlllllIl(lIlII))){Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x69\x6f\x63\x74\x6c\x5f\x77\x72\x69\x74\x65\x5f\x75\x6e\x72\x62\x3a\x20\x2d\x2d\x20\x64\x65\x76\x69\x63\x65\x20\x6f\x66\x66\x6c\x69\x6e\x65" "\n"
);return-ENODEV;}if(copy_from_user(&llIIlIIl,IIIlI,sizeof(llIIlIIl))){Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x69\x6f\x63\x74\x6c\x5f\x77\x72\x69\x74\x65\x5f\x75\x6e\x72\x62\x3a\x20\x2d\x2d\x20\x63\x6f\x70\x79\x20\x66\x61\x69\x6c\x65\x64" "\n"
);return-EFAULT;}IlIIIlII=llIIlIIl.IIllI;if(llIIlIIl.llIIlIl==IlIIIIIIl){
IlIIIlII-=sizeof(IlIllI);IIIlI+=sizeof(IlIllI);}while(IlIIIlII>
(0x255f+77-0x25ac)){IlllI=IlIIIIIlI(lIlII,IIIlI,IlIIIlII);if(!IlllI){Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x69\x6f\x63\x74\x6c\x5f\x77\x72\x69\x74\x65\x5f\x75\x6e\x72\x62\x3a\x20\x2d\x2d\x20\x63\x61\x6e\x6e\x6f\x74\x20\x61\x6c\x6c\x6f\x63\x61\x74\x65\x20\x72\x65\x71\x75\x65\x73\x74" "\n"
);return-ENOMEM;}IlIlI=(IIIII)(IlllI+(0x769+5245-0x1be5));if(IlIIIlII<IlIlI->
lllII.IIllI){Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x69\x6f\x63\x74\x6c\x5f\x77\x72\x69\x74\x65\x5f\x75\x6e\x72\x62\x3a\x20\x2d\x2d\x20\x69\x6e\x76\x61\x6c\x69\x64\x20\x73\x69\x7a\x65" "\n"
);return-EINVAL;}IlIIIlII-=IlIlI->lllII.IIllI;IIIlI+=IlIlI->lllII.IIllI;llIlIIl(
IlIlI);IIIll=lllllIIlI(IlllI);if(likely(IIIll>(0x15b+1718-0x811))){
lllIIIII(IlllI,GFP_KERNEL);}else if(IIIll==(0x662+4609-0x1863)){
}else if(IlllI->IlllllI)
{lIIIIlI(IlllI);}else{lIIIIIlll(IlllI,IIIll,GFP_KERNEL);IIlIll(IlllI,IIIll);}}
Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x69\x6f\x63\x74\x6c\x5f\x77\x72\x69\x74\x65\x5f\x75\x6e\x72\x62\x3a\x20\x2d\x2d\x20\x72\x65\x73\x75\x6c\x74\x3d\x30" "\n"
);return(0xa06+2733-0x14b3);}int lIlIllllI(struct lllll*lIlII){unsigned long 
flags;struct list_head Illlll;Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x64\x72\x61\x69\x6e\x5f\x72\x65\x71\x75\x65\x73\x74\x73\x3a\x20\x2b\x2b" "\n"
);






lIlIllll(lIlII,NULL,(0x62f+6084-0x1df2),(0x18b4+1112-0x1d0b));

INIT_LIST_HEAD(&Illlll);spin_lock_irqsave(&lIlII->lIIIIll,flags);
list_splice_init(&lIlII->llllIlll,&Illlll);spin_unlock_irqrestore(&lIlII->
lIIIIll,flags);while(!list_empty(&Illlll)){struct lIlIl*lIllIIlIl;lIllIIlIl=
list_entry(Illlll.next,struct lIlIl,llllIl);list_del(&lIllIIlIl->llllIl);lIIIIlI
(lIllIIlIl);}Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x64\x72\x61\x69\x6e\x5f\x72\x65\x71\x75\x65\x73\x74\x73\x3a\x20\x2d\x2d" "\n"
);return(0xd8f+4080-0x1d7f);}int lIllIlIIl(struct lllll*lIlII,struct IIIllIlIl 
__user*ioctl){IIIIl IlIll;IIIIl IIIllIl;if(get_user(IlIll,&ioctl->lIIlII.IIllllI
)<(0x81b+4589-0x1a08))return-EFAULT;if(IlIll!=sizeof(struct IIIllIlIl))return-
EINVAL;if(get_user(IIIllIl,&ioctl->IIIllIl)<(0xb5d+5322-0x2027))return-EFAULT;if
(IIIllIl>=IlllIlIll)return-EINVAL;lIlII->lIIllIlI=IIIllIl;return
(0x1710+3680-0x2570);}int lIIIIllll(struct lllll*lIlII,struct IIIIIIIIl __user*
ioctl){IIIIl IlIll;IIIIl IIllIIl;if(get_user(IlIll,&ioctl->lIIlII.IIllllI)<
(0x1cb8+136-0x1d40))return-EFAULT;if(IlIll!=sizeof(struct IIIIIIIIl))return-
EINVAL;if(get_user(IIllIIl,&ioctl->IIllIIl)<(0xb0+488-0x298))return-EFAULT;lIlII
->IIllIIl=IIllIIl;return(0x1960+1277-0x1e5d);}
int llIIIlllI(struct lllll*lIlII,struct lIlIIlIll __user*ioctl){IIIIl IlIll;if(
get_user(IlIll,&ioctl->lIIlII.IIllllI)<(0x1efc+821-0x2231))return-EFAULT;if(
IlIll!=sizeof(struct lIlIIlIll))return-EINVAL;lIIlIIlII(lIlII,lIlII->lIIllIlI);
return(0xe3c+2887-0x1983);}int IIlIIllII(struct lllll*lIlII,struct IlllIlIlIl 
__user*ioctl){IIIIl IlIll;IIIIl llllIIIl;if(get_user(IlIll,&ioctl->lIIlII.
IIllllI)<(0x11fd+2131-0x1a50))return-EFAULT;if(IlIll!=sizeof(*ioctl))return-
EINVAL;llllIIIl=lIlII->llIlIIIl;if(put_user(llllIIIl,&ioctl->llllIIIl)<
(0x11dc+984-0x15b4))return-EFAULT;return(0xa17+3627-0x1842);}long lIIIIlIll(void
*context,unsigned int lIIIIl,void __user*IlIIII){struct lllll*lIlII=context;
ssize_t IIIll=(0xd50+929-0x10f1);Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x6d\x69\x6e\x6f\x72\x5f\x69\x6f\x63\x74\x6c\x3a\x20\x2b\x2b\x20\x63\x6d\x64\x3d\x25\x64\x20\x61\x72\x67\x3d\x30\x78\x25\x70" "\n"
,lIIIIl,IlIIII);switch(lIIIIl){case llIIlIlII:IIIll=llllllIII(lIlII,IlIIII);
break;case lIIIllIll:IIIll=IlIIIIllI(lIlII,IlIIII);break;case lIIIIIlIl:IIIll=
lIlIllllI(lIlII);break;case IllllIllI:IIIll=lIllIlIIl(lIlII,IlIIII);break;case 
lllIllIIII:IIIll=lIIIIllll(lIlII,IlIIII);break;case IIllIIIIl:IIIll=llIIIlllI(
lIlII,IlIIII);break;case IlllIIIII:IIIll=IIlIIllII(lIlII,IlIIII);break;default:
Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x6d\x69\x6e\x6f\x72\x5f\x69\x6f\x63\x74\x6c\x3a\x20\x75\x6e\x6b\x6e\x6f\x77\x6e\x20\x69\x6f\x63\x74\x6c" "\n"
);IIIll=-EINVAL;break;}Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x6d\x69\x6e\x6f\x72\x5f\x69\x6f\x63\x74\x6c\x3a\x20\x2d\x2d\x20\x72\x65\x73\x75\x6c\x74\x3d\x25\x6c\x75" "\n"
,(unsigned long)IIIll);return IIIll;}long IlIIllIIl(void*context,unsigned int 
lIIIIl,unsigned long IlIIII){return lIIIIlIll(context,lIIIIl,(void __user*)
IlIIII);}
#ifdef CONFIG_COMPAT
long lIlIIlIII(void*context,unsigned int lIIIIl,unsigned long IlIIII){return 
lIIIIlIll(context,lIIIIl,compat_ptr(IlIIII));}
#endif


int lIlIIlIlI(void*context,int IIIIIlI){int IIIll=(0xfc+1299-0x60f);
Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x6d\x69\x6e\x6f\x72\x5f\x6f\x70\x65\x6e\x3a\x20\x2b\x2b\x20\x25\x64" "\n"
,IIIIIlI);
Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x6d\x69\x6e\x6f\x72\x5f\x6f\x70\x65\x6e\x3a\x20\x2d\x2d\x20\x72\x65\x73\x75\x6c\x74\x3d\x25\x64" "\n"
,IIIll);return IIIll;}

int IIllllIIl(void*context,int IIIIIlI){struct lllll*lIlII=context;Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x6d\x69\x6e\x6f\x72\x5f\x72\x65\x6c\x65\x61\x73\x65\x20\x25\x64" "\n"
,IIIIIlI);if(IIIIIlI==(0x6a3+7008-0x2203)){

lIlIllllI(lIlII);if(lIlII->llIlIIIl){lIIlIIlII(lIlII,lIlII->lIIllIlI);}

}return(0xc1+6671-0x1ad0);}void IlIlIIIIl(void*context){struct lllll*lIlII=
context;IlIIllII(lIlII);}void IIIIlIllI(void*context){struct lllll*lIlII=context
;lllllIll(lIlII);}unsigned int llIIIllll(void*context,struct file*lIlllI,
poll_table*lIIllI){struct lllll*lIlII=context;int IIIllIII;unsigned long flags;
poll_wait(lIlllI,&lIlII->lIIllI,lIIllI);spin_lock_irqsave(&lIlII->lIIIIll,flags)
;IIIllIII=list_empty(&lIlII->llllIlll);spin_unlock_irqrestore(&lIlII->lIIIIll,
flags);if(!IIIllIII){Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x6d\x69\x6e\x6f\x72\x5f\x70\x6f\x6c\x6c\x3a\x20\x71\x75\x65\x75\x65\x20\x6e\x6f\x74\x20\x65\x6d\x70\x74\x79" "\n"
);return((POLLOUT|POLLWRNORM)|(POLLIN|POLLRDNORM));}return(POLLOUT|POLLWRNORM);}
int lllllIIlI(struct lIlIl*IlllI){unsigned long flags;struct lllll*lIlII=IlllI->
lIlII;
if(IlllI->IlIIIlI.IIIlIlIl==(0x2d2+1817-0x9eb)){
spin_lock_irqsave(&lIlII->IIlIlI,flags);list_add_tail(&IlllI->llllIl,&lIlII->
IlIIlII);spin_unlock_irqrestore(&lIlII->IIlIlI,flags);return(0xafa+6311-0x23a0);
}else{
struct llIlIllI*lllllIl,*IllIIIlI;struct lIlIl*llIIIIIll,*IIIIIIll;




if(IlllI->IlIIIlI.lIlllllIII){lllllIl=lIllllI(sizeof(*lllllIl),GFP_KERNEL);
if(lllllIl==NULL){Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x69\x6f\x63\x74\x6c\x5f\x77\x72\x69\x74\x65\x5f\x75\x6e\x72\x62\x3a\x20\x63\x61\x6e\x6e\x6f\x74\x20\x61\x6c\x6c\x6f\x63\x61\x74\x65\x20\x55\x4e\x52\x42" "\n"
);return-ENOMEM;}lllllIl->lllIl=IlllI->lllIl;spin_lock_irqsave(&lIlII->IIlIlI,
flags);list_add_tail(&lllllIl->IIIIll,&lIlII->IIIllIIl);list_add_tail(&IlllI->
llllIl,&lIlII->IlIIlII);spin_unlock_irqrestore(&lIlII->IIlIlI,flags);return
(0x1af4+1829-0x2218);}







spin_lock_irqsave(&lIlII->IIlIlI,flags);

lllllIl=NULL;list_for_each_entry(IllIIIlI,&lIlII->IIIllIIl,IIIIll){if(IllIIIlI->
lllIl==IlllI->lllIl){lllllIl=IllIIIlI;break;}}


if(lllllIl==NULL){spin_unlock_irqrestore(&lIlII->IIlIlI,flags);IlllI->IlllllI=
(0x1692+1468-0x1c4d);return-ECONNRESET;}


llIIIIIll=NULL;list_for_each_entry(IIIIIIll,&lIlII->IlIIlII,llllIl){if(IIIIIIll
->lllIl==IlllI->lllIl&&IIIIIIll->IlIIIlI.IIIlIlIl){llIIIIIll=IIIIIIll;break;}}


if(llIIIIIll==NULL){
if(lllllIl->IlIlIIIII){atomic_xchg(&IlllI->state,IlIIlll);lllllIl->IlIlIIIII=
(0x123d+4660-0x2471);}switch(lllllIl->IIIllIlll){case lIlIIIIlI:
spin_unlock_irqrestore(&lIlII->IIlIlI,flags);IlllI->IlllllI=(0x790+5617-0x1d80);
return-ECONNRESET;case IlIIIlIll:list_add_tail(&IlllI->llllIl,&lIlII->IlIIlII);
spin_unlock_irqrestore(&lIlII->IIlIlI,flags);return(0x1196+1307-0x16b0);case 
IIIIllIIl:atomic_xchg(&IlllI->state,IlIIlll);list_add_tail(&IlllI->llllIl,&lIlII
->IlIIlII);spin_unlock_irqrestore(&lIlII->IIlIlI,flags);return-ECONNRESET;case 
lllIIIlII:lllllIl->IIIllIlll=IlllI->IlIIIlI.IlllIIIlI;spin_unlock_irqrestore(&
lIlII->IIlIlI,flags);IlllI->IlllllI=(0x1126+2298-0x1a1f);return-ECONNRESET;}}





list_add_tail(&IlllI->llllIl,&lIlII->IlIIlII);spin_unlock_irqrestore(&lIlII->
IIlIlI,flags);return(0x18b7+575-0x1af6);}}void lllIIIII(struct lIlIl*IlllI,gfp_t
 llIlI){IIIII IlIlI=(IIIII)(IlllI+(0x193b+1162-0x1dc4));if(unlikely(
atomic_cmpxchg(&IlllI->state,llllIlIl,lIlIIIl)!=llllIlIl)){lIIIIIlll(IlllI,-
ECONNRESET,llIlI);IIlIll(IlllI,-ECONNRESET);return;}IlllI->lIlII->llIlIIIl=
(0x13c0+3586-0x21c1);switch(IlIlI->lllII.llIIlIl){case llllllIl:lIIlIlIIl(IlllI,
llIlI);break;case IlIIlIll:IIllIIllI(IlllI,llIlI);break;case lIIIIllI:llllIllll(
IlllI,llIlI);break;case IlIIlIII:lIIlIIlIl(IlllI,llIlI);break;case IIllIIIl:if(
lllIlllIl(IlllI,llIlI)>=(0xabd+628-0xd31)){break;}lIlllIIlI(IlllI,llIlI);break;
case lIlllIIl:lIlIllIlI(IlllI,llIlI);break;case llIIlllI:llIIlllIl(IlllI,llIlI);
break;case IIIIlIII:lllIIllll(IlllI,llIlI);break;case lllllIII:lIllIlllI(IlllI,
llIlI);break;case IIlllIIl:IIIlIlIIl(IlllI,llIlI);break;case IllllllI:lIIllIlII(
IlllI,llIlI);break;case llIIlIll:lIIIIllIl(IlllI,llIlI);break;case lIIIlllI:
IlIllIIIl(IlllI,llIlI);break;}}void lIIIIIlll(struct lIlIl*IlllI,int status,
gfp_t llIlI){IIIII IlIlI=(IIIII)(IlllI+(0x15a5+2142-0x1e02));switch(IlIlI->lllII
.llIIlIl){case llllllIl:lIlllIlII(IlllI,status,llIlI);break;case IlIIlIll:
IllIlIIl(IlllI,status,llIlI);break;case lIIIIllI:IlIlIlIll(IlllI,status,llIlI);
break;case IlIIlIII:lIIllIIlI(IlllI,status,llIlI);break;case IIllIIIl:IllIlIl(
IlllI,status,llIlI);break;case lIlllIIl:IlllIlIl(IlllI,status,llIlI);break;case 
llIIlllI:lIIIIlIl(IlllI,status,llIlI);break;case IIIIlIII:IlllIIlll(IlllI,status
,llIlI);break;case lllllIII:IllIIIIIl(IlllI,status,llIlI);break;case IIlllIIl:
IlIIlIllI(IlllI,status,llIlI);break;case IllllllI:IllIllllI(IlllI,status,llIlI);
break;case llIIlIll:
break;case lIIIlllI:IIllllllI(IlllI,status,llIlI);break;}}void lIIlIlIIl(struct 
lIlIl*IlllI,gfp_t llIlI){int IIIll=(0x3d9+4008-0x1381);struct usb_ctrlrequest*
IIIIlll;IIIII IlIlI=(IIIII)(IlllI+(0x13+6819-0x1ab5));do{struct urb*lIlll;lIlll=
IIIIIIIl((0x19bd+1941-0x2152),llIlI);if(unlikely(!lIlll)){Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x67\x65\x74\x64\x65\x73\x63\x72\x69\x70\x74\x6f\x72\x3a\x20\x75\x73\x62\x5f\x61\x6c\x6c\x6f\x63\x5f\x75\x72\x62\x20\x66\x61\x69\x6c\x65\x64" "\n"
);IIIll=-ENOMEM;break;}IlllI->lIIIll.lIlll=lIlll;IIIIlll=IllIllI(sizeof(*IIIIlll
),llIlI);if(unlikely(!IIIIlll)){Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x67\x65\x74\x64\x65\x73\x63\x72\x69\x70\x74\x6f\x72\x3a\x20\x75\x73\x62\x5f\x61\x6c\x6c\x6f\x63\x5f\x75\x72\x62\x20\x66\x61\x69\x6c\x65\x64" "\n"
);IIIll=-ENOMEM;break;}IIIIlll->bRequest=USB_REQ_GET_DESCRIPTOR;IIIIlll->
bRequestType=USB_DIR_IN+((IlIlI->IIlllI.IIllIll&(0xac6+7142-0x26a9))<<
(0xf6a+212-0x1039))+(IlIlI->IIlllI.IllIlIll&(0xc41+3351-0x1939));IIIIlll->wValue
=cpu_to_le16((IlIlI->IIlllI.lIIIIlll<<(0x229a+690-0x2544))+IlIlI->IIlllI.
IIIlllll);IIIIlll->wIndex=cpu_to_le16(IlIlI->IIlllI.IIIIIIII);IIIIlll->wLength=
cpu_to_le16(IlIlI->IIlllI.lllllI);usb_fill_control_urb(lIlll,IlllI->lIlII->lIIlI
,usb_rcvctrlpipe(IlllI->lIlII->lIIlI,(0x963+2023-0x114a)),(unsigned char*)
IIIIlll,IlllI->lIIIll.IlIIl,IlIlI->IIlllI.lllllI,IIlIIIlII,IlllI);if(
atomic_cmpxchg(&IlllI->state,lIlIIIl,IIIlIlI)!=lIlIIIl){IIIll=-ECONNRESET;break;
}IIIll=usb_submit_urb(lIlll,llIlI);if(unlikely(IIIll<(0x1df+7082-0x1d89))){Illll
(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x67\x65\x74\x64\x65\x73\x63\x72\x69\x70\x74\x6f\x72\x3a\x20\x75\x73\x62\x5f\x73\x75\x62\x6d\x69\x74\x5f\x75\x72\x62\x20\x66\x61\x69\x6c\x65\x64\x20\x77\x69\x74\x68\x20\x65\x72\x72\x6f\x72\x20\x25\x64" "\n"
,IIIll);break;}}while((0x2164+847-0x24b3));if(unlikely(IIIll<(0x3eb+8436-0x24df)
)){lIlllIlII(IlllI,IIIll,llIlI);IIlIll(IlllI,IIIll);}}void lIlllIlII(struct 
lIlIl*IlllI,int status,gfp_t llIlI){IIIII IlIlI=(IIIII)(IlllI+(0x13d8+23-0x13ee)
);IlIlI->IIlllI.lllllI=(0x5df+8112-0x258f);IlIlI->lllII.IIllI=sizeof(IlIlI->
IIlllI)+IlIlI->IIlllI.lllllI;IlIlI->lllII.Status=status;}void IIllIIllI(struct 
lIlIl*IlllI,gfp_t llIlI){int i;int IIIll=(0xf25+3776-0x1de5);IIIII IlIlI=(IIIII)
(IlllI+(0x16d1+3218-0x2362));do
{
IlIlI->lllII.Status=(0x16e4+380-0x1860);
lIlIllll(IlllI->lIlII,IlllI,(0x19e8+2211-0x228b),(0x3d8+5273-0x1871));if(IlIlI->
lIIllII.IIllIIlI==(0xcf7+2696-0x177f)){IIIll=(0x199+6313-0x1a42);break;}
usb_lock_device(IlllI->lIlII->lIIlI);







if(IlllI->lIlII->lIIlI->actconfig==NULL||IlllI->lIlII->lIIlI->actconfig->desc.
bConfigurationValue!=IlIlI->lIIllII.IIllIIlI){usb_unlock_device(IlllI->lIlII->
lIIlI);
IIIll=-EINPROGRESS;break;}Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x73\x65\x6c\x65\x63\x74\x63\x6f\x6e\x66\x69\x67\x75\x72\x61\x74\x69\x6f\x6e\x3a\x20\x63\x6f\x6e\x66\x69\x67\x75\x72\x61\x74\x69\x6f\x6e\x20\x61\x6c\x72\x65\x61\x64\x79\x20\x73\x65\x6c\x65\x63\x74\x65\x64" "\n"
);
lIllIlll(IlllI->lIlII);for(i=(0x82b+1055-0xc4a);i<IlIlI->lIIllII.IlllllIl;i++){
struct usb_interface*llIlII;struct usb_host_interface*lIIIlIl;llIlII=
usb_ifnum_to_if(IlllI->lIlII->lIIlI,IlIlI->lIIllII.llIIlII[i].lIlllII);if(!
llIlII){Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x73\x65\x6c\x65\x63\x74\x63\x6f\x6e\x66\x69\x67\x75\x72\x61\x74\x69\x6f\x6e\x3a\x20\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20\x25\x64\x20\x6e\x6f\x74\x20\x66\x6f\x75\x6e\x64" "\n"
,IlIlI->lIIllII.llIIlII[i].lIlllII);continue;}lIIIlIl=usb_altnum_to_altsetting(
llIlII,IlIlI->lIIllII.llIIlII[i].llIlllI);if(!lIIIlIl){Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x73\x65\x6c\x65\x63\x74\x63\x6f\x6e\x66\x69\x67\x75\x72\x61\x74\x69\x6f\x6e\x3a\x20\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20\x25\x64\x20\x61\x6c\x74\x73\x65\x74\x74\x69\x6e\x67\x20\x25\x64\x20\x6e\x6f\x74\x20\x66\x6f\x75\x6e\x64" "\n"
,IlIlI->lIIllII.llIIlII[i].lIlllII,IlIlI->lIIllII.llIIlII[i].llIlllI);continue;}
if(llIlII->cur_altsetting){if(llIlII->num_altsetting==(0xc44+159-0xce2)){Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x73\x65\x6c\x65\x63\x74\x63\x6f\x6e\x66\x69\x67\x75\x72\x61\x74\x69\x6f\x6e\x3a\x20\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20\x25\x64\x20\x68\x61\x73\x20\x6f\x6e\x6c\x79\x20\x6f\x6e\x65\x20\x61\x6c\x74\x73\x65\x74\x74\x69\x6e\x67" "\n"
,IlIlI->lIIllII.llIIlII[i].lIlllII);continue;}if(lIIIlIl->desc.bAlternateSetting
==llIlII->cur_altsetting->desc.bAlternateSetting){Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x73\x65\x6c\x65\x63\x74\x63\x6f\x6e\x66\x69\x67\x75\x72\x61\x74\x69\x6f\x6e\x3a\x20\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20\x25\x64\x20\x63\x75\x72\x72\x65\x6e\x74\x20\x61\x6c\x74\x73\x65\x74\x74\x69\x6e\x67\x20\x61\x6c\x72\x65\x61\x64\x79\x20\x73\x65\x74" "\n"
,IlIlI->lIIllII.llIIlII[i].lIlllII);continue;}}IIIll=usb_set_interface(IlllI->
lIlII->lIIlI,IlIlI->lIIllII.llIIlII[i].lIlllII,IlIlI->lIIllII.llIIlII[i].llIlllI
);if(IIIll!=(0x15c2+1494-0x1b98)){Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x73\x65\x6c\x65\x63\x74\x63\x6f\x6e\x66\x69\x67\x75\x72\x61\x74\x69\x6f\x6e\x3a\x20\x75\x73\x62\x5f\x73\x65\x74\x5f\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20\x66\x61\x69\x6c\x65\x64\x20\x77\x69\x74\x68\x20\x65\x72\x72\x6f\x72\x20\x25\x64" "\n"
,IIIll);IIIll=(0x1f5d+1503-0x253c);
}if(llIlII->cur_altsetting){int IIIIIl;int pipe;for(IIIIIl=(0x1018+843-0x1363);
IIIIIl<llIlII->cur_altsetting->desc.bNumEndpoints;IIIIIl++){if(llIlII->
cur_altsetting->endpoint[IIIIIl].desc.bEndpointAddress&(0x952+7234-0x2514))pipe=
usb_rcvisocpipe(IlllI->lIlII->lIIlI,llIlII->cur_altsetting->endpoint[IIIIIl].
desc.bEndpointAddress&(0x53+5010-0x13d6));else pipe=usb_sndisocpipe(IlllI->lIlII
->lIIlI,llIlII->cur_altsetting->endpoint[IIIIIl].desc.bEndpointAddress&
(0x2278+658-0x24fb));IIllIlIl(IlllI->lIlII,pipe,(0x1721+235-0x180c));}}}
usb_unlock_device(IlllI->lIlII->lIIlI);}while((0xee5+967-0x12ac));if(unlikely(
IIIll<(0x16b8+2530-0x209a))){Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x73\x65\x6c\x65\x63\x74\x63\x6f\x6e\x66\x69\x67\x75\x72\x61\x74\x69\x6f\x6e\x3a\x20\x66\x61\x69\x6c\x65\x64\x20\x77\x69\x74\x68\x20\x65\x72\x72\x6f\x72\x20\x25\x64" "\n"
,IIIll);IllIlIIl(IlllI,IIIll,llIlI);}IIlIll(IlllI,IIIll);}void IllIlIIl(struct 
lIlIl*IlllI,int status,gfp_t llIlI){IIIII IlIlI=(IIIII)(IlllI+
(0x13a7+2247-0x1c6d));IlIlI->lllII.Status=status;}void lllIIllll(struct lIlIl*
IlllI,gfp_t llIlI){int IIIll=(0x20e9+711-0x23b0);IIIII IlIlI=(IIIII)(IlllI+
(0x8e8+7326-0x2585));
IlIlI->lllII.Status=(0x230+6451-0x1b63);if(IlllI->lIlII->IIlIlII&&(IlllI->
endpoint==IlllI->lIlII->IIIlllII||IlllI->endpoint==IlllI->lIlII->llIlIlIl)){
lIIlllll(IlllI->lIlII);}do
{
#if KERNEL_GT_EQ((0x127d+3466-0x2005),(0x599+3289-0x126c),(0x1d+6878-0x1af1))
int pipe=(0x1283+2090-0x1aad),IIIIIIlI;struct usb_host_endpoint*ep;ep=(IlIlI->
IlIIIll.Flags&IIIllI)?IlllI->lIlII->lIIlI->ep_in[IlIlI->IlIIIll.Endpoint]:IlllI
->lIlII->lIIlI->ep_out[IlIlI->IlIIIll.Endpoint];if(ep){switch(ep->desc.
bmAttributes&USB_ENDPOINT_XFERTYPE_MASK){case USB_ENDPOINT_XFER_ISOC:pipe=(IlIlI
->IlIIIll.Flags&IIIllI)?usb_rcvisocpipe(IlllI->lIlII->lIIlI,IlIlI->IlIIIll.
Endpoint):usb_sndisocpipe(IlllI->lIlII->lIIlI,IlIlI->IlIIIll.Endpoint);break;
case USB_ENDPOINT_XFER_BULK:pipe=(IlIlI->IlIIIll.Flags&IIIllI)?usb_rcvbulkpipe(
IlllI->lIlII->lIIlI,IlIlI->IlIIIll.Endpoint):usb_sndbulkpipe(IlllI->lIlII->lIIlI
,IlIlI->IlIIIll.Endpoint);break;case USB_ENDPOINT_XFER_INT:pipe=(IlIlI->IlIIIll.
Flags&IIIllI)?usb_rcvintpipe(IlllI->lIlII->lIIlI,IlIlI->IlIIIll.Endpoint):
usb_sndintpipe(IlllI->lIlII->lIIlI,IlIlI->IlIIIll.Endpoint);break;case 
USB_ENDPOINT_XFER_CONTROL:default:break;}}
#endif
if(ep&&(ep->desc.bmAttributes&USB_ENDPOINT_XFERTYPE_MASK)==
USB_ENDPOINT_XFER_ISOC){IIllIlIl(IlllI->lIlII,pipe,(0x1236+3957-0x21ab));
IIIIIIlI=usb_pipeendpoint(pipe);
#if KERNEL_GT_EQ((0x1616+867-0x1977),(0x208b+1053-0x24a2),(0x180d+3652-0x2633))
if(usb_pipein(pipe))IIIIIIlI|=USB_DIR_IN;usb_reset_endpoint(IlllI->lIlII->lIIlI,
IIIIIIlI);
#else
usb_settoggle(IlllI->lIlII->lIIlI,IIIIIIlI,usb_pipeout(pipe),(0xa2+7408-0x1d92))
;
#endif
IIIll=(0x142c+2525-0x1e09);}else{IIIll=usb_clear_halt(IlllI->lIlII->lIIlI,pipe);
}}while((0x6b6+3189-0x132b));if(unlikely(IIIll<(0x935+492-0xb21))){Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x63\x6c\x65\x61\x72\x73\x74\x61\x6c\x6c\x3a\x20\x66\x61\x69\x6c\x65\x64\x20\x77\x69\x74\x68\x20\x65\x72\x72\x6f\x72\x20\x25\x64" "\n"
,IIIll);IlllIIlll(IlllI,IIIll,llIlI);}IIlIll(IlllI,IIIll);}void IlllIIlll(struct
 lIlIl*IlllI,int status,gfp_t llIlI){IIIII IlIlI=(IIIII)(IlllI+(0x737+435-0x8e9)
);IlIlI->lllII.Status=status;}void lIllIlllI(struct lIlIl*IlllI,gfp_t llIlI){
IIIII IlIlI=(IIIII)(IlllI+(0xb0b+3265-0x17cb));IlIlI->lllII.Status=
(0x1b4b+2307-0x244e);IlIlI->llIllIII.lIIIIlIlI=usb_get_current_frame_number(
IlllI->lIlII->lIIlI);IIlIll(IlllI,(0x4a2+1473-0xa63));}void IllIIIIIl(struct 
lIlIl*IlllI,int status,gfp_t llIlI){IIIII IlIlI=(IIIII)(IlllI+
(0x40c+8785-0x265c));IlIlI->llIllIII.lIIIIlIlI=(0x594+8395-0x265f);IlIlI->lllII.
Status=status;}void llllIllll(struct lIlIl*IlllI,gfp_t llIlI){IIIII IlIlI=(IIIII
)(IlllI+(0x124a+2330-0x1b63));struct usb_interface*llIlII;struct 
usb_host_interface*lIIIlIl;
IlIlI->lllII.Status=(0x1091+3624-0x1eb9);usb_lock_device(IlllI->lIlII->lIIlI);do
{llIlII=usb_ifnum_to_if(IlllI->lIlII->lIIlI,IlIlI->IlIIIIl.lIlllII);if(!llIlII){
Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x73\x65\x6c\x65\x63\x74\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x3a\x20\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20\x25\x64\x20\x6e\x6f\x74\x20\x66\x6f\x75\x6e\x64" "\n"
,IlIlI->IlIIIIl.llIlllI);break;}


IlIllIIll(IlllI->lIlII,llIlII,IlllI,(0x1624+1044-0x1a38));lIIIlIl=
usb_altnum_to_altsetting(llIlII,IlIlI->IlIIIIl.llIlllI);if(!lIIIlIl){Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x73\x65\x6c\x65\x63\x74\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x3a\x20\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20\x25\x64\x20\x61\x6c\x74\x73\x65\x74\x74\x69\x6e\x67\x20\x25\x64\x20\x6e\x6f\x74\x20\x66\x6f\x75\x6e\x64" "\n"
,IlIlI->IlIIIIl.lIlllII,IlIlI->IlIIIIl.llIlllI);break;}if(llIlII->cur_altsetting
){if(llIlII->num_altsetting==(0x4a4+6788-0x1f27)){Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x73\x65\x6c\x65\x63\x74\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x3a\x20\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20\x25\x64\x20\x68\x61\x73\x20\x6f\x6e\x6c\x79\x20\x6f\x6e\x65\x20\x61\x6c\x74\x73\x65\x74\x74\x69\x6e\x67" "\n"
,IlIlI->IlIIIIl.lIlllII);break;}if(lIIIlIl->desc.bAlternateSetting==llIlII->
cur_altsetting->desc.bAlternateSetting){Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x73\x65\x6c\x65\x63\x74\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x3a\x20\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20\x25\x64\x20\x63\x75\x72\x72\x65\x6e\x74\x20\x61\x6c\x74\x73\x65\x74\x74\x69\x6e\x67\x20\x61\x6c\x72\x65\x61\x64\x79\x20\x73\x65\x74" "\n"
,IlIlI->IlIIIIl.lIlllII);break;}}IlIlI->lllII.Status=usb_set_interface(IlllI->
lIlII->lIIlI,IlIlI->IlIIIIl.lIlllII,IlIlI->IlIIIIl.llIlllI);if(IlIlI->lllII.
Status!=(0x435+4815-0x1704)){Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x73\x65\x6c\x65\x63\x74\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x3a\x20\x75\x73\x62\x5f\x73\x65\x74\x5f\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20\x66\x61\x69\x6c\x65\x64\x20\x77\x69\x74\x68\x20\x65\x72\x72\x6f\x72\x20\x25\x64" "\n"
,IlIlI->lllII.Status);}if(llIlII->cur_altsetting){int IIIIIl;int pipe;for(IIIIIl
=(0xe6+275-0x1f9);IIIIIl<llIlII->cur_altsetting->desc.bNumEndpoints;IIIIIl++){if
(llIlII->cur_altsetting->endpoint[IIIIIl].desc.bEndpointAddress&
(0xcd6+1537-0x1257))pipe=usb_rcvisocpipe(IlllI->lIlII->lIIlI,llIlII->
cur_altsetting->endpoint[IIIIIl].desc.bEndpointAddress&(0xbcf+1202-0x1072));else
 pipe=usb_sndisocpipe(IlllI->lIlII->lIIlI,llIlII->cur_altsetting->endpoint[
IIIIIl].desc.bEndpointAddress&(0x1bc+3784-0x1075));IIllIlIl(IlllI->lIlII,pipe,
(0x9d5+4715-0x1c40));}}}while((0xd0d+2920-0x1875));if(!IlllI->lIlII->IIlIlII)
{
lIllIlll(IlllI->lIlII);}usb_unlock_device(IlllI->lIlII->lIIlI);IIlIll(IlllI,
(0x358+5135-0x1767));}void IlIlIlIll(struct lIlIl*IlllI,int status,gfp_t llIlI){
IIIII IlIlI=(IIIII)(IlllI+(0x2d0+879-0x63e));IlIlI->lllII.Status=status;}void 
IIIlIlIIl(struct lIlIl*IlllI,gfp_t llIlI){IIIII IlIlI=(IIIII)(IlllI+
(0x953+6528-0x22d2));enum usb_device_state state;usb_lock_device(IlllI->lIlII->
lIIlI);state=IlllI->lIlII->lIIlI->state;usb_unlock_device(IlllI->lIlII->lIIlI);
IlIlI->lllII.Status=(0xead+1717-0x1562);IlIlI->lIlIIIIl.IIllIIll=
(0x3e0+5974-0x1b36);if(state!=USB_STATE_SUSPENDED&&state!=USB_STATE_NOTATTACHED)
{IlIlI->lIlIIIIl.IIllIIll|=IlllIlIII;if(state==USB_STATE_CONFIGURED)IlIlI->
lIlIIIIl.IIllIIll|=lllIlIllI;}IIlIll(IlllI,(0x2c+3071-0xc2b));}void IlIIlIllI(
struct lIlIl*IlllI,int status,gfp_t llIlI){IIIII IlIlI=(IIIII)(IlllI+
(0x1a16+878-0x1d83));IlIlI->lIlIIIIl.IIllIIll=(0x9d7+5939-0x210a);IlIlI->lllII.
Status=status;}void lIIllIlII(struct lIlIl*IlllI,gfp_t llIlI){IIIII IlIlI=(IIIII
)(IlllI+(0x14bf+2080-0x1cde));IlIlI->lllII.Status=-(0x191+7337-0x1e39);if(IlllI
->lIlII->IIlIlII)
lIIlllll(IlllI->lIlII);if(usb_lock_device_for_reset(IlllI->lIlII->lIIlI,NULL)>=
(0xc6+8435-0x21b9)){
IlIlI->lllII.Status=usb_reset_device(IlllI->lIlII->lIIlI);usb_unlock_device(
IlllI->lIlII->lIIlI);}if(IlIlI->lllII.Status!=(0x4d5+7104-0x2095)){Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x72\x65\x73\x65\x74\x70\x6f\x72\x74\x3a\x20\x66\x61\x69\x6c\x65\x64\x20\x77\x69\x74\x68\x20\x65\x72\x72\x6f\x72\x20\x25\x64" "\n"
,IlIlI->lllII.Status);}IIlIll(IlllI,IlIlI->lllII.Status);}void IllIllllI(struct 
lIlIl*IlllI,int status,gfp_t llIlI){IIIII IlIlI=(IIIII)(IlllI+
(0xbdf+3949-0x1b4b));IlIlI->lllII.Status=status;}void lIIIIllIl(struct lIlIl*
IlllI,gfp_t llIlI){IIIII IlIlI=(IIIII)(IlllI+(0x158c+4124-0x25a7));IlIlI->lllII.
Status=(0x2499+46-0x24c7);
IlllIIlII(IlllI->lIlII,IlllI->lllIl,IlllI);IlllI->IlllllI=(0x51c+2687-0xf9a);
IIlIll(IlllI,(0x9cb+4773-0x1c70));}void IlIllIIIl(struct lIlIl*IlllI,gfp_t llIlI
){IIIII IlIlI=(IIIII)(IlllI+(0x8ec+4411-0x1a26));int endpoint;endpoint=IlIlI->
IlIlllll.Endpoint;endpoint|=(IlIlI->IlIlllll.Flags&IIIllI)?(0xc56+28-0xbf2):
(0x148+6142-0x1946);IlIlI->lllII.Status=(0xca3+5223-0x210a);

llIIlIIll(IlllI->lIlII,endpoint,IlllI);IIlIll(IlllI,(0x625+1475-0xbe8));}void 
IIllllllI(struct lIlIl*IlllI,int status,gfp_t llIlI){IIIII IlIlI=(IIIII)(IlllI+
(0x2b7+1239-0x78d));IlIlI->lllII.Status=status;}void lIIlIIlIl(struct lIlIl*
IlllI,gfp_t llIlI){IIIII IlIlI=(IIIII)(IlllI+(0x189a+3226-0x2533));int IIIll=
(0x785+6518-0x20fb);struct usb_ctrlrequest*IIIIlll=NULL;do{struct urb*lIlll;int 
pipe;lIlll=IIIIIIIl((0xd71+6510-0x26df),llIlI);if(unlikely(!lIlll)){Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x63\x6f\x6e\x74\x72\x6f\x6c\x74\x72\x61\x6e\x73\x66\x65\x72\x3a\x20\x75\x73\x62\x5f\x61\x6c\x6c\x6f\x63\x5f\x75\x72\x62\x20\x66\x61\x69\x6c\x65\x64" "\n"
);IIIll=-ENOMEM;break;}IlllI->lIIIll.lIlll=lIlll;IIIIlll=IllIllI(sizeof(*IIIIlll
),llIlI);if(!IIIIlll){Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x63\x6f\x6e\x74\x72\x6f\x6c\x74\x72\x61\x6e\x73\x66\x65\x72\x3a\x20\x75\x73\x62\x5f\x61\x6c\x6c\x6f\x63\x5f\x75\x72\x62\x20\x66\x61\x69\x6c\x65\x64" "\n"
);IIIll=-ENOMEM;break;}IIIIlll->bRequestType=IlIlI->llIIII.IIllIll;IIIIlll->
bRequest=IlIlI->llIIII.IlIlIIlII;IIIIlll->wValue=cpu_to_le16(IlIlI->llIIII.
llIllIll);IIIIlll->wIndex=cpu_to_le16(IlIlI->llIIII.IIIlIIllI);IIIIlll->wLength=
cpu_to_le16(IlIlI->llIIII.lllllI);pipe=(IlIlI->llIIII.Flags&IIIllI)?
usb_rcvctrlpipe(IlllI->lIlII->lIIlI,IlIlI->llIIII.Endpoint):usb_sndctrlpipe(
IlllI->lIlII->lIIlI,IlIlI->llIIII.Endpoint);usb_fill_control_urb(lIlll,IlllI->
lIlII->lIIlI,pipe,(unsigned char*)IIIIlll,IlllI->lIIIll.IlIIl,IlIlI->llIIII.
lllllI,llIlllll,IlllI);if(atomic_cmpxchg(&IlllI->state,lIlIIIl,IIIlIlI)!=lIlIIIl
){IIIll=-ECONNRESET;break;}IIIll=usb_submit_urb(lIlll,llIlI);if(unlikely(IIIll<
(0x135+8243-0x2168))){Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x63\x6f\x6e\x74\x72\x6f\x6c\x74\x72\x61\x6e\x73\x66\x65\x72\x3a\x20\x75\x73\x62\x5f\x73\x75\x62\x6d\x69\x74\x5f\x75\x72\x62\x20\x66\x61\x69\x6c\x65\x64\x20\x77\x69\x74\x68\x20\x65\x72\x72\x6f\x72\x20\x25\x64" "\n"
,IIIll);}}while((0x1855+3487-0x25f4));if(unlikely(IIIll<(0x134d+3665-0x219e))){
lIIllIIlI(IlllI,IIIll,llIlI);IIlIll(IlllI,IIIll);}}void lIIllIIlI(struct lIlIl*
IlllI,int status,gfp_t llIlI){IIIII IlIlI=(IIIII)(IlllI+(0x443+1805-0xb4f));
IlIlI->llIIII.lllllI=(0x1893+272-0x19a3);IlIlI->lllII.IIllI=sizeof(IlIlI->llIIII
);IlIlI->lllII.Status=status;}void lIlllIIlI(struct lIlIl*IlllI,gfp_t llIlI){
switch(IlllI->lIllll){case IllIIlI:IlIIllllI(IlllI,llIlI);return;case lIlllll:
lllIllIlI(IlllI,llIlI);return;
#if KERNEL_GT_EQ((0xe3b+1050-0x1253),(0xd15+5898-0x2419),(0x68c+1857-0xdae))
case IIlIIII:IllllIIIl(IlllI,llIlI);return;
#endif
default:IllIlIl(IlllI,-EINVAL,llIlI);IIlIll(IlllI,-EINVAL);return;}}void 
IlIIllllI(struct lIlIl*IlllI,gfp_t llIlI){IIIII IlIlI=(IIIII)(IlllI+
(0x1c9d+652-0x1f28));int IIIll=(0xab6+1379-0x1019);do{struct urb*lIlll;int pipe=
(IlIlI->IllllI.Flags&IIIllI)?usb_rcvbulkpipe(IlllI->lIlII->lIIlI,IlIlI->IllllI.
Endpoint):usb_sndbulkpipe(IlllI->lIlII->lIIlI,IlIlI->IllllI.Endpoint);lIlll=
IIIIIIIl((0x19e3+1362-0x1f35),llIlI);if(unlikely(!lIlll)){Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x62\x75\x6c\x6b\x74\x72\x61\x6e\x73\x66\x65\x72\x3a\x20\x75\x73\x62\x5f\x61\x6c\x6c\x6f\x63\x5f\x75\x72\x62\x20\x66\x61\x69\x6c\x65\x64" "\n"
);IIIll=-ENOMEM;break;}IlllI->lIIIll.lIlll=lIlll;usb_fill_bulk_urb(lIlll,IlllI->
lIlII->lIIlI,pipe,IlllI->lIIIll.IlIIl,IlIlI->IllllI.lllllI,lIIllllI,IlllI);if(
IlIlI->IllllI.Flags&IIIllI){if((IlIlI->IllllI.Flags&lIlIlIl)==(0x2d4+2336-0xbf4)
){lIlll->transfer_flags|=URB_SHORT_NOT_OK;}}if(unlikely(atomic_cmpxchg(&IlllI->
state,lIlIIIl,IIIlIlI)!=lIlIIIl)){IIIll=-ECONNRESET;break;}IIIll=usb_submit_urb(
lIlll,llIlI);if(unlikely(IIIll<(0xbfc+82-0xc4e))){Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x73\x6f\x6c\x69\x64\x5f\x62\x75\x6c\x6b\x74\x72\x61\x6e\x73\x66\x65\x72\x3a\x20\x75\x73\x62\x5f\x73\x75\x62\x6d\x69\x74\x5f\x75\x72\x62\x20\x66\x61\x69\x6c\x65\x64\x20\x77\x69\x74\x68\x20\x65\x72\x72\x6f\x72\x20\x25\x64" "\n"
,IIIll);}}while((0x105+6935-0x1c1c));if(unlikely(IIIll<(0x15f5+598-0x184b))){
IllIlIl(IlllI,IIIll,llIlI);IIlIll(IlllI,IIIll);}}
#if KERNEL_GT_EQ((0x6c2+662-0x956),(0xad7+1416-0x1059),(0x24ca+447-0x266a))
void IllllIIIl(struct lIlIl*IlllI,gfp_t llIlI){IIIII IlIlI=(IIIII)(IlllI+
(0x1523+3315-0x2215));int IIIll=(0x1faf+154-0x2049);do{struct urb*lIlll;int pipe
=(IlIlI->IllllI.Flags&IIIllI)?usb_rcvbulkpipe(IlllI->lIlII->lIIlI,IlIlI->IllllI.
Endpoint):usb_sndbulkpipe(IlllI->lIlII->lIIlI,IlIlI->IllllI.Endpoint);lIlll=
IIIIIIIl((0x11a5+3953-0x2116),llIlI);if(unlikely(!lIlll)){Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x62\x75\x6c\x6b\x74\x72\x61\x6e\x73\x66\x65\x72\x3a\x20\x75\x73\x62\x5f\x61\x6c\x6c\x6f\x63\x5f\x75\x72\x62\x20\x66\x61\x69\x6c\x65\x64" "\n"
);IIIll=-ENOMEM;break;}IlllI->lIllIll.lIlll=lIlll;usb_fill_bulk_urb(lIlll,IlllI
->lIlII->lIIlI,pipe,NULL,IlIlI->IllllI.lllllI,lIIllllI,IlllI);lIlll->sg=IlllI->
lIllIll.sg.lIIlIIl;lIlll->num_sgs=IlllI->lIllIll.sg.num_sgs;if(IlIlI->IllllI.
Flags&IIIllI){if((IlIlI->IllllI.Flags&lIlIlIl)==(0xe87+1675-0x1512)){lIlll->
transfer_flags|=URB_SHORT_NOT_OK;}}if(unlikely(atomic_cmpxchg(&IlllI->state,
lIlIIIl,IIIlIlI)!=lIlIIIl)){IIIll=-ECONNRESET;break;}IIIll=usb_submit_urb(lIlll,
llIlI);if(unlikely(IIIll<(0x13d3+1792-0x1ad3))){Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x73\x6f\x6c\x69\x64\x5f\x62\x75\x6c\x6b\x74\x72\x61\x6e\x73\x66\x65\x72\x3a\x20\x75\x73\x62\x5f\x73\x75\x62\x6d\x69\x74\x5f\x75\x72\x62\x20\x66\x61\x69\x6c\x65\x64\x20\x77\x69\x74\x68\x20\x65\x72\x72\x6f\x72\x20\x25\x64" "\n"
,IIIll);}}while((0xac2+3659-0x190d));if(unlikely(IIIll<(0xb8a+5872-0x227a))){
IllIlIl(IlllI,IIIll,llIlI);IIlIll(IlllI,IIIll);}}
#endif
void lllIllIlI(struct lIlIl*IlllI,gfp_t llIlI){IIIII IlIlI=(IIIII)(IlllI+
(0x1124+1006-0x1511));int IIIll=(0xa53+2441-0x13dc);do{int pipe;pipe=(IlIlI->
IllllI.Flags&IIIllI)?usb_rcvbulkpipe(IlllI->lIlII->lIIlI,IlIlI->IllllI.Endpoint)
:usb_sndbulkpipe(IlllI->lIlII->lIIlI,IlIlI->IllllI.Endpoint);IlllI->lIllII.
llllIll=lIIlIIIIl(pipe,(0x1454+2263-0x1d2b),!!(IlIlI->IllllI.Flags&lIlIlIl),
IlllI->lIlII->IIIIlII,IlllI->lIlII->lIIlI,IlllI->lIllII.lIIlll,IlllI,IIIlIlIII,
llIlI);if(unlikely(IlllI->lIllII.llllIll==NULL)){Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x62\x75\x6c\x6b\x74\x72\x61\x6e\x73\x66\x65\x72\x5f\x70\x61\x72\x74\x69\x74\x69\x6f\x6e\x65\x64\x3a\x20\x75\x73\x62\x64\x5f\x75\x63\x5f\x61\x6c\x6c\x6f\x63\x20\x66\x61\x69\x6c\x65\x64" "\n"
);IIIll=-ENOMEM;break;}if(unlikely(atomic_cmpxchg(&IlllI->state,lIlIIIl,IIIlIlI)
!=lIlIIIl)){IIIll=-ECONNRESET;break;}IIIll=llIIIlIlI(IlllI->lIllII.llllIll);if(
unlikely(IIIll<(0xb7c+1400-0x10f4))){Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x62\x75\x6c\x6b\x74\x72\x61\x6e\x73\x66\x65\x72\x5f\x70\x61\x72\x74\x69\x74\x69\x6f\x6e\x65\x64\x3a\x20\x75\x73\x62\x64\x5f\x75\x63\x5f\x73\x75\x62\x6d\x69\x74\x20\x66\x61\x69\x6c\x65\x64\x20\x77\x69\x74\x68\x20\x65\x72\x72\x6f\x72\x20\x25\x64\x20\x66\x6f\x72\x20\x55\x6e\x69\x71\x75\x65\x49\x64\x3d\x30\x78\x25\x2e\x38\x58\x25\x2e\x38\x58" "\n"
,IIIll,(IIIIl)(IlIlI->lllII.IlIIll>>(0x15d4+2309-0x1eb9)),(IIIIl)(IlIlI->lllII.
IlIIll));}}while((0x1480+3118-0x20ae));if(unlikely(IIIll<(0x92a+2431-0x12a9))){
IllIlIl(IlllI,IIIll,llIlI);IIlIll(IlllI,IIIll);}}void IllIlIl(struct lIlIl*IlllI
,int status,gfp_t llIlI){IIIII IlIlI=(IIIII)(IlllI+(0x14af+853-0x1803));IlIlI->
IllllI.lllllI=(0x3d5+4217-0x144e);IlIlI->lllII.IIllI=sizeof(IlIlI->IllllI)+IlIlI
->IllllI.lllllI;IlIlI->lllII.Status=status;}void lIlIllIlI(struct lIlIl*IlllI,
gfp_t llIlI){switch(IlllI->lIllll){case IllIIlI:IIllIlIII(IlllI,llIlI);return;
#if KERNEL_GT_EQ((0x1e4+1255-0x6c9),(0x168b+598-0x18db),(0x4f6+3084-0x10e3))
case IIlIIII:IIlIlIlIl(IlllI,llIlI);return;
#endif
default:IlllIlIl(IlllI,-EINVAL,llIlI);IIlIll(IlllI,-EINVAL);return;}}void 
IIllIlIII(struct lIlIl*IlllI,gfp_t llIlI){IIIII IlIlI=(IIIII)(IlllI+
(0xd78+6475-0x26c2));int IIIll=(0x5bc+811-0x8e7);do{int pipe;struct urb*lIlll;
struct usb_host_endpoint*ep;lIlll=IIIIIIIl((0x1875+3638-0x26ab),llIlI);if(
unlikely(!lIlll)){Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x74\x72\x61\x6e\x73\x66\x65\x72\x3a\x20\x75\x73\x62\x5f\x61\x6c\x6c\x6f\x63\x5f\x75\x72\x62\x20\x66\x61\x69\x6c\x65\x64" "\n"
);IIIll=-ENOMEM;break;}IlllI->lIIIll.lIlll=lIlll;pipe=(IlIlI->llIIlI.Flags&
IIIllI)?usb_rcvintpipe(IlllI->lIlII->lIIlI,IlIlI->llIIlI.Endpoint):
usb_sndintpipe(IlllI->lIlII->lIIlI,IlIlI->llIIlI.Endpoint);Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x74\x72\x61\x6e\x73\x66\x65\x72\x3a\x20\x69\x6e\x74\x65\x72\x76\x61\x6c\x20\x69\x73\x20\x25\x64" "\n"
,IlIlI->llIIlI.Interval);usb_fill_int_urb(lIlll,IlllI->lIlII->lIIlI,pipe,IlllI->
lIIIll.IlIIl,IlIlI->llIIlI.lllllI,lIlIlIlI,IlllI,(0x225+1128-0x68c));if(likely(
IlIlI->llIIlI.Interval)){lIlll->interval=IlIlI->llIIlI.Interval;}else{
#if KERNEL_GT_EQ((0x625+7468-0x234f),(0x1195+1506-0x1771),(0xa3+8016-0x1fe9))
ep=(IlIlI->llIIlI.Flags&IIIllI)?IlllI->lIlII->lIIlI->ep_in[IlIlI->llIIlI.
Endpoint]:IlllI->lIlII->lIIlI->ep_out[IlIlI->llIIlI.Endpoint];Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x74\x72\x61\x6e\x73\x66\x65\x72\x3a\x20\x64\x69\x72\x65\x63\x74\x69\x6f\x6e\x3d\x25\x73\x20\x65\x70\x3d\x30\x78\x25\x70\x20\x65\x70\x5f\x69\x6e\x5b\x25\x64\x5d\x3d\x30\x78\x25\x70\x20\x65\x70\x5f\x6f\x75\x74\x5b\x25\x64\x5d\x3d\x30\x78\x25\x70" "\n"
,(IlIlI->llIIlI.Flags&IIIllI)?"\x69\x6e":"\x6f\x75\x74",ep,IlIlI->llIIlI.
Endpoint,IlllI->lIlII->lIIlI->ep_in[IlIlI->llIIlI.Endpoint],IlIlI->llIIlI.
Endpoint,IlllI->lIlII->lIIlI->ep_out[IlIlI->llIIlI.Endpoint]);if(ep){if(IlllI->
lIlII->lIIlI->speed==USB_SPEED_HIGH)lIlll->interval=(0xf0b+4415-0x2049)<<(ep->
desc.bInterval-(0x3+9533-0x253f));else lIlll->interval=ep->desc.bInterval;}else{
lIlll->interval=(0x1977+258-0x1a78);}
#else
lIlll->interval=(0x3a3+4706-0x1604);
#endif
}if(IlIlI->llIIlI.Flags&IIIllI){if((IlIlI->llIIlI.Flags&lIlIlIl)==
(0xc3c+6039-0x23d3)){lIlll->transfer_flags|=URB_SHORT_NOT_OK;}}if(atomic_cmpxchg
(&IlllI->state,lIlIIIl,IIIlIlI)!=lIlIIIl){IIIll=-ECONNRESET;break;}while(
(0x4cf+8715-0x26d9)){IIIll=usb_submit_urb(lIlll,llIlI);if((IIIll==-ENOMEM)&&(
IlllI->lIlII->lIIlI->speed==USB_SPEED_HIGH)&&(lIlll->interval<=
(0xf40+3433-0x1c29)))
lIlll->interval<<=(0x14ba+2587-0x1ed4);else break;yield();}if(unlikely(IIIll<
(0x97c+2302-0x127a))){Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x74\x72\x61\x6e\x73\x66\x65\x72\x3a\x20\x75\x73\x62\x5f\x73\x75\x62\x6d\x69\x74\x5f\x75\x72\x62\x20\x66\x61\x69\x6c\x65\x64\x20\x77\x69\x74\x68\x20\x65\x72\x72\x6f\x72\x20\x25\x64\x20\x66\x6f\x72\x20\x55\x6e\x69\x71\x75\x65\x49\x64\x3d\x30\x78\x25\x2e\x38\x58\x25\x2e\x38\x58" "\n"
,IIIll,(IIIIl)(IlIlI->lllII.IlIIll>>(0x2ac+5905-0x199d)),(IIIIl)(IlIlI->lllII.
IlIIll));}}while((0x1f9+3171-0xe5c));if(unlikely(IIIll<(0xf39+1105-0x138a))){
IlllIlIl(IlllI,IIIll,llIlI);IIlIll(IlllI,IIIll);}}
#if KERNEL_GT_EQ((0x1965+1963-0x210e),(0x16ef+36-0x170d),(0x17b+1783-0x853))
void IIlIlIlIl(struct lIlIl*IlllI,gfp_t llIlI){IIIII IlIlI=(IIIII)(IlllI+
(0x402+5780-0x1a95));int IIIll=(0x621+509-0x81e);do{int pipe;struct urb*lIlll;
struct usb_host_endpoint*ep;lIlll=IIIIIIIl((0x2b7+7539-0x202a),llIlI);if(
unlikely(!lIlll)){Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x74\x72\x61\x6e\x73\x66\x65\x72\x5f\x73\x67\x3a\x20\x75\x73\x62\x5f\x61\x6c\x6c\x6f\x63\x5f\x75\x72\x62\x20\x66\x61\x69\x6c\x65\x64" "\n"
);IIIll=-ENOMEM;break;}IlllI->lIllIll.lIlll=lIlll;pipe=(IlIlI->llIIlI.Flags&
IIIllI)?usb_rcvintpipe(IlllI->lIlII->lIIlI,IlIlI->llIIlI.Endpoint):
usb_sndintpipe(IlllI->lIlII->lIIlI,IlIlI->llIIlI.Endpoint);Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x74\x72\x61\x6e\x73\x66\x65\x72\x3a\x20\x69\x6e\x74\x65\x72\x76\x61\x6c\x20\x69\x73\x20\x25\x64" "\n"
,IlIlI->llIIlI.Interval);usb_fill_int_urb(lIlll,IlllI->lIlII->lIIlI,pipe,NULL,
IlIlI->llIIlI.lllllI,lIlIlIlI,IlllI,(0x44d+7872-0x230c));lIlll->sg=IlllI->
lIllIll.sg.lIIlIIl;lIlll->num_sgs=IlllI->lIllIll.sg.num_sgs;if(likely(IlIlI->
llIIlI.Interval)){lIlll->interval=IlIlI->llIIlI.Interval;}else{
#if KERNEL_GT_EQ((0xd87+6365-0x2662),(0x18c6+797-0x1bdd),(0xccc+4065-0x1ca3))
ep=(IlIlI->llIIlI.Flags&IIIllI)?IlllI->lIlII->lIIlI->ep_in[IlIlI->llIIlI.
Endpoint]:IlllI->lIlII->lIIlI->ep_out[IlIlI->llIIlI.Endpoint];Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x74\x72\x61\x6e\x73\x66\x65\x72\x3a\x20\x64\x69\x72\x65\x63\x74\x69\x6f\x6e\x3d\x25\x73\x20\x65\x70\x3d\x30\x78\x25\x70\x20\x65\x70\x5f\x69\x6e\x5b\x25\x64\x5d\x3d\x30\x78\x25\x70\x20\x65\x70\x5f\x6f\x75\x74\x5b\x25\x64\x5d\x3d\x30\x78\x25\x70" "\n"
,(IlIlI->llIIlI.Flags&IIIllI)?"\x69\x6e":"\x6f\x75\x74",ep,IlIlI->llIIlI.
Endpoint,IlllI->lIlII->lIIlI->ep_in[IlIlI->llIIlI.Endpoint],IlIlI->llIIlI.
Endpoint,IlllI->lIlII->lIIlI->ep_out[IlIlI->llIIlI.Endpoint]);if(ep){if(IlllI->
lIlII->lIIlI->speed==USB_SPEED_HIGH)lIlll->interval=(0x12bf+3203-0x1f41)<<(ep->
desc.bInterval-(0x205+2173-0xa81));else lIlll->interval=ep->desc.bInterval;}else
{lIlll->interval=(0x83a+2763-0x1304);}
#else
lIlll->interval=(0x143+4605-0x133f);
#endif
}if(IlIlI->llIIlI.Flags&IIIllI){if((IlIlI->llIIlI.Flags&lIlIlIl)==
(0x238+5555-0x17eb)){lIlll->transfer_flags|=URB_SHORT_NOT_OK;}}if(atomic_cmpxchg
(&IlllI->state,lIlIIIl,IIIlIlI)!=lIlIIIl){IIIll=-ECONNRESET;break;}while(
(0xaf9+6023-0x227f)){IIIll=usb_submit_urb(lIlll,llIlI);if((IIIll==-ENOMEM)&&(
IlllI->lIlII->lIIlI->speed==USB_SPEED_HIGH)&&(lIlll->interval<=
(0x226c+204-0x22b8)))
lIlll->interval<<=(0xa30+1378-0xf91);else break;yield();}if(unlikely(IIIll<
(0x963+928-0xd03))){Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x74\x72\x61\x6e\x73\x66\x65\x72\x3a\x20\x75\x73\x62\x5f\x73\x75\x62\x6d\x69\x74\x5f\x75\x72\x62\x20\x66\x61\x69\x6c\x65\x64\x20\x77\x69\x74\x68\x20\x65\x72\x72\x6f\x72\x20\x25\x64\x20\x66\x6f\x72\x20\x55\x6e\x69\x71\x75\x65\x49\x64\x3d\x30\x78\x25\x2e\x38\x58\x25\x2e\x38\x58" "\n"
,IIIll,(IIIIl)(IlIlI->lllII.IlIIll>>(0x295+79-0x2c4)),(IIIIl)(IlIlI->lllII.
IlIIll));}}while((0xcf+4796-0x138b));if(unlikely(IIIll<(0x15c+8785-0x23ad))){
IlllIlIl(IlllI,IIIll,llIlI);IIlIll(IlllI,IIIll);}}
#endif
void IlllIlIl(struct lIlIl*IlllI,int status,gfp_t llIlI){IIIII IlIlI=(IIIII)(
IlllI+(0x4f2+4306-0x15c3));IlIlI->llIIlI.lllllI=(0x134f+2103-0x1b86);IlIlI->
lllII.IIllI=sizeof(IlIlI->llIIlI)+IlIlI->llIIlI.lllllI;IlIlI->lllII.Status=
status;}void llIIlllIl(struct lIlIl*IlllI,gfp_t llIlI){switch(IlllI->lIllll){
case IllIIlI:IlllIIlIl(IlllI,llIlI);return;case lIlllll:llIIllIlI(IlllI,llIlI);
return;default:lIIIIlIl(IlllI,-EINVAL,llIlI);IIlIll(IlllI,-EINVAL);return;}}void
 llIIllIlI(struct lIlIl*IlllI,gfp_t llIlI){IIIII IlIlI=(IIIII)(IlllI+
(0x19d+1137-0x60d));int pipe,IIIll=(0x22d0+869-0x2635);do{int i,IIIIIl,IIllll,
llllIII,lIlllIII,lIIlIlIl;int IllIIIII;struct urb*lIlll;pipe=(IlIlI->llIIl.Flags
&IIIllI)?usb_rcvisocpipe(IlllI->lIlII->lIIlI,IlIlI->llIIl.Endpoint):
usb_sndisocpipe(IlllI->lIlII->lIIlI,IlIlI->llIIl.Endpoint);lIIlIlIl=lllllllll(
IlllI->lIlII,pipe);IlllI->lIllII.llllIll=lIIlIIIIl(pipe,IlIlI->llIIl.Interval,!!
(IlIlI->llIIl.Flags&lIlIlIl),IlllI->lIlII->IIIIlII,IlllI->lIlII->lIIlI,IlllI->
lIllII.lIIlll,IlllI,IllIlIIlI,llIlI);if(unlikely(IlllI->lIllII.llllIll==NULL)){
Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x69\x73\x6f\x63\x68\x74\x72\x61\x6e\x73\x66\x65\x72\x5f\x70\x61\x72\x74\x69\x74\x69\x6f\x6e\x65\x64\x3a\x20\x75\x73\x62\x64\x5f\x75\x63\x5f\x61\x6c\x6c\x6f\x63\x20\x66\x61\x69\x6c\x65\x64" "\n"
);IIIll=-ENOMEM;break;}IlllI->lIllII.llllIll->IIIlII[(0x12df+3320-0x1fd7)]->
start_frame=IlIlI->llIIl.IIlIlIIl;if(!(IlIlI->llIIl.Flags&IIlIlIlll))IlllI->
lIllII.llllIll->IIIlII[(0x34+211-0x107)]->transfer_flags&=~URB_ISO_ASAP;


lIlll=IlllI->lIllII.llllIll->IIIlII[(0x1328+5047-0x26df)];IllIIIII=
(0xe8a+4625-0x209b);for(i=(0x1e80+2108-0x26bc),IIIIIl=(0xe7a+810-0x11a4),IIllll=
(0x70d+2875-0x1248);i<IlIlI->llIIl.IlIllIl;i++,IIllll++){if(IIllll>=lIlll->
number_of_packets){if(++IIIIIl>=IlllI->lIllII.llllIll->IlIII)break;IllIIIII=
(0x1237+2359-0x1b6e);lIlll=IlllI->lIllII.llllIll->IIIlII[IIIIIl];IIllll=
(0x808+3861-0x171d);}lIlll->iso_frame_desc[IIllll].offset=IllIIIII;lIlll->
iso_frame_desc[IIllll].length=IlIlI->llIIl.IlllIlI[i].Length;IllIIIII+=lIlll->
iso_frame_desc[IIllll].length;
}


llllIII=lllIlllI(IlllI->lIlII,pipe);lIlllIII=usb_get_current_frame_number(IlllI
->lIlII->lIIlI);if(!(IlllI->lIllII.llllIll->IIIlII[(0x977+3444-0x16eb)]->
transfer_flags&URB_ISO_ASAP)&&(llllIII==(0x207+4757-0x149c))){llllIII=(lIlllIII+
(0x20bd+1410-0x263d))-IlllI->lIllII.llllIll->IIIlII[(0xbe9+3807-0x1ac8)]->
start_frame;IIllIlIl(IlllI->lIlII,pipe,llllIII);}if(lIIlIlIl==(0x14c+2179-0x9ce)
){if(IlllI->lIllII.llllIll->IIIlII[(0x100d+5157-0x2432)]->transfer_flags&
URB_ISO_ASAP){IlllI->lIllII.llllIll->IIIlII[(0x16c0+3572-0x24b4)]->
transfer_flags&=~URB_ISO_ASAP;IlllI->lIllII.llllIll->IIIlII[(0x173c+2512-0x210c)
]->start_frame=lIlllIII+(0x19a4+917-0x1d38)-llllIII;}}if(!(IlllI->lIllII.llllIll
->IIIlII[(0x1e5c+668-0x20f8)]->transfer_flags&URB_ISO_ASAP)){IlllI->lIllII.
llllIll->IIIlII[(0xb3a+6454-0x2470)]->start_frame+=llllIII;if(IlllI->lIllII.
llllIll->IIIlII[(0x1217+1907-0x198a)]->start_frame<lIlllIII+(0x30f+7059-0x1ea1))
{IlIlI->lllII.Status=-EXDEV;IlIlI->lllII.IIllI=IlIlIlll(IlIlI);IlIlI->llIIl.
lllllI=(0xb1a+1297-0x102b);IlIlI->llIIl.llIIIIIl=IlIlI->llIIl.IlIllIl;for(i=
(0x2360+431-0x250f);i<IlIlI->llIIl.IlIllIl;i++){IlIlI->llIIl.IlllIlI[i].Status=-
EINVAL;IlIlI->llIIl.IlllIlI[i].Length=(0x1eb+3038-0xdc9);}IIIll=
(0x3ad+2779-0xe88);IIlIll(IlllI,-EXDEV);break;}}if(atomic_cmpxchg(&IlllI->state,
lIlIIIl,IIIlIlI)!=lIlIIIl){IIIll=-ECONNRESET;break;}IIIll=llIIIlIlI(IlllI->
lIllII.llllIll);if(unlikely(IIIll<(0x1368+825-0x16a1))){Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x69\x73\x6f\x63\x68\x74\x72\x61\x6e\x73\x66\x65\x72\x5f\x70\x61\x72\x74\x69\x74\x69\x6f\x6e\x65\x64\x3a\x20\x75\x73\x62\x64\x5f\x75\x63\x5f\x73\x75\x62\x6d\x69\x74\x20\x66\x61\x69\x6c\x65\x64\x20\x77\x69\x74\x68\x20\x65\x72\x72\x6f\x72\x20\x25\x64\x20\x66\x6f\x72\x20\x55\x6e\x69\x71\x75\x65\x49\x64\x3d\x30\x78\x25\x2e\x38\x58\x25\x2e\x38\x58" "\n"
,IIIll,(IIIIl)(IlIlI->lllII.IlIIll>>(0x5a7+8236-0x25b3)),(IIIIl)(IlIlI->lllII.
IlIIll));}}while((0x1546+3297-0x2227));if(unlikely(IIIll<(0x8c8+7339-0x2573))){
IIIlIllI(IlllI->lIlII,pipe);lIIIIlIl(IlllI,IIIll,llIlI);IIlIll(IlllI,IIIll);}}
void IlllIIlIl(struct lIlIl*IlllI,gfp_t llIlI){IIIII IlIlI=(IIIII)(IlllI+
(0xf52+4183-0x1fa8));int pipe,IIIll=(0x10b+5586-0x16dd);int IllIIIII;do{int i,
llllIII,lIlllIII,lIIlIlIl;struct urb*lIlll;struct usb_host_endpoint*ep;pipe=(
IlIlI->llIIl.Flags&IIIllI)?usb_rcvisocpipe(IlllI->lIlII->lIIlI,IlIlI->llIIl.
Endpoint):usb_sndisocpipe(IlllI->lIlII->lIIlI,IlIlI->llIIl.Endpoint);lIIlIlIl=
lllllllll(IlllI->lIlII,pipe);lIlll=IIIIIIIl(IlIlI->llIIl.IlIllIl,llIlI);if(
unlikely(!lIlll)){Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x69\x73\x6f\x63\x68\x74\x72\x61\x6e\x73\x66\x65\x72\x5f\x73\x6f\x6c\x69\x64\x3a\x20\x75\x73\x62\x5f\x61\x6c\x6c\x6f\x63\x5f\x75\x72\x62\x20\x66\x61\x69\x6c\x65\x64" "\n"
);IIIll=-ENOMEM;break;}IlllI->lIIIll.lIlll=lIlll;lIlll->dev=IlllI->lIlII->lIIlI;
lIlll->pipe=pipe;lIlll->transfer_flags=(IlIlI->llIIl.Flags&IIlIlIlll)?
URB_ISO_ASAP:(0x1142+4835-0x2425);lIlll->transfer_buffer_length=IlIlI->llIIl.
lllllI;lIlll->start_frame=IlIlI->llIIl.IIlIlIIl;lIlll->number_of_packets=IlIlI->
llIIl.IlIllIl;lIlll->context=IlllI;lIlll->complete=lIlIIllII;lIlll->
transfer_buffer=IlllI->lIIIll.IlIIl;if(likely(IlIlI->llIIl.Interval)){lIlll->
interval=IlIlI->llIIl.Interval;}else{
#if KERNEL_GT_EQ((0x10b+1133-0x576),(0x1ea0+1079-0x22d1),(0x2345+527-0x254a))

ep=(IlIlI->llIIl.Flags&IIIllI)?IlllI->lIlII->lIIlI->ep_in[IlIlI->llIIl.Endpoint]
:IlllI->lIlII->lIIlI->ep_out[IlIlI->llIIl.Endpoint];if(ep){if(IlllI->lIlII->
lIIlI->speed==USB_SPEED_HIGH)lIlll->interval=(0x1b23+2184-0x23aa)<<(ep->desc.
bInterval-(0x1c7+4317-0x12a3));else lIlll->interval=ep->desc.bInterval;}else{
lIlll->interval=(0x1698+450-0x1859);}
#else
lIlll->interval=(0x1611+3695-0x247f);
#endif
}Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x69\x73\x6f\x63\x68\x74\x72\x61\x6e\x73\x66\x65\x72\x5f\x73\x6f\x6c\x69\x64\x3a\x20\x69\x6e\x74\x65\x72\x76\x61\x6c\x20\x69\x73\x20\x25\x64" "\n"
,lIlll->interval);for(IllIIIII=(0x116+2576-0xb26),i=(0x1a85+485-0x1c6a);i<IlIlI
->llIIl.IlIllIl;i++){lIlll->iso_frame_desc[i].offset=IllIIIII;lIlll->
iso_frame_desc[i].length=IlIlI->llIIl.IlllIlI[i].Length;IllIIIII+=lIlll->
iso_frame_desc[i].length;}


llllIII=lllIlllI(IlllI->lIlII,pipe);lIlllIII=usb_get_current_frame_number(IlllI
->lIlII->lIIlI);if(!(lIlll->transfer_flags&URB_ISO_ASAP)&&(llllIII==
(0x68b+6492-0x1fe7))){llllIII=(lIlllIII+(0x712+1014-0xb06))-lIlll->start_frame;
IIllIlIl(IlllI->lIlII,pipe,llllIII);}if(lIIlIlIl==(0xcc5+1697-0x1365)){if(lIlll
->transfer_flags&URB_ISO_ASAP){lIlll->transfer_flags&=~URB_ISO_ASAP;lIlll->
start_frame=lIlllIII+(0x162b+3916-0x2576)-llllIII;}}if(!(lIlll->transfer_flags&
URB_ISO_ASAP)){lIlll->start_frame+=llllIII;if(lIlll->start_frame<lIlllIII+
(0xc3+8861-0x235f)){IlIlI->lllII.Status=-EXDEV;IlIlI->lllII.IIllI=IlIlIlll(IlIlI
);IlIlI->llIIl.lllllI=(0x8d9+555-0xb04);IlIlI->llIIl.llIIIIIl=IlIlI->llIIl.
IlIllIl;for(i=(0xd9d+3421-0x1afa);i<IlIlI->llIIl.IlIllIl;i++){IlIlI->llIIl.
IlllIlI[i].Status=-EINVAL;IlIlI->llIIl.IlllIlI[i].Length=(0xf7f+2696-0x1a07);}
IIIll=(0x1411+1617-0x1a62);IIlIll(IlllI,-EXDEV);break;}}Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x69\x73\x6f\x63\x68\x74\x72\x61\x6e\x73\x66\x65\x72\x5f\x73\x6f\x6c\x69\x64\x3a\x20\x66\x6c\x61\x67\x73\x3d\x25\x64\x20\x73\x74\x61\x72\x74\x66\x72\x61\x6d\x65\x3d\x25\x64\x20\x63\x75\x72\x66\x72\x61\x6d\x65\x3d\x25\x64\x20\x64\x65\x6c\x74\x61\x3d\x25\x64" "\n"
,lIlll->transfer_flags,lIlll->start_frame,usb_get_current_frame_number(IlllI->
lIlII->lIIlI),lllIlllI(IlllI->lIlII,pipe));if(atomic_cmpxchg(&IlllI->state,
lIlIIIl,IIIlIlI)!=lIlIIIl){IIIll=-ECONNRESET;break;}IIIll=usb_submit_urb(lIlll,
llIlI);if(unlikely(IIIll<(0x1b89+2373-0x24ce))){Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x69\x73\x6f\x63\x68\x74\x72\x61\x6e\x73\x66\x65\x72\x5f\x73\x6f\x6c\x69\x64\x3a\x20\x75\x73\x62\x5f\x73\x75\x62\x6d\x69\x74\x5f\x75\x72\x62\x20\x66\x61\x69\x6c\x65\x64\x20\x77\x69\x74\x68\x20\x65\x72\x72\x6f\x72\x20\x25\x64\x20\x66\x6f\x72\x20\x55\x6e\x69\x71\x75\x65\x49\x64\x3d\x30\x78\x25\x6c\x6c\x78" "\n"
,IIIll,(unsigned long long)IlIlI->lllII.IlIIll);}}while((0x55b+4489-0x16e4));if(
unlikely(IIIll<(0x1b57+856-0x1eaf))){IIIlIllI(IlllI->lIlII,pipe);lIIIIlIl(IlllI,
IIIll,llIlI);IIlIll(IlllI,IIIll);}}void lIIIIlIl(struct lIlIl*IlllI,int status,
gfp_t llIlI){IIIII IlIlI=(IIIII)(IlllI+(0xef+4388-0x1212));IlIlI->llIIl.lllllI=
(0x783+2381-0x10d0);IlIlI->lllII.IIllI=IlIlIlll(IlIlI)+IlIlI->llIIl.lllllI;IlIlI
->lllII.Status=status;
}void IIlIIIlII(struct urb*lIlll
#if KERNEL_LT((0x352+6335-0x1c0f),(0x1067+4165-0x20a6),(0xf94+1595-0x15bc))
,struct pt_regs*lIllIlI
#endif
){struct lIlIl*IlllI=lIlll->context;IIIII IlIlI=(IIIII)(IlllI+
(0x188c+2694-0x2311));Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x75\x72\x62\x5f\x63\x6f\x6d\x70\x6c\x65\x74\x65\x5f\x67\x65\x74\x64\x65\x73\x63\x72\x69\x70\x74\x6f\x72" "\n"
);
IlIlI->IIlllI.lllllI=(lIlll->actual_length<(0x13f+7702-0x1f55))?
(0x1293+228-0x1377):lIlll->actual_length;IlIlI->IIlllI.lIIIlI.IIllI=sizeof(IlIlI
->IIlllI)+IlIlI->IIlllI.lllllI;IlIlI->IIlllI.lIIIlI.Status=lIlll->status;Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x75\x72\x62\x5f\x63\x6f\x6d\x70\x6c\x65\x74\x65\x5f\x67\x65\x74\x64\x65\x73\x63\x72\x69\x70\x74\x6f\x72\x3a\x20\x75\x72\x62\x20\x63\x6f\x6d\x70\x6c\x65\x74\x65\x64\x20\x77\x69\x74\x68\x20\x73\x74\x61\x74\x75\x73\x20\x25\x64" "\n"
,lIlll->status);llIlIIl(IlIlI);
IIlIll(IlllI,lIlll->status);}void llIlllll(struct urb*lIlll
#if KERNEL_LT((0x1a72+1368-0x1fc8),(0xaed+2613-0x151c),(0x383+319-0x4af))
,struct pt_regs*lIllIlI
#endif
){struct lIlIl*IlllI=lIlll->context;IIIII IlIlI=(IIIII)(IlllI+(0x432+677-0x6d6))
;Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x75\x72\x62\x5f\x63\x6f\x6d\x70\x6c\x65\x74\x65\x5f\x63\x6f\x6e\x74\x72\x6f\x6c\x74\x72\x61\x6e\x73\x66\x65\x72" "\n"
);
IlIlI->llIIII.lllllI=(lIlll->actual_length<(0x4a5+6094-0x1c73))?
(0x666+7816-0x24ee):lIlll->actual_length;IlIlI->lllII.IIllI=sizeof(IlIlI->llIIII
);if(usb_pipein(lIlll->pipe))IlIlI->lllII.IIllI+=IlIlI->llIIII.lllllI;IlIlI->
llIIII.lIIIlI.Status=lIlll->status;Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x75\x72\x62\x5f\x63\x6f\x6d\x70\x6c\x65\x74\x65\x5f\x63\x6f\x6e\x74\x72\x6f\x6c\x74\x72\x61\x6e\x73\x66\x65\x72\x3a\x20\x75\x72\x62\x20\x63\x6f\x6d\x70\x6c\x65\x74\x65\x64\x20\x77\x69\x74\x68\x20\x73\x74\x61\x74\x75\x73\x20\x25\x64" "\n"
,lIlll->status);llIlIIl(IlIlI);
IIlIll(IlllI,lIlll->status);}void lIIllllI(struct urb*lIlll
#if KERNEL_LT((0x12f+6089-0x18f6),(0x1406+2342-0x1d26),(0xb22+4986-0x1e89))
,struct pt_regs*lIllIlI
#endif
){struct lIlIl*IlllI=lIlll->context;IIIII IlIlI=(IIIII)(IlllI+
(0xc45+4030-0x1c02));Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x75\x72\x62\x5f\x63\x6f\x6d\x70\x6c\x65\x74\x65\x5f\x62\x75\x6c\x6b\x74\x72\x61\x6e\x73\x66\x65\x72" "\n"
);IlIlI->IllllI.lllllI=lIlll->actual_length;IlIlI->lllII.IIllI=sizeof(IlIlI->
IllllI);if(usb_pipein(lIlll->pipe))IlIlI->lllII.IIllI+=IlIlI->IllllI.lllllI;
IlIlI->IllllI.lIIIlI.Status=lIlll->status;Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x75\x72\x62\x5f\x63\x6f\x6d\x70\x6c\x65\x74\x65\x5f\x62\x75\x6c\x6b\x74\x72\x61\x6e\x73\x66\x65\x72\x3a\x20\x75\x72\x62\x20\x63\x6f\x6d\x70\x6c\x65\x74\x65\x64\x20\x77\x69\x74\x68\x20\x73\x74\x61\x74\x75\x73\x20\x25\x64" "\n"
,lIlll->status);llIlIIl(IlIlI);
IIlIll(IlllI,lIlll->status);}void lIlIlIlI(struct urb*lIlll
#if KERNEL_LT((0x883+2791-0x1368),(0x36f+1317-0x88e),(0x224+4945-0x1562))
,struct pt_regs*lIllIlI
#endif
){struct lIlIl*IlllI=lIlll->context;IIIII IlIlI=(IIIII)(IlllI+
(0x1941+1321-0x1e69));Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x75\x72\x62\x5f\x63\x6f\x6d\x70\x6c\x65\x74\x65\x5f\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x74\x72\x61\x6e\x73\x66\x65\x72" "\n"
);IlIlI->llIIlI.lllllI=lIlll->actual_length;IlIlI->lllII.IIllI=sizeof(IlIlI->
llIIlI);if(usb_pipein(lIlll->pipe))IlIlI->lllII.IIllI+=IlIlI->llIIlI.lllllI;
IlIlI->llIIlI.lIIIlI.Status=lIlll->status;Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x75\x72\x62\x5f\x63\x6f\x6d\x70\x6c\x65\x74\x65\x5f\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x74\x72\x61\x6e\x73\x66\x65\x72\x3a\x20\x75\x72\x62\x20\x63\x6f\x6d\x70\x6c\x65\x74\x65\x64\x20\x77\x69\x74\x68\x20\x73\x74\x61\x74\x75\x73\x20\x25\x64" "\n"
,lIlll->status);llIlIIl(IlIlI);
IIlIll(IlllI,lIlll->status);}void lIlIIllII(struct urb*lIlll
#if KERNEL_LT((0xab1+5650-0x20c1),(0x8bc+4487-0x1a3d),(0xa7d+4718-0x1cd8))
,struct pt_regs*lIllIlI
#endif
){int i;struct lIlIl*IlllI=lIlll->context;struct lllll*lIlII=IlllI->lIlII;IIIII 
IlIlI=(IIIII)(IlllI+(0x1ed0+1410-0x2451));Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x75\x72\x62\x5f\x63\x6f\x6d\x70\x6c\x65\x74\x65\x5f\x69\x73\x6f\x63\x68\x74\x72\x61\x6e\x73\x66\x65\x72\x5f\x73\x6f\x6c\x69\x64\x3a\x20\x75\x72\x62\x20\x63\x6f\x6d\x70\x6c\x65\x74\x65\x64\x20\x77\x69\x74\x68\x20\x73\x74\x61\x74\x75\x73\x20\x25\x64" "\n"
,lIlll->status);IIIlIllI(lIlII,lIlll->pipe);lIlll->start_frame-=lllIlllI(lIlII,
lIlll->pipe);
#if KERNEL_LT((0xad+6360-0x1983),(0x1bcd+869-0x1f2c),(0x2531+493-0x2706))


if(lIlll->status!=-ECONNRESET&&lIlll->status!=-ENOENT&&lIlll->status!=-ESHUTDOWN
)lIlll->status=(0x64f+4513-0x17f0);
#endif
IlIlI->llIIl.lIIIlI.Status=lIlll->status;IlIlI->llIIl.llIIIIIl=lIlll->
error_count;IlIlI->llIIl.IIlIlIIl=lIlll->start_frame;if(usb_pipein(lIlll->pipe))
{IlIlI->llIIl.lllllI=IlIIIllI(lIlll->iso_frame_desc,lIlll->number_of_packets,
lIlll->transfer_buffer,lIlll->transfer_buffer,(0x5a+8109-0x2006));}else{IlIlI->
llIIl.lllllI=IlIlllIlI(lIlll->iso_frame_desc,lIlll->number_of_packets,
(0x879+7509-0x25cd));}for(i=(0xe43+6290-0x26d5);i<IlIlI->llIIl.IlIllIl;i++){
IlIlI->llIIl.IlllIlI[i].Length=lIlll->iso_frame_desc[i].actual_length;IlIlI->
llIIl.IlllIlI[i].Status=lIlll->iso_frame_desc[i].status;}IlIlI->lllII.IIllI=
IlIlIlll(IlIlI);if(usb_pipein(lIlll->pipe))IlIlI->lllII.IIllI+=IlIlI->llIIl.
lllllI;llIlIIl(IlIlI);
#if defined(_USBD_USE_EHCI_FIX_) && KERNEL_GT_EQ((0x877+3167-0x14d4),\
(0xdf2+2764-0x18b8),(0x19b8+263-0x1aa6)) && KERNEL_LT_EQ((0xa67+558-0xc93),\
(0xb40+5456-0x208a),(0xde5+5123-0x21cc))
if(lIlII->IIIIlII&&(lIlll->status==(0x150b+4461-0x2678))&&(atomic_read(&lIlll->
kref.refcount)>(0x908+7604-0x26bb)))usb_put_urb(lIlll);
#endif

IIlIll(IlllI,lIlll->status);}void IIIlIlIII(struct IlIlII*lIIIl){int i;struct 
lIlIl*IlllI=lIIIl->context;IIIII IlIlI=(IIIII)(IlllI+(0xf7a+3221-0x1c0e));Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x75\x72\x62\x5f\x63\x6f\x6d\x70\x6c\x65\x74\x65\x5f\x62\x75\x6c\x6b\x74\x72\x61\x6e\x73\x66\x65\x72\x5f\x70\x61\x72\x74\x69\x74\x69\x6f\x6e\x65\x64" "\n"
);IlIlI->IllllI.lllllI=lIIIl->lIIlIlIlI;IlIlI->lllII.IIllI=sizeof(IlIlI->IllllI)
;if(usb_pipein(lIIIl->pipe))IlIlI->IllllI.lIIIlI.IIllI+=IlIlI->IllllI.lllllI;
IlIlI->IllllI.lIIIlI.Status=lIIIl->status;for(i=(0xf76+2494-0x1934);i<lIIIl->
IlIII;i++)IlllI->lIllII.lIIlll->IllIIl[i].actual_length=lIIIl->IIIlII[i]->
actual_length;Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x75\x72\x62\x5f\x63\x6f\x6d\x70\x6c\x65\x74\x65\x5f\x62\x75\x6c\x6b\x74\x72\x61\x6e\x73\x66\x65\x72\x5f\x70\x61\x72\x74\x69\x74\x69\x6f\x6e\x65\x64\x3a\x20\x75\x72\x62\x20\x63\x6f\x6d\x70\x6c\x65\x74\x65\x64\x20\x77\x69\x74\x68\x20\x73\x74\x61\x74\x75\x73\x20\x25\x64" "\n"
,lIIIl->status);llIlIIl(IlIlI);
IIlIll(IlllI,lIIIl->status);}void IllIlIIlI(struct IlIlII*lIIIl){int i,IIIIIl,
IIllll;struct lIlIl*IlllI=lIIIl->context;struct lllll*lIlII=IlllI->lIlII;IIIII 
IlIlI=(IIIII)(IlllI+(0xc6+8874-0x236f));Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x75\x72\x62\x5f\x63\x6f\x6d\x70\x6c\x65\x74\x65\x5f\x69\x73\x6f\x63\x68\x74\x72\x61\x6e\x73\x66\x65\x72\x5f\x70\x61\x72\x74\x69\x74\x69\x6f\x6e\x65\x64" "\n"
);IIIlIllI(lIlII,lIIIl->pipe);lIIIl->IIIlII[(0x1b54+2710-0x25ea)]->start_frame-=
lllIlllI(lIlII,lIIIl->pipe);IlIlI->llIIl.lIIIlI.Status=lIIIl->status;IlIlI->
llIIl.IIlIlIIl=lIIIl->IIIlII[(0x1227+1722-0x18e1)]->start_frame;IlIlI->llIIl.
llIIIIIl=(0x80c+4887-0x1b23);IlIlI->llIIl.lllllI=(0x35a+3463-0x10e1);for(i=
(0x1768+3205-0x23ed),IIllll=(0xd5+683-0x380);i<lIIIl->IlIII;i++){struct urb*
lIlll=lIIIl->IIIlII[i];if(usb_pipein(lIIIl->pipe)){IlllI->lIllII.lIIlll->IllIIl[
i].actual_length=IlIIIllI(lIlll->iso_frame_desc,lIlll->number_of_packets,lIlll->
transfer_buffer,lIlll->transfer_buffer,(0x333+4980-0x16a6));}else{IlllI->lIllII.
lIIlll->IllIIl[i].actual_length=IlIlllIlI(lIlll->iso_frame_desc,lIlll->
number_of_packets,(0x168c+4066-0x266d));}IlIlI->llIIl.lllllI+=IlllI->lIllII.
lIIlll->IllIIl[i].actual_length;IlIlI->llIIl.llIIIIIl+=lIlll->error_count;for(
IIIIIl=(0x1a87+1509-0x206c);IIIIIl<lIlll->number_of_packets;IIIIIl++){
IlIlI->llIIl.IlllIlI[IIllll].Length=lIlll->iso_frame_desc[IIIIIl].actual_length;
IlIlI->llIIl.IlllIlI[IIllll].Status=lIlll->iso_frame_desc[IIIIIl].status;IIllll
++;}}IlIlI->lllII.IIllI=IlIlIlll(IlIlI);if(usb_pipein(lIIIl->pipe))IlIlI->lllII.
IIllI+=IlIlI->llIIl.lllllI;Illll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x75\x72\x62\x5f\x63\x6f\x6d\x70\x6c\x65\x74\x65\x5f\x69\x73\x6f\x63\x68\x74\x72\x61\x6e\x73\x66\x65\x72\x5f\x70\x61\x72\x74\x69\x74\x69\x6f\x6e\x65\x64\x3a\x20\x75\x72\x62\x20\x63\x6f\x6d\x70\x6c\x65\x74\x65\x64\x20\x77\x69\x74\x68\x20\x73\x74\x61\x74\x75\x73\x20\x25\x64" "\n"
,lIIIl->status);llIlIIl(IlIlI);
IIlIll(IlllI,lIIIl->status);}
void lIlIIlll(struct lllll*lIlII,IlIIlI lllIl){struct llIlIllI*lllllIl;

list_for_each_entry(lllllIl,&lIlII->IIIllIIl,IIIIll){if(lllllIl->lllIl==lllIl){
list_del(&lllllIl->IIIIll);lIlIll(lllllIl);return;}}}static inline void 
llIIllIIl(struct lllll*lIlII,IlIIlI lllIl,int llIIIII){struct llIlIllI*lllllIl;
list_for_each_entry(lllllIl,&lIlII->IIIllIIl,IIIIll){if(lllllIl->lllIl==lllIl){
lllllIl->IIIllIlll=llIIIII;return;}}}struct lIlIl*lIIIlIII(struct lllll*lIlII,
IlIIlI lllIl){struct lIlIl*IlllI;list_for_each_entry(IlllI,&lIlII->IlIIlII,
llllIl){if(IlllI->lllIl==lllIl){return IlllI;}}return NULL;}struct lIlIl*
IIlIllIII(struct lIlIl*IlllI,int llIIIII){struct lIlIl*IllIII;struct list_head*
IlIIllll;


if(unlikely(list_empty(&IlllI->llllIl)))return NULL;IllIII=IlllI;
list_for_each_entry_continue(IllIII,&IlllI->lIlII->IlIIlII,llllIl){if(IllIII->
lllIl==IlllI->lllIl){switch(llIIIII){case lIlIIIIlI:IlIIllll=IllIII->llllIl.prev
;list_del(&IllIII->llllIl);lIIIIlI(IllIII);IllIII=list_entry(IlIIllll,struct 
lIlIl,llllIl);break;case IlIIIlIll:llIIIII=llIIIII;return IllIII;case IIIIllIIl:
llIIIII=llIIIII;atomic_xchg(&IllIII->state,IlIIlll);return IllIII;case lllIIIlII
:llIIIII=IllIII->IlIIIlI.IlllIIIlI;IlIIllll=IllIII->llllIl.prev;list_del(&IllIII
->llllIl);lIIIIlI(IllIII);IllIII=list_entry(IlIIllll,struct lIlIl,llllIl);break;
}}}if(unlikely(llIIIII==lIlIIIIlI)){lIlIIlll(IlllI->lIlII,IlllI->lllIl);}else{
llIIllIIl(IlllI->lIlII,IlllI->lllIl,llIIIII);}
return NULL;}





void IIlIll(struct lIlIl*IlllI,int status){struct lllll*lIlII=IlIIllII(IlllI->
lIlII);struct lIlIl*lllllIlIl=NULL;unsigned long flags;int IlIIllI;int IIIIllIll
=(0xdb5+3374-0x1ae3);int llIIIIll;int llIIIII;spin_lock_irqsave(&lIlII->IIlIlI,
flags);
IlIIllI=atomic_xchg(&IlllI->state,llIlIIIll);










if(IlllI->lIIIIII&&IlIIllI==IlIIlll&&(status==-ECONNRESET||status==-ENOENT)){
IIIII IlIlI=(IIIII)(IlllI+(0x1bf9+761-0x1ef1));IlIlI->lllII.Status=-ESHUTDOWN;
IIlll(
"\x72\x65\x71\x75\x65\x73\x74\x20\x63\x61\x6e\x63\x65\x6c\x6c\x65\x64\x20\x64\x75\x65\x20\x74\x6f\x20\x64\x65\x74\x61\x63\x68\x20\x6f\x66\x20\x64\x65\x76\x69\x63\x65" "\n"
);}
if(IlllI->IlIIIlI.IIIlIlIl){

if(unlikely(IlIIllI==IlIIlll)){




llIIIIll=IlllI->IlIIIlI.lIllIlIII;llIIIII=IlllI->IlIIIlI.IIIllIIIl;
}else if(likely(status==(0x20e6+168-0x218e))){llIIIIll=IlllI->IlIIIlI.llIllIlII;
llIIIII=IlllI->IlIIIlI.lllIIlIIl;
}else if(status==-EREMOTEIO){llIIIIll=IlllI->IlIIIlI.lllIlIlIll;llIIIII=IlllI->
IlIIIlI.lIIllIIIlI;
}else{llIIIIll=IlllI->IlIIIlI.IlIIIllIl;llIIIII=IlllI->IlIIIlI.lIllIllll;
}if(unlikely(llIIIIll==IlIlIlllI)){IlllI->IlllllI=(0x18ab+438-0x1a60);}lllllIlIl
=IIlIllIII(IlllI,llIIIII);
}
list_del(&IlllI->llllIl);
if(unlikely(IlllI->IlllllI)){spin_unlock_irqrestore(&lIlII->IIlIlI,flags);
lIIIIlI(IlllI);}else{spin_lock(&lIlII->lIIIIll);list_add_tail(&IlllI->llllIl,&
lIlII->llllIlll);spin_unlock(&lIlII->lIIIIll);spin_unlock_irqrestore(&lIlII->
IIlIlI,flags);IIIIllIll=(0x1ae8+2361-0x2420);}
if(lllllIlIl){





lllIIIII(lllllIlIl,GFP_ATOMIC);}
if(likely(IIIIllIll))wake_up(&lIlII->lIIllI);








lllllIll(lIlII);}
#ifdef _USBD_DEBUG_MEMORY_
extern atomic_t llllIllIl;extern atomic_t lIlIlIIIl;
#endif 

int lIllIlll(struct lllll*lIlII){int i;int llIllIIl,lIIIIIII;struct usb_device*
llIII=lIlII->lIIlI;llIllIIl=lIIIIIII=-(0x7e5+1895-0xf4b);
for(i=(0x1f94+1839-0x26c3);i<llIII->actconfig->desc.bNumInterfaces;i++){struct 
usb_interface*interface=llIII->actconfig->interface[i];if(interface==NULL)
continue;if(interface->cur_altsetting==NULL)continue;Illll(
"\x44\x65\x74\x65\x63\x74\x65\x64\x20\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20\x63\x6c\x61\x73\x73\x3d\x30\x78\x25\x30\x32\x78\x20\x73\x75\x62\x63\x6c\x61\x73\x73\x3d\x30\x78\x25\x30\x32\x78\x20\x70\x72\x6f\x74\x6f\x63\x6f\x6c\x3d\x30\x78\x25\x30\x32\x78" "\n"
,interface->cur_altsetting->desc.bInterfaceClass,interface->cur_altsetting->desc
.bInterfaceSubClass,interface->cur_altsetting->desc.bInterfaceProtocol);if(
interface->cur_altsetting->desc.bInterfaceClass==(0x1170+1351-0x16af)&&interface
->cur_altsetting->desc.bInterfaceProtocol==(0xc6c+4820-0x1ef0)){int IIIIIl;
llIllIIl=lIIIIIII=-(0x6d9+873-0xa41);for(IIIIIl=(0x1d11+353-0x1e72);IIIIIl<
interface->cur_altsetting->desc.bNumEndpoints;IIIIIl++){struct usb_host_endpoint
*endpoint=&interface->cur_altsetting->endpoint[IIIIIl];if((endpoint->desc.
bmAttributes&USB_ENDPOINT_XFERTYPE_MASK)==USB_ENDPOINT_XFER_BULK){if(endpoint->
desc.bEndpointAddress&USB_ENDPOINT_DIR_MASK)llIllIIl=endpoint->desc.
bEndpointAddress;else lIIIIIII=endpoint->desc.bEndpointAddress;}}if(llIllIIl!=-
(0x1572+4075-0x255c)&&lIIIIIII!=-(0x1edb+1944-0x2672)){unsigned long flags;Illll
(
"\x44\x65\x74\x65\x63\x74\x65\x64\x20\x65\x6e\x64\x70\x6f\x69\x6e\x74\x73\x20\x30\x78\x25\x30\x32\x78\x20\x61\x6e\x64\x20\x30\x78\x25\x30\x32\x78" "\n"
,llIllIIl,lIIIIIII);

spin_lock_irqsave(&lIlII->lIIlIl,flags);if(!lIlII->IIlIlII&&lIlII->lIlIlI!=
lllIIII){lIlII->IlIllllI=interface->cur_altsetting->desc.bInterfaceNumber;lIlII
->IIIlllII=llIllIIl;lIlII->llIlIlIl=lIIIIIII;lIlII->lIlIlI=IIIllIll;lIlII->
IIlIlII=(0xb51+4966-0x1eb6);
}else{
}spin_unlock_irqrestore(&lIlII->lIIlIl,flags);break;
}}}
return(0x3f0+4707-0x1653);}void lIIlllll(struct lllll*lIlII){struct lIlIII*IllII
;unsigned long flags;Illll(
"\x21\x21\x21\x21\x20\x72\x65\x73\x65\x74\x20\x74\x72\x61\x6e\x73\x61\x63\x74\x69\x6f\x6e" "\n"
);spin_lock_irqsave(&lIlII->lIIlIl,flags);if(lIlII->lIlIlI==lllIIII){


lIlII->IIlIlII=(0x3e7+1271-0x8de);}else{lIlII->lIlIlI=IIIllIll;}IllII=lIlII->
llIIIIl;lIlII->llIIIIl=NULL;spin_unlock_irqrestore(&lIlII->lIIlIl,flags);if(
IllII){usb_unlink_urb(IllII->lIlll);IllIlll(IllII);}}int IIIIIlIlI(struct lllll*
lIlII,IlIIlI lllIl){struct lIlIII*IllII=NULL;unsigned long flags;Illll(
"\x21\x21\x21\x21\x72\x65\x73\x65\x74\x20\x74\x72\x61\x6e\x73\x61\x63\x74\x69\x6f\x6e\x20\x62\x79\x20\x75\x6e\x69\x71\x75\x65\x5f\x69\x64" "\n"
);spin_lock_irqsave(&lIlII->lIIlIl,flags);if(lIlII->llIIIIl){if((lIlII->llIIIIl
->IlIlllIII==lllIl)||(lIlII->llIIIIl->lllllIlII==lllIl)||(lIlII->llIIIIl->
lIIlllIII==lllIl)){if(lIlII->lIlIlI==lllIIII){


lIlII->IIlIlII=(0x1bd+230-0x2a3);}else{lIlII->lIlIlI=IIIllIll;}IllII=lIlII->
llIIIIl;lIlII->llIIIIl=NULL;}}spin_unlock_irqrestore(&lIlII->lIIlIl,flags);if(
IllII){usb_unlink_urb(IllII->lIlll);IllIlll(IllII);return(0xb4f+3786-0x1a18);}
return(0x4ff+181-0x5b4);}void IIIllIlI(struct lllll*lIlII,int IlllllI,int 
lIIlIlll){struct lIlIII*IllII;unsigned long flags;Illll(
"\x21\x21\x21\x21\x20\x64\x69\x73\x61\x62\x6c\x65" "\n");spin_lock_irqsave(&
lIlII->lIIlIl,flags);lIlII->IIlIlII=(0x19e9+2666-0x2453);lIlII->IIIlllII=-
(0x278+6450-0x1ba9);lIlII->llIlIlIl=-(0x17d1+3744-0x2670);lIlII->IlIllllI=-
(0x258+2959-0xde6);if(lIlII->lIlIlI!=lllIIII){lIlII->lIlIlI=IIlIllIl;}IllII=
lIlII->llIIIIl;lIlII->llIIIIl=NULL;if(IllII){



IllII->IlllllI=IlllllI;


IllII->lIIIIII=lIIlIlll;}spin_unlock_irqrestore(&lIlII->lIIlIl,flags);if(IllII){



#if KERNEL_GT_EQ((0x30b+2942-0xe87),(0x15e1+1733-0x1ca0),(0x127+9035-0x2456))


usb_poison_urb(IllII->lIlll);
#else
usb_kill_urb(IllII->lIlll);
#endif
IllIlll(IllII);}}int lllIlllIl(struct lIlIl*IlllI,gfp_t llIlI){IIIII IlIlI=(
IIIII)(IlllI+(0xcd3+1748-0x13a6));struct lllll*lIlII=IlllI->lIlII;struct lIlIII*
IllII;unsigned long flags;



if(IlllI->IlIIIlI.IIIlIlIl)return-(0x1a31+163-0x1ad3);
if(!lIlII->IIlIlII)return-(0x18dc+2885-0x2420);
if(IlllI->endpoint!=lIlII->IIIlllII&&IlllI->endpoint!=lIlII->llIlIlIl)return-
(0x765+2498-0x1126);
spin_lock_irqsave(&lIlII->lIIlIl,flags);IllII=lIlII->llIIIIl;if(lIlII->lIlIlI==
IIIllIll){


if(IIlIIIIIl(IlllI)){struct llIlIIII*llIllIl=IlllI->lIIIll.IlIIl;
if(IllII==NULL){IllII=lllIlIIlI(lIlII,llIlI);lIlII->llIIIIl=IllII;}else{
llIlllIll(IllII);}if(IllII){IllII->IlIlllIII=IlIlI->lllII.IlIIll;IllII->lIIIIlII
=le32_to_cpu(llIllIl->IllIIlIII);IllII->IIlIIIII=((llIllIl->lIIIlIIII&
(0x1307+2876-0x1dc3))?(0xaa+828-0x3e6):(0x57c+7392-0x225b));IIlIIlIlI(IllII,
llIllIl);if(IllII->lIIIIlII){lIlII->lIlIlI=lIIlIIIlI;spin_unlock_irqrestore(&
lIlII->lIIlIl,flags);}else{lIlII->lIlIlI=llllIIlI;IIIllllI(IllII);
spin_unlock_irqrestore(&lIlII->lIIlIl,flags);IlIlIlIlI(IllII,llIlI);}IlIlI->
IllllI.lIIIlI.IIllI=sizeof(IlIlI->IllllI);IlIlI->IllllI.lIIIlI.Status=
(0x27b+5695-0x18ba);
IIlIll(IlllI,(0x130+3538-0xf02));}else{spin_unlock_irqrestore(&lIlII->lIIlIl,
flags);IllIlIl(IlllI,-ENOMEM,llIlI);IIlIll(IlllI,-ENOMEM);}return
(0x838+2218-0x10e1);
}else{Illll(
"\x21\x21\x21\x21\x20\x53\x6b\x69\x70\x20\x6e\x6f\x6e\x2d\x43\x4f\x4d\x4d\x41\x4e\x44" "\n"
);




spin_unlock_irqrestore(&lIlII->lIIlIl,flags);return-(0x84c+2030-0x1039);
}}else if(lIlII->lIlIlI==lIIlIIIlI){


if(IIlIIIlIl(IlllI)){Illll(
"\x21\x21\x21\x21\x20\x44\x41\x54\x41\x20\x64\x65\x74\x65\x63\x74\x65\x64" "\n")
;IllII->lllllIlII=IlIlI->lllII.IlIIll;IllII->IlllII=IlllI;lIlII->lIlIlI=llllIIlI
;IIIllllI(IllII);spin_unlock_irqrestore(&lIlII->lIIlIl,flags);
IlIlIlIlI(IllII,llIlI);return(0x102a+5790-0x26c7);
}else{Illll(
"\x21\x21\x21\x21\x20\x49\x6e\x76\x61\x6c\x69\x64\x20\x44\x41\x54\x41" "\n");
lIlII->lIlIlI=llllIIlI;}}else if(lIlII->lIlIlI==llllIIlI){if(IllII->IlllII==NULL
&&
IIIIIlllI(IlllI)){Illll(
"\x21\x21\x21\x21\x20\x53\x54\x41\x54\x55\x53\x20\x64\x65\x74\x65\x63\x74\x65\x64" "\n"
);IllII->lIIlllIII=IlIlI->lllII.IlIIll;IllII->IlIlll=IlllI;if(IllII->status!=-
EINPROGRESS){int status=IllII->status;if(IIIlIlIll(IllII)){lIlII->lIlIlI=
IIIllIll;}else{lIlII->lIlIlI=lllIIII;}IllII->IlIlll=NULL;spin_unlock_irqrestore(
&lIlII->lIIlIl,flags);IIlIll(IlllI,status);}else{lIlII->lIlIlI=llIIIIlll;
spin_unlock_irqrestore(&lIlII->lIIlIl,flags);}return(0x153a+3977-0x24c2);
}else{Illll(
"\x21\x21\x21\x21\x20\x49\x6e\x76\x61\x6c\x69\x64\x20\x53\x54\x41\x54\x55\x53" "\n"
);
lIlII->lIlIlI=lllIIII;}}else if(lIlII->lIlIlI==llIIIIlll){


lIlII->lIlIlI=lllIIII;}spin_unlock_irqrestore(&lIlII->lIIlIl,flags);IllIlIl(
IlllI,-EPIPE,llIlI);IIlIll(IlllI,-EPIPE);return(0x1e30+122-0x1ea9);
}int IIlIIIIIl(struct lIlIl*IlllI){struct lllll*lIlII=IlllI->lIlII;IIIII IlIlI=(
IIIII)(IlllI+(0x125b+3932-0x21b6));struct llIlIIII*llIllIl;if(IlllI->lIllll!=
IllIIlI){
return(0xfa6+3018-0x1b70);}llIllIl=IlllI->lIIIll.IlIIl;if(llIllIl&&IlllI->
endpoint==lIlII->llIlIlIl&&IlIlI->IllllI.lllllI==sizeof(struct llIlIIII)&&
le32_to_cpu(llIllIl->lllIIlIll)==1128420181){return(0x1cc9+1783-0x23bf);}return
(0xcb3+2417-0x1624);}int IIlIIIlIl(struct lIlIl*IlllI){struct lllll*lIlII=IlllI
->lIlII;IIIII IlIlI=(IIIII)(IlllI+(0xd49+2013-0x1525));if((IlIlI->IllllI.lllllI
>=lIlII->llIIIIl->lIIIIlII)&&((lIlII->llIIIIl->IIlIIIII&&(IlllI->endpoint==lIlII
->llIlIlIl))||(!lIlII->llIIIIl->IIlIIIII&&(IlllI->endpoint==lIlII->IIIlllII)))){
return(0xd34+1173-0x11c8);}return(0xd53+522-0xf5d);}int IIIIIlllI(struct lIlIl*
IlllI){struct lllll*lIlII=IlllI->lIlII;IIIII IlIlI=(IIIII)(IlllI+
(0x561+6763-0x1fcb));if((IlllI->endpoint==lIlII->IIIlllII)&&IlIlI->IllllI.lllllI
>=sizeof(struct IIIIIlIll)){return(0xb75+744-0xe5c);}return(0x141d+3043-0x2000);
}struct lIlIII*lllIlIIlI(struct lllll*lIlII,gfp_t llIlI){struct lIlIII*IllII=
IllIllI(sizeof(*IllII),llIlI);if(IllII){memset(IllII,(0x179f+2272-0x207f),sizeof
(*IllII));kref_init(&IllII->IIllII);IllII->lIlII=IlIIllII(lIlII);IllII->ep_in=
lIlII->IIIlllII;IllII->ep_out=lIlII->llIlIlIl;IllII->status=-EINPROGRESS;IllII->
lIlll=IIIIIIIl((0x1d55+1107-0x21a8),llIlI);if(likely(IllII->lIlll)){IllII->IlIIl
=IllIllI(IIlIlllII,llIlI);if(likely(IllII->IlIIl)){
#ifdef _USBD_DEBUG_MEMORY_
atomic_inc(&llllIllIl);
#endif
return IllII;}lllllIlI(IllII->lIlll);}lIlIll(IllII);}return NULL;}void llIlllIll
(struct lIlIII*IllII){IllII->IlIlllIII=(0xc15+6610-0x25e7);IllII->lllllIlII=
(0x10eb+4102-0x20f1);IllII->lIIlllIII=(0x1ea+2600-0xc12);IllII->IlllII=NULL;
IllII->IlIlll=NULL;IllII->lIIIIlII=(0x95f+2295-0x1256);IllII->IIlIIIII=
(0x840+5590-0x1e16);IllII->status=-EINPROGRESS;IllII->IlIllIll=
(0x107d+5740-0x26e9);IllII->IlllllI=(0x1108+2935-0x1c7f);IllII->lIIIIII=
(0xad9+477-0xcb6);}void lIIlIlIll(struct kref*lllIlIl){struct lIlIII*IllII=
container_of(lllIlIl,struct lIlIII,IIllII);struct lllll*lIlII=IllII->lIlII;if(
IllII->IlllII){Illll(
"\x21\x21\x21\x21\x20\x66\x72\x65\x65\x3a\x20\x64\x61\x74\x61\x20\x65\x78\x69\x73\x74\x73" "\n"
);IllII->IlllII->IlllllI=IllII->IlllllI;IllII->IlllII->lIIIIII=IllII->lIIIIII;
IllIlIl(IllII->IlllII,-ECONNRESET,GFP_ATOMIC);IIlIll(IllII->IlllII,-ECONNRESET);
}if(IllII->IlIlll){Illll("!!!! free: ûtatus exists\n");IllII->IlIlll->IlllllI=
IllII->IlllllI;IllII->IlIlll->lIIIIII=IllII->lIIIIII;IllIlIl(IllII->IlIlll,-
ECONNRESET,GFP_ATOMIC);IIlIll(IllII->IlIlll,-ECONNRESET);}lllllIlI(IllII->lIlll)
;lIlIll(IllII->IlIIl);lIlIll(IllII);lllllIll(lIlII);
#ifdef _USBD_DEBUG_MEMORY_
atomic_inc(&lIlIlIIIl);
#endif
Illll(
"\x21\x21\x21\x21\x20\x4d\x61\x73\x73\x53\x74\x6f\x72\x61\x67\x65\x46\x72\x65\x65\x54\x72\x61\x6e\x73\x61\x63\x74\x69\x6f\x6e" "\n"
);}static inline void IIIllllI(struct lIlIII*IllII){kref_get(&IllII->IIllII);}
static inline void IllIlll(struct lIlIII*IllII){kref_put(&IllII->IIllII,
lIIlIlIll);}void IIlIIlIlI(struct lIlIII*IllII,struct llIlIIII*llIllIl){struct 
lllll*lIlII=IllII->lIlII;memcpy(IllII->IlIIl,llIllIl,sizeof(struct llIlIIII));
#if KERNEL_GT_EQ((0x173d+635-0x19b6),(0x10d+2000-0x8d7),(0x6c+2663-0xab4))
IllII->lIlll->sg=NULL;IllII->lIlll->num_sgs=(0x875+5229-0x1ce2);
#endif
#if KERNEL_GT_EQ((0x36c+6117-0x1b4e),(0x715+2542-0x1100),(0x495+4860-0x1791))
IllII->lIlll->num_mapped_sgs=(0x117f+3579-0x1f7a);
#endif
IllII->lIlll->transfer_dma=(0x143+1245-0x620);usb_fill_bulk_urb(IllII->lIlll,
lIlII->lIIlI,usb_sndbulkpipe(lIlII->lIIlI,IllII->ep_out&USB_ENDPOINT_NUMBER_MASK
),IllII->IlIIl,sizeof(struct llIlIIII),lIIIIlllI,IllII);IllII->lIlll->
transfer_flags&=~URB_SHORT_NOT_OK;}void IIIIlIlII(struct lIlIII*IllII){struct 
lllll*lIlII=IllII->lIlII;struct lIlIl*IlllI=IllII->IlllII;IIIII IlIlI=(IIIII)(
IlllI+(0x1408+620-0x1673));int pipe=(IlIlI->IllllI.Flags&IIIllI)?usb_rcvbulkpipe
(IlllI->lIlII->lIIlI,IlIlI->IllllI.Endpoint):usb_sndbulkpipe(IlllI->lIlII->lIIlI
,IlIlI->IllllI.Endpoint);
#if KERNEL_GT_EQ((0x1df1+1411-0x2372),(0x7ec+6754-0x2248),(0x1709+2724-0x218e))
IllII->lIlll->sg=NULL;IllII->lIlll->num_sgs=(0xe72+3958-0x1de8);
#endif
#if KERNEL_GT_EQ((0x9ac+3516-0x1765),(0x1029+3115-0x1c51),(0x10bd+2711-0x1b54))
IllII->lIlll->num_mapped_sgs=(0xdbf+3141-0x1a04);
#endif
IllII->lIlll->transfer_dma=(0x53a+2746-0xff4);switch(IlllI->lIllll){case IllIIlI
:usb_fill_bulk_urb(IllII->lIlll,lIlII->lIIlI,pipe,IlllI->lIIIll.IlIIl,IlIlI->
IllllI.lllllI,IlIIIIIl,IllII);break;case lIlllll:usb_fill_bulk_urb(IllII->lIlll,
lIlII->lIIlI,pipe,IlllI->lIllII.lIIlll->IllIIl[IllII->IlIllIll].transfer_buffer,
IlllI->lIllII.lIIlll->IllIIl[IllII->IlIllIll].transfer_buffer_length,IlIIIIIl,
IllII);break;
#if KERNEL_GT_EQ((0x1194+1284-0x1696),(0x1470+3119-0x2099),(0x131+3751-0xfb9))
case IIlIIII:usb_fill_bulk_urb(IllII->lIlll,lIlII->lIIlI,pipe,NULL,IlIlI->IllllI
.lllllI,IlIIIIIl,IllII);IllII->lIlll->sg=IlllI->lIllIll.sg.lIIlIIl;IllII->lIlll
->num_sgs=IlllI->lIllIll.sg.num_sgs;break;
#endif
}if(IlIlI->IllllI.Flags&IIIllI){if((IlIlI->IllllI.Flags&lIlIlIl)==
(0x1792+2945-0x2313)){IllII->lIlll->transfer_flags|=URB_SHORT_NOT_OK;}else{IllII
->lIlll->transfer_flags&=~URB_SHORT_NOT_OK;}}}void lIllIlII(struct lIlIII*IllII)
{struct lllll*lIlII=IllII->lIlII;
#if KERNEL_GT_EQ((0x9b9+2673-0x1428),(0x590+2293-0xe7f),(0x84c+4836-0x1b11))
IllII->lIlll->sg=NULL;IllII->lIlll->num_sgs=(0x714+1225-0xbdd);
#endif
#if KERNEL_GT_EQ((0x1443+191-0x14ff),(0x1dbd+1738-0x2484),(0xc7b+3105-0x189c))
IllII->lIlll->num_mapped_sgs=(0x9fd+990-0xddb);
#endif
IllII->lIlll->transfer_dma=(0x18e6+487-0x1acd);usb_fill_bulk_urb(IllII->lIlll,
lIlII->lIIlI,usb_rcvbulkpipe(lIlII->lIIlI,IllII->ep_in&USB_ENDPOINT_NUMBER_MASK)
,IllII->IlIIl,IIlIlllII,IIIIlIIlI,IllII);IllII->lIlll->transfer_flags&=~
URB_SHORT_NOT_OK;}static inline void IlIlIlIlI(struct lIlIII*IllII,gfp_t llIlI){
int status=usb_submit_urb(IllII->lIlll,llIlI);if(status<(0x2531+338-0x2683)){
llIIIIlII(IllII,status,llIlI);IllIlll(IllII);}}static inline void llIlllllI(
struct lIlIII*IllII,gfp_t llIlI){int status=usb_submit_urb(IllII->lIlll,llIlI);
if(status<(0x25e4+293-0x2709)){IIlIIIIlI(IllII,status,llIlI);IllIlll(IllII);}}
static inline void IlIIllIll(struct lIlIII*IllII,gfp_t llIlI){int status=
usb_submit_urb(IllII->lIlll,llIlI);if(status<(0x11f7+5194-0x2641)){IIIlllIll(
IllII,status,llIlI);IllIlll(IllII);}}void llIIIIlII(struct lIlIII*IllII,int 
status,gfp_t llIlI){struct lllll*lIlII=IllII->lIlII;unsigned long flags;
spin_lock_irqsave(&lIlII->lIIlIl,flags);if(lIlII->llIIIIl!=IllII){



spin_unlock_irqrestore(&lIlII->lIIlIl,flags);Illll(
"\x21\x21\x21\x21\x20\x43\x4f\x4d\x4d\x41\x4e\x44\x20\x63\x61\x6e\x63\x65\x6c\x6c\x65\x64" "\n"
);}else if(status==(0xfc4+3568-0x1db4)){





if(IllII->lIIIIlII==(0x4c4+6463-0x1e03)){lIllIlII(IllII);IIIllllI(IllII);}else{
IIIIlIlII(IllII);IIIllllI(IllII);}spin_unlock_irqrestore(&lIlII->lIIlIl,flags);
if(IllII->lIIIIlII==(0x22c+7006-0x1d8a)){IlIIllIll(IllII,llIlI);}else{llIlllllI(
IllII,llIlI);}}else
{struct lIlIl*IlllII;struct lIlIl*IlIlll;

IlllII=IllII->IlllII;IllII->IlllII=NULL;IlIlll=IllII->IlIlll;IllII->IlIlll=NULL;
if(lIlII->lIlIlI!=lllIIII){lIlII->lIlIlI=IIlIllIl;}spin_unlock_irqrestore(&lIlII
->lIIlIl,flags);if(IlllII){IllIlIl(IlllII,status,llIlI);IIlIll(IlllII,status);}
if(IlIlll){IllIlIl(IlIlll,status,llIlI);IIlIll(IlIlll,status);}}}void IIlIIIIlI(
struct lIlIII*IllII,int status,gfp_t llIlI){struct lllll*lIlII=IllII->lIlII;
struct lIlIl*IlllII=IllII->IlllII;IIIII lllIlIlI=(IIIII)(IlllII+
(0x1b47+435-0x1cf9));unsigned long flags;
if(IllII->IlIllIll==(0x283+7725-0x20b0)){lllIlIlI->IllllI.lllllI=IllII->lIlll->
actual_length;}else{lllIlIlI->IllllI.lllllI+=IllII->lIlll->actual_length;}
if(usb_pipein(IllII->lIlll->pipe)){lllIlIlI->lllII.IIllI=sizeof(lllIlIlI->IllllI
)+lllIlIlI->IllllI.lllllI;}else{lllIlIlI->lllII.IIllI=sizeof(lllIlIlI->IllllI);}
if(IlllII->lIllll==lIlllll){IlllII->lIllII.lIIlll->IllIIl[IllII->IlIllIll].
actual_length=IllII->lIlll->actual_length;}lllIlIlI->IllllI.lIIIlI.Status=status
;spin_lock_irqsave(&lIlII->lIIlIl,flags);if(lIlII->llIIIIl!=IllII){



Illll(
"\x21\x21\x21\x21\x20\x44\x41\x54\x41\x20\x63\x61\x6e\x63\x65\x6c\x6c\x65\x64" "\n"
);spin_unlock_irqrestore(&lIlII->lIIlIl,flags);}else if(status==
(0x1a56+2214-0x22fc)){




if(IlllII->lIllll==lIlllll){IllII->IlIllIll++;if((IllII->lIlll->actual_length==
IllII->lIlll->transfer_buffer_length)&&(IllII->IlIllIll<IlllII->lIllII.lIIlll->
IlIII)){
IlllII=NULL;

IIIIlIlII(IllII);IIIllllI(IllII);}else{

IllII->IlllII=NULL;
lIllIlII(IllII);IIIllllI(IllII);}}else{
IllII->IlllII=NULL;
lIllIlII(IllII);IIIllllI(IllII);}spin_unlock_irqrestore(&lIlII->lIIlIl,flags);if
(IlllII){
IIlIll(IlllII,(0x137f+4349-0x247c));
IlIIllIll(IllII,llIlI);}else{llIlllllI(IllII,llIlI);}}else
{
IllII->IlllII=NULL;if(lIlII->lIlIlI!=lllIIII){lIlII->lIlIlI=IIlIllIl;}
spin_unlock_irqrestore(&lIlII->lIIlIl,flags);if(IlllII){
IIlIll(IlllII,status);}}}void IIIlllIll(struct lIlIII*IllII,int status,gfp_t 
llIlI){struct lllll*lIlII=IllII->lIlII;unsigned long flags;spin_lock_irqsave(&
lIlII->lIIlIl,flags);if(lIlII->llIIIIl!=IllII){



Illll(
"\x21\x21\x21\x21\x20\x53\x54\x41\x54\x55\x53\x20\x63\x61\x6e\x63\x65\x6c\x6c\x65\x64" "\n"
);spin_unlock_irqrestore(&lIlII->lIIlIl,flags);}else{struct lIlIl*IlIlll=NULL;





IllII->status=status;

if(IllII->IlIlll){if(IIIlIlIll(IllII)){if(lIlII->lIlIlI!=lllIIII){lIlII->lIlIlI=
IIIllIll;}}else{lIlII->lIlIlI=lllIIII;}IlIlll=IllII->IlIlll;IllII->IlIlll=NULL;}
spin_unlock_irqrestore(&lIlII->lIIlIl,flags);if(IlIlll){IIlIll(IlIlll,status);}}
}static void lIIIIlllI(struct urb*lIlll
#if KERNEL_LT((0x1446+3787-0x230f),(0xcd1+862-0x1029),(0xae8+3896-0x1a0d))
,struct pt_regs*lIllIlI
#endif
){struct lIlIII*IllII=lIlll->context;Illll(
"\x21\x21\x21\x21\x20\x43\x4f\x4d\x4d\x41\x4e\x44\x20\x75\x72\x62\x20\x63\x6f\x6d\x70\x6c\x65\x74\x65\x64\x20\x2d\x20\x73\x74\x61\x74\x75\x73\x3d\x25\x64" "\n"
,lIlll->status);
llIIIIlII(IllII,lIlll->status,GFP_ATOMIC);IllIlll(IllII);}static void IlIIIIIl(
struct urb*lIlll
#if KERNEL_LT((0x118c+3115-0x1db5),(0xd47+2433-0x16c2),(0x1b39+1613-0x2173))
,struct pt_regs*lIllIlI
#endif
){struct lIlIII*IllII=lIlll->context;Illll(
"\x21\x21\x21\x21\x20\x44\x41\x54\x41\x20\x75\x72\x62\x20\x63\x6f\x6d\x70\x6c\x65\x74\x65\x64\x20\x2d\x20\x73\x74\x61\x74\x75\x73\x3d\x25\x64" "\n"
,lIlll->status);
IIlIIIIlI(IllII,lIlll->status,GFP_ATOMIC);IllIlll(IllII);}static void IIIIlIIlI(
struct urb*lIlll
#if KERNEL_LT((0x963+4448-0x1ac1),(0xe99+5876-0x2587),(0x1727+3713-0x2595))
,struct pt_regs*lIllIlI
#endif
){struct lIlIII*IllII=lIlll->context;Illll(
"\x21\x21\x21\x21\x20\x53\x54\x41\x54\x55\x53\x20\x75\x72\x62\x20\x63\x6f\x6d\x70\x6c\x65\x74\x65\x64\x20\x2d\x20\x73\x74\x61\x74\x75\x73\x3d\x25\x64" "\n"
,lIlll->status);
IIIlllIll(IllII,lIlll->status,GFP_ATOMIC);IllIlll(IllII);}int IIIlIlIll(struct 
lIlIII*IllII){IIIII IlIlI=(IIIII)(IllII->IlIlll+(0x792+474-0x96b));
if(IlIlI->IllllI.lllllI>=IllII->lIlll->actual_length){IlIlI->IllllI.lllllI=IllII
->lIlll->actual_length;IlIlI->IllllI.lIIIlI.IIllI=sizeof(IlIlI->IllllI)+IlIlI->
IllllI.lllllI;IlIlI->IllllI.lIIIlI.Status=IllII->status;memcpy(IllII->IlIlll->
lIIIll.IlIIl,IllII->IlIIl,IllII->lIlll->actual_length);return(0x12fd+773-0x1601)
;}


IlIlI->IllllI.lIIIlI.IIllI=sizeof(IlIlI->IllllI)+IlIlI->IllllI.lllllI;IlIlI->
IllllI.lIIIlI.Status=-EOVERFLOW;memcpy(IllII->IlIlll->lIIIll.IlIIl,IllII->IlIIl,
IlIlI->IllllI.lllllI);return(0x58d+8377-0x2646);}
#endif 

