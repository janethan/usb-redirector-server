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
int lIlIIlIlI(void*,int);int IlIllllll(void*,int);void IlIlIIIIl(void*context);
void llllllIIl(void*context);unsigned int llIIIllll(void*,struct file*,
poll_table*lIIllI);long IlIIllIIl(void*context,unsigned int lIIIIl,unsigned long
 IlIIII);
#ifdef CONFIG_COMPAT
long lIIIlIlIl(void*context,unsigned int lIIIIl,unsigned long IlIIII);
#endif
int lllllIIlI(struct lIIll*lIlII);void lIIIIIlll(struct lIIll*lIlII,int status,
gfp_t llllI);void lIllIllI(struct lIIll*lIlII,gfp_t llllI);void IIlIll(struct 
lIIll*lIlII,int status);void lIIlIlIIl(struct lIIll*lIIlIlI,gfp_t llllI);void 
lIlIIIllI(struct lIIll*lIIlIlI,gfp_t llllI);void llllIllll(struct lIIll*lIIlIlI,
gfp_t llllI);void lIIlIIlIl(struct lIIll*lIIlIlI,gfp_t llllI);void lIlllIIlI(
struct lIIll*lIIlIlI,gfp_t llllI);void IlIIllllI(struct lIIll*lIIlIlI,gfp_t 
llllI);void lllIllIlI(struct lIIll*lIIlIlI,gfp_t llllI);
#if KERNEL_GT_EQ((0xdfb+3731-0x1c8c),(0x1ba2+2039-0x2393),(0x460+5282-0x18e3))
void IllllIIIl(struct lIIll*lIIlIlI,gfp_t llllI);
#endif
void IIIIllIIl(struct lIIll*lIIlIlI,gfp_t llllI);void IIllIlIII(struct lIIll*
lIIlIlI,gfp_t llllI);
#if KERNEL_GT_EQ((0x159+8081-0x20e8),(0x353+7772-0x21a9),(0x6f5+1674-0xd60))
void IlIIlIIII(struct lIIll*lIIlIlI,gfp_t llllI);
#endif
void llIIlllIl(struct lIIll*lIIlIlI,gfp_t llllI);void llllIIIII(struct lIIll*
lIIlIlI,gfp_t llllI);void llIIllIlI(struct lIIll*lIIlIlI,gfp_t llllI);void 
lllIIllll(struct lIIll*lIIlIlI,gfp_t llllI);void lIllIlllI(struct lIIll*lIIlIlI,
gfp_t llllI);void IIIlIlIIl(struct lIIll*lIIlIlI,gfp_t llllI);void lIIllIlII(
struct lIIll*lIIlIlI,gfp_t llllI);void lIIIIllIl(struct lIIll*lIIlIlI,gfp_t 
llllI);void IlIllIIIl(struct lIIll*lIIlIlI,gfp_t llllI);void llIIlIIIl(struct 
lIIll*lIlII,int status,gfp_t llllI);void IlIlIlIl(struct lIIll*lIlII,int status,
gfp_t llllI);void lIllIIlIl(struct lIIll*lIlII,int status,gfp_t llllI);void 
lIlIllIIl(struct lIIll*lIlII,int status,gfp_t llllI);void IlIlIlIll(struct lIIll
*lIlII,int status,gfp_t llllI);void llIlIIlII(struct lIIll*lIlII,int status,
gfp_t llllI);void lllIlIllI(struct lIIll*lIlII,int status,gfp_t llllI);void 
IllIIIlll(struct lIIll*lIlII,int status,gfp_t llllI);void llIlIlIll(struct lIIll
*lIlII,int status,gfp_t llllI);void llIIlll(struct lIIll*lIlII,int status,gfp_t 
llllI);void IlllIlIl(struct lIIll*lIlII,int status,gfp_t llllI);void lIIIIlIl(
struct lIIll*lIlII,int status,gfp_t llllI);
#if KERNEL_LT((0x798+3825-0x1687),(0x18c5+1417-0x1e48),(0x8d+1262-0x568))
void lIIIllIIl(struct urb*IlllI,struct pt_regs*lIllIlI);void lIlllIll(struct urb
*IlllI,struct pt_regs*lIllIlI);void llllllII(struct urb*IlllI,struct pt_regs*
lIllIlI);void IllllIll(struct urb*IlllI,struct pt_regs*lIllIlI);void lIIlIIIIl(
struct urb*IlllI,struct pt_regs*lIllIlI);static void lIIIIlllI(struct urb*IlllI,
struct pt_regs*lIllIlI);static void IlIIIIIl(struct urb*IlllI,struct pt_regs*
lIllIlI);static void IIIIlIIlI(struct urb*IlllI,struct pt_regs*lIllIlI);
#else
void lIIIllIIl(struct urb*IlllI);void lIlllIll(struct urb*IlllI);void llllllII(
struct urb*IlllI);void IllllIll(struct urb*IlllI);void lIIlIIIIl(struct urb*
IlllI);static void lIIIIlllI(struct urb*IlllI);static void IlIIIIIl(struct urb*
IlllI);static void IIIIlIIlI(struct urb*IlllI);
#endif
void IIIlIlIII(struct IlIlII*IIIlI);void IllIIIIIl(struct IlIlII*IIIlI);int 
lIllIlll(struct IIlll*IIIll);int lIlIIIIII(struct lIIll*lIlII,gfp_t llllI);int 
lIlIIllII(struct IIlll*IIIll,llIIII lIlIl);void llIllIll(struct IIlll*IIIll);
void llllIIll(struct IIlll*IIIll,int IlllllI,int lIIIlIll);void llIIIIIII(struct
 llIIll*lIIII,int status,gfp_t llllI);void IIIIIllII(struct llIIll*lIIII,int 
status,gfp_t llllI);void IIIlllIll(struct llIIll*lIIII,int status,gfp_t llllI);
void IlIIlIlI(struct llIIll*lIIII);void IlllIlIlI(struct llIIll*lIIII);void 
IIlIIlIlI(struct llIIll*lIIII,struct llIlIIII*lIIIIlI);void IIllIIlIII(struct 
kref*IIllIlI);void llIlllIll(struct llIIll*lIIII);struct llIIll*lllIlIIlI(struct
 IIlll*IIIll,gfp_t llllI);int lIlIlIlII(struct lIIll*lIlII);int IIlIIIlIl(struct
 lIIll*lIlII);int IIIIIlllI(struct lIIll*lIlII);int IlIIllIll(struct llIIll*
lIIII);static inline void lllllIIII(struct llIIll*lIIII,gfp_t llllI);static 
inline void IIlIIIIII(struct llIIll*lIIII,gfp_t llllI);static inline void 
llIIIIlII(struct llIIll*lIIII,gfp_t llllI);static inline void IIIllllI(struct 
llIIll*lIIII);static inline void IIIIlII(struct llIIll*lIIII);void llllIlIl(
struct IIlll*IIIll,llIIII lIlIl);struct lIIll*IIlIIIII(struct IIlll*IIIll,llIIII
 lIlIl);static struct lIIIllll llIIIlIll[]={{"\x74\x79\x70\x65",
"\x73\x74\x75\x62",NULL},{"\x64\x65\x76",NULL,IllIIllII},{
"\x73\x75\x70\x70\x72\x65\x73\x73",NULL,llIIlIIII},{NULL,NULL,NULL},};int 
IIIIIIIII(struct IIlll*IIIll){struct IIIlll*lllll;lllll=lIllllI(sizeof(*lllll),
GFP_KERNEL);if(lllll){mutex_init(&lllll->mutex);lllll->context=IIIll;lllll->
llIllI=-(0xb8+480-0x297);lllll->ops.open=lIlIIlIlI;lllll->ops.release=IlIllllll;
lllll->ops.poll=llIIIllll;lllll->ops.unlocked_ioctl=IlIIllIIl;
#ifdef CONFIG_COMPAT
lllll->ops.compat_ioctl=lIIIlIlIl;
#endif
lllll->ops.IlIIlIII=IlIlIIIIl;lllll->ops.IlIllIII=llllllIIl;lllll->IlllIIII=
llIIIlIll;IIIll->lllll=lllll;return(0xeb9+2432-0x1839);}return-ENOMEM;}void 
IIlIIIIIl(struct IIlll*IIIll){if(IIIll->lllll){IlIlIllll(IIIll);lIlIll(IIIll->
lllll);IIIll->lllll=NULL;}}int IlIlIIlIl(struct IIlll*IIIll){return IllllIlI(
IIIll->lllll,(0x52d+1170-0x9bd),-(0x519+6889-0x2001));}void IlIlIllll(struct 
IIlll*IIIll){lllIllII(IIIll->lllll);}int llllllIII(struct IIlll*IIIll,void 
__user*IllIl){int IlIlI=(0xcda+3619-0x1afd);unsigned long flags;struct lIIll*
lIlII;lllII lIIIIIlII;lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x69\x6f\x63\x74\x6c\x5f\x72\x65\x61\x64\x5f\x75\x6e\x72\x62\x3a\x20\x2b\x2b" "\n"
);
#if KERNEL_GT_EQ((0x5c3+6595-0x1f81),(0xb84+5111-0x1f7b),(0x59f+4596-0x1793))
if(!access_ok(IllIl,sizeof(IlIllI)))
#else
if(!access_ok(VERIFY_READ,IllIl,sizeof(IlIllI)))
#endif
{lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x69\x6f\x63\x74\x6c\x5f\x72\x65\x61\x64\x5f\x75\x6e\x72\x62\x3a\x20\x2d\x2d\x20\x6d\x65\x6d\x6f\x72\x79\x20\x61\x63\x63\x65\x73\x73\x20\x63\x68\x65\x63\x6b\x20\x66\x61\x69\x6c\x65\x64" "\n"
);return-EINVAL;}
if(get_user(lIIIIIlII,&((IlIllI*)IllIl)->IIIII)<(0x993+6622-0x2371)){lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x69\x6f\x63\x74\x6c\x5f\x72\x65\x61\x64\x5f\x75\x6e\x72\x62\x3a\x20\x2d\x2d\x20\x63\x61\x6e\x6e\x6f\x74\x20\x72\x65\x61\x64\x20\x66\x72\x6f\x6d\x20\x75\x73\x65\x72\x20\x62\x75\x66\x66\x65\x72" "\n"
);return-EFAULT;}lIlII=NULL;spin_lock_irqsave(&IIIll->lIIIIll,flags);if(!
list_empty(&IIIll->llIlIlIl)){lIlII=list_entry(IIIll->llIlIlIl.next,struct lIIll
,llllIl);list_del_init(&lIlII->llllIl);}spin_unlock_irqrestore(&IIIll->lIIIIll,
flags);if(lIlII){IlIlI=IIIIlllIl(lIlII,IllIl,lIIIIIlII);if(IlIlI==-EMSGSIZE){




spin_lock_irqsave(&IIIll->lIIIIll,flags);list_add(&lIlII->llllIl,&IIIll->
llIlIlIl);spin_unlock_irqrestore(&IIIll->lIIIIll,flags);
wake_up(&IIIll->lIIllI);}else{IllIlll(lIlII);}}else{lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x69\x6f\x63\x74\x6c\x5f\x72\x65\x61\x64\x5f\x75\x6e\x72\x62\x3a\x20\x6e\x6f\x20\x6d\x6f\x72\x65\x20\x64\x61\x74\x61" "\n"
);IlIlI=-ENODATA;}lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x69\x6f\x63\x74\x6c\x5f\x72\x65\x61\x64\x5f\x75\x6e\x72\x62\x3a\x20\x2d\x2d\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67\x20\x25\x64" "\n"
,IlIlI);return IlIlI;}int IlIIIIllI(struct IIlll*IIIll,void __user*IllIl){int 
IlIlI;IIlII IIlIl;struct lIIll*lIlII;IlIllI llIIIlIl;size_t llllllIl;lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x69\x6f\x63\x74\x6c\x5f\x77\x72\x69\x74\x65\x5f\x75\x6e\x72\x62\x3a\x20\x2b\x2b" "\n"
);if(unlikely(lIlllllIl(IIIll))){lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x69\x6f\x63\x74\x6c\x5f\x77\x72\x69\x74\x65\x5f\x75\x6e\x72\x62\x3a\x20\x2d\x2d\x20\x64\x65\x76\x69\x63\x65\x20\x6f\x66\x66\x6c\x69\x6e\x65" "\n"
);return-ENODEV;}if(copy_from_user(&llIIIlIl,IllIl,sizeof(llIIIlIl))){lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x69\x6f\x63\x74\x6c\x5f\x77\x72\x69\x74\x65\x5f\x75\x6e\x72\x62\x3a\x20\x2d\x2d\x20\x63\x6f\x70\x79\x20\x66\x61\x69\x6c\x65\x64" "\n"
);return-EFAULT;}llllllIl=llIIIlIl.IIIII;if(llIIIlIl.IIIlIIl==IlIIIIIIl){
llllllIl-=sizeof(IlIllI);IllIl+=sizeof(IlIllI);}while(llllllIl>(0x1bd+816-0x4ed)
){lIlII=llIlIIllI(IIIll,IllIl,llllllIl);if(!lIlII){lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x69\x6f\x63\x74\x6c\x5f\x77\x72\x69\x74\x65\x5f\x75\x6e\x72\x62\x3a\x20\x2d\x2d\x20\x63\x61\x6e\x6e\x6f\x74\x20\x61\x6c\x6c\x6f\x63\x61\x74\x65\x20\x72\x65\x71\x75\x65\x73\x74" "\n"
);return-ENOMEM;}IIlIl=(IIlII)(lIlII+(0xa0a+2355-0x133c));if(llllllIl<IIlIl->
IlIII.IIIII){lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x69\x6f\x63\x74\x6c\x5f\x77\x72\x69\x74\x65\x5f\x75\x6e\x72\x62\x3a\x20\x2d\x2d\x20\x69\x6e\x76\x61\x6c\x69\x64\x20\x73\x69\x7a\x65" "\n"
);return-EINVAL;}llllllIl-=IIlIl->IlIII.IIIII;IllIl+=IIlIl->IlIII.IIIII;llIlIIl(
IIlIl);IlIlI=lllllIIlI(lIlII);if(likely(IlIlI>(0x814+7769-0x266d))){
lIllIllI(lIlII,GFP_KERNEL);}else if(IlIlI==(0x97a+1914-0x10f4)){
}else if(lIlII->IlllllI)
{IllIlll(lIlII);}else{lIIIIIlll(lIlII,IlIlI,GFP_KERNEL);IIlIll(lIlII,IlIlI);}}
lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x69\x6f\x63\x74\x6c\x5f\x77\x72\x69\x74\x65\x5f\x75\x6e\x72\x62\x3a\x20\x2d\x2d\x20\x72\x65\x73\x75\x6c\x74\x3d\x30" "\n"
);return(0x9c6+581-0xc0b);}int lIlIllllI(struct IIlll*IIIll){unsigned long flags
;struct list_head Illlll;lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x64\x72\x61\x69\x6e\x5f\x72\x65\x71\x75\x65\x73\x74\x73\x3a\x20\x2b\x2b" "\n"
);






IllllIII(IIIll,NULL,(0x7a0+4737-0x1a20),(0x8c9+7214-0x24f6));

