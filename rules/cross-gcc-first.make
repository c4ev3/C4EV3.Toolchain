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
CROSS_PACKAGES-$(PTXCONF_CROSS_GCC_FIRST) += cross-gcc-first

#
# Paths and names
#
CROSS_GCC_FIRST_VERSION		:= $(call remove_quotes,$(PTXCONF_CROSS_GCC_FIRST_VERSION))
CROSS_GCC_FIRST			:= gcc-$(CROSS_GCC_FIRST_VERSION)
CROSS_GCC_FIRST_SUFFIX	 	:= tar.bz2
CROSS_GCC_FIRST_URL	 	:= $(PTXCONF_SETUP_GNUMIRROR)/gcc/$(CROSS_GCC_FIRST)/$(CROSS_GCC_FIRST).$(CROSS_GCC_FIRST_SUFFIX)
CROSS_GCC_FIRST_SOURCE		:= $(SRCDIR)/$(CROSS_GCC_FIRST).$(CROSS_GCC_FIRST_SUFFIX)
CROSS_GCC_FIRST_DIR		:= $(BUILDDIR_CROSS_DEBUG)/$(CROSS_GCC_FIRST)
CROSS_GCC_FIRST_BUILDDIR	:= $(CROSS_BUILDDIR)/$(CROSS_GCC_FIRST)-first-build

# ----------------------------------------------------------------------------
# Get
# ----------------------------------------------------------------------------

cross-gcc-first_get: $(STATEDIR)/cross-gcc-first.get

$(STATEDIR)/cross-gcc-first.get: $(cross-gcc-first_get_deps_default)
	@$(call targetinfo, $@)
	@$(call touch, $@)

$(CROSS_GCC_FIRST_SOURCE):
	@$(call targetinfo, $@)
	@$(call get, CROSS_GCC_FIRST)

# ----------------------------------------------------------------------------
# Extract
# ----------------------------------------------------------------------------

cross-gcc-first_extract: $(STATEDIR)/cross-gcc-first.extract

$(STATEDIR)/cross-gcc-first.extract: $(cross-gcc-first_extract_deps_default)
	@$(call targetinfo, $@)
	@$(call clean, $(CROSS_GCC_FIRST_DIR))
	@$(call clean, $(CROSS_GCC_FIRST_BUILDDIR))
	@$(call extract, CROSS_GCC_FIRST, $(BUILDDIR_CROSS_DEBUG))
	@$(call patchin, CROSS_GCC_FIRST, $(CROSS_GCC_FIRST_DIR))
	mkdir -p $(CROSS_GCC_FIRST_BUILDDIR)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Prepare
# ----------------------------------------------------------------------------

cross-gcc-first_prepare: $(STATEDIR)/cross-gcc-first.prepare

CROSS_GCC_FIRST_PATH	:= PATH=$(CROSS_PATH)
CROSS_GCC_FIRST_ENV	:= $(HOSTCC_ENV)

#
# autoconf
#
CROSS_GCC_FIRST_AUTOCONF :=  \
	--host=$(GNU_HOST) \
	--target=$(call remove_quotes,$(PTXCONF_GNU_TARGET)) \
	--prefix=$(CROSS_GCC_FIST_PREFIX) \
	--with-sysroot=$(SYSROOT) \
	$(call remove_quotes,$(PTXCONF_CROSS_GCC_FIRST_EXTRA_CONFIG)) \
	\
        --disable-nls \
	--disable-multilib \
        --enable-symvers=gnu \
        --enable-__cxa_atexit \
	\
        --disable-shared \
	--disable-threads \
        --enable-languages=c

$(STATEDIR)/cross-gcc-first.prepare: $(cross-gcc-first_prepare_deps_default)
	@$(call targetinfo, $@)
	@$(call clean, $(CROSS_GCC_FIRST_BUILDDIR)/config.cache)
	cd $(CROSS_GCC_FIRST_BUILDDIR) && \
		$(CROSS_GCC_FIRST_PATH) $(CROSS_GCC_FIRST_ENV) \
		$(CROSS_GCC_FIRST_DIR)/configure $(CROSS_GCC_FIRST_AUTOCONF)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Compile
# ----------------------------------------------------------------------------

