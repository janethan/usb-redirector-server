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
int IIIIIlII(struct IlIlII*IIIlI,struct urb*lIlllIlI);int IllIllIlI(struct 
IlIlII*IIIlI,struct urb*lIlllIlI);void llIlIIIll(struct urb*IlllI
#if KERNEL_LT((0x214b+912-0x24d9),(0xe04+2481-0x17af),(0x1afa+405-0x1c7c))
,struct pt_regs*lIllIlI
#endif
);struct IlIlII*lllIlIIII(int pipe,int interval,int IIIlIIII,int IIllIIl,struct 
usb_device*IlIIll,struct lIIIllI*lIIlll,void*context,urb_chain_complete_t 
complete,gfp_t llllI){struct IlIlII*IIIlI;int i,IlIlI=(0x927+6653-0x2324);struct
 usb_host_endpoint*ep;lIlll(
"\x75\x73\x62\x64\x5f\x75\x63\x5f\x61\x6c\x6c\x6f\x63\x3a\x20\x2b\x2b" "\n");ep=
usb_pipein(pipe)?IlIIll->ep_in[usb_pipeendpoint(pipe)]:IlIIll->ep_out[
usb_pipeendpoint(pipe)];if(!ep){lIlll(
"\x75\x73\x62\x64\x5f\x75\x63\x5f\x61\x6c\x6c\x6f\x63\x3a\x20\x2d\x2d\x20\x65\x72\x72\x6f\x72\x2c\x20\x65\x6e\x64\x70\x6f\x69\x6e\x74\x20\x69\x73\x20\x4e\x55\x4c\x4c" "\n"
);return NULL;}IIIlI=IllIllI(sizeof(struct IlIlII)+sizeof(struct urb*)*lIIlll->
IIIIl,GFP_KERNEL);if(IIIlI==NULL){lIlll(
"\x75\x73\x62\x64\x5f\x75\x63\x5f\x61\x6c\x6c\x6f\x63\x3a\x20\x2d\x2d\x20\x65\x72\x72\x6f\x72\x2c\x20\x6b\x6d\x61\x6c\x6c\x6f\x63\x20\x66\x61\x69\x6c\x65\x64" "\n"
);return NULL;}IIIlI->pipe=pipe;IIIlI->IIIlIIII=IIIlIIII;IIIlI->IIllIIl=IIllIIl;
IIIlI->IlIIll=IlIIll;IIIlI->IIIIl=lIIlll->IIIIl;IIIlI->status=
(0x1af6+863-0x1e55);IIIlI->lIIlIlIlI=(0xcb3+4392-0x1ddb);IIIlI->context=context;
IIIlI->complete=complete;atomic_set(&IIIlI->lIlIIIII,(0xf35+1093-0x137a));
spin_lock_init(&IIIlI->lock);for(i=(0x758+4375-0x186f);i<IIIlI->IIIIl;i++){
if(IlIlI<(0x5b4+4300-0x1680)){break;}IIIlI->IIIlII[i]=lIlIIlIl(lIIlll->IllIIl[i]
.number_of_packets,llllI);if(!IIIlI->IIIlII[i]){IIllIl(
"\x75\x73\x62\x64\x5f\x75\x63\x5f\x61\x6c\x6c\x6f\x63\x3a\x20\x66\x61\x69\x6c\x65\x64\x20\x74\x6f\x20\x61\x6c\x6c\x6f\x63\x61\x74\x65\x20\x61\x6e\x20\x75\x72\x62\x20\x2d\x20\x6e\x6f\x20\x6d\x65\x6d\x6f\x72\x79" "\n"
);IlIlI=-ENOMEM;break;}IIIlI->IIIlII[i]->transfer_flags|=URB_NO_INTERRUPT;switch
(usb_pipetype(pipe)){case PIPE_BULK:usb_fill_bulk_urb(IIIlI->IIIlII[i],IIIlI->
IlIIll,pipe,lIIlll->IllIIl[i].transfer_buffer,lIIlll->IllIIl[i].
transfer_buffer_length,llIlIIIll,IIIlI);if(usb_pipein(pipe)){IIIlI->IIIlII[i]->
transfer_flags|=URB_SHORT_NOT_OK;}break;case PIPE_ISOCHRONOUS:IIIlI->IIIlII[i]->
dev=IlIIll;IIIlI->IIIlII[i]->pipe=pipe;IIIlI->IIIlII[i]->transfer_flags=
URB_ISO_ASAP;IIIlI->IIIlII[i]->transfer_buffer=lIIlll->IllIIl[i].transfer_buffer
;IIIlI->IIIlII[i]->transfer_buffer_length=lIIlll->IllIIl[i].
transfer_buffer_length;IIIlI->IIIlII[i]->start_frame=-(0x195+3978-0x111e);IIIlI
->IIIlII[i]->number_of_packets=lIIlll->IllIIl[i].number_of_packets;IIIlI->IIIlII
[i]->context=IIIlI;IIIlI->IIIlII[i]->complete=llIlIIIll;if(interval){IIIlI->
IIIlII[i]->interval=interval;}else{IIIlI->IIIlII[i]->interval=ep?ep->desc.
bInterval:(0x2000+1802-0x2709);IIIlI->IIIlII[i]->interval=(0x1501+3132-0x213c)<<
(IIIlI->IIIlII[i]->interval-(0x9+7973-0x1f2d));}break;default:IIllIl(
"\x75\x73\x62\x64\x5f\x75\x63\x5f\x61\x6c\x6c\x6f\x63\x3a\x20\x69\x6e\x76\x61\x6c\x69\x64\x20\x70\x69\x70\x65\x20\x74\x79\x70\x65" "\n"
);IlIlI=-EINVAL;break;}IIIlI->IIIlII[i]->dev=NULL;
}if(IlIlI<(0x24c+151-0x2e3)){
for(i--;i>=(0x905+4893-0x1c22);i--){lllllIlI(IIIlI->IIIlII[i]);}lIlIll(IIIlI);
lIlll(
"\x75\x73\x62\x64\x5f\x75\x63\x5f\x61\x6c\x6c\x6f\x63\x3a\x20\x2d\x2d\x20\x66\x61\x69\x6c\x65\x64" "\n"
);return NULL;}
IIIlI->IIIlII[IIIlI->IIIIl-(0x11f8+2239-0x1ab6)]->transfer_flags&=~
URB_NO_INTERRUPT;lIlll(
"\x75\x73\x62\x64\x5f\x75\x63\x5f\x61\x6c\x6c\x6f\x63\x3a\x20\x2d\x2d\x20\x73\x75\x63\x63\x65\x73\x73" "\n"
);return IIIlI;}

