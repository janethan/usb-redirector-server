# 
# Copyright (C) 2008-2021 SimplyCore LLC
#
# This is free software, licensed under the GNU General Public License v2.
# See /LICENSE for more information.
#

include $(TOPDIR)/rules.mk
include $(INCLUDE_DIR)/kernel.mk

PKG_NAME:=usb-redirector-server
PKG_VERSION:=3.9.8

PKG_BUILD_DIR:=$(KERNEL_BUILD_DIR)/$(PKG_NAME)-$(PKG_VERSION)

include $(INCLUDE_DIR)/package.mk

define KernelPackage/usb-redirector-server
  SUBMENU:=USB Support
  TITLE:=USB Redirector Server kernel module
  DEPENDS:=kmod-usb-core @USB_SUPPORT
  MAINTAINER:=IncentivesPro <support@incentivespro.com>
  URL:=http://www.incentivespro.com
  VERSION:=$(LINUX_VERSION)-$(PKG_VERSION)-$(BOARD)
  FILES:=$(PKG_BUILD_DIR)/src/tusbd/tusbd.$(LINUX_KMOD_SUFFIX)
  AUTOLOAD:=$(call AutoLoad,60,tusbd) 
endef

define KernelPackage/usb-redirector-server/description
This package contains a Linux kernel module for the USB Redirector server.
endef

define Build/Prepare
	mkdir -p $(PKG_BUILD_DIR)
	$(CP) -r ./src $(PKG_BUILD_DIR)
endef

define Build/Compile
	$(MAKE) -C "$(LINUX_DIR)" M="$(PKG_BUILD_DIR)/src/tusbd" \
		ARCH="$(LINUX_KARCH)" \
		CROSS_COMPILE="$(TARGET_CROSS)" \
		CC="$(TARGET_CC)" \
		CPP="$(TARGET_CC)" \
		LD="$(TARGET_CROSS)ld" \
		KERNELVERSION="$(KERNEL)" \
		KERNEL_SOURCE="$(LINUX_DIR)" \
		KDIR="$(LINUX_DIR)" \
		STUB=y VHCI=n \
		EXTRA_CFLAGS="-D_USBD_USE_EHCI_FIX_ -D_USBD_ENABLE_STUB_" \
		modules
endef

define Package/usb-redirector-server
  SECTION:=utils
  CATEGORY:=Utilities
  MAINTAINER:=IncentivesPro <support@incentivespro.com>
  URL:=http://www.incentivespro.com
  DEPENDS:=+kmod-usb-redirector-server +librt +libstdcpp +libpthread
  TITLE:=USB Redirector Server files
endef

define Package/usb-redirector-server/description
This package contains USB Redirector server daemon, configuration utility, configuration files and startup scripts.
endef

define Package/usb-redirector-server/conffiles
/etc/usbsrvd.conf
endef

PKG_ARCH_DIR:=$(shell echo $(call qstrip,$(CONFIG_ARCH))-$(call qstrip,$(CONFIG_TARGET_SUFFIX))$(if $(CONFIG_SOFT_FLOAT),,hf) | tr '[:upper:]' '[:lower:]')
#$(if ,,$(error ERROR: There are no USB Redirector binaries for this system. Please contact support.))

define Package/usb-redirector-server/install
	$(INSTALL_DIR) $(1)/usr/bin
	$(INSTALL_BIN) ./files/bin/$(PKG_ARCH_DIR)/usbsrv $(1)/usr/bin/
	$(INSTALL_DIR) $(1)/usr/sbin
	$(INSTALL_BIN) ./files/bin/$(PKG_ARCH_DIR)/usbsrvd-srv $(1)/usr/sbin/usbsrvd
	$(INSTALL_DIR) $(1)/etc
	$(INSTALL_CONF) ./files/usbsrvd.conf $(1)/etc/usbsrvd.conf
	$(INSTALL_DIR) $(1)/etc/init.d
	$(INSTALL_BIN) ./files/usbsrvd.init $(1)/etc/init.d/usbsrvd
endef

define Package/usb-redirector-server/postinst
#!/bin/sh
if [ -z "$${IPKG_INSTROOT}" ]; then
  insmod tusbd.ko
  /etc/rc.common /etc/init.d/usbsrvd enable
  /etc/init.d/usbsrvd start
fi
endef

define Package/usb-redirector-server/prerm
#!/bin/sh
if [ -z "$${IPKG_INSTROOT}" ]; then
  /etc/init.d/usbsrvd stop
  rmmod tusbd.ko
fi
endef

$(eval $(call KernelPackage,usb-redirector-server))
$(eval $(call BuildPackage,usb-redirector-server))