# From crosstool:
#
# HACK: we need to override SHLIB_LC from gcc/config/t-slibgcc-elf-ver or
#       gcc/config/t-libunwind so -lc is removed from the link for
#       libgcc_s.so, as we do not have a target -lc yet.
#       This is not as ugly as it appears to be ;-) All symbols get resolved
#       during the glibc build, and we provide a proper libgcc_s.so for the
#       cross toolchain during the final gcc build.
#
#       As we cannot modify the source tree, nor override SHLIB_LC itself
#       during configure or make, we have to edit the resultant
#       gcc/libgcc.mk itself to remove -lc from the link.
#       This causes us to have to jump through some hoops...
#
#       To produce libgcc.mk to edit we firstly require libiberty.a,
#       so we configure then build it.
#       Next we have to configure gcc, create libgcc.mk then edit it...
#       So much easier if we just edit the source tree, but hey...

cross-gcc-first_compile: $(STATEDIR)/cross-gcc-first.compile

$(STATEDIR)/cross-gcc-first.compile: $(cross-gcc-first_compile_deps_default)
	@$(call targetinfo, $@)

	export $(CROSS_GCC_FIRST_PATH); \
	cd $(CROSS_GCC_FIRST_BUILDDIR) && \
		if test -d $(CROSS_GCC_FIRST_DIR)/libdecnumber; then \
			$(MAKE) configure-libdecnumber && \
			$(MAKE) $(PARALLELMFLAGS) all-libdecnumber; \
		fi

	cd $(CROSS_GCC_FIRST_BUILDDIR) && $(CROSS_GCC_FIRST_PATH) \
		$(MAKE) configure-gcc

	cd $(CROSS_GCC_FIRST_BUILDDIR) && $(CROSS_GCC_FIRST_PATH) \
		$(MAKE) configure-libcpp

	cd $(CROSS_GCC_FIRST_BUILDDIR) && $(CROSS_GCC_FIRST_PATH) \
		$(MAKE) configure-build-libiberty

	cd $(CROSS_GCC_FIRST_BUILDDIR) && $(CROSS_GCC_FIRST_PATH) \
		$(MAKE) $(PARALLELMFLAGS) all-libcpp

	cd $(CROSS_GCC_FIRST_BUILDDIR) && $(CROSS_GCC_FIRST_PATH) \
		$(MAKE) $(PARALLELMFLAGS) all-build-libiberty

	cd $(CROSS_GCC_FIRST_BUILDDIR)/gcc && $(CROSS_GCC_FIRST_PATH) \
		$(MAKE) $(PARALLELMFLAGS) libgcc.mk


	if test '!' -f $(CROSS_GCC_FIRST_BUILDDIR)/gcc/libgcc.mk-ORIG; then \
		cp -p $(CROSS_GCC_FIRST_BUILDDIR)/gcc/libgcc.mk \
			$(CROSS_GCC_FIRST_BUILDDIR)/gcc/libgcc.mk-ORIG; \
	fi

	sed 's@-lc@@g' < $(CROSS_GCC_FIRST_BUILDDIR)/gcc/libgcc.mk-ORIG \
		> $(CROSS_GCC_FIRST_BUILDDIR)/gcc/libgcc.mk

	cd $(CROSS_GCC_FIRST_BUILDDIR)/gcc && $(CROSS_GCC_FIRST_PATH) \
		$(MAKE) tree-check.h

	cd $(CROSS_GCC_FIRST_BUILDDIR) && $(CROSS_GCC_FIRST_PATH) \
		$(MAKE) $(PARALLELMFLAGS) all-gcc

	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Install
# ----------------------------------------------------------------------------

cross-gcc-first_install: $(STATEDIR)/cross-gcc-first.install

$(STATEDIR)/cross-gcc-first.install: $(cross-gcc-first_install_deps_default)
	@$(call targetinfo, $@)
	cd $(CROSS_GCC_FIRST_BUILDDIR) && \
		$(CROSS_GCC_FIRST_PATH) $(MAKE) install-gcc
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Clean
# ----------------------------------------------------------------------------

cross-gcc-first_clean:
	rm -rf $(STATEDIR)/cross-gcc-first.*
	rm -rf $(CROSS_GCC_FIRST_DIR)
	rm -rf $(CROSS_GCC_FIRST_BUILDDIR)

# vim: syntax=make