void lIIIIlIIl(struct IlIlII*IIIlI){int i;lIlll(
"\x75\x73\x62\x64\x5f\x75\x63\x5f\x66\x72\x65\x65" "\n");for(i=
(0x1ec3+1708-0x256f);i<IIIlI->IIIIl;i++){if(IIIlI->IIIlII[i])lllllIlI(IIIlI->
IIIlII[i]);}lIlIll(IIIlI);}void llIlIIIll(struct urb*IlllI
#if KERNEL_LT((0x102b+177-0x10da),(0x744+2913-0x129f),(0x17b8+3642-0x25df))
,struct pt_regs*lIllIlI
#endif
){struct IlIlII*IIIlI=IlllI->context;








if(IlllI->status&&IlllI->status!=-ECONNRESET&&IlllI->status!=-ENOENT){int abort=
(0xb34+4338-0x1c26);spin_lock(&IIIlI->lock);if(IIIlI->status==
(0x168c+3213-0x2319))
{
if(IlllI->status==-EREMOTEIO&&IIIlI->IIIlIIII){IIIlI->status=(0x1c3+3331-0xec6);
lIlll(
"\x75\x73\x62\x64\x5f\x75\x63\x5f\x75\x72\x62\x5f\x63\x6f\x6d\x70\x6c\x65\x74\x65\x3a\x20\x73\x68\x6f\x72\x74\x20\x74\x72\x61\x6e\x73\x66\x65\x72\x20\x64\x65\x74\x65\x63\x74\x65\x64\x20\x61\x6e\x64\x20\x69\x73\x20\x6f\x6b\x2e\x20\x61\x63\x74\x75\x61\x6c\x5f\x6c\x65\x6e\x67\x74\x68\x3d\x25\x64" "\n"
,IlllI->actual_length);}else{IIIlI->status=IlllI->status;lIlll(
"\x75\x73\x62\x64\x5f\x75\x63\x5f\x75\x72\x62\x5f\x63\x6f\x6d\x70\x6c\x65\x74\x65\x3a\x20\x65\x61\x72\x6c\x79\x20\x75\x72\x62\x20\x63\x6f\x6d\x70\x6c\x65\x74\x65\x64\x20\x77\x69\x74\x68\x20\x73\x74\x61\x74\x75\x73\x20\x25\x64" "\n"
,IlllI->status);}abort=(0x183b+2960-0x23ca);}spin_unlock(&IIIlI->lock);if(abort)
{IIIIIlII(IIIlI,IlllI);}}
#if defined(_USBD_USE_EHCI_FIX_) && KERNEL_GT_EQ((0xa01+2483-0x13b2),\
(0xea6+2251-0x176b),(0xf4d+2342-0x185a)) && KERNEL_LT_EQ((0xdc0+4374-0x1ed4),\
(0xc3f+3730-0x1acb),(0x4f+1416-0x5bb))
if(IIIlI->IIllIIl&&usb_pipeisoc(IlllI->pipe)&&IlllI->status==(0x54b+2045-0xd48))
{if(atomic_read(&IlllI->kref.refcount)>(0x5e2+1056-0xa01))usb_put_urb(IlllI);}
#endif
IlllI->dev=NULL;
IIIlI->lIIlIlIlI+=IlllI->actual_length;
if(atomic_dec_and_test(&IIIlI->lIlIIIII)){lIlll(
"\x75\x73\x62\x64\x5f\x75\x63\x5f\x75\x72\x62\x5f\x63\x6f\x6d\x70\x6c\x65\x74\x65\x3a\x20\x61\x6c\x6c\x20\x75\x72\x62\x73\x20\x66\x69\x6e\x69\x73\x68\x65\x64\x20\x2d\x20\x63\x6f\x6d\x70\x6c\x65\x74\x69\x6e\x67\x20\x74\x68\x65\x20\x63\x68\x61\x69\x6e" "\n"
);IIIlI->complete(IIIlI);}}int IlllIllIl(struct IlIlII*IIIlI){int i,IIIIIl,IlIlI
=(0x13b2+3638-0x21e8);unsigned long flags;lIlll(
"\x75\x73\x62\x64\x5f\x75\x63\x5f\x73\x75\x62\x6d\x69\x74\x3a\x20\x2b\x2b" "\n")
;atomic_set(&IIIlI->lIlIIIII,IIIlI->IIIIl);spin_lock_irqsave(&IIIlI->lock,flags)
;for(i=(0x42b+6224-0x1c7b),IIIIIl=(0x1e28+1118-0x2286);i<IIIlI->IIIIl;i++){if(
IIIlI->status!=(0x3fb+5656-0x1a13)){break;}IIIlI->IIIlII[i]->dev=IIIlI->IlIIll;
IlIlI=usb_submit_urb(IIIlI->IIIlII[i],GFP_ATOMIC);
if(IlIlI!=(0x76a+6226-0x1fbc)){IIIlI->IIIlII[i]->dev=NULL;
}spin_unlock_irqrestore(&IIIlI->lock,flags);if(IlIlI==-ENXIO||IlIlI==-EAGAIN||
IlIlI==-ENOMEM){lIlll(
"\x75\x73\x62\x64\x5f\x75\x63\x5f\x73\x75\x62\x6d\x69\x74\x3a\x20\x72\x65\x74\x72\x79\x69\x6e\x67\x20\x66\x61\x69\x6c\x65\x64\x20\x75\x72\x62" "\n"
);
if(IIIIIl++<(0x8b3+1130-0xd13)){i--;IlIlI=(0x2042+130-0x20c4);yield();}}else{
cpu_relax();IIIIIl=(0x1b13+2685-0x2590);}spin_lock_irqsave(&IIIlI->lock,flags);
if(IlIlI!=(0x534+8090-0x24ce)){lIlll(
"\x75\x73\x62\x64\x5f\x75\x63\x5f\x73\x75\x62\x6d\x69\x74\x3a\x20\x73\x75\x62\x6d\x69\x74\x20\x66\x61\x69\x6c\x65\x64" "\n"
);IIIlI->status=-(0xc33+1258-0x111c);break;}}spin_unlock_irqrestore(&IIIlI->lock
,flags);
if(IlIlI<(0x1+5595-0x15dc)){IIIIIlII(IIIlI,NULL);}else{int IIlIlIllI=IIIlI->
IIIIl-i;
if(IIlIlIllI>(0x9e5+6485-0x233a)&&atomic_sub_and_test(IIlIlIllI,&IIIlI->lIlIIIII
)){lIlll(
"\x75\x73\x62\x64\x5f\x75\x63\x5f\x73\x75\x62\x6d\x69\x74\x3a\x20\x69\x6f\x63\x6f\x6e\x74\x20\x69\x73\x20\x30\x2c\x20\x63\x61\x6c\x6c\x69\x6e\x67\x20\x63\x6f\x6d\x70\x6c\x65\x74\x69\x6f\x6e" "\n"
);IIIlI->complete(IIIlI);}}lIlll(
"\x75\x73\x62\x64\x5f\x75\x63\x5f\x73\x75\x62\x6d\x69\x74\x3a\x20\x2d\x2d\x20\x72\x65\x73\x75\x6c\x74\x3d\x25\x64" "\n"
,IlIlI);return IlIlI;}int lIlIIIlIl(struct IlIlII*IIIlI){int i;for(i=
(0x1725+2420-0x2099);i<IIIlI->IIIIl;i++){usb_get_urb(IIIlI->IIIlII[i]);}return
(0x1609+133-0x168e);}int IIIIIIllI(struct IlIlII*IIIlI){int i;for(i=
(0x4e6+2170-0xd60);i<IIIlI->IIIIl;i++){usb_put_urb(IIIlI->IIIlII[i]);}return
(0x3c3+7023-0x1f32);}int lIIlIIIII(struct IlIlII*IIIlI){unsigned long flags;int 
abort=(0xab8+4873-0x1dc1);lIlll(
"\x75\x73\x62\x64\x5f\x75\x63\x5f\x75\x6e\x6c\x69\x6e\x6b\x3a\x20\x2b\x2b" "\n")
;spin_lock_irqsave(&IIIlI->lock,flags);if(IIIlI->status==(0x788+3910-0x16ce)){
IIIlI->status=-ECONNRESET;abort=(0x2432+604-0x268d);}spin_unlock_irqrestore(&
IIIlI->lock,flags);if(abort){IIIIIlII(IIIlI,NULL);}lIlll(
"\x75\x73\x62\x64\x5f\x75\x63\x5f\x75\x6e\x6c\x69\x6e\x6b\x3a\x20\x2d\x2d" "\n")
;return(0x51a+3211-0x11a5);}int IllllIlll(struct IlIlII*IIIlI){unsigned long 
flags;lIlll(
"\x75\x73\x62\x64\x5f\x75\x63\x5f\x6b\x69\x6c\x6c\x3a\x20\x2b\x2b" "\n");
spin_lock_irqsave(&IIIlI->lock,flags);if(IIIlI->status==(0x15ac+256-0x16ac)){
IIIlI->status=-ECONNRESET;}spin_unlock_irqrestore(&IIIlI->lock,flags);IllIllIlI(
IIIlI,NULL);lIlll(
"\x75\x73\x62\x64\x5f\x75\x63\x5f\x6b\x69\x6c\x6c\x3a\x20\x2d\x2d" "\n");return
(0x37f+3053-0xf6c);}int IllIllIlI(struct IlIlII*IIIlI,struct urb*lIlllIlI){int i
,IIlllIll=(0xc37+3434-0x19a1);for(i=(0x1360+3528-0x2128);i<IIIlI->IIIIl;i++){if(
!IIlllIll&&lIlllIlI){if(IIIlI->IIIlII[i]==lIlllIlI)IIlllIll=(0xa63+7026-0x25d4);
}else{if(IIIlI->IIIlII[i]&&IIIlI->IIIlII[i]->dev){
#if KERNEL_GT_EQ((0x8e8+6322-0x2198),(0xd91+4564-0x1f5f),(0x235+7089-0x1dca))


usb_poison_urb(IIIlI->IIIlII[i]);
#else
usb_kill_urb(IIIlI->IIIlII[i]);
#endif
}}}return(0x3dc+6961-0x1f0d);}int IIIIIlII(struct IlIlII*IIIlI,struct urb*
lIlllIlI){int i,IIlllIll=(0x141f+3346-0x2131);for(i=(0x1451+267-0x155c);i<IIIlI
->IIIIl;i++){if(!IIlllIll&&lIlllIlI){if(IIIlI->IIIlII[i]==lIlllIlI)IIlllIll=
(0x1128+933-0x14cc);}else{if(IIIlI->IIIlII[i]&&IIIlI->IIIlII[i]->dev)
usb_unlink_urb(IIIlI->IIIlII[i]);}}return(0x3fa+444-0x5b6);}int IlIlllllI(struct
 IlIlII*IIIlI,struct urb*IlllI){int i;for(i=(0xde0+489-0xfc9);i<IIIlI->IIIIl;i++
){if(IIIlI->IIIlII[i]==IlllI)break;}return(i==IIIlI->IIIIl)?-(0x7d7+4209-0x1847)
:i;}





