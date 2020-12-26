# usb-redirector-server

USB Redirector Server for Linux
OpenWrt Package project
Copyright (c) 2020 IncentivesPro

Installation instructions:

1. Download OpenWrt source code

2. Copy ./usb-redirector-server directory into /package directory of the OpenWrt source code tree

3. Configure OpenWrt sources and select USB Redirector package for compilation
   make menuconfig
   Select Utilities -> usb-redirector-server
   Select Kernel modules -> USB Support -> kmod-usb-redirector-server

4. Build OpenWrt
   make

6. USB Redirector ipk packages will be located in bin/<platform>/packages/
   usb-redirector-server-<platform and version>.ipk
   kmod-usb-redirector-server-<platform and version>.ipk

7. If OpenWrt was already built before, it is possible to recompile the USB Redirector ipk package only
   make package/usb-redirector-server/clean
   make package/usb-redirector-server/prepare
   make package/usb-redirector-server/compile V=99
   make package/usb-redirector-server/install

8. Install USB Redirector ipk packages into your device via console or web interface (kmod package must be installed first)
   opkg install kmod-usb-redirector-server-<platform and version>.ipk
   opkg install usb-redirector-server-<platform and version>.ipk
