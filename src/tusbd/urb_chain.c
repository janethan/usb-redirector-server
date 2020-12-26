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
int IIlIIIlI(struct IlIlII*lIIIl,struct urb*lIlllIlI);int IllIllIlI(struct 
IlIlII*lIIIl,struct urb*lIlllIlI);void Illllllll(struct urb*lIlll
#if KERNEL_LT((0x211+3002-0xdc9),(0x1b65+373-0x1cd4),(0x13f+1452-0x6d8))
,struct pt_regs*lIllIlI
#endif
);struct IlIlII*lIIlIIIIl(int pipe,int interval,int IIIlIIII,int IIIIlII,struct 
usb_device*IIIlIl,struct lIIIllI*lIIlll,void*context,urb_chain_complete_t 
complete,gfp_t llIlI){struct IlIlII*lIIIl;int i,IIIll=(0xe92+1137-0x1303);struct
 usb_host_endpoint*ep;Illll(
"\x75\x73\x62\x64\x5f\x75\x63\x5f\x61\x6c\x6c\x6f\x63\x3a\x20\x2b\x2b" "\n");ep=
usb_pipein(pipe)?IIIlIl->ep_in[usb_pipeendpoint(pipe)]:IIIlIl->ep_out[
usb_pipeendpoint(pipe)];if(!ep){Illll(
"\x75\x73\x62\x64\x5f\x75\x63\x5f\x61\x6c\x6c\x6f\x63\x3a\x20\x2d\x2d\x20\x65\x72\x72\x6f\x72\x2c\x20\x65\x6e\x64\x70\x6f\x69\x6e\x74\x20\x69\x73\x20\x4e\x55\x4c\x4c" "\n"
);return NULL;}lIIIl=IllIllI(sizeof(struct IlIlII)+sizeof(struct urb*)*lIIlll->
IlIII,GFP_KERNEL);if(lIIIl==NULL){Illll(
"\x75\x73\x62\x64\x5f\x75\x63\x5f\x61\x6c\x6c\x6f\x63\x3a\x20\x2d\x2d\x20\x65\x72\x72\x6f\x72\x2c\x20\x6b\x6d\x61\x6c\x6c\x6f\x63\x20\x66\x61\x69\x6c\x65\x64" "\n"
);return NULL;}lIIIl->pipe=pipe;lIIIl->IIIlIIII=IIIlIIII;lIIIl->IIIIlII=IIIIlII;
lIIIl->IIIlIl=IIIlIl;lIIIl->IlIII=lIIlll->IlIII;lIIIl->status=
(0x161a+4239-0x26a9);lIIIl->lIIlIlIlI=(0x1008+1809-0x1719);lIIIl->context=
context;lIIIl->complete=complete;atomic_set(&lIIIl->lIlIIIII,
(0x1151+4237-0x21de));spin_lock_init(&lIIIl->lock);for(i=(0x2a4+3596-0x10b0);i<
lIIIl->IlIII;i++){
if(IIIll<(0x1a96+1282-0x1f98)){break;}lIIIl->IIIlII[i]=IIIIIIIl(lIIlll->IllIIl[i
].number_of_packets,llIlI);if(!lIIIl->IIIlII[i]){IIllIl(
"\x75\x73\x62\x64\x5f\x75\x63\x5f\x61\x6c\x6c\x6f\x63\x3a\x20\x66\x61\x69\x6c\x65\x64\x20\x74\x6f\x20\x61\x6c\x6c\x6f\x63\x61\x74\x65\x20\x61\x6e\x20\x75\x72\x62\x20\x2d\x20\x6e\x6f\x20\x6d\x65\x6d\x6f\x72\x79" "\n"
);IIIll=-ENOMEM;break;}lIIIl->IIIlII[i]->transfer_flags|=URB_NO_INTERRUPT;switch
(usb_pipetype(pipe)){case PIPE_BULK:usb_fill_bulk_urb(lIIIl->IIIlII[i],lIIIl->
IIIlIl,pipe,lIIlll->IllIIl[i].transfer_buffer,lIIlll->IllIIl[i].
transfer_buffer_length,Illllllll,lIIIl);if(usb_pipein(pipe))lIIIl->IIIlII[i]->
transfer_flags|=URB_SHORT_NOT_OK;break;case PIPE_ISOCHRONOUS:lIIIl->IIIlII[i]->
dev=IIIlIl;lIIIl->IIIlII[i]->pipe=pipe;lIIIl->IIIlII[i]->transfer_flags=
URB_ISO_ASAP;lIIIl->IIIlII[i]->transfer_buffer=lIIlll->IllIIl[i].transfer_buffer
;lIIIl->IIIlII[i]->transfer_buffer_length=lIIlll->IllIIl[i].
transfer_buffer_length;lIIIl->IIIlII[i]->start_frame=-(0xa65+464-0xc34);lIIIl->
IIIlII[i]->number_of_packets=lIIlll->IllIIl[i].number_of_packets;lIIIl->IIIlII[i
]->context=lIIIl;lIIIl->IIIlII[i]->complete=Illllllll;if(interval){lIIIl->IIIlII
[i]->interval=interval;}else{lIIIl->IIIlII[i]->interval=ep?ep->desc.bInterval:
(0x4f2+4104-0x14f9);lIIIl->IIIlII[i]->interval=(0x47c+2483-0xe2e)<<(lIIIl->
IIIlII[i]->interval-(0x882+2467-0x1224));}break;default:IIllIl(
"\x75\x73\x62\x64\x5f\x75\x63\x5f\x61\x6c\x6c\x6f\x63\x3a\x20\x69\x6e\x76\x61\x6c\x69\x64\x20\x70\x69\x70\x65\x20\x74\x79\x70\x65" "\n"
);IIIll=-EINVAL;break;}lIIIl->IIIlII[i]->dev=NULL;
}if(IIIll<(0x300+1233-0x7d1)){
for(i--;i>=(0xfac+4231-0x2033);i--){lllllIlI(lIIIl->IIIlII[i]);}lIlIll(lIIIl);
Illll(
"\x75\x73\x62\x64\x5f\x75\x63\x5f\x61\x6c\x6c\x6f\x63\x3a\x20\x2d\x2d\x20\x66\x61\x69\x6c\x65\x64" "\n"
);return NULL;}
lIIIl->IIIlII[lIIIl->IlIII-(0x1468+3311-0x2156)]->transfer_flags&=~
URB_NO_INTERRUPT;Illll(
"\x75\x73\x62\x64\x5f\x75\x63\x5f\x61\x6c\x6c\x6f\x63\x3a\x20\x2d\x2d\x20\x73\x75\x63\x63\x65\x73\x73" "\n"
);return lIIIl;}