struct lIIIllI*IIIIIIIIl(size_t length,int Illlllll){struct lIIIllI*IIIlI;size_t
 IlIIIlII;size_t llllIIIl;size_t IIIIl;int i;lIlll(
"\x75\x73\x62\x64\x5f\x62\x63\x5f\x61\x6c\x6c\x6f\x63\x3a\x20\x2b\x2b" "\n");if(
unlikely(Illlllll==(0xba4+1170-0x1036))){lIlll(
"\x75\x73\x62\x64\x5f\x62\x63\x5f\x61\x6c\x6c\x6f\x63\x3a\x20\x2d\x2d\x20\x65\x72\x72\x6f\x72\x2c\x20\x69\x6e\x76\x61\x6c\x69\x64\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72" "\n"
);return NULL;}if(unlikely(length==(0x1740+881-0x1ab1))){lIlll(
"\x75\x73\x62\x64\x5f\x62\x63\x5f\x61\x6c\x6c\x6f\x63\x3a\x20\x2d\x2d\x20\x65\x72\x72\x6f\x72\x2c\x20\x7a\x65\x72\x6f\x2d\x6c\x65\x6e\x67\x74\x68\x20\x62\x75\x66\x66\x65\x72" "\n"
);return NULL;}
IlIIIlII=IIlIIlI-(IIlIIlI%Illlllll);IIIIl=(length-(0xe52+1082-0x128b))/IlIIIlII+
(0x6f5+8015-0x2643);llllIIIl=length%IlIIIlII;
if(llllIIIl==(0xdd6+4984-0x214e)){llllIIIl=IlIIIlII;}lIlll(
"\x75\x73\x62\x64\x5f\x62\x63\x5f\x61\x6c\x6c\x6f\x63\x3a\x20\x70\x61\x72\x74\x73\x69\x7a\x65\x3d\x25\x6c\x75\x20\x63\x6f\x75\x6e\x74\x3d\x25\x6c\x75" "\n"
,(unsigned long)IlIIIlII,(unsigned long)IIIIl);IIIlI=IllIllI(sizeof(struct 
lIIIllI)+sizeof(((struct lIIIllI*)(0x442+6203-0x1c7d))->IllIIl[(0x9d0+163-0xa73)
])*IIIIl,GFP_KERNEL);if(unlikely(IIIlI==NULL)){lIlll(
"\x75\x73\x62\x64\x5f\x62\x63\x5f\x61\x6c\x6c\x6f\x63\x3a\x20\x2d\x2d\x20\x65\x72\x72\x6f\x72\x2c\x20\x6b\x6d\x61\x6c\x6c\x6f\x63\x20\x66\x61\x69\x6c\x65\x64" "\n"
);return NULL;}IIIlI->IIIIl=IIIIl;
for(i=(0x1817+1211-0x1cd2);i<IIIIl;i++){
size_t IIIlIll=(i==IIIIl-(0x9bb+4700-0x1c16))?llllIIIl:IlIIIlII;lIlll(
"\x75\x73\x62\x64\x5f\x62\x63\x5f\x61\x6c\x6c\x6f\x63\x3a\x20\x61\x6c\x6c\x6f\x63\x61\x74\x69\x6e\x67\x20\x25\x6c\x75\x20\x62\x79\x74\x65\x73" "\n"
,(unsigned long)IIIlIll);IIIlI->IllIIl[i].transfer_buffer=IllIllI(IIIlIll,
GFP_KERNEL);IIIlI->IllIIl[i].transfer_buffer_length=IIIlIll;IIIlI->IllIIl[i].
actual_length=(0x81b+91-0x876);IIIlI->IllIIl[i].number_of_packets=
(0xde2+2875-0x191d);if(!IIIlI->IllIIl[i].transfer_buffer){lIlll(
"\x75\x73\x62\x64\x5f\x62\x63\x5f\x61\x6c\x6c\x6f\x63\x3a\x20\x6b\x6d\x61\x6c\x6c\x6f\x63\x20\x66\x61\x69\x6c\x65\x64" "\n"
);break;}}
if(i<IIIIl){for(i--;i>=(0x2eb+7322-0x1f85);i--){lIlIll(IIIlI->IllIIl[i].
transfer_buffer);}lIlIll(IIIlI);lIlll(
"\x75\x73\x62\x64\x5f\x62\x63\x5f\x61\x6c\x6c\x6f\x63\x3a\x20\x2d\x2d\x20\x65\x72\x72\x6f\x72" "\n"
);return NULL;}lIlll(
"\x75\x73\x62\x64\x5f\x62\x63\x5f\x61\x6c\x6c\x6f\x63\x3a\x20\x2d\x2d\x20\x73\x75\x63\x63\x65\x73\x73\x2c\x20\x62\x63\x3d\x30\x78\x25\x70" "\n"
,IIIlI);return IIIlI;}


