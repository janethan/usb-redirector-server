#
#  tusbd/Makefile
#
#  Copyright (C) 2007-2016 SimplyCore, LLC
#
# This program is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License version 2 as
# published by the Free Software Foundation.
#
STUB ?= y
VHCI ?= y
DEBUG ?= n
DEBUG_MEMORY ?= n
USE_EHCI_FIX ?= y
NO_DMA ?= n
KERNELDIR ?= /lib/modules/`uname -r`/build

obj-m := tusbd.o
tusbd-objs := driver.o cdev.o minor_loader.o minor_stub.o minor_vbus.o minor_vstub.o stub.o vhci.o utils.o urb_chain.o sg.o loader.o

PWD:=$(shell pwd)
HCD_H_PATH:=$(KERNELDIR)/drivers/usb/core/hcd.h
HCD_H_PATH_INC:=$(KERNELDIR)/include/linux/usb/hcd.h
HCD_H_EXISTS := $(shell if ( [ -f "$(HCD_H_PATH)" ] ); then echo y; else echo n; fi)
HCD_H_EXISTS_INC := $(shell if ( [ -f "$(HCD_H_PATH_INC)" ] ); then echo y; else echo n; fi)

ifeq ($(HCD_H_EXISTS),y)
EXTRA_CFLAGS += -D_USBD_HCD_H_PATH_=\"$(HCD_H_PATH)\"
endif

ifeq ($(HCD_H_EXISTS_INC),y)
EXTRA_CFLAGS += -D_USBD_HCD_H_INC_
endif

ifeq ($(DEBUG),y)
EXTRA_CFLAGS += -D_USBD_DEBUG_
EXTRA_CFLAGS += -D_USBD_DEBUG_MEMORY_
endif

ifeq ($(DEBUG_MEMORY),y)
EXTRA_CFLAGS += -D_USBD_DEBUG_MEMORY_
endif

ifeq ($(VHCI),y)
EXTRA_CFLAGS += -D_USBD_ENABLE_VHCI_
endif

ifeq ($(STUB),y)
EXTRA_CFLAGS += -D_USBD_ENABLE_STUB_
endif

ifeq ($(USE_EHCI_FIX),y)
EXTRA_CFLAGS += -D_USBD_USE_EHCI_FIX_
endif

ifeq ($(NO_DMA),y)
EXTRA_CFLAGS += -D_USBD_VHCI_NO_DMA_
endif            

default: 
	make -C $(KERNELDIR) M=$(PWD) modules

clean:
	make -C $(KERNELDIR) M=$(PWD) clean