INIT_LIST_HEAD(&Illlll);spin_lock_irqsave(&IIIll->lIIIIll,flags);
list_splice_init(&IIIll->llIlIlIl,&Illlll);spin_unlock_irqrestore(&IIIll->
lIIIIll,flags);while(!list_empty(&Illlll)){struct lIIll*IlIIIlllI;IlIIIlllI=
list_entry(Illlll.next,struct lIIll,llllIl);list_del(&IlIIIlllI->llllIl);IllIlll
(IlIIIlllI);}lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x64\x72\x61\x69\x6e\x5f\x72\x65\x71\x75\x65\x73\x74\x73\x3a\x20\x2d\x2d" "\n"
);return(0x7e8+7391-0x24c7);}int lIllIlIIl(struct IIlll*IIIll,struct lIlIlllII 
__user*ioctl){lllII IlIll;lllII IIIllIl;if(get_user(IlIll,&ioctl->lIIlII.lIlllll
)<(0xc+3947-0xf77)){return-EFAULT;}if(IlIll!=sizeof(struct lIlIlllII)){return-
EINVAL;}if(get_user(IIIllIl,&ioctl->IIIllIl)<(0x1cb4+2255-0x2583)){return-EFAULT
;}if(IIIllIl>=IlllIlIll){return-EINVAL;}IIIll->lllIIlIl=IIIllIl;return
(0x1840+3155-0x2493);}int lIIIIllll(struct IIlll*IIIll,struct lllIllllI __user*
ioctl){lllII IlIll;lllII lIIllIl;if(get_user(IlIll,&ioctl->lIIlII.lIlllll)<
(0x706+4946-0x1a58)){return-EFAULT;}if(IlIll!=sizeof(struct lllIllllI)){return-
EINVAL;}if(get_user(lIIllIl,&ioctl->lIIllIl)<(0x239+6291-0x1acc)){return-EFAULT;
}IIIll->lIIllIl=lIIllIl;return(0x335+8239-0x2364);}
int lIIlIlIll(struct IIlll*IIIll,struct lIlIIlIll __user*ioctl){lllII IlIll;if(
get_user(IlIll,&ioctl->lIIlII.lIlllll)<(0x234+498-0x426)){return-EFAULT;}if(
IlIll!=sizeof(struct lIlIIlIll)){return-EINVAL;}IIIlIlIll(IIIll,IIIll->lllIIlIl)
;return(0x87+856-0x3df);}int IIlIIllII(struct IIlll*IIIll,struct IIlIIlIlII 
__user*ioctl){lllII IlIll;lllII IlIlllIl;if(get_user(IlIll,&ioctl->lIIlII.
lIlllll)<(0x919+4767-0x1bb8)){return-EFAULT;}if(IlIll!=sizeof(*ioctl)){return-
EINVAL;}IlIlllIl=IIIll->llIllIIl;if(put_user(IlIlllIl,&ioctl->IlIlllIl)<
(0x716+313-0x84f)){return-EFAULT;}return(0x976+5814-0x202c);}long IIllIIlll(void
*context,unsigned int lIIIIl,void __user*IlIIII){struct IIlll*IIIll=context;
ssize_t IlIlI=(0x6f7+5673-0x1d20);lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x6d\x69\x6e\x6f\x72\x5f\x69\x6f\x63\x74\x6c\x3a\x20\x2b\x2b\x20\x63\x6d\x64\x3d\x25\x64\x20\x61\x72\x67\x3d\x30\x78\x25\x70" "\n"
,lIIIIl,IlIIII);switch(lIIIIl){case llIIlIlII:IlIlI=llllllIII(IIIll,IlIIII);
break;case IllIIIlII:IlIlI=IlIIIIllI(IIIll,IlIIII);break;case lIIIIIlIl:IlIlI=
lIlIllllI(IIIll);break;case IlIllIlIl:IlIlI=lIllIlIIl(IIIll,IlIIII);break;case 
IlIllIIlll:IlIlI=lIIIIllll(IIIll,IlIIII);break;case IIIllIIIl:IlIlI=lIIlIlIll(
IIIll,IlIIII);break;case IIIlIIlIl:IlIlI=IIlIIllII(IIIll,IlIIII);break;default:
lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x6d\x69\x6e\x6f\x72\x5f\x69\x6f\x63\x74\x6c\x3a\x20\x75\x6e\x6b\x6e\x6f\x77\x6e\x20\x69\x6f\x63\x74\x6c" "\n"
);IlIlI=-EINVAL;break;}lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x6d\x69\x6e\x6f\x72\x5f\x69\x6f\x63\x74\x6c\x3a\x20\x2d\x2d\x20\x72\x65\x73\x75\x6c\x74\x3d\x25\x6c\x75" "\n"
,(unsigned long)IlIlI);return IlIlI;}long IlIIllIIl(void*context,unsigned int 
lIIIIl,unsigned long IlIIII){return IIllIIlll(context,lIIIIl,(void __user*)
IlIIII);}
#ifdef CONFIG_COMPAT
long lIIIlIlIl(void*context,unsigned int lIIIIl,unsigned long IlIIII){return 
IIllIIlll(context,lIIIIl,compat_ptr(IlIIII));}
#endif


int lIlIIlIlI(void*context,int IIIIIlI){int IlIlI=(0x1bd3+2258-0x24a5);
lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x6d\x69\x6e\x6f\x72\x5f\x6f\x70\x65\x6e\x3a\x20\x2b\x2b\x20\x25\x64" "\n"
,IIIIIlI);
lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x6d\x69\x6e\x6f\x72\x5f\x6f\x70\x65\x6e\x3a\x20\x2d\x2d\x20\x72\x65\x73\x75\x6c\x74\x3d\x25\x64" "\n"
,IlIlI);return IlIlI;}