void lIIIIlIIl(struct IlIlII*lIIIl){int i;Illll(
"\x75\x73\x62\x64\x5f\x75\x63\x5f\x66\x72\x65\x65" "\n");for(i=(0x75f+290-0x881)
;i<lIIIl->IlIII;i++)if(lIIIl->IIIlII[i])lllllIlI(lIIIl->IIIlII[i]);lIlIll(lIIIl)
;}void Illllllll(struct urb*lIlll
#if KERNEL_LT((0x473+1831-0xb98),(0x1769+3580-0x255f),(0xa87+2909-0x15d1))
,struct pt_regs*lIllIlI
#endif
){struct IlIlII*lIIIl=lIlll->context;








if(lIlll->status&&lIlll->status!=-ECONNRESET&&lIlll->status!=-ENOENT){int abort=
(0x56d+6014-0x1ceb);spin_lock(&lIIIl->lock);if(lIIIl->status==(0xca4+274-0xdb6))
{
if(lIlll->status==-EREMOTEIO&&lIIIl->IIIlIIII){lIIIl->status=(0xa2b+6086-0x21f1)
;Illll(
"\x75\x73\x62\x64\x5f\x75\x63\x5f\x75\x72\x62\x5f\x63\x6f\x6d\x70\x6c\x65\x74\x65\x3a\x20\x73\x68\x6f\x72\x74\x20\x74\x72\x61\x6e\x73\x66\x65\x72\x20\x64\x65\x74\x65\x63\x74\x65\x64\x20\x61\x6e\x64\x20\x69\x73\x20\x6f\x6b\x2e\x20\x61\x63\x74\x75\x61\x6c\x5f\x6c\x65\x6e\x67\x74\x68\x3d\x25\x64" "\n"
,lIlll->actual_length);}else{lIIIl->status=lIlll->status;Illll(
"\x75\x73\x62\x64\x5f\x75\x63\x5f\x75\x72\x62\x5f\x63\x6f\x6d\x70\x6c\x65\x74\x65\x3a\x20\x65\x61\x72\x6c\x79\x20\x75\x72\x62\x20\x63\x6f\x6d\x70\x6c\x65\x74\x65\x64\x20\x77\x69\x74\x68\x20\x73\x74\x61\x74\x75\x73\x20\x25\x64" "\n"
,lIlll->status);}abort=(0x9d4+2885-0x1518);}spin_unlock(&lIIIl->lock);if(abort)
IIlIIIlI(lIIIl,lIlll);}
#if defined(_USBD_USE_EHCI_FIX_) && KERNEL_GT_EQ((0x491+7587-0x2232),\
(0x73f+6576-0x20e9),(0xc78+2650-0x16b9)) && KERNEL_LT_EQ((0x1302+1717-0x19b5),\
(0x75b+5152-0x1b75),(0x1b7f+550-0x1d89))
if(lIIIl->IIIIlII&&usb_pipeisoc(lIlll->pipe)&&lIlll->status==(0x22bb+577-0x24fc)
){if(atomic_read(&lIlll->kref.refcount)>(0x2d9+7769-0x2131))usb_put_urb(lIlll);}
#endif
lIlll->dev=NULL;
lIIIl->lIIlIlIlI+=lIlll->actual_length;
if(atomic_dec_and_test(&lIIIl->lIlIIIII)){Illll(
"\x75\x73\x62\x64\x5f\x75\x63\x5f\x75\x72\x62\x5f\x63\x6f\x6d\x70\x6c\x65\x74\x65\x3a\x20\x61\x6c\x6c\x20\x75\x72\x62\x73\x20\x66\x69\x6e\x69\x73\x68\x65\x64\x20\x2d\x20\x63\x6f\x6d\x70\x6c\x65\x74\x69\x6e\x67\x20\x74\x68\x65\x20\x63\x68\x61\x69\x6e" "\n"
);lIIIl->complete(lIIIl);}}int llIIIlIlI(struct IlIlII*lIIIl){int i,IIIIIl,IIIll
=(0x1898+887-0x1c0f);unsigned long flags;Illll(
"\x75\x73\x62\x64\x5f\x75\x63\x5f\x73\x75\x62\x6d\x69\x74\x3a\x20\x2b\x2b" "\n")
;atomic_set(&lIIIl->lIlIIIII,lIIIl->IlIII);spin_lock_irqsave(&lIIIl->lock,flags)
;for(i=(0xe38+2603-0x1863),IIIIIl=(0x1bc+9070-0x252a);i<lIIIl->IlIII;i++){if(
lIIIl->status!=(0x1df1+823-0x2128))break;lIIIl->IIIlII[i]->dev=lIIIl->IIIlIl;
IIIll=usb_submit_urb(lIIIl->IIIlII[i],GFP_ATOMIC);
if(IIIll!=(0x1521+3505-0x22d2))lIIIl->IIIlII[i]->dev=NULL;
spin_unlock_irqrestore(&lIIIl->lock,flags);if(IIIll==-ENXIO||IIIll==-EAGAIN||
IIIll==-ENOMEM){Illll(
"\x75\x73\x62\x64\x5f\x75\x63\x5f\x73\x75\x62\x6d\x69\x74\x3a\x20\x72\x65\x74\x72\x79\x69\x6e\x67\x20\x66\x61\x69\x6c\x65\x64\x20\x75\x72\x62" "\n"
);
if(IIIIIl++<(0x2d+649-0x2ac)){i--;IIIll=(0xc31+2355-0x1564);yield();}}else{
cpu_relax();IIIIIl=(0xd84+6209-0x25c5);}spin_lock_irqsave(&lIIIl->lock,flags);if
(IIIll!=(0x6b9+7915-0x25a4)){Illll(
"\x75\x73\x62\x64\x5f\x75\x63\x5f\x73\x75\x62\x6d\x69\x74\x3a\x20\x73\x75\x62\x6d\x69\x74\x20\x66\x61\x69\x6c\x65\x64" "\n"
);lIIIl->status=-(0x4b7+4245-0x154b);break;}}spin_unlock_irqrestore(&lIIIl->lock
,flags);
if(IIIll<(0x1172+5391-0x2681))IIlIIIlI(lIIIl,NULL);else{int IIlIlIllI=lIIIl->
IlIII-i;
if(IIlIlIllI>(0x1132+2187-0x19bd)&&atomic_sub_and_test(IIlIlIllI,&lIIIl->
lIlIIIII)){Illll(
"\x75\x73\x62\x64\x5f\x75\x63\x5f\x73\x75\x62\x6d\x69\x74\x3a\x20\x69\x6f\x63\x6f\x6e\x74\x20\x69\x73\x20\x30\x2c\x20\x63\x61\x6c\x6c\x69\x6e\x67\x20\x63\x6f\x6d\x70\x6c\x65\x74\x69\x6f\x6e" "\n"
);lIIIl->complete(lIIIl);}}Illll(
"\x75\x73\x62\x64\x5f\x75\x63\x5f\x73\x75\x62\x6d\x69\x74\x3a\x20\x2d\x2d\x20\x72\x65\x73\x75\x6c\x74\x3d\x25\x64" "\n"
,IIIll);return IIIll;}int lIlIIIlIl(struct IlIlII*lIIIl){int i;for(i=
(0x716+7569-0x24a7);i<lIIIl->IlIII;i++)usb_get_urb(lIIIl->IIIlII[i]);return
(0x1762+728-0x1a3a);}int llIIlIlIl(struct IlIlII*lIIIl){int i;for(i=
(0x9c9+4950-0x1d1f);i<lIIIl->IlIII;i++)usb_put_urb(lIIIl->IIIlII[i]);return
(0x773+4947-0x1ac6);}int lIIlIIIII(struct IlIlII*lIIIl){unsigned long flags;int 
abort=(0xd9d+1548-0x13a9);Illll(
"\x75\x73\x62\x64\x5f\x75\x63\x5f\x75\x6e\x6c\x69\x6e\x6b\x3a\x20\x2b\x2b" "\n")
;spin_lock_irqsave(&lIIIl->lock,flags);if(lIIIl->status==(0x594+2077-0xdb1)){
lIIIl->status=-ECONNRESET;abort=(0x11d9+4062-0x21b6);}spin_unlock_irqrestore(&
lIIIl->lock,flags);if(abort)IIlIIIlI(lIIIl,NULL);Illll(
"\x75\x73\x62\x64\x5f\x75\x63\x5f\x75\x6e\x6c\x69\x6e\x6b\x3a\x20\x2d\x2d" "\n")
;return(0x553+6994-0x20a5);}int IllllIlll(struct IlIlII*lIIIl){unsigned long 
flags;Illll(
"\x75\x73\x62\x64\x5f\x75\x63\x5f\x6b\x69\x6c\x6c\x3a\x20\x2b\x2b" "\n");
spin_lock_irqsave(&lIIIl->lock,flags);if(lIIIl->status==(0x1b61+394-0x1ceb)){
lIIIl->status=-ECONNRESET;}spin_unlock_irqrestore(&lIIIl->lock,flags);IllIllIlI(
lIIIl,NULL);Illll(
"\x75\x73\x62\x64\x5f\x75\x63\x5f\x6b\x69\x6c\x6c\x3a\x20\x2d\x2d" "\n");return
(0x1482+1288-0x198a);}int IllIllIlI(struct IlIlII*lIIIl,struct urb*lIlllIlI){int
 i,IIIIIlll=(0x1d22+61-0x1d5f);for(i=(0x914+5267-0x1da7);i<lIIIl->IlIII;i++){if(
!IIIIIlll&&lIlllIlI){if(lIIIl->IIIlII[i]==lIlllIlI)IIIIIlll=(0x34b+2977-0xeeb);}
else{if(lIIIl->IIIlII[i]&&lIIIl->IIIlII[i]->dev){
#if KERNEL_GT_EQ((0x8ed+4273-0x199c),(0xca9+1324-0x11cf),(0x106b+4527-0x21fe))


usb_poison_urb(lIIIl->IIIlII[i]);
#else
usb_kill_urb(lIIIl->IIIlII[i]);
#endif
}}}return(0xb0a+5220-0x1f6e);}int IIlIIIlI(struct IlIlII*lIIIl,struct urb*
lIlllIlI){int i,IIIIIlll=(0x9db+4149-0x1a10);for(i=(0xd85+44-0xdb1);i<lIIIl->
IlIII;i++){if(!IIIIIlll&&lIlllIlI){if(lIIIl->IIIlII[i]==lIlllIlI)IIIIIlll=
(0xadc+7043-0x265e);}else{if(lIIIl->IIIlII[i]&&lIIIl->IIIlII[i]->dev)
usb_unlink_urb(lIIIl->IIIlII[i]);}}return(0xfa4+5850-0x267e);}int IlIlllllI(
struct IlIlII*lIIIl,struct urb*lIlll){int i;for(i=(0x274+2480-0xc24);i<lIIIl->
IlIII;i++)if(lIIIl->IIIlII[i]==lIlll)break;return(i==lIIIl->IlIII)?-
(0x1333+2929-0x1ea3):i;}





