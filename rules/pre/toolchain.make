# -*-makefile-*-

SYSROOT := $(call remove_quotes,$(PTXCONF_PREFIX)/sysroot-$(PTXCONF_GNU_TARGET))

CROSS_GCC_FIST_PREFIX := $(PTXCONF_PREFIX)/gcc-first
CROSS_PATH := $(call remove_quotes,$(PTXCONF_PREFIX)/bin:$(PTXCONF_PREFIX)/usr/bin:$(CROSS_GCC_FIST_PREFIX)/bin):$$PATH

ifdef PTXCONF_TOOLCHAIN_DEBUG
BUILDDIR_DEBUG		:= $(PTXCONF_PREFIX)/src/target
BUILDDIR_CROSS_DEBUG	:= $(PTXCONF_PREFIX)/src/cross
else
BUILDDIR_DEBUG		:= $(BUILDDIR)
BUILDDIR_CROSS_DEBUG	:= $(CROSS_BUILDDIR)
endif

# vim: syntax=make
