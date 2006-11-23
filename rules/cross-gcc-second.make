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
CROSS_GCC_SECOND_BUILDDIR	= $(CROSS_GCC_FIRST_DIR)-second-build

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

$(STATEDIR)/cross-gcc-second.extract: $(cross-gcc-second_extract_deps_default) $(STATEDIR)/cross-gcc-first.extract
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
CROSS_GCC_SECOND_AUTOCONF := \
	--host=$(GNU_HOST) \
	--target=$(call remove_quotes,$(PTXCONF_GNU_TARGET)) \
	--prefix=$(PTXCONF_PREFIX) \
	--with-sysroot=$(SYSROOT) \
	$(call remove_quotes,$(PTXCONF_CROSS_GCC_FIRST_EXTRA_CONFIG)) \
	\
        --disable-nls \
	--disable-multilib \
	--enable-symvers=gnu \
	--enable-__cxa_atexit \
	--enable-serial-configure \
	\
	--enable-shared \
	--enable-threads=posix \
	--enable-languages=$(PTXCONF_CROSS_GCC_SECOND_LANG) \
	--enable-c99 \
	--enable-long-long

$(STATEDIR)/cross-gcc-second.prepare: $(cross-gcc-second_prepare_deps_default)
	@$(call targetinfo, $@)
	cd $(CROSS_GCC_SECOND_BUILDDIR) && \
		$(CROSS_GCC_SECOND_PATH) $(CROSS_GCC_SECOND_ENV) \
		$(CROSS_GCC_FIRST_DIR)/configure $(CROSS_GCC_SECOND_AUTOCONF)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Compile
# ----------------------------------------------------------------------------

cross-gcc-second_compile: $(STATEDIR)/cross-gcc-second.compile

$(STATEDIR)/cross-gcc-second.compile: $(cross-gcc-second_compile_deps_default)
	@$(call targetinfo, $@)
	cd $(CROSS_GCC_SECOND_BUILDDIR) && $(CROSS_GCC_SECOND_PATH) \
		$(MAKE) $(PARALLELMFLAGS) all
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Install
# ----------------------------------------------------------------------------

cross-gcc-second_install: $(STATEDIR)/cross-gcc-second.install

$(STATEDIR)/cross-gcc-second.install: $(cross-gcc-second_install_deps_default)
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