int IlIllllll(void*context,int IIIIIlI){struct IIlll*IIIll=context;lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x6d\x69\x6e\x6f\x72\x5f\x72\x65\x6c\x65\x61\x73\x65\x20\x25\x64" "\n"
,IIIIIlI);if(IIIIIlI==(0xbed+6780-0x2669)){

lIlIllllI(IIIll);if(IIIll->llIllIIl){IIIlIlIll(IIIll,IIIll->lllIIlIl);}

}return(0x6a6+1997-0xe73);}void IlIlIIIIl(void*context){struct IIlll*IIIll=
context;lIIlIlll(IIIll);}void llllllIIl(void*context){struct IIlll*IIIll=context
;lIIIllII(IIIll);}unsigned int llIIIllll(void*context,struct file*lIlllI,
poll_table*lIIllI){struct IIlll*IIIll=context;int IIllIIII;unsigned long flags;
poll_wait(lIlllI,&IIIll->lIIllI,lIIllI);spin_lock_irqsave(&IIIll->lIIIIll,flags)
;IIllIIII=list_empty(&IIIll->llIlIlIl);spin_unlock_irqrestore(&IIIll->lIIIIll,
flags);if(!IIllIIII){lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x6d\x69\x6e\x6f\x72\x5f\x70\x6f\x6c\x6c\x3a\x20\x71\x75\x65\x75\x65\x20\x6e\x6f\x74\x20\x65\x6d\x70\x74\x79" "\n"
);return((POLLOUT|POLLWRNORM)|(POLLIN|POLLRDNORM));}return(POLLOUT|POLLWRNORM);}
int lllllIIlI(struct lIIll*lIlII){unsigned long flags;struct IIlll*IIIll=lIlII->
IIIll;
if(lIlII->lIlIlII.lIIIlIlI==(0x7d9+5225-0x1c42)){
spin_lock_irqsave(&IIIll->IIlIlI,flags);list_add_tail(&lIlII->llllIl,&IIIll->
IllIIlI);spin_unlock_irqrestore(&IIIll->IIlIlI,flags);return(0x17f3+2451-0x2185)
;}else{
struct llIlIllI*lllllIl,*lllIIIII;struct lIIll*lIlIlIIIl,*IIIlllll;




if(lIlII->lIlIlII.lIlIllIIIl){lllllIl=lIllllI(sizeof(*lllllIl),GFP_KERNEL);
if(lllllIl==NULL){lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x69\x6f\x63\x74\x6c\x5f\x77\x72\x69\x74\x65\x5f\x75\x6e\x72\x62\x3a\x20\x63\x61\x6e\x6e\x6f\x74\x20\x61\x6c\x6c\x6f\x63\x61\x74\x65\x20\x55\x4e\x52\x42" "\n"
);return-ENOMEM;}lllllIl->lIlIl=lIlII->lIlIl;spin_lock_irqsave(&IIIll->IIlIlI,
flags);list_add_tail(&lllllIl->IIIIll,&IIIll->IIIllIIl);list_add_tail(&lIlII->
llllIl,&IIIll->IllIIlI);spin_unlock_irqrestore(&IIIll->IIlIlI,flags);return
(0x1113+2446-0x1aa0);}







spin_lock_irqsave(&IIIll->IIlIlI,flags);

lllllIl=NULL;list_for_each_entry(lllIIIII,&IIIll->IIIllIIl,IIIIll){if(lllIIIII->
lIlIl==lIlII->lIlIl){lllllIl=lllIIIII;break;}}


if(lllllIl==NULL){spin_unlock_irqrestore(&IIIll->IIlIlI,flags);lIlII->IlllllI=
(0x2362+332-0x24ad);return-ECONNRESET;}


lIlIlIIIl=NULL;list_for_each_entry(IIIlllll,&IIIll->IllIIlI,llllIl){if(IIIlllll
->lIlIl==lIlII->lIlIl&&IIIlllll->lIlIlII.lIIIlIlI){lIlIlIIIl=IIIlllll;break;}}


if(lIlIlIIIl==NULL){
if(lllllIl->IlIlIIIII){atomic_xchg(&lIlII->state,IllIlII);lllllIl->IlIlIIIII=
(0x1601+3076-0x2205);}switch(lllllIl->llllllIll){case IlIlllIlI:
spin_unlock_irqrestore(&IIIll->IIlIlI,flags);lIlII->IlllllI=(0x95+7134-0x1c72);
return-ECONNRESET;case IlIIIlIll:list_add_tail(&lIlII->llllIl,&IIIll->IllIIlI);
spin_unlock_irqrestore(&IIIll->IIlIlI,flags);return(0x4fa+6623-0x1ed8);case 
lIIIlllIl:atomic_xchg(&lIlII->state,IllIlII);list_add_tail(&lIlII->llllIl,&IIIll
->IllIIlI);spin_unlock_irqrestore(&IIIll->IIlIlI,flags);return-ECONNRESET;case 
lllIIIlII:lllllIl->llllllIll=lIlII->lIlIlII.IlllIIIlI;spin_unlock_irqrestore(&
IIIll->IIlIlI,flags);lIlII->IlllllI=(0x6b1+7582-0x244e);return-ECONNRESET;}}





list_add_tail(&lIlII->llllIl,&IIIll->IllIIlI);spin_unlock_irqrestore(&IIIll->
IIlIlI,flags);return(0x345+6377-0x1c2e);}}void lIllIllI(struct lIIll*lIlII,gfp_t
 llllI){IIlII IIlIl=(IIlII)(lIlII+(0x3a9+8468-0x24bc));if(unlikely(
atomic_cmpxchg(&lIlII->state,IIlllIIl,IIIIlll)!=IIlllIIl)){lIIIIIlll(lIlII,-
ECONNRESET,llllI);IIlIll(lIlII,-ECONNRESET);return;}lIlII->IIIll->llIllIIl=
(0xbc1+3669-0x1a15);switch(IIlIl->IlIII.IIIlIIl){case llIIllll:lIIlIlIIl(lIlII,
llllI);break;case llIlllIl:lIlIIIllI(lIlII,llllI);break;case IIlIlIII:llllIllll(
lIlII,llllI);break;case llIIIIlI:lIIlIIlIl(lIlII,llllI);break;case IIllIIIl:if(
lIlIIIIII(lIlII,llllI)>=(0x561+7675-0x235c)){break;}lIlllIIlI(lIlII,llllI);break
;case lIlllIIl:IIIIllIIl(lIlII,llllI);break;case lllIlIIl:llIIlllIl(lIlII,llllI)
;break;case IIIIlllI:lllIIllll(lIlII,llllI);break;case IIlIIIlI:lIllIlllI(lIlII,
llllI);break;case IIllIIlI:IIIlIlIIl(lIlII,llllI);break;case llIIlIII:lIIllIlII(
lIlII,llllI);break;case llIIlIll:lIIIIllIl(lIlII,llllI);break;case lIIIlllI:
IlIllIIIl(lIlII,llllI);break;}}void lIIIIIlll(struct lIIll*lIlII,int status,
gfp_t llllI){IIlII IIlIl=(IIlII)(lIlII+(0x15a+8655-0x2328));switch(IIlIl->IlIII.
IIIlIIl){case llIIllll:llIIlIIIl(lIlII,status,llllI);break;case llIlllIl:
IlIlIlIl(lIlII,status,llllI);break;case IIlIlIII:IlIlIlIll(lIlII,status,llllI);
break;case llIIIIlI:llIlIlIll(lIlII,status,llllI);break;case IIllIIIl:llIIlll(
lIlII,status,llllI);break;case lIlllIIl:IlllIlIl(lIlII,status,llllI);break;case 
lllIlIIl:lIIIIlIl(lIlII,status,llllI);break;case IIIIlllI:lIllIIlIl(lIlII,status
,llllI);break;case IIlIIIlI:lIlIllIIl(lIlII,status,llllI);break;case IIllIIlI:
llIlIIlII(lIlII,status,llllI);break;case llIIlIII:lllIlIllI(lIlII,status,llllI);
break;case llIIlIll:
break;case lIIIlllI:IllIIIlll(lIlII,status,llllI);break;}}void lIIlIlIIl(struct 
lIIll*lIlII,gfp_t llllI){int IlIlI=(0xf6d+3458-0x1cef);struct usb_ctrlrequest*
IlllIlI;IIlII IIlIl=(IIlII)(lIlII+(0xc1c+5321-0x20e4));do{struct urb*IlllI;IlllI
=lIlIIlIl((0x73d+3384-0x1475),llllI);if(unlikely(!IlllI)){lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x67\x65\x74\x64\x65\x73\x63\x72\x69\x70\x74\x6f\x72\x3a\x20\x75\x73\x62\x5f\x61\x6c\x6c\x6f\x63\x5f\x75\x72\x62\x20\x66\x61\x69\x6c\x65\x64" "\n"
);IlIlI=-ENOMEM;break;}lIlII->lIIIll.IlllI=IlllI;IlllIlI=IllIllI(sizeof(*IlllIlI
),llllI);if(unlikely(!IlllIlI)){lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x67\x65\x74\x64\x65\x73\x63\x72\x69\x70\x74\x6f\x72\x3a\x20\x75\x73\x62\x5f\x61\x6c\x6c\x6f\x63\x5f\x75\x72\x62\x20\x66\x61\x69\x6c\x65\x64" "\n"
);IlIlI=-ENOMEM;break;}IlllIlI->bRequest=USB_REQ_GET_DESCRIPTOR;IlllIlI->
bRequestType=USB_DIR_IN+((IIlIl->IIlllI.IIllIll&(0x28d+2779-0xd65))<<
(0x1faa+1783-0x269c))+(IIlIl->IIlllI.llIlIIll&(0xa9a+480-0xc5b));IlllIlI->wValue
=cpu_to_le16((IIlIl->IIlllI.lllllllI<<(0xa0+3583-0xe97))+IIlIl->IIlllI.lIlIIlll)
;IlllIlI->wIndex=cpu_to_le16(IIlIl->IIlllI.lIIlIIlI);IlllIlI->wLength=
cpu_to_le16(IIlIl->IIlllI.IllllI);usb_fill_control_urb(IlllI,lIlII->IIIll->llIII
,usb_rcvctrlpipe(lIlII->IIIll->llIII,(0x1201+211-0x12d4)),(unsigned char*)
IlllIlI,lIlII->lIIIll.llIIl,IIlIl->IIlllI.IllllI,lIIIllIIl,lIlII);if(
atomic_cmpxchg(&lIlII->state,IIIIlll,IIIlIlI)!=IIIIlll){IlIlI=-ECONNRESET;break;
}IlIlI=usb_submit_urb(IlllI,llllI);if(unlikely(IlIlI<(0x1553+3751-0x23fa))){
lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x67\x65\x74\x64\x65\x73\x63\x72\x69\x70\x74\x6f\x72\x3a\x20\x75\x73\x62\x5f\x73\x75\x62\x6d\x69\x74\x5f\x75\x72\x62\x20\x66\x61\x69\x6c\x65\x64\x20\x77\x69\x74\x68\x20\x65\x72\x72\x6f\x72\x20\x25\x64" "\n"
,IlIlI);break;}}while((0xc84+4808-0x1f4c));if(unlikely(IlIlI<(0x269+3907-0x11ac)
)){llIIlIIIl(lIlII,IlIlI,llllI);IIlIll(lIlII,IlIlI);}}void llIIlIIIl(struct 
lIIll*lIlII,int status,gfp_t llllI){IIlII IIlIl=(IIlII)(lIlII+
(0x1079+1951-0x1817));IIlIl->IIlllI.IllllI=(0x1262+1725-0x191f);IIlIl->IlIII.
IIIII=sizeof(IIlIl->IIlllI)+IIlIl->IIlllI.IllllI;IIlIl->IlIII.Status=status;}
void lIlIIIllI(struct lIIll*lIlII,gfp_t llllI){int i;int IlIlI=
(0xd2d+2055-0x1534);IIlII IIlIl=(IIlII)(lIlII+(0xf6f+5808-0x261e));do
{
IIlIl->IlIII.Status=(0x53a+1048-0x952);
IllllIII(lIlII->IIIll,lIlII,(0xfc+7766-0x1f52),(0x7ff+1021-0xbfc));if(IIlIl->
lIllIll.lllIllIl==(0x162c+4231-0x26b3)){IlIlI=(0xff3+1342-0x1531);break;}
usb_lock_device(lIlII->IIIll->llIII);







if(lIlII->IIIll->llIII->actconfig==NULL||lIlII->IIIll->llIII->actconfig->desc.
bConfigurationValue!=IIlIl->lIllIll.lllIllIl){usb_unlock_device(lIlII->IIIll->
llIII);
IlIlI=-EINPROGRESS;break;}lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x73\x65\x6c\x65\x63\x74\x63\x6f\x6e\x66\x69\x67\x75\x72\x61\x74\x69\x6f\x6e\x3a\x20\x63\x6f\x6e\x66\x69\x67\x75\x72\x61\x74\x69\x6f\x6e\x20\x61\x6c\x72\x65\x61\x64\x79\x20\x73\x65\x6c\x65\x63\x74\x65\x64" "\n"
);
lIllIlll(lIlII->IIIll);for(i=(0x15d9+270-0x16e7);i<IIlIl->lIllIll.IlllllIl;i++){
struct usb_interface*llIlII;struct usb_host_interface*IlIIlll;llIlII=
usb_ifnum_to_if(lIlII->IIIll->llIII,IIlIl->lIllIll.llIIlII[i].IlIllIl);if(!
llIlII){lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x73\x65\x6c\x65\x63\x74\x63\x6f\x6e\x66\x69\x67\x75\x72\x61\x74\x69\x6f\x6e\x3a\x20\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20\x25\x64\x20\x6e\x6f\x74\x20\x66\x6f\x75\x6e\x64" "\n"
,IIlIl->lIllIll.llIIlII[i].IlIllIl);continue;}IlIIlll=usb_altnum_to_altsetting(
llIlII,IIlIl->lIllIll.llIIlII[i].llIlllI);if(!IlIIlll){lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x73\x65\x6c\x65\x63\x74\x63\x6f\x6e\x66\x69\x67\x75\x72\x61\x74\x69\x6f\x6e\x3a\x20\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20\x25\x64\x20\x61\x6c\x74\x73\x65\x74\x74\x69\x6e\x67\x20\x25\x64\x20\x6e\x6f\x74\x20\x66\x6f\x75\x6e\x64" "\n"
,IIlIl->lIllIll.llIIlII[i].IlIllIl,IIlIl->lIllIll.llIIlII[i].llIlllI);continue;}
if(llIlII->cur_altsetting){if(llIlII->num_altsetting==(0x11ed+3082-0x1df6)){
lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x73\x65\x6c\x65\x63\x74\x63\x6f\x6e\x66\x69\x67\x75\x72\x61\x74\x69\x6f\x6e\x3a\x20\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20\x25\x64\x20\x68\x61\x73\x20\x6f\x6e\x6c\x79\x20\x6f\x6e\x65\x20\x61\x6c\x74\x73\x65\x74\x74\x69\x6e\x67" "\n"
,IIlIl->lIllIll.llIIlII[i].IlIllIl);continue;}if(IlIIlll->desc.bAlternateSetting
==llIlII->cur_altsetting->desc.bAlternateSetting){lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x73\x65\x6c\x65\x63\x74\x63\x6f\x6e\x66\x69\x67\x75\x72\x61\x74\x69\x6f\x6e\x3a\x20\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20\x25\x64\x20\x63\x75\x72\x72\x65\x6e\x74\x20\x61\x6c\x74\x73\x65\x74\x74\x69\x6e\x67\x20\x61\x6c\x72\x65\x61\x64\x79\x20\x73\x65\x74" "\n"
,IIlIl->lIllIll.llIIlII[i].IlIllIl);continue;}}IlIlI=usb_set_interface(lIlII->
IIIll->llIII,IIlIl->lIllIll.llIIlII[i].IlIllIl,IIlIl->lIllIll.llIIlII[i].llIlllI
);if(IlIlI!=(0x304+471-0x4db)){lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x73\x65\x6c\x65\x63\x74\x63\x6f\x6e\x66\x69\x67\x75\x72\x61\x74\x69\x6f\x6e\x3a\x20\x75\x73\x62\x5f\x73\x65\x74\x5f\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20\x66\x61\x69\x6c\x65\x64\x20\x77\x69\x74\x68\x20\x65\x72\x72\x6f\x72\x20\x25\x64" "\n"
,IlIlI);IlIlI=(0xde6+2948-0x196a);
}if(llIlII->cur_altsetting){int IIIIIl;int pipe;for(IIIIIl=(0x9a4+6519-0x231b);
IIIIIl<llIlII->cur_altsetting->desc.bNumEndpoints;IIIIIl++){if(llIlII->
cur_altsetting->endpoint[IIIIIl].desc.bEndpointAddress&(0x404+3851-0x128f)){pipe
=usb_rcvisocpipe(lIlII->IIIll->llIII,llIlII->cur_altsetting->endpoint[IIIIIl].
desc.bEndpointAddress&(0xdc+8702-0x22cb));}else{pipe=usb_sndisocpipe(lIlII->
IIIll->llIII,llIlII->cur_altsetting->endpoint[IIIIIl].desc.bEndpointAddress&
(0x52c+3844-0x1421));}IlllIIlI(lIlII->IIIll,pipe,(0x2cb+1323-0x7f6));}}}
usb_unlock_device(lIlII->IIIll->llIII);}while((0x492+6921-0x1f9b));if(unlikely(
IlIlI<(0x19a+1684-0x82e))){lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x73\x65\x6c\x65\x63\x74\x63\x6f\x6e\x66\x69\x67\x75\x72\x61\x74\x69\x6f\x6e\x3a\x20\x66\x61\x69\x6c\x65\x64\x20\x77\x69\x74\x68\x20\x65\x72\x72\x6f\x72\x20\x25\x64" "\n"
,IlIlI);IlIlIlIl(lIlII,IlIlI,llllI);}IIlIll(lIlII,IlIlI);}void IlIlIlIl(struct 
lIIll*lIlII,int status,gfp_t llllI){IIlII IIlIl=(IIlII)(lIlII+
(0xca8+2945-0x1828));IIlIl->IlIII.Status=status;}void lllIIllll(struct lIIll*
lIlII,gfp_t llllI){int IlIlI=(0xebd+803-0x11e0);IIlII IIlIl=(IIlII)(lIlII+
(0x1888+1634-0x1ee9));
IIlIl->IlIII.Status=(0x7e5+2168-0x105d);if(lIlII->IIIll->llllIIl&&(lIlII->
endpoint==lIlII->IIIll->lIlIIIll||lIlII->endpoint==lIlII->IIIll->lIllllII)){
llIllIll(lIlII->IIIll);}do
{
#if KERNEL_GT_EQ((0x56f+5707-0x1bb8),(0xedc+2588-0x18f2),(0x22d5+987-0x26a6))
int pipe=(0xa8f+5362-0x1f81),IIIIIIlI;struct usb_host_endpoint*ep;ep=(IIlIl->
lIllIII.Flags&IIIllI)?lIlII->IIIll->llIII->ep_in[IIlIl->lIllIII.Endpoint]:lIlII
->IIIll->llIII->ep_out[IIlIl->lIllIII.Endpoint];if(ep){switch(ep->desc.
bmAttributes&USB_ENDPOINT_XFERTYPE_MASK){case USB_ENDPOINT_XFER_ISOC:pipe=(IIlIl
->lIllIII.Flags&IIIllI)?usb_rcvisocpipe(lIlII->IIIll->llIII,IIlIl->lIllIII.
Endpoint):usb_sndisocpipe(lIlII->IIIll->llIII,IIlIl->lIllIII.Endpoint);break;
case USB_ENDPOINT_XFER_BULK:pipe=(IIlIl->lIllIII.Flags&IIIllI)?usb_rcvbulkpipe(
lIlII->IIIll->llIII,IIlIl->lIllIII.Endpoint):usb_sndbulkpipe(lIlII->IIIll->llIII
,IIlIl->lIllIII.Endpoint);break;case USB_ENDPOINT_XFER_INT:pipe=(IIlIl->lIllIII.
Flags&IIIllI)?usb_rcvintpipe(lIlII->IIIll->llIII,IIlIl->lIllIII.Endpoint):
usb_sndintpipe(lIlII->IIIll->llIII,IIlIl->lIllIII.Endpoint);break;case 
USB_ENDPOINT_XFER_CONTROL:default:break;}}
#endif
if(ep&&(ep->desc.bmAttributes&USB_ENDPOINT_XFERTYPE_MASK)==
USB_ENDPOINT_XFER_ISOC){IlllIIlI(lIlII->IIIll,pipe,(0xf79+1399-0x14f0));IIIIIIlI
=usb_pipeendpoint(pipe);
#if KERNEL_GT_EQ((0x11ed+5396-0x26ff),(0xf39+3401-0x1c7c),(0xb0a+3670-0x1942))
if(usb_pipein(pipe)){IIIIIIlI|=USB_DIR_IN;}usb_reset_endpoint(lIlII->IIIll->
llIII,IIIIIIlI);
#else
usb_settoggle(lIlII->IIIll->llIII,IIIIIIlI,usb_pipeout(pipe),(0xc41+1488-0x1211)
);
#endif
IlIlI=(0x17e7+2167-0x205e);}else{IlIlI=usb_clear_halt(lIlII->IIIll->llIII,pipe);
}}while((0xcb7+1419-0x1242));if(unlikely(IlIlI<(0x2f2+3478-0x1088))){lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x63\x6c\x65\x61\x72\x73\x74\x61\x6c\x6c\x3a\x20\x66\x61\x69\x6c\x65\x64\x20\x77\x69\x74\x68\x20\x65\x72\x72\x6f\x72\x20\x25\x64" "\n"
,IlIlI);lIllIIlIl(lIlII,IlIlI,llllI);}IIlIll(lIlII,IlIlI);}void lIllIIlIl(struct
 lIIll*lIlII,int status,gfp_t llllI){IIlII IIlIl=(IIlII)(lIlII+
(0x2b9+1370-0x812));IIlIl->IlIII.Status=status;}void lIllIlllI(struct lIIll*
lIlII,gfp_t llllI){IIlII IIlIl=(IIlII)(lIlII+(0xcb+6357-0x199f));IIlIl->IlIII.
Status=(0x429+6639-0x1e18);IIlIl->llIllIII.lIlllIIIl=
usb_get_current_frame_number(lIlII->IIIll->llIII);IIlIll(lIlII,
(0xc9c+3883-0x1bc7));}void lIlIllIIl(struct lIIll*lIlII,int status,gfp_t llllI){
IIlII IIlIl=(IIlII)(lIlII+(0x5d6+6539-0x1f60));IIlIl->llIllIII.lIlllIIIl=
(0x1462+395-0x15ed);IIlIl->IlIII.Status=status;}void llllIllll(struct lIIll*
lIlII,gfp_t llllI){IIlII IIlIl=(IIlII)(lIlII+(0x2106+663-0x239c));struct 
usb_interface*llIlII;struct usb_host_interface*IlIIlll;
IIlIl->IlIII.Status=(0x12d7+321-0x1418);usb_lock_device(lIlII->IIIll->llIII);do{
llIlII=usb_ifnum_to_if(lIlII->IIIll->llIII,IIlIl->IlIIIIl.IlIllIl);if(!llIlII){
lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x73\x65\x6c\x65\x63\x74\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x3a\x20\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20\x25\x64\x20\x6e\x6f\x74\x20\x66\x6f\x75\x6e\x64" "\n"
,IIlIl->IlIIIIl.llIlllI);break;}


llIIllIll(lIlII->IIIll,llIlII,lIlII,(0xc63+2112-0x14a3));IlIIlll=
usb_altnum_to_altsetting(llIlII,IIlIl->IlIIIIl.llIlllI);if(!IlIIlll){lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x73\x65\x6c\x65\x63\x74\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x3a\x20\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20\x25\x64\x20\x61\x6c\x74\x73\x65\x74\x74\x69\x6e\x67\x20\x25\x64\x20\x6e\x6f\x74\x20\x66\x6f\x75\x6e\x64" "\n"
,IIlIl->IlIIIIl.IlIllIl,IIlIl->IlIIIIl.llIlllI);break;}if(llIlII->cur_altsetting
){if(llIlII->num_altsetting==(0x67c+4233-0x1704)){lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x73\x65\x6c\x65\x63\x74\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x3a\x20\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20\x25\x64\x20\x68\x61\x73\x20\x6f\x6e\x6c\x79\x20\x6f\x6e\x65\x20\x61\x6c\x74\x73\x65\x74\x74\x69\x6e\x67" "\n"
,IIlIl->IlIIIIl.IlIllIl);break;}if(IlIIlll->desc.bAlternateSetting==llIlII->
cur_altsetting->desc.bAlternateSetting){lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x73\x65\x6c\x65\x63\x74\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x3a\x20\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20\x25\x64\x20\x63\x75\x72\x72\x65\x6e\x74\x20\x61\x6c\x74\x73\x65\x74\x74\x69\x6e\x67\x20\x61\x6c\x72\x65\x61\x64\x79\x20\x73\x65\x74" "\n"
,IIlIl->IlIIIIl.IlIllIl);break;}}IIlIl->IlIII.Status=usb_set_interface(lIlII->
IIIll->llIII,IIlIl->IlIIIIl.IlIllIl,IIlIl->IlIIIIl.llIlllI);if(IIlIl->IlIII.
Status!=(0x502+6256-0x1d72)){lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x73\x65\x6c\x65\x63\x74\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x3a\x20\x75\x73\x62\x5f\x73\x65\x74\x5f\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20\x66\x61\x69\x6c\x65\x64\x20\x77\x69\x74\x68\x20\x65\x72\x72\x6f\x72\x20\x25\x64" "\n"
,IIlIl->IlIII.Status);}if(llIlII->cur_altsetting){int IIIIIl;int pipe;for(IIIIIl
=(0x2c7+7697-0x20d8);IIIIIl<llIlII->cur_altsetting->desc.bNumEndpoints;IIIIIl++)
{if(llIlII->cur_altsetting->endpoint[IIIIIl].desc.bEndpointAddress&
(0x3bc+8715-0x2547)){pipe=usb_rcvisocpipe(lIlII->IIIll->llIII,llIlII->
cur_altsetting->endpoint[IIIIIl].desc.bEndpointAddress&(0x3a6+4859-0x1692));}
else{pipe=usb_sndisocpipe(lIlII->IIIll->llIII,llIlII->cur_altsetting->endpoint[
IIIIIl].desc.bEndpointAddress&(0x13f+1008-0x520));}IlllIIlI(lIlII->IIIll,pipe,
(0x11b1+446-0x136f));}}}while((0x1217+3-0x121a));if(!lIlII->IIIll->llllIIl)
{
lIllIlll(lIlII->IIIll);}usb_unlock_device(lIlII->IIIll->llIII);IIlIll(lIlII,
(0xa22+6316-0x22ce));}void IlIlIlIll(struct lIIll*lIlII,int status,gfp_t llllI){
IIlII IIlIl=(IIlII)(lIlII+(0x8c8+6651-0x22c2));IIlIl->IlIII.Status=status;}void 
IIIlIlIIl(struct lIIll*lIlII,gfp_t llllI){IIlII IIlIl=(IIlII)(lIlII+
(0x1476+2181-0x1cfa));enum usb_device_state state;usb_lock_device(lIlII->IIIll->
llIII);state=lIlII->IIIll->llIII->state;usb_unlock_device(lIlII->IIIll->llIII);
IIlIl->IlIII.Status=(0xa7a+7155-0x266d);IIlIl->lIlIlIll.IIllIIll=
(0xf9f+2768-0x1a6f);if(state!=USB_STATE_SUSPENDED&&state!=USB_STATE_NOTATTACHED)
{IIlIl->lIlIlIll.IIllIIll|=IllIlIIlI;if(state==USB_STATE_CONFIGURED){IIlIl->
lIlIlIll.IIllIIll|=IIlIlIlIl;}}IIlIll(lIlII,(0x353+5970-0x1aa5));}void llIlIIlII
(struct lIIll*lIlII,int status,gfp_t llllI){IIlII IIlIl=(IIlII)(lIlII+
(0xa67+5463-0x1fbd));IIlIl->lIlIlIll.IIllIIll=(0x65f+5387-0x1b6a);IIlIl->IlIII.
Status=status;}void lIIllIlII(struct lIIll*lIlII,gfp_t llllI){IIlII IIlIl=(IIlII
)(lIlII+(0x22a5+718-0x2572));IIlIl->IlIII.Status=-(0x74c+1416-0xcd3);if(lIlII->
IIIll->llllIIl)
{llIllIll(lIlII->IIIll);}if(usb_lock_device_for_reset(lIlII->IIIll->llIII,NULL)
>=(0x107a+2388-0x19ce)){
IIlIl->IlIII.Status=usb_reset_device(lIlII->IIIll->llIII);usb_unlock_device(
lIlII->IIIll->llIII);}if(IIlIl->IlIII.Status!=(0x7e2+518-0x9e8)){lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x72\x65\x73\x65\x74\x70\x6f\x72\x74\x3a\x20\x66\x61\x69\x6c\x65\x64\x20\x77\x69\x74\x68\x20\x65\x72\x72\x6f\x72\x20\x25\x64" "\n"
,IIlIl->IlIII.Status);}IIlIll(lIlII,IIlIl->IlIII.Status);}void lllIlIllI(struct 
lIIll*lIlII,int status,gfp_t llllI){IIlII IIlIl=(IIlII)(lIlII+
(0x8d4+7382-0x25a9));IIlIl->IlIII.Status=status;}void lIIIIllIl(struct lIIll*
lIlII,gfp_t llllI){IIlII IIlIl=(IIlII)(lIlII+(0x694+4781-0x1940));IIlIl->IlIII.
Status=(0xf9b+3026-0x1b6d);
IlllIIlII(lIlII->IIIll,lIlII->lIlIl,lIlII);lIlII->IlllllI=(0x935+1963-0x10df);
IIlIll(lIlII,(0x1717+3629-0x2544));}void IlIllIIIl(struct lIIll*lIlII,gfp_t 
llllI){IIlII IIlIl=(IIlII)(lIlII+(0xb7a+2930-0x16eb));int endpoint;endpoint=
IIlIl->IlIlllll.Endpoint;endpoint|=(IIlIl->IlIlllll.Flags&IIIllI)?
(0x1602+165-0x1627):(0x364+8052-0x22d8);IIlIl->IlIII.Status=(0xc60+2998-0x1816);

llIIlIIll(lIlII->IIIll,endpoint,lIlII);IIlIll(lIlII,(0x1504+4123-0x251f));}void 
IllIIIlll(struct lIIll*lIlII,int status,gfp_t llllI){IIlII IIlIl=(IIlII)(lIlII+
(0x1252+2688-0x1cd1));IIlIl->IlIII.Status=status;}void lIIlIIlIl(struct lIIll*
lIlII,gfp_t llllI){IIlII IIlIl=(IIlII)(lIlII+(0x1ab3+889-0x1e2b));int IlIlI=
(0x1040+1839-0x176f);struct usb_ctrlrequest*IlllIlI=NULL;do{struct urb*IlllI;int
 pipe;IlllI=lIlIIlIl((0x5a0+4230-0x1626),llllI);if(unlikely(!IlllI)){lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x63\x6f\x6e\x74\x72\x6f\x6c\x74\x72\x61\x6e\x73\x66\x65\x72\x3a\x20\x75\x73\x62\x5f\x61\x6c\x6c\x6f\x63\x5f\x75\x72\x62\x20\x66\x61\x69\x6c\x65\x64" "\n"
);IlIlI=-ENOMEM;break;}lIlII->lIIIll.IlllI=IlllI;IlllIlI=IllIllI(sizeof(*IlllIlI
),llllI);if(!IlllIlI){lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x63\x6f\x6e\x74\x72\x6f\x6c\x74\x72\x61\x6e\x73\x66\x65\x72\x3a\x20\x75\x73\x62\x5f\x61\x6c\x6c\x6f\x63\x5f\x75\x72\x62\x20\x66\x61\x69\x6c\x65\x64" "\n"
);IlIlI=-ENOMEM;break;}IlllIlI->bRequestType=IIlIl->lllIII.IIllIll;IlllIlI->
bRequest=IIlIl->lllIII.IIIIllIII;IlllIlI->wValue=cpu_to_le16(IIlIl->lllIII.
IlIlIlII);IlllIlI->wIndex=cpu_to_le16(IIlIl->lllIII.IIlIlllIl);IlllIlI->wLength=
cpu_to_le16(IIlIl->lllIII.IllllI);pipe=(IIlIl->lllIII.Flags&IIIllI)?
usb_rcvctrlpipe(lIlII->IIIll->llIII,IIlIl->lllIII.Endpoint):usb_sndctrlpipe(
lIlII->IIIll->llIII,IIlIl->lllIII.Endpoint);usb_fill_control_urb(IlllI,lIlII->
IIIll->llIII,pipe,(unsigned char*)IlllIlI,lIlII->lIIIll.llIIl,IIlIl->lllIII.
IllllI,lIlllIll,lIlII);if(atomic_cmpxchg(&lIlII->state,IIIIlll,IIIlIlI)!=IIIIlll
){IlIlI=-ECONNRESET;break;}IlIlI=usb_submit_urb(IlllI,llllI);if(unlikely(IlIlI<
(0x1634+4102-0x263a))){lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x63\x6f\x6e\x74\x72\x6f\x6c\x74\x72\x61\x6e\x73\x66\x65\x72\x3a\x20\x75\x73\x62\x5f\x73\x75\x62\x6d\x69\x74\x5f\x75\x72\x62\x20\x66\x61\x69\x6c\x65\x64\x20\x77\x69\x74\x68\x20\x65\x72\x72\x6f\x72\x20\x25\x64" "\n"
,IlIlI);}}while((0xcc6+2531-0x16a9));if(unlikely(IlIlI<(0xc95+5821-0x2352))){
llIlIlIll(lIlII,IlIlI,llllI);IIlIll(lIlII,IlIlI);}}void llIlIlIll(struct lIIll*
lIlII,int status,gfp_t llllI){IIlII IIlIl=(IIlII)(lIlII+(0xb9a+2126-0x13e7));
IIlIl->lllIII.IllllI=(0x14ea+2407-0x1e51);IIlIl->IlIII.IIIII=sizeof(IIlIl->
lllIII);IIlIl->IlIII.Status=status;}void lIlllIIlI(struct lIIll*lIlII,gfp_t 
llllI){switch(lIlII->IlllIl){case lIlIIlI:IlIIllllI(lIlII,llllI);return;case 
IlIIIlI:lllIllIlI(lIlII,llllI);return;
#if KERNEL_GT_EQ((0xa3a+2654-0x1496),(0x91c+2973-0x14b3),(0x683+699-0x91f))
case IIlIIII:IllllIIIl(lIlII,llllI);return;
#endif
default:llIIlll(lIlII,-EINVAL,llllI);IIlIll(lIlII,-EINVAL);return;}}void 
IlIIllllI(struct lIIll*lIlII,gfp_t llllI){IIlII IIlIl=(IIlII)(lIlII+
(0x17fb+3816-0x26e2));int IlIlI=(0x283+221-0x360);do{struct urb*IlllI;int pipe=(
IIlIl->lllllI.Flags&IIIllI)?usb_rcvbulkpipe(lIlII->IIIll->llIII,IIlIl->lllllI.
Endpoint):usb_sndbulkpipe(lIlII->IIIll->llIII,IIlIl->lllllI.Endpoint);IlllI=
lIlIIlIl((0xc13+1356-0x115f),llllI);if(unlikely(!IlllI)){lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x62\x75\x6c\x6b\x74\x72\x61\x6e\x73\x66\x65\x72\x3a\x20\x75\x73\x62\x5f\x61\x6c\x6c\x6f\x63\x5f\x75\x72\x62\x20\x66\x61\x69\x6c\x65\x64" "\n"
);IlIlI=-ENOMEM;break;}lIlII->lIIIll.IlllI=IlllI;usb_fill_bulk_urb(IlllI,lIlII->
IIIll->llIII,pipe,lIlII->lIIIll.llIIl,IIlIl->lllllI.IllllI,llllllII,lIlII);if(
IIlIl->lllllI.Flags&IIIllI){if((IIlIl->lllllI.Flags&lIIlIll)==
(0x155a+1639-0x1bc1)){IlllI->transfer_flags|=URB_SHORT_NOT_OK;}}if(unlikely(
atomic_cmpxchg(&lIlII->state,IIIIlll,IIIlIlI)!=IIIIlll)){IlIlI=-ECONNRESET;break
;}IlIlI=usb_submit_urb(IlllI,llllI);if(unlikely(IlIlI<(0x82f+4729-0x1aa8))){
lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x73\x6f\x6c\x69\x64\x5f\x62\x75\x6c\x6b\x74\x72\x61\x6e\x73\x66\x65\x72\x3a\x20\x75\x73\x62\x5f\x73\x75\x62\x6d\x69\x74\x5f\x75\x72\x62\x20\x66\x61\x69\x6c\x65\x64\x20\x77\x69\x74\x68\x20\x65\x72\x72\x6f\x72\x20\x25\x64" "\n"
,IlIlI);}}while((0x1b0b+320-0x1c4b));if(unlikely(IlIlI<(0xdab+5456-0x22fb))){
llIIlll(lIlII,IlIlI,llllI);IIlIll(lIlII,IlIlI);}}
#if KERNEL_GT_EQ((0xbff+2889-0x1746),(0xe0+7448-0x1df2),(0x1375+1174-0x17ec))
void IllllIIIl(struct lIIll*lIlII,gfp_t llllI){IIlII IIlIl=(IIlII)(lIlII+
(0x878+2257-0x1148));int IlIlI=(0x5b0+4490-0x173a);do{struct urb*IlllI;int pipe=
(IIlIl->lllllI.Flags&IIIllI)?usb_rcvbulkpipe(lIlII->IIIll->llIII,IIlIl->lllllI.
Endpoint):usb_sndbulkpipe(lIlII->IIIll->llIII,IIlIl->lllllI.Endpoint);IlllI=
lIlIIlIl((0x12e3+4742-0x2569),llllI);if(unlikely(!IlllI)){lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x62\x75\x6c\x6b\x74\x72\x61\x6e\x73\x66\x65\x72\x3a\x20\x75\x73\x62\x5f\x61\x6c\x6c\x6f\x63\x5f\x75\x72\x62\x20\x66\x61\x69\x6c\x65\x64" "\n"
);IlIlI=-ENOMEM;break;}lIlII->IlIIIII.IlllI=IlllI;usb_fill_bulk_urb(IlllI,lIlII
->IIIll->llIII,pipe,NULL,IIlIl->lllllI.IllllI,llllllII,lIlII);IlllI->sg=lIlII->
IlIIIII.sg.lIIlIIl;IlllI->num_sgs=lIlII->IlIIIII.sg.num_sgs;if(IIlIl->lllllI.
Flags&IIIllI){if((IIlIl->lllllI.Flags&lIIlIll)==(0x767+4857-0x1a60)){IlllI->
transfer_flags|=URB_SHORT_NOT_OK;}}if(unlikely(atomic_cmpxchg(&lIlII->state,
IIIIlll,IIIlIlI)!=IIIIlll)){IlIlI=-ECONNRESET;break;}IlIlI=usb_submit_urb(IlllI,
llllI);if(unlikely(IlIlI<(0xa3b+4808-0x1d03))){lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x73\x6f\x6c\x69\x64\x5f\x62\x75\x6c\x6b\x74\x72\x61\x6e\x73\x66\x65\x72\x3a\x20\x75\x73\x62\x5f\x73\x75\x62\x6d\x69\x74\x5f\x75\x72\x62\x20\x66\x61\x69\x6c\x65\x64\x20\x77\x69\x74\x68\x20\x65\x72\x72\x6f\x72\x20\x25\x64" "\n"
,IlIlI);}}while((0x5e0+6641-0x1fd1));if(unlikely(IlIlI<(0xa33+701-0xcf0))){
llIIlll(lIlII,IlIlI,llllI);IIlIll(lIlII,IlIlI);}}
#endif
void lllIllIlI(struct lIIll*lIlII,gfp_t llllI){IIlII IIlIl=(IIlII)(lIlII+
(0x13eb+2048-0x1bea));int IlIlI=(0xb5c+2585-0x1575);do{int pipe;pipe=(IIlIl->
lllllI.Flags&IIIllI)?usb_rcvbulkpipe(lIlII->IIIll->llIII,IIlIl->lllllI.Endpoint)
:usb_sndbulkpipe(lIlII->IIIll->llIII,IIlIl->lllllI.Endpoint);lIlII->lIllII.
llIIlIl=lllIlIIII(pipe,(0x1f7+1088-0x637),!!(IIlIl->lllllI.Flags&lIIlIll),lIlII
->IIIll->IIllIIl,lIlII->IIIll->llIII,lIlII->lIllII.lIIlll,lIlII,IIIlIlIII,llllI)
;if(unlikely(lIlII->lIllII.llIIlIl==NULL)){lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x62\x75\x6c\x6b\x74\x72\x61\x6e\x73\x66\x65\x72\x5f\x70\x61\x72\x74\x69\x74\x69\x6f\x6e\x65\x64\x3a\x20\x75\x73\x62\x64\x5f\x75\x63\x5f\x61\x6c\x6c\x6f\x63\x20\x66\x61\x69\x6c\x65\x64" "\n"
);IlIlI=-ENOMEM;break;}if(unlikely(atomic_cmpxchg(&lIlII->state,IIIIlll,IIIlIlI)
!=IIIIlll)){IlIlI=-ECONNRESET;break;}IlIlI=IlllIllIl(lIlII->lIllII.llIIlIl);if(
unlikely(IlIlI<(0x5f8+1131-0xa63))){lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x62\x75\x6c\x6b\x74\x72\x61\x6e\x73\x66\x65\x72\x5f\x70\x61\x72\x74\x69\x74\x69\x6f\x6e\x65\x64\x3a\x20\x75\x73\x62\x64\x5f\x75\x63\x5f\x73\x75\x62\x6d\x69\x74\x20\x66\x61\x69\x6c\x65\x64\x20\x77\x69\x74\x68\x20\x65\x72\x72\x6f\x72\x20\x25\x64\x20\x66\x6f\x72\x20\x55\x6e\x69\x71\x75\x65\x49\x64\x3d\x30\x78\x25\x2e\x38\x58\x25\x2e\x38\x58" "\n"
,IlIlI,(lllII)(IIlIl->IlIII.IIIlIl>>(0x656+8222-0x2654)),(lllII)(IIlIl->IlIII.
IIIlIl));}}while((0x8d8+4890-0x1bf2));if(unlikely(IlIlI<(0xd68+4322-0x1e4a))){
llIIlll(lIlII,IlIlI,llllI);IIlIll(lIlII,IlIlI);}}void llIIlll(struct lIIll*lIlII
,int status,gfp_t llllI){IIlII IIlIl=(IIlII)(lIlII+(0x11d+2004-0x8f0));IIlIl->
lllllI.IllllI=(0x1081+1266-0x1573);IIlIl->IlIII.IIIII=sizeof(IIlIl->lllllI)+
IIlIl->lllllI.IllllI;IIlIl->IlIII.Status=status;}void IIIIllIIl(struct lIIll*
lIlII,gfp_t llllI){switch(lIlII->IlllIl){case lIlIIlI:IIllIlIII(lIlII,llllI);
return;
#if KERNEL_GT_EQ((0x1a9a+2529-0x2479),(0x2a1+1147-0x716),(0x357+7696-0x2148))
case IIlIIII:IlIIlIIII(lIlII,llllI);return;
#endif
default:IlllIlIl(lIlII,-EINVAL,llllI);IIlIll(lIlII,-EINVAL);return;}}void 
IIllIlIII(struct lIIll*lIlII,gfp_t llllI){IIlII IIlIl=(IIlII)(lIlII+
(0x3db+782-0x6e8));int IlIlI=(0xb37+2313-0x1440);do{int pipe;struct urb*IlllI;
struct usb_host_endpoint*ep;IlllI=lIlIIlIl((0xcdb+3615-0x1afa),llllI);if(
unlikely(!IlllI)){lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x74\x72\x61\x6e\x73\x66\x65\x72\x3a\x20\x75\x73\x62\x5f\x61\x6c\x6c\x6f\x63\x5f\x75\x72\x62\x20\x66\x61\x69\x6c\x65\x64" "\n"
);IlIlI=-ENOMEM;break;}lIlII->lIIIll.IlllI=IlllI;pipe=(IIlIl->llIIlI.Flags&
IIIllI)?usb_rcvintpipe(lIlII->IIIll->llIII,IIlIl->llIIlI.Endpoint):
usb_sndintpipe(lIlII->IIIll->llIII,IIlIl->llIIlI.Endpoint);lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x74\x72\x61\x6e\x73\x66\x65\x72\x3a\x20\x69\x6e\x74\x65\x72\x76\x61\x6c\x20\x69\x73\x20\x25\x64" "\n"
,IIlIl->llIIlI.Interval);usb_fill_int_urb(IlllI,lIlII->IIIll->llIII,pipe,lIlII->
lIIIll.llIIl,IIlIl->llIIlI.IllllI,IllllIll,lIlII,(0x2a8+1203-0x75a));if(likely(
IIlIl->llIIlI.Interval)){IlllI->interval=IIlIl->llIIlI.Interval;}else{
#if KERNEL_GT_EQ((0x875+2193-0x1104),(0x7f5+6624-0x21cf),(0x17ff+1453-0x1da2))
ep=(IIlIl->llIIlI.Flags&IIIllI)?lIlII->IIIll->llIII->ep_in[IIlIl->llIIlI.
Endpoint]:lIlII->IIIll->llIII->ep_out[IIlIl->llIIlI.Endpoint];lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x74\x72\x61\x6e\x73\x66\x65\x72\x3a\x20\x64\x69\x72\x65\x63\x74\x69\x6f\x6e\x3d\x25\x73\x20\x65\x70\x3d\x30\x78\x25\x70\x20\x65\x70\x5f\x69\x6e\x5b\x25\x64\x5d\x3d\x30\x78\x25\x70\x20\x65\x70\x5f\x6f\x75\x74\x5b\x25\x64\x5d\x3d\x30\x78\x25\x70" "\n"
,(IIlIl->llIIlI.Flags&IIIllI)?"\x69\x6e":"\x6f\x75\x74",ep,IIlIl->llIIlI.
Endpoint,lIlII->IIIll->llIII->ep_in[IIlIl->llIIlI.Endpoint],IIlIl->llIIlI.
Endpoint,lIlII->IIIll->llIII->ep_out[IIlIl->llIIlI.Endpoint]);if(ep){if(lIlII->
IIIll->llIII->speed==USB_SPEED_HIGH){IlllI->interval=(0x1079+355-0x11db)<<(ep->
desc.bInterval-(0x1cc2+2054-0x24c7));}else{IlllI->interval=ep->desc.bInterval;}}
else{IlllI->interval=(0x30d+241-0x3fd);}
#else
IlllI->interval=(0x8b8+6887-0x239e);
#endif
}if(IIlIl->llIIlI.Flags&IIIllI){if((IIlIl->llIIlI.Flags&lIIlIll)==
(0x255+536-0x46d)){IlllI->transfer_flags|=URB_SHORT_NOT_OK;}}if(atomic_cmpxchg(&
lIlII->state,IIIIlll,IIIlIlI)!=IIIIlll){IlIlI=-ECONNRESET;break;}while(
(0x56c+2358-0xea1)){IlIlI=usb_submit_urb(IlllI,llllI);if((IlIlI==-ENOMEM)&&(
lIlII->IIIll->llIII->speed==USB_SPEED_HIGH)&&(IlllI->interval<=
(0x7af+3932-0x168b))){
IlllI->interval<<=(0x610+1329-0xb40);}else{break;}yield();}if(unlikely(IlIlI<
(0x193+9276-0x25cf))){lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x74\x72\x61\x6e\x73\x66\x65\x72\x3a\x20\x75\x73\x62\x5f\x73\x75\x62\x6d\x69\x74\x5f\x75\x72\x62\x20\x66\x61\x69\x6c\x65\x64\x20\x77\x69\x74\x68\x20\x65\x72\x72\x6f\x72\x20\x25\x64\x20\x66\x6f\x72\x20\x55\x6e\x69\x71\x75\x65\x49\x64\x3d\x30\x78\x25\x2e\x38\x58\x25\x2e\x38\x58" "\n"
,IlIlI,(lllII)(IIlIl->IlIII.IIIlIl>>(0x1f76+55-0x1f8d)),(lllII)(IIlIl->IlIII.
IIIlIl));}}while((0x605+4759-0x189c));if(unlikely(IlIlI<(0x1341+2437-0x1cc6))){
IlllIlIl(lIlII,IlIlI,llllI);IIlIll(lIlII,IlIlI);}}
#if KERNEL_GT_EQ((0xc02+225-0xce1),(0x37f+1343-0x8b8),(0x2ad+2127-0xadd))
void IlIIlIIII(struct lIIll*lIlII,gfp_t llllI){IIlII IIlIl=(IIlII)(lIlII+
(0x4e1+7704-0x22f8));int IlIlI=(0x191+8166-0x2177);do{int pipe;struct urb*IlllI;
struct usb_host_endpoint*ep;IlllI=lIlIIlIl((0x506+7950-0x2414),llllI);if(
unlikely(!IlllI)){lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x74\x72\x61\x6e\x73\x66\x65\x72\x5f\x73\x67\x3a\x20\x75\x73\x62\x5f\x61\x6c\x6c\x6f\x63\x5f\x75\x72\x62\x20\x66\x61\x69\x6c\x65\x64" "\n"
);IlIlI=-ENOMEM;break;}lIlII->IlIIIII.IlllI=IlllI;pipe=(IIlIl->llIIlI.Flags&
IIIllI)?usb_rcvintpipe(lIlII->IIIll->llIII,IIlIl->llIIlI.Endpoint):
usb_sndintpipe(lIlII->IIIll->llIII,IIlIl->llIIlI.Endpoint);lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x74\x72\x61\x6e\x73\x66\x65\x72\x3a\x20\x69\x6e\x74\x65\x72\x76\x61\x6c\x20\x69\x73\x20\x25\x64" "\n"
,IIlIl->llIIlI.Interval);usb_fill_int_urb(IlllI,lIlII->IIIll->llIII,pipe,NULL,
IIlIl->llIIlI.IllllI,IllllIll,lIlII,(0x14a9+3995-0x2443));IlllI->sg=lIlII->
IlIIIII.sg.lIIlIIl;IlllI->num_sgs=lIlII->IlIIIII.sg.num_sgs;if(likely(IIlIl->
llIIlI.Interval)){IlllI->interval=IIlIl->llIIlI.Interval;}else{
#if KERNEL_GT_EQ((0x12f+6500-0x1a91),(0x16c9+2916-0x2227),(0x13f7+3168-0x204d))
ep=(IIlIl->llIIlI.Flags&IIIllI)?lIlII->IIIll->llIII->ep_in[IIlIl->llIIlI.
Endpoint]:lIlII->IIIll->llIII->ep_out[IIlIl->llIIlI.Endpoint];lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x74\x72\x61\x6e\x73\x66\x65\x72\x3a\x20\x64\x69\x72\x65\x63\x74\x69\x6f\x6e\x3d\x25\x73\x20\x65\x70\x3d\x30\x78\x25\x70\x20\x65\x70\x5f\x69\x6e\x5b\x25\x64\x5d\x3d\x30\x78\x25\x70\x20\x65\x70\x5f\x6f\x75\x74\x5b\x25\x64\x5d\x3d\x30\x78\x25\x70" "\n"
,(IIlIl->llIIlI.Flags&IIIllI)?"\x69\x6e":"\x6f\x75\x74",ep,IIlIl->llIIlI.
Endpoint,lIlII->IIIll->llIII->ep_in[IIlIl->llIIlI.Endpoint],IIlIl->llIIlI.
Endpoint,lIlII->IIIll->llIII->ep_out[IIlIl->llIIlI.Endpoint]);if(ep){if(lIlII->
IIIll->llIII->speed==USB_SPEED_HIGH){IlllI->interval=(0x139+7518-0x1e96)<<(ep->
desc.bInterval-(0xfe4+2435-0x1966));}else{IlllI->interval=ep->desc.bInterval;}}
else{IlllI->interval=(0x4a7+5659-0x1ac1);}
#else
IlllI->interval=(0x20e5+185-0x219d);
#endif
}if(IIlIl->llIIlI.Flags&IIIllI){if((IIlIl->llIIlI.Flags&lIIlIll)==
(0x1307+4522-0x24b1)){IlllI->transfer_flags|=URB_SHORT_NOT_OK;}}if(
atomic_cmpxchg(&lIlII->state,IIIIlll,IIIlIlI)!=IIIIlll){IlIlI=-ECONNRESET;break;
}while((0x11b6+2475-0x1b60)){IlIlI=usb_submit_urb(IlllI,llllI);if((IlIlI==-
ENOMEM)&&(lIlII->IIIll->llIII->speed==USB_SPEED_HIGH)&&(IlllI->interval<=
(0x73d+7118-0x228b))){
IlllI->interval<<=(0x1144+3407-0x1e92);}else{break;}yield();}if(unlikely(IlIlI<
(0x659+6068-0x1e0d))){lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x74\x72\x61\x6e\x73\x66\x65\x72\x3a\x20\x75\x73\x62\x5f\x73\x75\x62\x6d\x69\x74\x5f\x75\x72\x62\x20\x66\x61\x69\x6c\x65\x64\x20\x77\x69\x74\x68\x20\x65\x72\x72\x6f\x72\x20\x25\x64\x20\x66\x6f\x72\x20\x55\x6e\x69\x71\x75\x65\x49\x64\x3d\x30\x78\x25\x2e\x38\x58\x25\x2e\x38\x58" "\n"
,IlIlI,(lllII)(IIlIl->IlIII.IIIlIl>>(0xdd8+6209-0x25f9)),(lllII)(IIlIl->IlIII.
IIIlIl));}}while((0x1217+3258-0x1ed1));if(unlikely(IlIlI<(0x2fc+7248-0x1f4c))){
IlllIlIl(lIlII,IlIlI,llllI);IIlIll(lIlII,IlIlI);}}
#endif
void IlllIlIl(struct lIIll*lIlII,int status,gfp_t llllI){IIlII IIlIl=(IIlII)(
lIlII+(0xa5+4346-0x119e));IIlIl->llIIlI.IllllI=(0x19bc+870-0x1d22);IIlIl->IlIII.
IIIII=sizeof(IIlIl->llIIlI)+IIlIl->llIIlI.IllllI;IIlIl->IlIII.Status=status;}
void llIIlllIl(struct lIIll*lIlII,gfp_t llllI){switch(lIlII->IlllIl){case 
lIlIIlI:llllIIIII(lIlII,llllI);return;case IlIIIlI:llIIllIlI(lIlII,llllI);return
;default:lIIIIlIl(lIlII,-EINVAL,llllI);IIlIll(lIlII,-EINVAL);return;}}void 
llIIllIlI(struct lIIll*lIlII,gfp_t llllI){IIlII IIlIl=(IIlII)(lIlII+
(0x492+2006-0xc67));int pipe,IlIlI=(0x1917+1401-0x1e90);do{int i,IIIIIl,IIllll,
llllIII,IIllIlII,lIIlIlIl;int IllIIIII;struct urb*IlllI;pipe=(IIlIl->llIll.Flags
&IIIllI)?usb_rcvisocpipe(lIlII->IIIll->llIII,IIlIl->llIll.Endpoint):
usb_sndisocpipe(lIlII->IIIll->llIII,IIlIl->llIll.Endpoint);lIIlIlIl=IIIlIllll(
lIlII->IIIll,pipe);lIlII->lIllII.llIIlIl=lllIlIIII(pipe,IIlIl->llIll.Interval,!!
(IIlIl->llIll.Flags&lIIlIll),lIlII->IIIll->IIllIIl,lIlII->IIIll->llIII,lIlII->
lIllII.lIIlll,lIlII,IllIIIIIl,llllI);if(unlikely(lIlII->lIllII.llIIlIl==NULL)){
lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x69\x73\x6f\x63\x68\x74\x72\x61\x6e\x73\x66\x65\x72\x5f\x70\x61\x72\x74\x69\x74\x69\x6f\x6e\x65\x64\x3a\x20\x75\x73\x62\x64\x5f\x75\x63\x5f\x61\x6c\x6c\x6f\x63\x20\x66\x61\x69\x6c\x65\x64" "\n"
);IlIlI=-ENOMEM;break;}lIlII->lIllII.llIIlIl->IIIlII[(0xb8a+5414-0x20b0)]->
start_frame=IIlIl->llIll.IIlIlIIl;if(!(IIlIl->llIll.Flags&IlIllIIII)){lIlII->
lIllII.llIIlIl->IIIlII[(0x1039+5711-0x2688)]->transfer_flags&=~URB_ISO_ASAP;}


IlllI=lIlII->lIllII.llIIlIl->IIIlII[(0x1c6f+1674-0x22f9)];IllIIIII=
(0x116b+60-0x11a7);for(i=(0xc4d+5011-0x1fe0),IIIIIl=(0x56d+3702-0x13e3),IIllll=
(0x656+7974-0x257c);i<IIlIl->llIll.IIlIlIl;i++,IIllll++){if(IIllll>=IlllI->
number_of_packets){if(++IIIIIl>=lIlII->lIllII.llIIlIl->IIIIl){break;}IllIIIII=
(0x1a81+2195-0x2314);IlllI=lIlII->lIllII.llIIlIl->IIIlII[IIIIIl];IIllll=
(0x89+5916-0x17a5);}IlllI->iso_frame_desc[IIllll].offset=IllIIIII;IlllI->
iso_frame_desc[IIllll].length=IIlIl->llIll.llIIIIl[i].Length;IllIIIII+=IlllI->
iso_frame_desc[IIllll].length;
}


llllIII=llllIllI(lIlII->IIIll,pipe);IIllIlII=usb_get_current_frame_number(lIlII
->IIIll->llIII);if(!(lIlII->lIllII.llIIlIl->IIIlII[(0x21+7276-0x1c8d)]->
transfer_flags&URB_ISO_ASAP)&&(llllIII==(0xbcf+3829-0x1ac4))){llllIII=(IIllIlII+
(0xb16+1991-0x12db))-lIlII->lIllII.llIIlIl->IIIlII[(0x1b6+1642-0x820)]->
start_frame;IlllIIlI(lIlII->IIIll,pipe,llllIII);}if(lIIlIlIl==
(0x335+6760-0x1d9c)){if(lIlII->lIllII.llIIlIl->IIIlII[(0x58f+1912-0xd07)]->
transfer_flags&URB_ISO_ASAP){lIlII->lIllII.llIIlIl->IIIlII[(0x3b2+3892-0x12e6)]
->transfer_flags&=~URB_ISO_ASAP;lIlII->lIllII.llIIlIl->IIIlII[
(0x1f25+782-0x2233)]->start_frame=IIllIlII+(0xc71+1045-0x1085)-llllIII;}}if(!(
lIlII->lIllII.llIIlIl->IIIlII[(0x1188+5322-0x2652)]->transfer_flags&URB_ISO_ASAP
)){lIlII->lIllII.llIIlIl->IIIlII[(0x16f6+2562-0x20f8)]->start_frame+=llllIII;if(
lIlII->lIllII.llIIlIl->IIIlII[(0x89c+4274-0x194e)]->start_frame<IIllIlII+
(0x8a8+6369-0x2188)){IIlIl->IlIII.Status=-EXDEV;IIlIl->IlIII.IIIII=IlIlIlll(
IIlIl);IIlIl->llIll.IllllI=(0x175a+1582-0x1d88);IIlIl->llIll.llIIIIIl=IIlIl->
llIll.IIlIlIl;for(i=(0x1a28+435-0x1bdb);i<IIlIl->llIll.IIlIlIl;i++){IIlIl->llIll
.llIIIIl[i].Status=-EINVAL;IIlIl->llIll.llIIIIl[i].Length=(0x48+8764-0x2284);}
IlIlI=(0x180c+847-0x1b5b);IIlIll(lIlII,-EXDEV);break;}}if(atomic_cmpxchg(&lIlII
->state,IIIIlll,IIIlIlI)!=IIIIlll){IlIlI=-ECONNRESET;break;}IlIlI=IlllIllIl(
lIlII->lIllII.llIIlIl);if(unlikely(IlIlI<(0x1a59+174-0x1b07))){lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x69\x73\x6f\x63\x68\x74\x72\x61\x6e\x73\x66\x65\x72\x5f\x70\x61\x72\x74\x69\x74\x69\x6f\x6e\x65\x64\x3a\x20\x75\x73\x62\x64\x5f\x75\x63\x5f\x73\x75\x62\x6d\x69\x74\x20\x66\x61\x69\x6c\x65\x64\x20\x77\x69\x74\x68\x20\x65\x72\x72\x6f\x72\x20\x25\x64\x20\x66\x6f\x72\x20\x55\x6e\x69\x71\x75\x65\x49\x64\x3d\x30\x78\x25\x2e\x38\x58\x25\x2e\x38\x58" "\n"
,IlIlI,(lllII)(IIlIl->IlIII.IIIlIl>>(0xf36+597-0x116b)),(lllII)(IIlIl->IlIII.
IIIlIl));}}while((0x11ec+1374-0x174a));if(unlikely(IlIlI<(0x559+4375-0x1670))){
IIIlIllI(lIlII->IIIll,pipe);lIIIIlIl(lIlII,IlIlI,llllI);IIlIll(lIlII,IlIlI);}}
void llllIIIII(struct lIIll*lIlII,gfp_t llllI){IIlII IIlIl=(IIlII)(lIlII+
(0x1891+1808-0x1fa0));int pipe,IlIlI=(0x1722+1117-0x1b7f);int IllIIIII;do{int i,
llllIII,IIllIlII,lIIlIlIl;struct urb*IlllI;struct usb_host_endpoint*ep;pipe=(
IIlIl->llIll.Flags&IIIllI)?usb_rcvisocpipe(lIlII->IIIll->llIII,IIlIl->llIll.
Endpoint):usb_sndisocpipe(lIlII->IIIll->llIII,IIlIl->llIll.Endpoint);lIIlIlIl=
IIIlIllll(lIlII->IIIll,pipe);IlllI=lIlIIlIl(IIlIl->llIll.IIlIlIl,llllI);if(
unlikely(!IlllI)){lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x69\x73\x6f\x63\x68\x74\x72\x61\x6e\x73\x66\x65\x72\x5f\x73\x6f\x6c\x69\x64\x3a\x20\x75\x73\x62\x5f\x61\x6c\x6c\x6f\x63\x5f\x75\x72\x62\x20\x66\x61\x69\x6c\x65\x64" "\n"
);IlIlI=-ENOMEM;break;}lIlII->lIIIll.IlllI=IlllI;IlllI->dev=lIlII->IIIll->llIII;
IlllI->pipe=pipe;IlllI->transfer_flags=(IIlIl->llIll.Flags&IlIllIIII)?
URB_ISO_ASAP:(0x1712+3925-0x2667);IlllI->transfer_buffer_length=IIlIl->llIll.
IllllI;IlllI->start_frame=IIlIl->llIll.IIlIlIIl;IlllI->number_of_packets=IIlIl->
llIll.IIlIlIl;IlllI->context=lIlII;IlllI->complete=lIIlIIIIl;IlllI->
transfer_buffer=lIlII->lIIIll.llIIl;if(likely(IIlIl->llIll.Interval)){IlllI->
interval=IIlIl->llIll.Interval;}else{
#if KERNEL_GT_EQ((0x21dd+1259-0x26c6),(0xb82+3499-0x1927),(0xe27+3580-0x1c19))

ep=(IIlIl->llIll.Flags&IIIllI)?lIlII->IIIll->llIII->ep_in[IIlIl->llIll.Endpoint]
:lIlII->IIIll->llIII->ep_out[IIlIl->llIll.Endpoint];if(ep){if(lIlII->IIIll->
llIII->speed==USB_SPEED_HIGH){IlllI->interval=(0x128a+1523-0x187c)<<(ep->desc.
bInterval-(0x3b0+3629-0x11dc));}else{IlllI->interval=ep->desc.bInterval;}}else{
IlllI->interval=(0x2b9+1898-0xa22);}
#else
IlllI->interval=(0x1829+2275-0x210b);
#endif
}lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x69\x73\x6f\x63\x68\x74\x72\x61\x6e\x73\x66\x65\x72\x5f\x73\x6f\x6c\x69\x64\x3a\x20\x69\x6e\x74\x65\x72\x76\x61\x6c\x20\x69\x73\x20\x25\x64" "\n"
,IlllI->interval);for(IllIIIII=(0xc2f+2929-0x17a0),i=(0x7f1+6121-0x1fda);i<IIlIl
->llIll.IIlIlIl;i++){IlllI->iso_frame_desc[i].offset=IllIIIII;IlllI->
iso_frame_desc[i].length=IIlIl->llIll.llIIIIl[i].Length;IllIIIII+=IlllI->
iso_frame_desc[i].length;}


