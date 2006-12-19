# -*-makefile-*-

SYSROOT := $(call remove_quotes,$(PTXCONF_PREFIX)/sysroot-$(PTXCONF_GNU_TARGET))

CROSS_GCC_FIST_PREFIX := $(PTXCONF_PREFIX)/gcc-first
CROSS_PATH := $(call remove_quotes,$(PTXCONF_PREFIX)/bin:$(PTXCONF_PREFIX)/usr/bin:$(CROSS_GCC_FIST_PREFIX)/bin):$$PATH

# vim: syntax=make
