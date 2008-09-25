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

BENICE			:= true

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

PTXDIST			:= ./p

ifdef BENICE
NICE			+= nice -20
endif

SUFFIX_BUILDTIME	:= build
SUFFIX_BUILDSTATUS	:= status
SUFFIX_BUILDREVISION	:= svnrev

CONFIGDIR	:= ptxconfigs
CONFIGFILES	:= $(wildcard $(CONFIGDIR)/*.ptxconfig) $(wildcard $(CONFIGDIR)/*/*.ptxconfig)
#CONFIGFILES	:= ptxconfigs/powerpc-603e-linux-gnu_gcc-4.1.2_glibc-2.5_binutils-2.17_kernel-2.6.18.ptxconfig
CONFIGS		:= $(notdir $(basename $(CONFIGFILES)))
CONFIGS_	:= $(subst _,-,$(CONFIGS))

define gen_2config
$(eval 2CONFIG_$(subst _,-,$(1)) := $(1))
endef

define gen_2configfile
$(eval 2CONFIGFILE_$(subst _,-,$(notdir $(basename $(1)))) := $(1))
endef

$(foreach cfg,$(CONFIGS),$(call gen_2config,$(cfg)))
$(foreach cfgfile,$(CONFIGFILES),$(call gen_2configfile,$(cfgfile)))


STATEDIR	:= gstate
STATEFILES	:= $(addprefix $(STATEDIR)/,$(addsuffix .$(suffix_buildtime),$(CONFIGS)))

INSTALLDIRS	:= \
	$(foreach ptxconfig,$(CONFIGFILES), \
		$(shell PTX_AUTOBUILD_DESTDIR=$(PTX_AUTOBUILD_DESTDIR) \
		source "$(ptxconfig)" && echo "$${PTXCONF_SYSROOT_CROSS}"))

DISTDIR		:= dist


#DEB  = oselas.toolchain-1.1.1-arm-1136jfs-linux-gnueabi-gcc-4.1.2-glibc-2.5-kernel-2.6.18_1.1.1_amd64.deb
#TBZ2 = OSELAS.Toolchain-1.1.1-arm-1136jfs-linux-gnueabi-gcc-4.1.2-glibc-2.5-kernel-2.6.18_amd64.tar.bz2

OUT_PREFIX	:= $(foreach config,$(CONFIGS_),$(addprefix $(DISTDIR)/oselas.toolchain-$(VERSION)-,$(config)))

DEB_SUFFIX	:= _$(VERSION)_$(ARCH).deb
TBZ2_SUFFIX	:= _$(ARCH).tar.bz2

DEBS		:= $(foreach config,$(OUT_PREFIX),$(addsuffix $(DEB_SUFFIX),$(config)))
TBZ2S		:= $(foreach config,$(OUT_PREFIX),$(addsuffix $(TBZ2_SUFFIX),$(config)))

all: $(TBZ2S)

$(DISTDIR)/%$(DEB_SUFFIX): $(STATEDIR)/%.build | mkdirs
	@true

$(DISTDIR)/%$(TBZ2_SUFFIX): $(STATEDIR)/%.build | mkdirs
	@true

$(STATEDIR)/oselas.toolchain-$(VERSION)-%.build: | mkdirs
	@$(PTXDIST) distclean
	@$(PTXDIST) select $(2CONFIGFILE_$(*))
	@$(NICE) $(PTXDIST) go

mkdirs:
	@mkdir -p $(STATEDIR) $(DISTDIR)

print-%:
	@echo "$* is \"$($(*))\""