llllIII=llllIllI(lIlII->IIIll,pipe);IIllIlII=usb_get_current_frame_number(lIlII
->IIIll->llIII);if(!(IlllI->transfer_flags&URB_ISO_ASAP)&&(llllIII==
(0x234+4693-0x1489))){llllIII=(IIllIlII+(0x1562+1091-0x19a3))-IlllI->start_frame
;IlllIIlI(lIlII->IIIll,pipe,llllIII);}if(lIIlIlIl==(0x4da+5062-0x189f)){if(IlllI
->transfer_flags&URB_ISO_ASAP){IlllI->transfer_flags&=~URB_ISO_ASAP;IlllI->
start_frame=IIllIlII+(0x1357+4417-0x2497)-llllIII;}}if(!(IlllI->transfer_flags&
URB_ISO_ASAP)){IlllI->start_frame+=llllIII;if(IlllI->start_frame<IIllIlII+
(0xe91+3230-0x1b2e)){IIlIl->IlIII.Status=-EXDEV;IIlIl->IlIII.IIIII=IlIlIlll(
IIlIl);IIlIl->llIll.IllllI=(0xb2a+5816-0x21e2);IIlIl->llIll.llIIIIIl=IIlIl->
llIll.IIlIlIl;for(i=(0x806+1038-0xc14);i<IIlIl->llIll.IIlIlIl;i++){IIlIl->llIll.
llIIIIl[i].Status=-EINVAL;IIlIl->llIll.llIIIIl[i].Length=(0x1bd+9545-0x2706);}
IlIlI=(0x9e2+5879-0x20d9);IIlIll(lIlII,-EXDEV);break;}}lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x69\x73\x6f\x63\x68\x74\x72\x61\x6e\x73\x66\x65\x72\x5f\x73\x6f\x6c\x69\x64\x3a\x20\x66\x6c\x61\x67\x73\x3d\x25\x64\x20\x73\x74\x61\x72\x74\x66\x72\x61\x6d\x65\x3d\x25\x64\x20\x63\x75\x72\x66\x72\x61\x6d\x65\x3d\x25\x64\x20\x64\x65\x6c\x74\x61\x3d\x25\x64" "\n"
,IlllI->transfer_flags,IlllI->start_frame,usb_get_current_frame_number(lIlII->
IIIll->llIII),llllIllI(lIlII->IIIll,pipe));if(atomic_cmpxchg(&lIlII->state,
IIIIlll,IIIlIlI)!=IIIIlll){IlIlI=-ECONNRESET;break;}IlIlI=usb_submit_urb(IlllI,
llllI);if(unlikely(IlIlI<(0x1066+5591-0x263d))){lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x68\x61\x6e\x64\x6c\x65\x5f\x69\x73\x6f\x63\x68\x74\x72\x61\x6e\x73\x66\x65\x72\x5f\x73\x6f\x6c\x69\x64\x3a\x20\x75\x73\x62\x5f\x73\x75\x62\x6d\x69\x74\x5f\x75\x72\x62\x20\x66\x61\x69\x6c\x65\x64\x20\x77\x69\x74\x68\x20\x65\x72\x72\x6f\x72\x20\x25\x64\x20\x66\x6f\x72\x20\x55\x6e\x69\x71\x75\x65\x49\x64\x3d\x30\x78\x25\x6c\x6c\x78" "\n"
,IlIlI,(unsigned long long)IIlIl->IlIII.IIIlIl);}}while((0x192+9028-0x24d6));if(
unlikely(IlIlI<(0x1514+3512-0x22cc))){IIIlIllI(lIlII->IIIll,pipe);lIIIIlIl(lIlII
,IlIlI,llllI);IIlIll(lIlII,IlIlI);}}void lIIIIlIl(struct lIIll*lIlII,int status,
gfp_t llllI){IIlII IIlIl=(IIlII)(lIlII+(0x4c7+4500-0x165a));IIlIl->llIll.IllllI=
(0xb5f+6317-0x240c);IIlIl->IlIII.IIIII=IlIlIlll(IIlIl)+IIlIl->llIll.IllllI;IIlIl
->IlIII.Status=status;
}void lIIIllIIl(struct urb*IlllI
#if KERNEL_LT((0x6e4+7549-0x245f),(0x1cca+35-0x1ce7),(0x94+338-0x1d3))
,struct pt_regs*lIllIlI
#endif
){struct lIIll*lIlII=IlllI->context;IIlII IIlIl=(IIlII)(lIlII+
(0x14e1+3424-0x2240));lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x75\x72\x62\x5f\x63\x6f\x6d\x70\x6c\x65\x74\x65\x5f\x67\x65\x74\x64\x65\x73\x63\x72\x69\x70\x74\x6f\x72" "\n"
);
IIlIl->IIlllI.IllllI=(IlllI->actual_length<(0x242+679-0x4e9))?
(0x7f4+3021-0x13c1):IlllI->actual_length;IIlIl->IIlllI.llllll.IIIII=sizeof(IIlIl
->IIlllI)+IIlIl->IIlllI.IllllI;IIlIl->IIlllI.llllll.Status=IlllI->status;lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x75\x72\x62\x5f\x63\x6f\x6d\x70\x6c\x65\x74\x65\x5f\x67\x65\x74\x64\x65\x73\x63\x72\x69\x70\x74\x6f\x72\x3a\x20\x75\x72\x62\x20\x63\x6f\x6d\x70\x6c\x65\x74\x65\x64\x20\x77\x69\x74\x68\x20\x73\x74\x61\x74\x75\x73\x20\x25\x64" "\n"
,IlllI->status);llIlIIl(IIlIl);
IIlIll(lIlII,IlllI->status);}void lIlllIll(struct urb*IlllI
#if KERNEL_LT((0x727+3110-0x134b),(0x948+5163-0x1d6d),(0x1bdb+2711-0x265f))
,struct pt_regs*lIllIlI
#endif
){struct lIIll*lIlII=IlllI->context;IIlII IIlIl=(IIlII)(lIlII+
(0xdfc+1097-0x1244));lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x75\x72\x62\x5f\x63\x6f\x6d\x70\x6c\x65\x74\x65\x5f\x63\x6f\x6e\x74\x72\x6f\x6c\x74\x72\x61\x6e\x73\x66\x65\x72" "\n"
);
IIlIl->lllIII.IllllI=(IlllI->actual_length<(0xbab+4465-0x1d1c))?
(0x86b+1058-0xc8d):IlllI->actual_length;IIlIl->IlIII.IIIII=sizeof(IIlIl->lllIII)
;if(usb_pipein(IlllI->pipe)){IIlIl->IlIII.IIIII+=IIlIl->lllIII.IllllI;}IIlIl->
lllIII.llllll.Status=IlllI->status;lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x75\x72\x62\x5f\x63\x6f\x6d\x70\x6c\x65\x74\x65\x5f\x63\x6f\x6e\x74\x72\x6f\x6c\x74\x72\x61\x6e\x73\x66\x65\x72\x3a\x20\x75\x72\x62\x20\x63\x6f\x6d\x70\x6c\x65\x74\x65\x64\x20\x77\x69\x74\x68\x20\x73\x74\x61\x74\x75\x73\x20\x25\x64" "\n"
,IlllI->status);llIlIIl(IIlIl);
IIlIll(lIlII,IlllI->status);}void llllllII(struct urb*IlllI
#if KERNEL_LT((0x475+6629-0x1e58),(0x206+8593-0x2391),(0xde2+4214-0x1e45))
,struct pt_regs*lIllIlI
#endif
){struct lIIll*lIlII=IlllI->context;IIlII IIlIl=(IIlII)(lIlII+(0x277+2439-0xbfd)
);lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x75\x72\x62\x5f\x63\x6f\x6d\x70\x6c\x65\x74\x65\x5f\x62\x75\x6c\x6b\x74\x72\x61\x6e\x73\x66\x65\x72" "\n"
);IIlIl->lllllI.IllllI=IlllI->actual_length;IIlIl->IlIII.IIIII=sizeof(IIlIl->
lllllI);if(usb_pipein(IlllI->pipe)){IIlIl->IlIII.IIIII+=IIlIl->lllllI.IllllI;}
IIlIl->lllllI.llllll.Status=IlllI->status;lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x75\x72\x62\x5f\x63\x6f\x6d\x70\x6c\x65\x74\x65\x5f\x62\x75\x6c\x6b\x74\x72\x61\x6e\x73\x66\x65\x72\x3a\x20\x75\x72\x62\x20\x63\x6f\x6d\x70\x6c\x65\x74\x65\x64\x20\x77\x69\x74\x68\x20\x73\x74\x61\x74\x75\x73\x20\x25\x64" "\n"
,IlllI->status);llIlIIl(IIlIl);
IIlIll(lIlII,IlllI->status);}void IllllIll(struct urb*IlllI
#if KERNEL_LT((0xf7f+3418-0x1cd7),(0x1cfc+2368-0x2636),(0x177+5085-0x1541))
,struct pt_regs*lIllIlI
#endif
){struct lIIll*lIlII=IlllI->context;IIlII IIlIl=(IIlII)(lIlII+
(0x1485+3914-0x23ce));lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x75\x72\x62\x5f\x63\x6f\x6d\x70\x6c\x65\x74\x65\x5f\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x74\x72\x61\x6e\x73\x66\x65\x72" "\n"
);IIlIl->llIIlI.IllllI=IlllI->actual_length;IIlIl->IlIII.IIIII=sizeof(IIlIl->
llIIlI);if(usb_pipein(IlllI->pipe)){IIlIl->IlIII.IIIII+=IIlIl->llIIlI.IllllI;}
IIlIl->llIIlI.llllll.Status=IlllI->status;lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x75\x72\x62\x5f\x63\x6f\x6d\x70\x6c\x65\x74\x65\x5f\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x74\x72\x61\x6e\x73\x66\x65\x72\x3a\x20\x75\x72\x62\x20\x63\x6f\x6d\x70\x6c\x65\x74\x65\x64\x20\x77\x69\x74\x68\x20\x73\x74\x61\x74\x75\x73\x20\x25\x64" "\n"
,IlllI->status);llIlIIl(IIlIl);
IIlIll(lIlII,IlllI->status);}void lIIlIIIIl(struct urb*IlllI
#if KERNEL_LT((0x468+7137-0x2047),(0x142+6258-0x19ae),(0xaba+4404-0x1bdb))
,struct pt_regs*lIllIlI
#endif
){int i;struct lIIll*lIlII=IlllI->context;struct IIlll*IIIll=lIlII->IIIll;IIlII 
IIlIl=(IIlII)(lIlII+(0xd08+3406-0x1a55));lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x75\x72\x62\x5f\x63\x6f\x6d\x70\x6c\x65\x74\x65\x5f\x69\x73\x6f\x63\x68\x74\x72\x61\x6e\x73\x66\x65\x72\x5f\x73\x6f\x6c\x69\x64\x3a\x20\x75\x72\x62\x20\x63\x6f\x6d\x70\x6c\x65\x74\x65\x64\x20\x77\x69\x74\x68\x20\x73\x74\x61\x74\x75\x73\x20\x25\x64" "\n"
,IlllI->status);IIIlIllI(IIIll,IlllI->pipe);IlllI->start_frame-=llllIllI(IIIll,
IlllI->pipe);
#if KERNEL_LT((0xe01+5042-0x21b1),(0x605+7943-0x2506),(0x360+7464-0x2070))