struct lIIIllI*lIIIIIIIl(size_t length,IllIlIII*llIIlllI,lllII IIIllIll){struct 
lIIIllI*IIIlI;int i;size_t IIIIl;void*IllIllll;size_t IIIlIll;size_t IlIIlIIl;
size_t lIIllllI;lIlll(
"\x75\x73\x62\x64\x5f\x62\x63\x5f\x61\x6c\x6c\x6f\x63\x5f\x66\x6f\x72\x5f\x69\x73\x6f\x3a\x20\x2b\x2b\x20\x6c\x65\x6e\x67\x74\x68\x3d\x25\x6c\x75\x20\x6e\x75\x6d\x70\x61\x63\x6b\x65\x74\x73\x3d\x25\x64" "\n"
,(unsigned long)length,IIIllIll);if(unlikely(length==(0x1c41+2506-0x260b))){
lIlll(
"\x75\x73\x62\x64\x5f\x62\x63\x5f\x61\x6c\x6c\x6f\x63\x5f\x66\x6f\x72\x5f\x69\x73\x6f\x3a\x20\x2d\x2d\x20\x7a\x65\x72\x6f\x2d\x6c\x65\x6e\x67\x74\x68\x20\x62\x75\x66\x66\x65\x72\x28\x31\x29" "\n"
);return NULL;}if(unlikely(IIIllIll==(0x1c83+2407-0x25ea))){lIlll(
"\x75\x73\x62\x64\x5f\x62\x63\x5f\x61\x6c\x6c\x6f\x63\x5f\x66\x6f\x72\x5f\x69\x73\x6f\x3a\x20\x2d\x2d\x20\x7a\x65\x72\x6f\x2d\x6c\x65\x6e\x67\x74\x68\x20\x62\x75\x66\x66\x65\x72\x28\x32\x29" "\n"
);return NULL;}



IIIIl=(length-(0x71+4739-0x12f3))/IIlIIlI+(0xebc+1122-0x131d);IIIlI=IllIllI(
sizeof(struct lIIIllI)+sizeof(struct IllIl)*IIIIl,GFP_KERNEL);if(unlikely(IIIlI
==NULL)){lIlll(
"\x75\x73\x62\x64\x5f\x62\x63\x5f\x61\x6c\x6c\x6f\x63\x5f\x66\x6f\x72\x5f\x69\x73\x6f\x3a\x20\x2d\x2d\x20\x65\x72\x72\x6f\x72\x2c\x20\x6b\x6d\x61\x6c\x6c\x6f\x63\x20\x66\x61\x69\x6c\x65\x64" "\n"
);return NULL;}IIIlI->IIIIl=(0x50+7576-0x1de8);
IIIlIll=(0x20c2+216-0x219a);IlIIlIIl=(0x7a6+6630-0x218c);lIIllllI=
(0xcba+5616-0x22aa);for(i=(0x608+6655-0x2007);i<IIIllIll;i++){IIIlIll+=llIIlllI[
i].Length;IlIIlIIl++;

if(lIIllllI>llIIlllI[i].Offset){IIllIl(
"\x45\x52\x52\x4f\x52\x21\x21\x21\x20\x4e\x6f\x6e\x2d\x6c\x69\x6e\x65\x61\x72\x20\x69\x73\x6f\x63\x68\x72\x6f\x6e\x6f\x75\x73\x20\x62\x75\x66\x66\x65\x72\x20\x64\x65\x74\x65\x63\x74\x65\x64\x2e\x20\x50\x6c\x65\x61\x73\x65\x20\x72\x65\x70\x6f\x72\x74\x20\x74\x68\x69\x73\x2e" "\n"
);lIlll(
"\x5b\x25\x64\x5d\x20\x6c\x61\x73\x74\x5f\x6f\x66\x66\x73\x65\x74\x3d\x30\x78\x25\x6c\x78\x20\x6f\x66\x66\x73\x65\x74\x3d\x30\x78\x25\x6c\x78"
,i,(unsigned long)lIIllllI,(unsigned long)llIIlllI[i].Offset);break;}lIIllllI=
llIIlllI[i].Offset;


if(((IIIllIll-i)==(0x9c2+547-0xbe4))||(IIIlIll>=IIlIIlI&&IlIIlIIl>=
(0x65f+7079-0x2204)&&llIIlllI[i+(0x5b+8104-0x2002)].Length>(0x2e7+1841-0xa18)&&(
IIIllIll-i)>(0x8bc+797-0xbd7))){if(unlikely(IIIlI->IIIIl>=IIIIl)){lIlll(
"\x75\x73\x62\x64\x5f\x62\x63\x5f\x61\x6c\x6c\x6f\x63\x5f\x66\x6f\x72\x5f\x69\x73\x6f\x3a\x20\x69\x6e\x76\x61\x6c\x69\x64\x20\x62\x75\x66\x66\x65\x72\x20\x73\x69\x7a\x65" "\n"
);break;}if(unlikely(length<IIIlIll)){lIlll(
"\x75\x73\x62\x64\x5f\x62\x63\x5f\x61\x6c\x6c\x6f\x63\x5f\x66\x6f\x72\x5f\x69\x73\x6f\x3a\x20\x69\x6e\x76\x61\x6c\x69\x64\x20\x69\x73\x6f\x20\x62\x75\x66\x66\x65\x72" "\n"
);break;}IllIllll=IllIllI(IIIlIll,GFP_KERNEL);if(unlikely(!IllIllll)){lIlll(
"\x75\x73\x62\x64\x5f\x62\x63\x5f\x61\x6c\x6c\x6f\x63\x5f\x66\x6f\x72\x5f\x69\x73\x6f\x3a\x20\x6b\x6d\x61\x6c\x6c\x6f\x63\x20\x66\x61\x69\x6c\x65\x64" "\n"
);break;}IIIlI->IllIIl[IIIlI->IIIIl].transfer_buffer=IllIllll;IIIlI->IllIIl[
IIIlI->IIIIl].transfer_buffer_length=IIIlIll;IIIlI->IllIIl[IIIlI->IIIIl].
actual_length=(0x253+4860-0x154f);IIIlI->IllIIl[IIIlI->IIIIl].number_of_packets=
IlIIlIIl;IIIlI->IIIIl++;length-=IIIlIll;IIIlIll=(0x39b+41-0x3c4);IlIIlIIl=
(0x13b8+1278-0x18b6);}}
if(i<IIIllIll){for(i=(0x1384+1761-0x1a65);i<IIIlI->IIIIl;i++){lIlIll(IIIlI->
IllIIl[i].transfer_buffer);}lIlIll(IIIlI);lIlll(
"\x75\x73\x62\x64\x5f\x62\x63\x5f\x61\x6c\x6c\x6f\x63\x5f\x66\x6f\x72\x5f\x69\x73\x6f\x3a\x20\x2d\x2d\x20\x65\x72\x72\x6f\x72" "\n"
);return NULL;}lIlll(
"\x75\x73\x62\x64\x5f\x62\x63\x5f\x61\x6c\x6c\x6f\x63\x5f\x66\x6f\x72\x5f\x69\x73\x6f\x3a\x20\x2d\x2d\x20\x73\x75\x63\x63\x65\x73\x73\x2c\x20\x62\x63\x3d\x30\x78\x25\x70" "\n"
,IIIlI);return IIIlI;}size_t IIIIlIlIl(struct lIIIllI*IIIlI,const void*IllIl,
size_t length){int i;size_t lllIlI,IlIlI=(0x107a+3410-0x1dcc);lIlll(
"\x75\x73\x62\x64\x5f\x62\x63\x5f\x63\x6f\x70\x79\x5f\x66\x72\x6f\x6d\x5f\x75\x73\x65\x72\x3a\x20\x63\x6f\x75\x6e\x74\x3d\x25\x6c\x75" "\n"
,(unsigned long)IIIlI->IIIIl);for(i=(0x202+7962-0x211c);i<IIIlI->IIIIl&&length>
(0x71a+2031-0xf09);i++){lllIlI=min(length,IIIlI->IllIIl[i].
transfer_buffer_length);if(__copy_from_user(IIIlI->IllIIl[i].transfer_buffer,
IllIl,lllIlI)!=(0x6d2+3608-0x14ea)){lIlll(
"\x75\x73\x62\x64\x5f\x62\x63\x5f\x63\x6f\x70\x79\x5f\x66\x72\x6f\x6d\x5f\x75\x73\x65\x72\x3a\x20\x63\x61\x6e\x6e\x6f\x74\x20\x63\x6f\x70\x79\x20\x66\x72\x6f\x6d\x20\x75\x73\x65\x72\x20\x62\x75\x66\x66\x65\x72" "\n"
);break;}IIIlI->IllIIl[i].actual_length=lllIlI;IllIl+=lllIlI;length-=lllIlI;
IlIlI+=lllIlI;}return IlIlI;}size_t IlIIllIlI(struct lIIIllI*IIIlI,void*IllIl,
size_t length){int i;size_t lllIlI,IlIlI=(0xe8f+3942-0x1df5);lIlll(
"\x75\x73\x62\x64\x5f\x62\x63\x5f\x63\x6f\x70\x79\x5f\x74\x6f\x5f\x75\x73\x65\x72\x3a\x20\x63\x6f\x75\x6e\x74\x3d\x25\x6c\x75" "\n"
,(unsigned long)IIIlI->IIIIl);for(i=(0x466+3973-0x13eb);i<IIIlI->IIIIl&&length>
(0xe43+928-0x11e3);i++){lllIlI=min(length,IIIlI->IllIIl[i].actual_length);if(
__copy_to_user(IllIl,IIIlI->IllIIl[i].transfer_buffer,lllIlI)!=
(0xead+3146-0x1af7)){lIlll(
"\x75\x73\x62\x64\x5f\x62\x63\x5f\x63\x6f\x70\x79\x5f\x74\x6f\x5f\x75\x73\x65\x72\x3a\x20\x63\x61\x6e\x6e\x6f\x74\x20\x63\x6f\x70\x79\x20\x66\x72\x6f\x6d\x20\x75\x73\x65\x72\x20\x62\x75\x66\x66\x65\x72" "\n"
);break;}IllIl+=lllIlI;length-=lllIlI;IlIlI+=lllIlI;}return IlIlI;}void 
IlIlIIIlI(struct lIIIllI*IIIlI){int i;for(i=(0xb81+2850-0x16a3);i<IIIlI->IIIIl;i
++){if(IIIlI->IllIIl[i].transfer_buffer){lIlIll(IIIlI->IllIIl[i].transfer_buffer
);}}lIlIll(IIIlI);}
#endif 

