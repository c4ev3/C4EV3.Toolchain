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
CROSS_PACKAGES-$(PTXCONF_CROSS_GCC_SECOND) += cross-gcc-second

#
# Paths and names
#
CROSS_GCC_SECOND_BUILDDIR	= $(CROSS_BUILDDIR)/$(CROSS_GCC_FIRST)-second-build

# ----------------------------------------------------------------------------
# Get
# ----------------------------------------------------------------------------

cross-gcc-second_get: $(STATEDIR)/cross-gcc-second.get

$(STATEDIR)/cross-gcc-second.get: $(STATEDIR)/cross-gcc-first.get
	@$(call targetinfo, $@)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Extract
# ----------------------------------------------------------------------------

cross-gcc-second_extract: $(STATEDIR)/cross-gcc-second.extract

$(STATEDIR)/cross-gcc-second.extract: $(STATEDIR)/cross-gcc-first.extract
	@$(call targetinfo, $@)
	@$(call clean, $(CROSS_GCC_SECOND_BUILDDIR))
	mkdir -p $(CROSS_GCC_SECOND_BUILDDIR)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Prepare
# ----------------------------------------------------------------------------

cross-gcc-second_prepare: $(STATEDIR)/cross-gcc-second.prepare

CROSS_GCC_SECOND_PATH	:= PATH=$(CROSS_PATH)
CROSS_GCC_SECOND_ENV	:= $(HOSTCC_ENV)

#
# autoconf
#
CROSS_GCC_SECOND_AUTOCONF = \
	$(CROSS_GCC_AUTOCONF_COMMON) \
	--prefix=$(PTXCONF_PREFIX) \
	\
	--enable-shared \
	--enable-languages=$(PTXCONF_CROSS_GCC_LANG) \
	--enable-threads=posix \
	--enable-c99 \
	--enable-long-long \
	--enable-libstdcxx-debug

$(STATEDIR)/cross-gcc-second.prepare:
	@$(call targetinfo, $@)
	cd $(CROSS_GCC_SECOND_BUILDDIR) && eval \
		$(CROSS_GCC_SECOND_PATH) $(CROSS_GCC_SECOND_ENV) \
		$(CROSS_GCC_FIRST_DIR)/configure $(CROSS_GCC_SECOND_AUTOCONF)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Compile
# ----------------------------------------------------------------------------

cross-gcc-second_compile: $(STATEDIR)/cross-gcc-second.compile

$(STATEDIR)/cross-gcc-second.compile:
	@$(call targetinfo, $@)
	cd $(CROSS_GCC_SECOND_BUILDDIR) && $(CROSS_GCC_SECOND_PATH) \
		$(MAKE) $(PARALLELMFLAGS)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Install
# ----------------------------------------------------------------------------

cross-gcc-second_install: $(STATEDIR)/cross-gcc-second.install

$(STATEDIR)/cross-gcc-second.install:
	@$(call targetinfo, $@)
	cd $(CROSS_GCC_SECOND_BUILDDIR) && \
		$(CROSS_GCC_SECOND_PATH) $(MAKE) install
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Clean
# ----------------------------------------------------------------------------

cross-gcc-second_clean:
	rm -rf $(STATEDIR)/cross-gcc-second.*
	rm -rf $(CROSS_GCC_SECOND_DIR)
	rm -rf $(CROSS_GCC_SECOND_BUILDDIR)

# vim: syntax=make
