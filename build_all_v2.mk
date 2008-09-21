#!/usr/bin/make

#
# Makefile to build all ptxconfigs
# Copyright (C) 2007 Carsten Schlote <c.schlote@konzeptpark.de>
#               2008 Marc Kleine-Budde <mkl@pengutronix.de>
#

SHELL		:= /bin/bash

#
# config
#
PTX_AUTOBUILD_DESTDIR	:= ${PWD}/inst
export PTX_AUTOBUILD_DESTDIR

#
BUILDDATE	:= $(shell date +%y%m%d-%H%M)
SUBVERSIONREV	:= $(strip $(shell svnversion))
VERSION		:= $(shell pwd | sed -e "s~.*/OSELAS.Toolchain-~~")
ARCH		:= $(shell			\
	case "$$(uname -m)" in			\
		(x86_64)	echo amd64;;	\
		(i[1-9]86)	echo i386;;	\
		(*)		;;		\
	esac					\
)

ifeq ($(ARCH),)
$(error failed to detect arch, or arch is unsupported)
endif


SUFFIX_BUILDTIME	:= build
SUFFIX_BUILDSTATUS	:= status
SUFFIX_BUILDREVISION	:= svnrev

CONFIGDIR	:= ptxconfigs
#CONFIGFILES	:= $(wildcard $(CONFIGDIR)/*.ptxconfig) $(wildcard $(CONFIGDIR)/*/*.ptxconfig)
CONFIGFILES	:= ptxconfigs/arm-1136jfs-linux-gnueabi_gcc-4.3.2_glibc-2.8_binutils-2.18_kernel-2.6.26-sanitized.ptxconfig
CONFIGS		:= $(basename $(notdir $(CONFIGFILES)))
CONFIGS_OUT	:= $(subst _,-,$(CONFIGS))

$(eval $(foreach config,$(CONFIGS),OUT2CONFIG_$(subst _,-,$(config)) := $(config)))

STATEDIR	:= gstate
STATEFILES	:= $(addprefix $(STATEDIR)/,$(addsuffix .$(suffix_buildtime),$(CONFIGS)))

INSTALLDIRS	:= \
	$(foreach ptxconfig,$(CONFIGFILES), \
		$(shell PTX_AUTOBUILD_DESTDIR=$(PTX_AUTOBUILD_DESTDIR) \
		source "$(ptxconfig)" && echo "$${PTXCONF_SYSROOT_CROSS}"))

DISTDIR		:= dist


#DEB  = oselas.toolchain-1.1.1-arm-1136jfs-linux-gnueabi-gcc-4.1.2-glibc-2.5-kernel-2.6.18_1.1.1_amd64.deb
#       oselas.toolchain-     -arm-v4t-linux-gnueabi-    gcc-4.3.2-glibc-2.8-linux-2.6.26-sanitized_amd64.deb
#TBZ2 = OSELAS.Toolchain-1.1.1-arm-1136jfs-linux-gnueabi-gcc-4.1.2-glibc-2.5-kernel-2.6.18_amd64.tar.bz2


OUT_PREFIX	:= $(foreach config,$(CONFIGS_OUT),$(addprefix $(DISTDIR)/oselas.toolchain-$(VERSION)-,$(config)))
DEBS		:= $(foreach config,$(OUT_PREFIX),$(addsuffix _$(VERSION)_$(ARCH).deb,$(config)))
TBZ2S		:= $(foreach config,$(OUT_PREFIX),$(addsuffix _$(ARCH).tar.bz2,$(config)))

all: $(TBZ2S)

$(DISTDIR)/%_$(ARCH).deb: $(STATEDIR)/%.build | mkdirs
	@true

$(DISTDIR)/%_$(ARCH).tar.bz2: $(STATEDIR)/%.build | mkdirs
	@true

$(STATEDIR)/oselas.toolchain-$(VERSION)-%.build: | mkdirs
	@ptxdist distclean
	@ptxdist select $(filter %/$(OUT2CONFIG_$(*)).ptxconfig, $(CONFIGFILES))
	@ptxdist go

mkdirs:
	@mkdir -p $(STATEDIR) $(DISTDIR)

print-%:
	@echo "$* is \"$($(*))\""