struct lIIIllI*llIlIIIII(size_t length,int llIIIIlI){struct lIIIllI*lIIIl;size_t
 IlIlIlII;size_t IlIIlIIII;size_t IlIII;int i;Illll(
"\x75\x73\x62\x64\x5f\x62\x63\x5f\x61\x6c\x6c\x6f\x63\x3a\x20\x2b\x2b" "\n");if(
unlikely(llIIIIlI==(0x2e6+1051-0x701))){Illll(
"\x75\x73\x62\x64\x5f\x62\x63\x5f\x61\x6c\x6c\x6f\x63\x3a\x20\x2d\x2d\x20\x65\x72\x72\x6f\x72\x2c\x20\x69\x6e\x76\x61\x6c\x69\x64\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72" "\n"
);return NULL;}if(unlikely(length==(0x2+4480-0x1182))){Illll(
"\x75\x73\x62\x64\x5f\x62\x63\x5f\x61\x6c\x6c\x6f\x63\x3a\x20\x2d\x2d\x20\x65\x72\x72\x6f\x72\x2c\x20\x7a\x65\x72\x6f\x2d\x6c\x65\x6e\x67\x74\x68\x20\x62\x75\x66\x66\x65\x72" "\n"
);return NULL;}
IlIlIlII=IIlIIlI-(IIlIIlI%llIIIIlI);IlIIlIIII=length%IlIlIlII;IlIII=(length-
(0x23a8+590-0x25f5))/IlIlIlII+(0xbca+3944-0x1b31);Illll(
"\x75\x73\x62\x64\x5f\x62\x63\x5f\x61\x6c\x6c\x6f\x63\x3a\x20\x70\x61\x72\x74\x73\x69\x7a\x65\x3d\x25\x6c\x75\x20\x63\x6f\x75\x6e\x74\x3d\x25\x6c\x75" "\n"
,(unsigned long)IlIlIlII,(unsigned long)IlIII);lIIIl=IllIllI(sizeof(struct 
lIIIllI)+sizeof(((struct lIIIllI*)(0x273+806-0x599))->IllIIl[(0x1620+703-0x18df)
])*IlIII,GFP_KERNEL);if(unlikely(lIIIl==NULL)){Illll(
"\x75\x73\x62\x64\x5f\x62\x63\x5f\x61\x6c\x6c\x6f\x63\x3a\x20\x2d\x2d\x20\x65\x72\x72\x6f\x72\x2c\x20\x6b\x6d\x61\x6c\x6c\x6f\x63\x20\x66\x61\x69\x6c\x65\x64" "\n"
);return NULL;}lIIIl->IlIII=IlIII;
for(i=(0x327+36-0x34b);i<IlIII;i++){
size_t lllllll=(i==IlIII-(0x1a09+1765-0x20ed))?IlIIlIIII:IlIlIlII;Illll(
"\x75\x73\x62\x64\x5f\x62\x63\x5f\x61\x6c\x6c\x6f\x63\x3a\x20\x61\x6c\x6c\x6f\x63\x61\x74\x69\x6e\x67\x20\x25\x6c\x75\x20\x62\x79\x74\x65\x73" "\n"
,(unsigned long)lllllll);lIIIl->IllIIl[i].transfer_buffer=IllIllI(lllllll,
GFP_KERNEL);lIIIl->IllIIl[i].transfer_buffer_length=lllllll;lIIIl->IllIIl[i].
actual_length=(0x459+8250-0x2493);lIIIl->IllIIl[i].number_of_packets=
(0x9f7+4952-0x1d4f);if(!lIIIl->IllIIl[i].transfer_buffer){Illll(
"\x75\x73\x62\x64\x5f\x62\x63\x5f\x61\x6c\x6c\x6f\x63\x3a\x20\x6b\x6d\x61\x6c\x6c\x6f\x63\x20\x66\x61\x69\x6c\x65\x64" "\n"
);break;}}
if(i<IlIII){for(i--;i>=(0x198+1930-0x922);i--){lIlIll(lIIIl->IllIIl[i].
transfer_buffer);}lIlIll(lIIIl);Illll(
"\x75\x73\x62\x64\x5f\x62\x63\x5f\x61\x6c\x6c\x6f\x63\x3a\x20\x2d\x2d\x20\x65\x72\x72\x6f\x72" "\n"
);return NULL;}Illll(
"\x75\x73\x62\x64\x5f\x62\x63\x5f\x61\x6c\x6c\x6f\x63\x3a\x20\x2d\x2d\x20\x73\x75\x63\x63\x65\x73\x73\x2c\x20\x62\x63\x3d\x30\x78\x25\x70" "\n"
,lIIIl);return lIIIl;}