if(IlllI->status!=-ECONNRESET&&IlllI->status!=-ENOENT&&IlllI->status!=-ESHUTDOWN
){IlllI->status=(0xed+3686-0xf53);}
#endif
IIlIl->llIll.llllll.Status=IlllI->status;IIlIl->llIll.llIIIIIl=IlllI->
error_count;IIlIl->llIll.IIlIlIIl=IlllI->start_frame;if(usb_pipein(IlllI->pipe))
{IIlIl->llIll.IllllI=IlIIIllI(IlllI->iso_frame_desc,IlllI->number_of_packets,
IlllI->transfer_buffer,IlllI->transfer_buffer,(0xdfc+4857-0x20f4));}else{IIlIl->
llIll.IllllI=IlIIIllll(IlllI->iso_frame_desc,IlllI->number_of_packets,
(0xcd6+6186-0x24ff));}for(i=(0x12d9+29-0x12f6);i<IIlIl->llIll.IIlIlIl;i++){IIlIl
->llIll.llIIIIl[i].Length=IlllI->iso_frame_desc[i].actual_length;IIlIl->llIll.
llIIIIl[i].Status=IlllI->iso_frame_desc[i].status;}IIlIl->IlIII.IIIII=IlIlIlll(
IIlIl);if(usb_pipein(IlllI->pipe)){IIlIl->IlIII.IIIII+=IIlIl->llIll.IllllI;}
llIlIIl(IIlIl);
#if defined(_USBD_USE_EHCI_FIX_) && KERNEL_GT_EQ((0x1298+4013-0x2243),\
(0xf3+5278-0x158b),(0x515+3580-0x12f8)) && KERNEL_LT_EQ((0x123c+707-0x14fd),\
(0x23c3+382-0x253b),(0x37+8276-0x206f))
if(IIIll->IIllIIl&&(IlllI->status==(0x6f2+3361-0x1413))&&(atomic_read(&IlllI->
kref.refcount)>(0x14a4+3702-0x2319))){usb_put_urb(IlllI);}
#endif

