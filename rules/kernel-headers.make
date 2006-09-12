# -*-makefile-*-
# $Id$
#
# Copyright (C) 2006 by Robert Schwebel
#
# See CREDITS for details about who has contributed to this project.
#
# For further information about the PTXdist project and license conditions
# see the README file.
#

#
# We provide this package
#
PACKAGES-$(PTXCONF_KERNEL_HEADERS) += kernel-headers

#
# Paths and names
#
KERNEL-HEADERS_VERSION	:= $(PTXCONF_KERNEL_HEADERS_VERSION)
KERNEL-HEADERS		:= linux-$(call remove_quotes,$(KERNEL-HEADERS_VERSION))
KERNEL-HEADERS_SUFFIX	:= tar.bz2
KERNEL-HEADERS_URL	:= http://www.kernel.org/pub/linux/kernel/v2.6/$(KERNEL-HEADERS).$(KERNEL-HEADERS_SUFFIX)
KERNEL-HEADERS_SOURCE	:= $(SRCDIR)/$(KERNEL-HEADERS).$(KERNEL-HEADERS_SUFFIX)
KERNEL-HEADERS_DIR	:= $(BUILDDIR)/$(KERNEL-HEADERS)

# ----------------------------------------------------------------------------
# Get
# ----------------------------------------------------------------------------

kernel-headers_get: $(STATEDIR)/kernel-headers.get

$(STATEDIR)/kernel-headers.get: $(kernel-headers_get_deps_default)
	@$(call targetinfo, $@)
	@$(call touch, $@)

$(KERNEL-HEADERS_SOURCE):
	@$(call targetinfo, $@)
	@$(call get, KERNEL-HEADERS)

# ----------------------------------------------------------------------------
# Extract
# ----------------------------------------------------------------------------

kernel-headers_extract: $(STATEDIR)/kernel-headers.extract

$(STATEDIR)/kernel-headers.extract: $(kernel-headers_extract_deps_default)
	@$(call targetinfo, $@)
	@$(call clean, $(KERNEL-HEADERS_DIR))
	@$(call extract, KERNEL-HEADERS)
	@$(call patchin, KERNEL-HEADERS)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Prepare
# ----------------------------------------------------------------------------

kernel-headers_prepare: $(STATEDIR)/kernel-headers.prepare

KERNEL-HEADERS_PATH	:= PATH=$(HOST_PATH)
KERNEL-HEADERS_ENV 	:= $(HOST_ENV)

$(STATEDIR)/kernel-headers.prepare: $(kernel-headers_prepare_deps_default)
	@$(call targetinfo, $@)
	cp $(PTXDIST_WORKSPACE)/$(PTXCONF_KERNEL_HEADERS_CONFIG) \
		$(KERNEL-HEADERS_DIR)/.config
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Compile
# ----------------------------------------------------------------------------

kernel-headers_compile: $(STATEDIR)/kernel-headers.compile

$(STATEDIR)/kernel-headers.compile: $(kernel-headers_compile_deps_default)
	@$(call targetinfo, $@)
	( \
		cd $(KERNEL-HEADERS_DIR); \
		$(MAKE) ARCH=$(PTXCONF_ARCH) oldconfig; \
		$(MAKE) ARCH=$(PTXCONF_ARCH) include/asm include/linux/version.h; \
	)
ifdef PTXCONF_ARCH_ARM
		cd $(KERNEL-HEADERS_DIR) && $(MAKE) ARCH=$(PTXCONF_ARCH) include/asm-$(PTXCONF_ARCH)/.arch
endif
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Install
# ----------------------------------------------------------------------------

kernel-headers_install: $(STATEDIR)/kernel-headers.install

$(STATEDIR)/kernel-headers.install: $(kernel-headers_install_deps_default)
	@$(call targetinfo, $@)
	( \
		cd $(KERNEL-HEADERS_DIR); \
		rm -fr $(SYSROOT)/usr/include/linux; \
		mkdir -p $(SYSROOT)/usr/include; \
		cp -r include/linux $(SYSROOT)/usr/include/; \
		rm -fr $(SYSROOT)/usr/include/asm; \
		cp -r include/asm-$(PTXCONF_ARCH) $(SYSROOT)/usr/include/asm; \
		rm -fr $(SYSROOT)/usr/include/asm-generic; \
		cp -r include/asm-generic $(SYSROOT)/usr/include/asm-generic; \
	)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Target-Install
# ----------------------------------------------------------------------------

kernel-headers_targetinstall: $(STATEDIR)/kernel-headers.targetinstall

$(STATEDIR)/kernel-headers.targetinstall: $(kernel-headers_targetinstall_deps_default)
	@$(call targetinfo, $@)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Clean
# ----------------------------------------------------------------------------

kernel-headers_clean:
	rm -rf $(STATEDIR)/kernel-headers.*
	rm -rf $(KERNEL-HEADERS_DIR)

# vim: syntax=make