struct lIIIllI*llIlIIllI(size_t length,IIIlIIll*lllIIlll,IIIIl lIIlIlII){struct 
lIIIllI*lIIIl;int i;size_t IlIII;void*IllIllll;size_t lllllll;size_t IIllIIII;
size_t llIIIllI;Illll(
"\x75\x73\x62\x64\x5f\x62\x63\x5f\x61\x6c\x6c\x6f\x63\x5f\x66\x6f\x72\x5f\x69\x73\x6f\x3a\x20\x2b\x2b\x20\x6c\x65\x6e\x67\x74\x68\x3d\x25\x6c\x75\x20\x6e\x75\x6d\x70\x61\x63\x6b\x65\x74\x73\x3d\x25\x64" "\n"
,(unsigned long)length,lIIlIlII);if(unlikely(length==(0x8c4+6354-0x2196))){Illll
(
"\x75\x73\x62\x64\x5f\x62\x63\x5f\x61\x6c\x6c\x6f\x63\x5f\x66\x6f\x72\x5f\x69\x73\x6f\x3a\x20\x2d\x2d\x20\x7a\x65\x72\x6f\x2d\x6c\x65\x6e\x67\x74\x68\x20\x62\x75\x66\x66\x65\x72\x28\x31\x29" "\n"
);return NULL;}if(unlikely(lIIlIlII==(0x2305+560-0x2535))){Illll(
"\x75\x73\x62\x64\x5f\x62\x63\x5f\x61\x6c\x6c\x6f\x63\x5f\x66\x6f\x72\x5f\x69\x73\x6f\x3a\x20\x2d\x2d\x20\x7a\x65\x72\x6f\x2d\x6c\x65\x6e\x67\x74\x68\x20\x62\x75\x66\x66\x65\x72\x28\x32\x29" "\n"
);return NULL;}



IlIII=(length-(0x6db+6238-0x1f38))/IIlIIlI+(0x2f3+6823-0x1d99);lIIIl=IllIllI(
sizeof(struct lIIIllI)+sizeof(struct IIIlI)*IlIII,GFP_KERNEL);if(unlikely(lIIIl
==NULL)){Illll(
"\x75\x73\x62\x64\x5f\x62\x63\x5f\x61\x6c\x6c\x6f\x63\x5f\x66\x6f\x72\x5f\x69\x73\x6f\x3a\x20\x2d\x2d\x20\x65\x72\x72\x6f\x72\x2c\x20\x6b\x6d\x61\x6c\x6c\x6f\x63\x20\x66\x61\x69\x6c\x65\x64" "\n"
);return NULL;}lIIIl->IlIII=(0x67+6991-0x1bb6);
lllllll=(0x3d5+8828-0x2651);IIllIIII=(0x669+5211-0x1ac4);llIIIllI=
(0x1bd0+2417-0x2541);for(i=(0x12da+4906-0x2604);i<lIIlIlII;i++){lllllll+=
lllIIlll[i].Length;IIllIIII++;

if(llIIIllI>lllIIlll[i].Offset){IIllIl(
"\x45\x52\x52\x4f\x52\x21\x21\x21\x20\x4e\x6f\x6e\x2d\x6c\x69\x6e\x65\x61\x72\x20\x69\x73\x6f\x63\x68\x72\x6f\x6e\x6f\x75\x73\x20\x62\x75\x66\x66\x65\x72\x20\x64\x65\x74\x65\x63\x74\x65\x64\x2e\x20\x50\x6c\x65\x61\x73\x65\x20\x72\x65\x70\x6f\x72\x74\x20\x74\x68\x69\x73\x2e" "\n"
);Illll(
"\x5b\x25\x64\x5d\x20\x6c\x61\x73\x74\x5f\x6f\x66\x66\x73\x65\x74\x3d\x30\x78\x25\x6c\x78\x20\x6f\x66\x66\x73\x65\x74\x3d\x30\x78\x25\x6c\x78"
,i,(unsigned long)llIIIllI,(unsigned long)lllIIlll[i].Offset);break;}llIIIllI=
lllIIlll[i].Offset;


if(((lIIlIlII-i)==(0x9d4+4691-0x1c26))||(lllllll>=IIlIIlI&&IIllIIII>=
(0x95a+6536-0x22e0)&&lllIIlll[i+(0x64b+6797-0x20d7)].Length>(0xfb0+1370-0x150a)
&&(lIIlIlII-i)>(0xb41+33-0xb60))){if(unlikely(lIIIl->IlIII>=IlIII)){Illll(
"\x75\x73\x62\x64\x5f\x62\x63\x5f\x61\x6c\x6c\x6f\x63\x5f\x66\x6f\x72\x5f\x69\x73\x6f\x3a\x20\x69\x6e\x76\x61\x6c\x69\x64\x20\x62\x75\x66\x66\x65\x72\x20\x73\x69\x7a\x65" "\n"
);break;}if(unlikely(length<lllllll)){Illll(
"\x75\x73\x62\x64\x5f\x62\x63\x5f\x61\x6c\x6c\x6f\x63\x5f\x66\x6f\x72\x5f\x69\x73\x6f\x3a\x20\x69\x6e\x76\x61\x6c\x69\x64\x20\x69\x73\x6f\x20\x62\x75\x66\x66\x65\x72" "\n"
);break;}IllIllll=IllIllI(lllllll,GFP_KERNEL);if(unlikely(!IllIllll)){Illll(
"\x75\x73\x62\x64\x5f\x62\x63\x5f\x61\x6c\x6c\x6f\x63\x5f\x66\x6f\x72\x5f\x69\x73\x6f\x3a\x20\x6b\x6d\x61\x6c\x6c\x6f\x63\x20\x66\x61\x69\x6c\x65\x64" "\n"
);break;}lIIIl->IllIIl[lIIIl->IlIII].transfer_buffer=IllIllll;lIIIl->IllIIl[
lIIIl->IlIII].transfer_buffer_length=lllllll;lIIIl->IllIIl[lIIIl->IlIII].
actual_length=(0x700+3183-0x136f);lIIIl->IllIIl[lIIIl->IlIII].number_of_packets=
IIllIIII;lIIIl->IlIII++;length-=lllllll;lllllll=(0xa01+7181-0x260e);IIllIIII=
(0xd9d+5918-0x24bb);}}
if(i<lIIlIlII){for(i=(0x4f+4164-0x1093);i<lIIIl->IlIII;i++){lIlIll(lIIIl->IllIIl
[i].transfer_buffer);}lIlIll(lIIIl);Illll(
"\x75\x73\x62\x64\x5f\x62\x63\x5f\x61\x6c\x6c\x6f\x63\x5f\x66\x6f\x72\x5f\x69\x73\x6f\x3a\x20\x2d\x2d\x20\x65\x72\x72\x6f\x72" "\n"
);return NULL;}Illll(
"\x75\x73\x62\x64\x5f\x62\x63\x5f\x61\x6c\x6c\x6f\x63\x5f\x66\x6f\x72\x5f\x69\x73\x6f\x3a\x20\x2d\x2d\x20\x73\x75\x63\x63\x65\x73\x73\x2c\x20\x62\x63\x3d\x30\x78\x25\x70" "\n"
,lIIIl);return lIIIl;}size_t IIIIlIlIl(struct lIIIllI*lIIIl,const void*IIIlI,
size_t length){int i;size_t lllIlI,IIIll=(0xa0b+1173-0xea0);Illll(
"\x75\x73\x62\x64\x5f\x62\x63\x5f\x63\x6f\x70\x79\x5f\x66\x72\x6f\x6d\x5f\x75\x73\x65\x72\x3a\x20\x63\x6f\x75\x6e\x74\x3d\x25\x6c\x75" "\n"
,(unsigned long)lIIIl->IlIII);for(i=(0x314+5933-0x1a41);i<lIIIl->IlIII&&length>
(0xd9c+595-0xfef);i++){lllIlI=min(length,lIIIl->IllIIl[i].transfer_buffer_length
);if(__copy_from_user(lIIIl->IllIIl[i].transfer_buffer,IIIlI,lllIlI)!=
(0xf03+1147-0x137e)){Illll(
"\x75\x73\x62\x64\x5f\x62\x63\x5f\x63\x6f\x70\x79\x5f\x66\x72\x6f\x6d\x5f\x75\x73\x65\x72\x3a\x20\x63\x61\x6e\x6e\x6f\x74\x20\x63\x6f\x70\x79\x20\x66\x72\x6f\x6d\x20\x75\x73\x65\x72\x20\x62\x75\x66\x66\x65\x72" "\n"
);break;}lIIIl->IllIIl[i].actual_length=lllIlI;IIIlI+=lllIlI;length-=lllIlI;
IIIll+=lllIlI;}return IIIll;}size_t IlIIllIlI(struct lIIIllI*lIIIl,void*IIIlI,
size_t length){int i;size_t lllIlI,IIIll=(0x2a9+2202-0xb43);Illll(
"\x75\x73\x62\x64\x5f\x62\x63\x5f\x63\x6f\x70\x79\x5f\x74\x6f\x5f\x75\x73\x65\x72\x3a\x20\x63\x6f\x75\x6e\x74\x3d\x25\x6c\x75" "\n"
,(unsigned long)lIIIl->IlIII);for(i=(0x65+2857-0xb8e);i<lIIIl->IlIII&&length>
(0x1950+2838-0x2466);i++){lllIlI=min(length,lIIIl->IllIIl[i].actual_length);if(
__copy_to_user(IIIlI,lIIIl->IllIIl[i].transfer_buffer,lllIlI)!=
(0x14a6+3486-0x2244)){Illll(
"\x75\x73\x62\x64\x5f\x62\x63\x5f\x63\x6f\x70\x79\x5f\x74\x6f\x5f\x75\x73\x65\x72\x3a\x20\x63\x61\x6e\x6e\x6f\x74\x20\x63\x6f\x70\x79\x20\x66\x72\x6f\x6d\x20\x75\x73\x65\x72\x20\x62\x75\x66\x66\x65\x72" "\n"
);break;}IIIlI+=lllIlI;length-=lllIlI;IIIll+=lllIlI;}return IIIll;}void 
llllIIIII(struct lIIIllI*lIIIl){int i;for(i=(0x4fb+596-0x74f);i<lIIIl->IlIII;i++
){if(lIIIl->IllIIl[i].transfer_buffer){lIlIll(lIIIl->IllIIl[i].transfer_buffer);
}}lIlIll(lIIIl);}
#endif 