IIlIll(lIlII,IlllI->status);}void IIIlIlIII(struct IlIlII*IIIlI){int i;struct 
lIIll*lIlII=IIIlI->context;IIlII IIlIl=(IIlII)(lIlII+(0xc13+2354-0x1544));lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x75\x72\x62\x5f\x63\x6f\x6d\x70\x6c\x65\x74\x65\x5f\x62\x75\x6c\x6b\x74\x72\x61\x6e\x73\x66\x65\x72\x5f\x70\x61\x72\x74\x69\x74\x69\x6f\x6e\x65\x64" "\n"
);IIlIl->lllllI.IllllI=IIIlI->lIIlIlIlI;IIlIl->IlIII.IIIII=sizeof(IIlIl->lllllI)
;if(usb_pipein(IIIlI->pipe)){IIlIl->lllllI.llllll.IIIII+=IIlIl->lllllI.IllllI;}
IIlIl->lllllI.llllll.Status=IIIlI->status;for(i=(0x22bd+396-0x2449);i<IIIlI->
IIIIl;i++)lIlII->lIllII.lIIlll->IllIIl[i].actual_length=IIIlI->IIIlII[i]->
actual_length;lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x75\x72\x62\x5f\x63\x6f\x6d\x70\x6c\x65\x74\x65\x5f\x62\x75\x6c\x6b\x74\x72\x61\x6e\x73\x66\x65\x72\x5f\x70\x61\x72\x74\x69\x74\x69\x6f\x6e\x65\x64\x3a\x20\x75\x72\x62\x20\x63\x6f\x6d\x70\x6c\x65\x74\x65\x64\x20\x77\x69\x74\x68\x20\x73\x74\x61\x74\x75\x73\x20\x25\x64" "\n"
,IIIlI->status);llIlIIl(IIlIl);
IIlIll(lIlII,IIIlI->status);}void IllIIIIIl(struct IlIlII*IIIlI){int i,IIIIIl,
IIllll;struct lIIll*lIlII=IIIlI->context;struct IIlll*IIIll=lIlII->IIIll;IIlII 
IIlIl=(IIlII)(lIlII+(0x4d+1234-0x51e));lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x75\x72\x62\x5f\x63\x6f\x6d\x70\x6c\x65\x74\x65\x5f\x69\x73\x6f\x63\x68\x74\x72\x61\x6e\x73\x66\x65\x72\x5f\x70\x61\x72\x74\x69\x74\x69\x6f\x6e\x65\x64" "\n"
);IIIlIllI(IIIll,IIIlI->pipe);IIIlI->IIIlII[(0xf90+5694-0x25ce)]->start_frame-=
llllIllI(IIIll,IIIlI->pipe);IIlIl->llIll.llllll.Status=IIIlI->status;IIlIl->
llIll.IIlIlIIl=IIIlI->IIIlII[(0xb6d+4978-0x1edf)]->start_frame;IIlIl->llIll.
llIIIIIl=(0x1b20+614-0x1d86);IIlIl->llIll.IllllI=(0x17e2+209-0x18b3);for(i=
(0x116+1596-0x752),IIllll=(0x1022+3547-0x1dfd);i<IIIlI->IIIIl;i++){struct urb*
IlllI=IIIlI->IIIlII[i];if(usb_pipein(IIIlI->pipe)){lIlII->lIllII.lIIlll->IllIIl[
i].actual_length=IlIIIllI(IlllI->iso_frame_desc,IlllI->number_of_packets,IlllI->
transfer_buffer,IlllI->transfer_buffer,(0x1658+4105-0x2660));}else{lIlII->lIllII
.lIIlll->IllIIl[i].actual_length=IlIIIllll(IlllI->iso_frame_desc,IlllI->
number_of_packets,(0xf5d+3954-0x1ece));}IIlIl->llIll.IllllI+=lIlII->lIllII.
lIIlll->IllIIl[i].actual_length;IIlIl->llIll.llIIIIIl+=IlllI->error_count;for(
IIIIIl=(0x18d6+28-0x18f2);IIIIIl<IlllI->number_of_packets;IIIIIl++){
IIlIl->llIll.llIIIIl[IIllll].Length=IlllI->iso_frame_desc[IIIIIl].actual_length;
IIlIl->llIll.llIIIIl[IIllll].Status=IlllI->iso_frame_desc[IIIIIl].status;IIllll
++;}}IIlIl->IlIII.IIIII=IlIlIlll(IIlIl);if(usb_pipein(IIIlI->pipe)){IIlIl->IlIII
.IIIII+=IIlIl->llIll.IllllI;}lIlll(
"\x75\x73\x62\x64\x5f\x73\x74\x75\x62\x5f\x75\x72\x62\x5f\x63\x6f\x6d\x70\x6c\x65\x74\x65\x5f\x69\x73\x6f\x63\x68\x74\x72\x61\x6e\x73\x66\x65\x72\x5f\x70\x61\x72\x74\x69\x74\x69\x6f\x6e\x65\x64\x3a\x20\x75\x72\x62\x20\x63\x6f\x6d\x70\x6c\x65\x74\x65\x64\x20\x77\x69\x74\x68\x20\x73\x74\x61\x74\x75\x73\x20\x25\x64" "\n"
,IIIlI->status);llIlIIl(IIlIl);
IIlIll(lIlII,IIIlI->status);}
void llllIlIl(struct IIlll*IIIll,llIIII lIlIl){struct llIlIllI*lllllIl;

list_for_each_entry(lllllIl,&IIIll->IIIllIIl,IIIIll){if(lllllIl->lIlIl==lIlIl){
list_del(&lllllIl->IIIIll);lIlIll(lllllIl);return;}}}static inline void 
llIIllIIl(struct IIlll*IIIll,llIIII lIlIl,int IIIIllI){struct llIlIllI*lllllIl;
list_for_each_entry(lllllIl,&IIIll->IIIllIIl,IIIIll){if(lllllIl->lIlIl==lIlIl){
lllllIl->llllllIll=IIIIllI;return;}}}struct lIIll*IIlIIIII(struct IIlll*IIIll,
llIIII lIlIl){struct lIIll*lIlII;list_for_each_entry(lIlII,&IIIll->IllIIlI,
llllIl){if(lIlII->lIlIl==lIlIl){return lIlII;}}return NULL;}struct lIIll*
IIlIllIII(struct lIIll*lIlII,int IIIIllI){struct lIIll*IllIII;struct list_head*
IllIlIIl;


if(unlikely(list_empty(&lIlII->llllIl))){return NULL;}IllIII=lIlII;
list_for_each_entry_continue(IllIII,&lIlII->IIIll->IllIIlI,llllIl){if(IllIII->
lIlIl==lIlII->lIlIl){switch(IIIIllI){case IlIlllIlI:IllIlIIl=IllIII->llllIl.prev
;list_del(&IllIII->llllIl);IllIlll(IllIII);IllIII=list_entry(IllIlIIl,struct 
lIIll,llllIl);break;case IlIIIlIll:IIIIllI=IIIIllI;return IllIII;case lIIIlllIl:
IIIIllI=IIIIllI;atomic_xchg(&IllIII->state,IllIlII);return IllIII;case lllIIIlII
:IIIIllI=IllIII->lIlIlII.IlllIIIlI;IllIlIIl=IllIII->llllIl.prev;list_del(&IllIII
->llllIl);IllIlll(IllIII);IllIII=list_entry(IllIlIIl,struct lIIll,llllIl);break;
}}}if(unlikely(IIIIllI==IlIlllIlI)){llllIlIl(lIlII->IIIll,lIlII->lIlIl);}else{
llIIllIIl(lIlII->IIIll,lIlII->lIlIl,IIIIllI);}
return NULL;}





void IIlIll(struct lIIll*lIlII,int status){struct IIlll*IIIll=lIIlIlll(lIlII->
IIIll);struct lIIll*lllIlllll=NULL;unsigned long flags;int IlIIllI;int IIIIllIll
=(0x26c+4739-0x14ef);int llIIIIll;int IIIIllI;spin_lock_irqsave(&IIIll->IIlIlI,
flags);
IlIIllI=atomic_xchg(&lIlII->state,lllIlllIl);










if(lIlII->IIIIlIl&&IlIIllI==IllIlII&&(status==-ECONNRESET||status==-ENOENT)){
IIlII IIlIl=(IIlII)(lIlII+(0x1765+1614-0x1db2));IIlIl->IlIII.Status=-ESHUTDOWN;
lIIIl(
"\x72\x65\x71\x75\x65\x73\x74\x20\x63\x61\x6e\x63\x65\x6c\x6c\x65\x64\x20\x64\x75\x65\x20\x74\x6f\x20\x64\x65\x74\x61\x63\x68\x20\x6f\x66\x20\x64\x65\x76\x69\x63\x65" "\n"
);}
if(lIlII->lIlIlII.lIIIlIlI){

if(unlikely(IlIIllI==IllIlII)){




llIIIIll=lIlII->lIlIlII.lIllIlIII;IIIIllI=lIlII->lIlIlII.IIllIIIIl;
}else if(likely(status==(0x44f+4969-0x17b8))){llIIIIll=lIlII->lIlIlII.llIllIlII;
IIIIllI=lIlII->lIlIlII.lllIIlIIl;
}else if(status==-EREMOTEIO){llIIIIll=lIlII->lIlIlII.IIIlIlllll;IIIIllI=lIlII->
lIlIlII.lIlIIIIlIl;
}else{llIIIIll=lIlII->lIlIlII.IlIIIllIl;IIIIllI=lIlII->lIlIlII.lIllIllll;
}if(unlikely(llIIIIll==IlIlIlllI)){lIlII->IlllllI=(0x1390+3238-0x2035);}
lllIlllll=IIlIllIII(lIlII,IIIIllI);
}
list_del(&lIlII->llllIl);
if(unlikely(lIlII->IlllllI)){spin_unlock_irqrestore(&IIIll->IIlIlI,flags);
IllIlll(lIlII);}else{spin_lock(&IIIll->lIIIIll);list_add_tail(&lIlII->llllIl,&
IIIll->llIlIlIl);spin_unlock(&IIIll->lIIIIll);spin_unlock_irqrestore(&IIIll->
IIlIlI,flags);IIIIllIll=(0x189b+2129-0x20eb);}
if(lllIlllll){





lIllIllI(lllIlllll,GFP_ATOMIC);}
if(likely(IIIIllIll)){wake_up(&IIIll->lIIllI);}








lIIIllII(IIIll);}
#ifdef _USBD_DEBUG_MEMORY_
extern atomic_t llIllIIll;extern atomic_t lllllllll;
#endif 

int lIllIlll(struct IIlll*IIIll){int i;int IllIIlll,IllIIlII;struct usb_device*
IlIIl=IIIll->llIII;IllIIlll=IllIIlII=-(0xf60+2886-0x1aa5);
for(i=(0x323+4491-0x14ae);i<IlIIl->actconfig->desc.bNumInterfaces;i++){struct 
usb_interface*interface=IlIIl->actconfig->interface[i];if(interface==NULL){
continue;}if(interface->cur_altsetting==NULL){continue;}lIlll(
"\x44\x65\x74\x65\x63\x74\x65\x64\x20\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20\x63\x6c\x61\x73\x73\x3d\x30\x78\x25\x30\x32\x78\x20\x73\x75\x62\x63\x6c\x61\x73\x73\x3d\x30\x78\x25\x30\x32\x78\x20\x70\x72\x6f\x74\x6f\x63\x6f\x6c\x3d\x30\x78\x25\x30\x32\x78" "\n"
,interface->cur_altsetting->desc.bInterfaceClass,interface->cur_altsetting->desc
.bInterfaceSubClass,interface->cur_altsetting->desc.bInterfaceProtocol);if(
interface->cur_altsetting->desc.bInterfaceClass==(0x1b13+1274-0x2005)&&interface
->cur_altsetting->desc.bInterfaceProtocol==(0x184f+3249-0x24b0)){int IIIIIl;
IllIIlll=IllIIlII=-(0x167b+2295-0x1f71);for(IIIIIl=(0xd+3347-0xd20);IIIIIl<
interface->cur_altsetting->desc.bNumEndpoints;IIIIIl++){struct usb_host_endpoint
*endpoint=&interface->cur_altsetting->endpoint[IIIIIl];if((endpoint->desc.
bmAttributes&USB_ENDPOINT_XFERTYPE_MASK)==USB_ENDPOINT_XFER_BULK){if(endpoint->
desc.bEndpointAddress&USB_ENDPOINT_DIR_MASK){IllIIlll=endpoint->desc.
bEndpointAddress;}else{IllIIlII=endpoint->desc.bEndpointAddress;}}}if(IllIIlll!=
-(0xf35+5883-0x262f)&&IllIIlII!=-(0x1912+2193-0x21a2)){unsigned long flags;lIlll
(
"\x44\x65\x74\x65\x63\x74\x65\x64\x20\x65\x6e\x64\x70\x6f\x69\x6e\x74\x73\x20\x30\x78\x25\x30\x32\x78\x20\x61\x6e\x64\x20\x30\x78\x25\x30\x32\x78" "\n"
,IllIIlll,IllIIlII);

spin_lock_irqsave(&IIIll->lIIlIl,flags);if(!IIIll->llllIIl&&IIIll->lIlIlI!=
llIIIll){IIIll->IlIlIllI=interface->cur_altsetting->desc.bInterfaceNumber;IIIll
->lIlIIIll=IllIIlll;IIIll->lIllllII=IllIIlII;IIIll->lIlIlI=IllllIIl;IIIll->
llllIIl=(0xa44+908-0xdcf);
}else{
}spin_unlock_irqrestore(&IIIll->lIIlIl,flags);break;
}}}
return(0x771+7505-0x24c2);}void llIllIll(struct IIlll*IIIll){struct llIIll*lIIII
;unsigned long flags;lIlll(
"\x21\x21\x21\x21\x20\x72\x65\x73\x65\x74\x20\x74\x72\x61\x6e\x73\x61\x63\x74\x69\x6f\x6e" "\n"
);spin_lock_irqsave(&IIIll->lIIlIl,flags);if(IIIll->lIlIlI==llIIIll){


IIIll->llllIIl=(0x81+6236-0x18dd);}else{IIIll->lIlIlI=IllllIIl;}lIIII=IIIll->
IlIllII;IIIll->IlIllII=NULL;spin_unlock_irqrestore(&IIIll->lIIlIl,flags);if(
lIIII){usb_unlink_urb(lIIII->IlllI);IIIIlII(lIIII);}}int lIlIIllII(struct IIlll*
IIIll,llIIII lIlIl){struct llIIll*lIIII=NULL;unsigned long flags;lIlll(
"\x21\x21\x21\x21\x72\x65\x73\x65\x74\x20\x74\x72\x61\x6e\x73\x61\x63\x74\x69\x6f\x6e\x20\x62\x79\x20\x75\x6e\x69\x71\x75\x65\x5f\x69\x64" "\n"
);spin_lock_irqsave(&IIIll->lIIlIl,flags);if(IIIll->IlIllII){if((IIIll->IlIllII
->IlIlllIII==lIlIl)||(IIIll->IlIllII->llllIllIl==lIlIl)||(IIIll->IlIllII->
IIIIIllll==lIlIl)){if(IIIll->lIlIlI==llIIIll){


IIIll->llllIIl=(0x76+715-0x341);}else{IIIll->lIlIlI=IllllIIl;}lIIII=IIIll->
IlIllII;IIIll->IlIllII=NULL;}}spin_unlock_irqrestore(&IIIll->lIIlIl,flags);if(
lIIII){usb_unlink_urb(lIIII->IlllI);IIIIlII(lIIII);return(0x3aa+7917-0x2296);}
return(0x269+9155-0x262c);}void llllIIll(struct IIlll*IIIll,int IlllllI,int 
lIIIlIll){struct llIIll*lIIII;unsigned long flags;lIlll(
"\x21\x21\x21\x21\x20\x64\x69\x73\x61\x62\x6c\x65" "\n");spin_lock_irqsave(&
IIIll->lIIlIl,flags);IIIll->llllIIl=(0x1cc8+2081-0x24e9);IIIll->lIlIIIll=-
(0x195+9423-0x2663);IIIll->lIllllII=-(0x19+6469-0x195d);IIIll->IlIlIllI=-
(0x1417+2841-0x1f2f);if(IIIll->lIlIlI!=llIIIll){IIIll->lIlIlI=llIIIllI;}lIIII=
IIIll->IlIllII;IIIll->IlIllII=NULL;if(lIIII){



lIIII->IlllllI=IlllllI;


lIIII->IIIIlIl=lIIIlIll;}spin_unlock_irqrestore(&IIIll->lIIlIl,flags);if(lIIII){



#if KERNEL_GT_EQ((0x312+699-0x5cb),(0x20c+4062-0x11e4),(0x23e2+411-0x2561))


usb_poison_urb(lIIII->IlllI);
#else
usb_kill_urb(lIIII->IlllI);
#endif
IIIIlII(lIIII);}}int lIlIIIIII(struct lIIll*lIlII,gfp_t llllI){IIlII IIlIl=(
IIlII)(lIlII+(0xc47+5847-0x231d));struct IIlll*IIIll=lIlII->IIIll;struct llIIll*
lIIII;unsigned long flags;



if(lIlII->lIlIlII.lIIIlIlI){return-(0x4dc+3661-0x1328);}
if(!IIIll->llllIIl){return-(0x663+642-0x8e4);}
if(lIlII->endpoint!=IIIll->lIlIIIll&&lIlII->endpoint!=IIIll->lIllllII){return-
(0x23e8+607-0x2646);}
spin_lock_irqsave(&IIIll->lIIlIl,flags);lIIII=IIIll->IlIllII;if(IIIll->lIlIlI==
IllllIIl){


if(lIlIlIlII(lIlII)){struct llIlIIII*lIIIIlI=lIlII->lIIIll.llIIl;
if(lIIII==NULL){
lIIII=lllIlIIlI(IIIll,GFP_ATOMIC);IIIll->IlIllII=lIIII;}else{llIlllIll(lIIII);}
if(lIIII){lIIII->IlIlllIII=IIlIl->IlIII.IIIlIl;lIIII->lllIIIIl=le32_to_cpu(
lIIIIlI->IllIIlIII);lIIII->IlIIIIII=((lIIIIlI->IIIllIIII&(0x1d4b+1831-0x23f2))?
(0x353+4103-0x135a):(0x1d34+1437-0x22d0));IIlIIlIlI(lIIII,lIIIIlI);if(lIIII->
lllIIIIl){IIIll->lIlIlI=lIIlIIIlI;spin_unlock_irqrestore(&IIIll->lIIlIl,flags);}
else{IIIll->lIlIlI=IlllIlII;IIIllllI(lIIII);spin_unlock_irqrestore(&IIIll->
lIIlIl,flags);lllllIIII(lIIII,llllI);}IIlIl->lllllI.llllll.IIIII=sizeof(IIlIl->
lllllI);IIlIl->lllllI.llllll.Status=(0xb64+1317-0x1089);
IIlIll(lIlII,(0x1d3+5230-0x1641));}else{spin_unlock_irqrestore(&IIIll->lIIlIl,
flags);llIIlll(lIlII,-ENOMEM,llllI);IIlIll(lIlII,-ENOMEM);}return
(0x2224+1012-0x2617);
}else{lIlll(
"\x21\x21\x21\x21\x20\x53\x6b\x69\x70\x20\x6e\x6f\x6e\x2d\x43\x4f\x4d\x4d\x41\x4e\x44" "\n"
);




spin_unlock_irqrestore(&IIIll->lIIlIl,flags);return-(0x876+2023-0x105c);
}}else if(IIIll->lIlIlI==lIIlIIIlI){


if(IIlIIIlIl(lIlII)){lIlll(
"\x21\x21\x21\x21\x20\x44\x41\x54\x41\x20\x64\x65\x74\x65\x63\x74\x65\x64" "\n")
;lIIII->llllIllIl=IIlIl->IlIII.IIIlIl;lIIII->IlllII=lIlII;IIIll->lIlIlI=IlllIlII
;IIIllllI(lIIII);spin_unlock_irqrestore(&IIIll->lIIlIl,flags);
lllllIIII(lIIII,llllI);return(0x16af+3331-0x23b1);
}else{lIlll(
"\x21\x21\x21\x21\x20\x49\x6e\x76\x61\x6c\x69\x64\x20\x44\x41\x54\x41" "\n");
IIIll->lIlIlI=IlllIlII;}}else if(IIIll->lIlIlI==IlllIlII){if(lIIII->IlllII==NULL
&&
IIIIIlllI(lIlII)){lIlll(
"\x21\x21\x21\x21\x20\x53\x54\x41\x54\x55\x53\x20\x64\x65\x74\x65\x63\x74\x65\x64" "\n"
);lIIII->IIIIIllll=IIlIl->IlIII.IIIlIl;lIIII->IlIlll=lIlII;if(lIIII->status!=-
EINPROGRESS){int status=lIIII->status;if(IlIIllIll(lIIII)){IIIll->lIlIlI=
IllllIIl;}else{IIIll->lIlIlI=llIIIll;}lIIII->IlIlll=NULL;spin_unlock_irqrestore(
&IIIll->lIIlIl,flags);IIlIll(lIlII,status);}else{IIIll->lIlIlI=llIIIIlll;
spin_unlock_irqrestore(&IIIll->lIIlIl,flags);}return(0x16dc+940-0x1a87);
}else{lIlll(
"\x21\x21\x21\x21\x20\x49\x6e\x76\x61\x6c\x69\x64\x20\x53\x54\x41\x54\x55\x53" "\n"
);
IIIll->lIlIlI=llIIIll;}}else if(IIIll->lIlIlI==llIIIIlll){


IIIll->lIlIlI=llIIIll;}spin_unlock_irqrestore(&IIIll->lIIlIl,flags);llIIlll(
lIlII,-EPIPE,llllI);IIlIll(lIlII,-EPIPE);return(0x1082+3512-0x1e39);
}int lIlIlIlII(struct lIIll*lIlII){struct IIlll*IIIll=lIlII->IIIll;IIlII IIlIl=(
IIlII)(lIlII+(0xf8b+157-0x1027));struct llIlIIII*lIIIIlI;if(lIlII->IlllIl!=
lIlIIlI){
return(0x1116+15-0x1125);}lIIIIlI=lIlII->lIIIll.llIIl;if(lIIIIlI&&lIlII->
endpoint==IIIll->lIllllII&&IIlIl->lllllI.IllllI==sizeof(struct llIlIIII)&&
le32_to_cpu(lIIIIlI->lllIIlIll)==1128420181){return(0x1a12+92-0x1a6d);}return
(0x1a68+2488-0x2420);}int IIlIIIlIl(struct lIIll*lIlII){struct IIlll*IIIll=lIlII
->IIIll;IIlII IIlIl=(IIlII)(lIlII+(0x7c7+797-0xae3));if((IIlIl->lllllI.IllllI>=
IIIll->IlIllII->lllIIIIl)&&((IIIll->IlIllII->IlIIIIII&&(lIlII->endpoint==IIIll->
lIllllII))||(!IIIll->IlIllII->IlIIIIII&&(lIlII->endpoint==IIIll->lIlIIIll)))){
return(0x246d+79-0x24bb);}return(0xd6b+1436-0x1307);}int IIIIIlllI(struct lIIll*
lIlII){struct IIlll*IIIll=lIlII->IIIll;IIlII IIlIl=(IIlII)(lIlII+
(0xea3+1210-0x135c));if((lIlII->endpoint==IIIll->lIlIIIll)&&IIlIl->lllllI.IllllI
>=sizeof(struct IIIIIlIll)){return(0xb9a+6478-0x24e7);}return(0x918+4416-0x1a58)
;}struct llIIll*lllIlIIlI(struct IIlll*IIIll,gfp_t llllI){struct llIIll*lIIII=
IllIllI(sizeof(*lIIII),llllI);if(lIIII){memset(lIIII,(0x108a+5659-0x26a5),sizeof
(*lIIII));kref_init(&lIIII->IllIll);lIIII->IIIll=lIIlIlll(IIIll);lIIII->ep_in=
IIIll->lIlIIIll;lIIII->ep_out=IIIll->lIllllII;lIIII->status=-EINPROGRESS;lIIII->
IlllI=lIlIIlIl((0x9b9+6614-0x238f),llllI);if(likely(lIIII->IlllI)){lIIII->llIIl=
IllIllI(IIlIlllII,llllI);if(likely(lIIII->llIIl)){
#ifdef _USBD_DEBUG_MEMORY_
atomic_inc(&llIllIIll);
#endif
return lIIII;}lllllIlI(lIIII->IlllI);}lIlIll(lIIII);}return NULL;}void llIlllIll
(struct llIIll*lIIII){lIIII->IlIlllIII=(0x6a1+2987-0x124c);lIIII->llllIllIl=
(0xc0b+1090-0x104d);lIIII->IIIIIllll=(0x40c+6663-0x1e13);lIIII->IlllII=NULL;
lIIII->IlIlll=NULL;lIIII->lllIIIIl=(0x48+7375-0x1d17);lIIII->IlIIIIII=
(0x1386+3325-0x2083);lIIII->status=-EINPROGRESS;lIIII->IlIllIll=
(0x188d+405-0x1a22);lIIII->IlllllI=(0xc07+1808-0x1317);lIIII->IIIIlIl=
(0xb8+6005-0x182d);}void llIIIlllI(struct kref*IIllIlI){struct llIIll*lIIII=
container_of(IIllIlI,struct llIIll,IllIll);struct IIlll*IIIll=lIIII->IIIll;if(
lIIII->IlllII){lIlll(
"\x21\x21\x21\x21\x20\x66\x72\x65\x65\x3a\x20\x64\x61\x74\x61\x20\x65\x78\x69\x73\x74\x73" "\n"
);lIIII->IlllII->IlllllI=lIIII->IlllllI;lIIII->IlllII->IIIIlIl=lIIII->IIIIlIl;
llIIlll(lIIII->IlllII,-ECONNRESET,GFP_ATOMIC);IIlIll(lIIII->IlllII,-ECONNRESET);
}if(lIIII->IlIlll){lIlll("!!!! free: ûtatus exists\n");lIIII->IlIlll->IlllllI=
lIIII->IlllllI;lIIII->IlIlll->IIIIlIl=lIIII->IIIIlIl;llIIlll(lIIII->IlIlll,-
ECONNRESET,GFP_ATOMIC);IIlIll(lIIII->IlIlll,-ECONNRESET);}lllllIlI(lIIII->IlllI)
;lIlIll(lIIII->llIIl);lIlIll(lIIII);lIIIllII(IIIll);
#ifdef _USBD_DEBUG_MEMORY_
atomic_inc(&lllllllll);
#endif
lIlll(
"\x21\x21\x21\x21\x20\x4d\x61\x73\x73\x53\x74\x6f\x72\x61\x67\x65\x46\x72\x65\x65\x54\x72\x61\x6e\x73\x61\x63\x74\x69\x6f\x6e" "\n"
);}static inline void IIIllllI(struct llIIll*lIIII){kref_get(&lIIII->IllIll);}
static inline void IIIIlII(struct llIIll*lIIII){kref_put(&lIIII->IllIll,
llIIIlllI);}void IIlIIlIlI(struct llIIll*lIIII,struct llIlIIII*lIIIIlI){struct 
IIlll*IIIll=lIIII->IIIll;memcpy(lIIII->llIIl,lIIIIlI,sizeof(struct llIlIIII));
#if KERNEL_GT_EQ((0xbbc+2318-0x14c8),(0xb6+6487-0x1a07),(0x89c+6555-0x2218))
lIIII->IlllI->sg=NULL;lIIII->IlllI->num_sgs=(0x321+594-0x573);
#endif
#if KERNEL_GT_EQ((0x31c+7301-0x1f9e),(0x669+2955-0x11f1),(0x12da+2938-0x1e54))
lIIII->IlllI->num_mapped_sgs=(0x289+6505-0x1bf2);
#endif
lIIII->IlllI->transfer_dma=(0x2bb+5028-0x165f);usb_fill_bulk_urb(lIIII->IlllI,
IIIll->llIII,usb_sndbulkpipe(IIIll->llIII,lIIII->ep_out&USB_ENDPOINT_NUMBER_MASK
),lIIII->llIIl,sizeof(struct llIlIIII),lIIIIlllI,lIIII);lIIII->IlllI->
transfer_flags&=~URB_SHORT_NOT_OK;}void IlllIlIlI(struct llIIll*lIIII){struct 
IIlll*IIIll=lIIII->IIIll;struct lIIll*lIlII=lIIII->IlllII;IIlII IIlIl=(IIlII)(
lIlII+(0xf07+978-0x12d8));int pipe=(IIlIl->lllllI.Flags&IIIllI)?usb_rcvbulkpipe(
lIlII->IIIll->llIII,IIlIl->lllllI.Endpoint):usb_sndbulkpipe(lIlII->IIIll->llIII,
IIlIl->lllllI.Endpoint);
#if KERNEL_GT_EQ((0x71f+653-0x9aa),(0x275+5638-0x1875),(0x196f+2273-0x2231))
lIIII->IlllI->sg=NULL;lIIII->IlllI->num_sgs=(0x14b4+2067-0x1cc7);
#endif
#if KERNEL_GT_EQ((0x1365+1294-0x1870),(0x11cc+4504-0x2361),(0x114a+129-0x11cb))
lIIII->IlllI->num_mapped_sgs=(0x220+5002-0x15aa);
#endif
lIIII->IlllI->transfer_dma=(0xf07+47-0xf36);switch(lIlII->IlllIl){case lIlIIlI:
usb_fill_bulk_urb(lIIII->IlllI,IIIll->llIII,pipe,lIlII->lIIIll.llIIl,IIlIl->
lllllI.IllllI,IlIIIIIl,lIIII);break;case IlIIIlI:usb_fill_bulk_urb(lIIII->IlllI,
IIIll->llIII,pipe,lIlII->lIllII.lIIlll->IllIIl[lIIII->IlIllIll].transfer_buffer,
lIlII->lIllII.lIIlll->IllIIl[lIIII->IlIllIll].transfer_buffer_length,IlIIIIIl,
lIIII);break;
#if KERNEL_GT_EQ((0x1e9+8783-0x2436),(0x19c8+1504-0x1fa2),(0x1496+1536-0x1a77))
case IIlIIII:usb_fill_bulk_urb(lIIII->IlllI,IIIll->llIII,pipe,NULL,IIlIl->lllllI
.IllllI,IlIIIIIl,lIIII);lIIII->IlllI->sg=lIlII->IlIIIII.sg.lIIlIIl;lIIII->IlllI
->num_sgs=lIlII->IlIIIII.sg.num_sgs;break;
#endif
}if(IIlIl->lllllI.Flags&IIIllI){if((IIlIl->lllllI.Flags&lIIlIll)==
(0x164+9444-0x2648)){lIIII->IlllI->transfer_flags|=URB_SHORT_NOT_OK;}else{lIIII
->IlllI->transfer_flags&=~URB_SHORT_NOT_OK;}}}void IlIIlIlI(struct llIIll*lIIII)
{struct IIlll*IIIll=lIIII->IIIll;
#if KERNEL_GT_EQ((0x26c+8060-0x21e6),(0x1695+2686-0x210d),(0x345+478-0x504))
lIIII->IlllI->sg=NULL;lIIII->IlllI->num_sgs=(0x2006+504-0x21fe);
#endif
#if KERNEL_GT_EQ((0x11a3+1493-0x1775),(0x2c8+1889-0xa26),(0xcd4+829-0x1011))
lIIII->IlllI->num_mapped_sgs=(0x843+2065-0x1054);
#endif
lIIII->IlllI->transfer_dma=(0x878+1295-0xd87);usb_fill_bulk_urb(lIIII->IlllI,
IIIll->llIII,usb_rcvbulkpipe(IIIll->llIII,lIIII->ep_in&USB_ENDPOINT_NUMBER_MASK)
,lIIII->llIIl,IIlIlllII,IIIIlIIlI,lIIII);lIIII->IlllI->transfer_flags&=~
URB_SHORT_NOT_OK;}static inline void lllllIIII(struct llIIll*lIIII,gfp_t llllI){
int status=usb_submit_urb(lIIII->IlllI,llllI);if(status<(0x9e2+2842-0x14fc)){
llIIIIIII(lIIII,status,llllI);IIIIlII(lIIII);}}static inline void IIlIIIIII(
struct llIIll*lIIII,gfp_t llllI){int status=usb_submit_urb(lIIII->IlllI,llllI);
if(status<(0xd7+6378-0x19c1)){IIIIIllII(lIIII,status,llllI);IIIIlII(lIIII);}}
static inline void llIIIIlII(struct llIIll*lIIII,gfp_t llllI){int status=
usb_submit_urb(lIIII->IlllI,llllI);if(status<(0x835+7568-0x25c5)){IIIlllIll(
lIIII,status,llllI);IIIIlII(lIIII);}}void llIIIIIII(struct llIIll*lIIII,int 
status,gfp_t llllI){struct IIlll*IIIll=lIIII->IIIll;unsigned long flags;
spin_lock_irqsave(&IIIll->lIIlIl,flags);if(IIIll->IlIllII!=lIIII){



spin_unlock_irqrestore(&IIIll->lIIlIl,flags);lIlll(
"\x21\x21\x21\x21\x20\x43\x4f\x4d\x4d\x41\x4e\x44\x20\x63\x61\x6e\x63\x65\x6c\x6c\x65\x64" "\n"
);}else if(status==(0x86b+3575-0x1662)){





if(lIIII->lllIIIIl==(0x5ba+5394-0x1acc)){IlIIlIlI(lIIII);IIIllllI(lIIII);}else{
IlllIlIlI(lIIII);IIIllllI(lIIII);}spin_unlock_irqrestore(&IIIll->lIIlIl,flags);
if(lIIII->lllIIIIl==(0x3a1+984-0x779)){llIIIIlII(lIIII,llllI);}else{IIlIIIIII(
lIIII,llllI);}}else
{struct lIIll*IlllII;struct lIIll*IlIlll;

IlllII=lIIII->IlllII;lIIII->IlllII=NULL;IlIlll=lIIII->IlIlll;lIIII->IlIlll=NULL;
if(IIIll->lIlIlI!=llIIIll){IIIll->lIlIlI=llIIIllI;}spin_unlock_irqrestore(&IIIll
->lIIlIl,flags);if(IlllII){llIIlll(IlllII,status,llllI);IIlIll(IlllII,status);}
if(IlIlll){llIIlll(IlIlll,status,llllI);IIlIll(IlIlll,status);}}}void IIIIIllII(
struct llIIll*lIIII,int status,gfp_t llllI){struct IIlll*IIIll=lIIII->IIIll;
struct lIIll*IlllII=lIIII->IlllII;IIlII lllIIIlI=(IIlII)(IlllII+
(0x77b+784-0xa8a));unsigned long flags;
if(lIIII->IlIllIll==(0xadd+602-0xd37)){lllIIIlI->lllllI.IllllI=lIIII->IlllI->
actual_length;}else{lllIIIlI->lllllI.IllllI+=lIIII->IlllI->actual_length;}
if(usb_pipein(lIIII->IlllI->pipe)){lllIIIlI->IlIII.IIIII=sizeof(lllIIIlI->lllllI
)+lllIIIlI->lllllI.IllllI;}else{lllIIIlI->IlIII.IIIII=sizeof(lllIIIlI->lllllI);}
if(IlllII->IlllIl==IlIIIlI){IlllII->lIllII.lIIlll->IllIIl[lIIII->IlIllIll].
actual_length=lIIII->IlllI->actual_length;}lllIIIlI->lllllI.llllll.Status=status
;spin_lock_irqsave(&IIIll->lIIlIl,flags);if(IIIll->IlIllII!=lIIII){



lIlll(
"\x21\x21\x21\x21\x20\x44\x41\x54\x41\x20\x63\x61\x6e\x63\x65\x6c\x6c\x65\x64" "\n"
);spin_unlock_irqrestore(&IIIll->lIIlIl,flags);}else if(status==
(0x1d3d+60-0x1d79)){




if(IlllII->IlllIl==IlIIIlI){lIIII->IlIllIll++;if((lIIII->IlllI->actual_length==
lIIII->IlllI->transfer_buffer_length)&&(lIIII->IlIllIll<IlllII->lIllII.lIIlll->
IIIIl)){
IlllII=NULL;

IlllIlIlI(lIIII);IIIllllI(lIIII);}else{

lIIII->IlllII=NULL;
IlIIlIlI(lIIII);IIIllllI(lIIII);}}else{
lIIII->IlllII=NULL;
IlIIlIlI(lIIII);IIIllllI(lIIII);}spin_unlock_irqrestore(&IIIll->lIIlIl,flags);if
(IlllII){
IIlIll(IlllII,(0xbb7+1108-0x100b));
llIIIIlII(lIIII,llllI);}else{IIlIIIIII(lIIII,llllI);}}else
{
lIIII->IlllII=NULL;if(IIIll->lIlIlI!=llIIIll){IIIll->lIlIlI=llIIIllI;}
spin_unlock_irqrestore(&IIIll->lIIlIl,flags);if(IlllII){
IIlIll(IlllII,status);}}}void IIIlllIll(struct llIIll*lIIII,int status,gfp_t 
llllI){struct IIlll*IIIll=lIIII->IIIll;unsigned long flags;spin_lock_irqsave(&
IIIll->lIIlIl,flags);if(IIIll->IlIllII!=lIIII){



lIlll(
"\x21\x21\x21\x21\x20\x53\x54\x41\x54\x55\x53\x20\x63\x61\x6e\x63\x65\x6c\x6c\x65\x64" "\n"
);spin_unlock_irqrestore(&IIIll->lIIlIl,flags);}else{struct lIIll*IlIlll=NULL;





lIIII->status=status;

if(lIIII->IlIlll){if(IlIIllIll(lIIII)){if(IIIll->lIlIlI!=llIIIll){IIIll->lIlIlI=
IllllIIl;}}else{IIIll->lIlIlI=llIIIll;}IlIlll=lIIII->IlIlll;lIIII->IlIlll=NULL;}
spin_unlock_irqrestore(&IIIll->lIIlIl,flags);if(IlIlll){IIlIll(IlIlll,status);}}
}static void lIIIIlllI(struct urb*IlllI
#if KERNEL_LT((0x9f5+621-0xc60),(0x8f9+6190-0x2121),(0x17fd+3427-0x254d))
,struct pt_regs*lIllIlI
#endif
){struct llIIll*lIIII=IlllI->context;lIlll(
"\x21\x21\x21\x21\x20\x43\x4f\x4d\x4d\x41\x4e\x44\x20\x75\x72\x62\x20\x63\x6f\x6d\x70\x6c\x65\x74\x65\x64\x20\x2d\x20\x73\x74\x61\x74\x75\x73\x3d\x25\x64" "\n"
,IlllI->status);
llIIIIIII(lIIII,IlllI->status,GFP_ATOMIC);IIIIlII(lIIII);}static void IlIIIIIl(
struct urb*IlllI
#if KERNEL_LT((0x62a+1561-0xc41),(0x194c+754-0x1c38),(0x254+4156-0x127d))
,struct pt_regs*lIllIlI
#endif
){struct llIIll*lIIII=IlllI->context;lIlll(
"\x21\x21\x21\x21\x20\x44\x41\x54\x41\x20\x75\x72\x62\x20\x63\x6f\x6d\x70\x6c\x65\x74\x65\x64\x20\x2d\x20\x73\x74\x61\x74\x75\x73\x3d\x25\x64" "\n"
,IlllI->status);
IIIIIllII(lIIII,IlllI->status,GFP_ATOMIC);IIIIlII(lIIII);}static void IIIIlIIlI(
struct urb*IlllI
#if KERNEL_LT((0x10c+6920-0x1c12),(0x206+6626-0x1be2),(0xe57+2207-0x16e3))
,struct pt_regs*lIllIlI
#endif
){struct llIIll*lIIII=IlllI->context;lIlll(
"\x21\x21\x21\x21\x20\x53\x54\x41\x54\x55\x53\x20\x75\x72\x62\x20\x63\x6f\x6d\x70\x6c\x65\x74\x65\x64\x20\x2d\x20\x73\x74\x61\x74\x75\x73\x3d\x25\x64" "\n"
,IlllI->status);
IIIlllIll(lIIII,IlllI->status,GFP_ATOMIC);IIIIlII(lIIII);}int IlIIllIll(struct 
llIIll*lIIII){IIlII IIlIl=(IIlII)(lIIII->IlIlll+(0x170d+1071-0x1b3b));
if(IIlIl->lllllI.IllllI>=lIIII->IlllI->actual_length){IIlIl->lllllI.IllllI=lIIII
->IlllI->actual_length;IIlIl->lllllI.llllll.IIIII=sizeof(IIlIl->lllllI)+IIlIl->
lllllI.IllllI;IIlIl->lllllI.llllll.Status=lIIII->status;memcpy(lIIII->IlIlll->
lIIIll.llIIl,lIIII->llIIl,lIIII->IlllI->actual_length);return(0x88b+1502-0xe68);
}


IIlIl->lllllI.llllll.IIIII=sizeof(IIlIl->lllllI)+IIlIl->lllllI.IllllI;IIlIl->
lllllI.llllll.Status=-EOVERFLOW;memcpy(lIIII->IlIlll->lIIIll.llIIl,lIIII->llIIl,
IIlIl->lllllI.IllllI);return(0xd+9358-0x249b);}
#endif 

