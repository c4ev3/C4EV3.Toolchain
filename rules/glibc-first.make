# -*-makefile-*-
# $Id: template 6655 2007-01-02 12:55:21Z rsc $
#
# Copyright (C) 2007 by 
#
# See CREDITS for details about who has contributed to this project.
#
# For further information about the PTXdist project and license conditions
# see the README file.
#

#
# We provide this package
#
PACKAGES-$(PTXCONF_GLIBC_FIRST) += glibc-first

#
# Paths and names
#
GLIBC_FIRST_VERSION	:= $(call remove_quotes,$(PTXCONF_GLIBC_VERSION))
GLIBC_FIRST		:= glibc-$(GLIBC_FIRST_VERSION)
GLIBC_FIRST_SUFFIX	:= tar.bz2
GLIBC_FIRST_URL		:= $(PTXCONF_SETUP_GNUMIRROR)/glibc/$(GLIBC_FIRST).$(GLIBC_FIRST_SUFFIX)
GLIBC_FIRST_SOURCE	:= $(SRCDIR)/$(GLIBC_FIRST).$(GLIBC_FIRST_SUFFIX)
GLIBC_FIRST_DIR		:= $(BUILDDIR_DEBUG)/$(GLIBC_FIRST)
GLIBC_FIRST_BUILDDIR	:= $(BUILDDIR)/$(GLIBC_FIRST)-build

# ----------------------------------------------------------------------------
# Get
# ----------------------------------------------------------------------------

glibc-first_get: $(STATEDIR)/glibc-first.get

$(STATEDIR)/glibc-first.get: $(glibc-first_get_deps_default)
	@$(call targetinfo, $@)
	@$(call touch, $@)

$(GLIBC_FIRST_SOURCE):
	@$(call targetinfo, $@)
	@$(call get, GLIBC_FIRST)

# ----------------------------------------------------------------------------
# Extract
# ----------------------------------------------------------------------------

glibc-first_extract: $(STATEDIR)/glibc-first.extract

$(STATEDIR)/glibc-first.extract: $(glibc-first_extract_deps_default)
	@$(call targetinfo, $@)
	@$(call clean, $(GLIBC_FIRST_DIR))
	@$(call extract, GLIBC_FIRST, $(BUILDDIR_DEBUG))
	@$(call patchin, GLIBC_FIRST, $(GLIBC_FIRST_DIR))

ifdef PTXCONF_GLIBC_LINUXTHREADS
	cp -r $(GLIBC_LINUXTHREADS_DIR)/linuxthreads $(GLIBC_FIRST_DIR)
	cp -r $(GLIBC_LINUXTHREADS_DIR)/linuxthreads_db $(GLIBC_FIRST_DIR)
endif
ifdef PTXCONF_GLIBC_PORTS
	mkdir -p $(GLIBC_FIRST_DIR)/ports
	cp -r $(GLIBC_PORTS_DIR)/* $(GLIBC_FIRST_DIR)/ports
endif

	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Prepare
# ----------------------------------------------------------------------------

glibc-first_prepare: $(STATEDIR)/glibc-first.prepare

GLIBC_FIRST_PATH := PATH=$(CROSS_PATH)
GLIBC_FIRST_ENV := \
	BUILD_CC=$(HOSTCC) \
	libc_cv_forced_unwind=yes \
	libc_cv_c_cleanup=yes
GLIBC_FIRST_MAKEVARS := AUTOCONF=no

#
# autoconf
#
ifdef PTXCONF_GLIBC_PORTS
GLIBC_ADDONS	+= ports
endif
ifdef PTXCONF_GLIBC_ADDON_NPTL
GLIBC_ADDONS	+= nptl
endif
ifdef PTXCONF_GLIBC_ADDON_LINUXTHREADS
GLIBC_ADDONS	+= linuxthreads
endif

GLIBC_AUTOCONF_COMMON := \
	--prefix=/usr \
	--build=$(GNU_BUILD) \
	--host=$(PTXCONF_GNU_TARGET) \
	--target=$(PTXCONF_GNU_TARGET) \
	\
	--with-headers=$(SYSROOT)/usr/include \
	--enable-add-ons=$(subst $(space),$(comma),$(GLIBC_ADDONS)) \
	\
	--without-cvs \
	--disable-sanity-checks \
	--without-selinux \
	$(PTXCONF_GLIBC_EXTRA_CONFIG)

ifdef PTXCONF_GLIBC_TLS
GLIBC_AUTOCONF_COMMON	+= --with-tls --with-__thread
else
GLIBC_AUTOCONF_COMMON	+= --without-tls --without-__thread
endif

GLIBC_FIRST_AUTOCONF := \
	$(GLIBC_AUTOCONF_COMMON) \
	\
	--enable-kernel=$(PTXCONF_GLIBC_ENABLE_KERNEL) \
        --enable-debug \
	--without-gd \
        --enable-shared

$(STATEDIR)/glibc-first.prepare: $(glibc-first_prepare_deps_default)
	@$(call targetinfo, $@)
	@$(call clean, $(GLIBC_FIRST_BUILDDIR))
	mkdir -p $(GLIBC_FIRST_BUILDDIR)
	cd $(GLIBC_FIRST_BUILDDIR) && \
		eval $(GLIBC_FIRST_ENV) $(GLIBC_FIRST_PATH) \
		$(GLIBC_FIRST_DIR)/configure $(GLIBC_FIRST_AUTOCONF)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Compile
# ----------------------------------------------------------------------------

glibc-first_compile: $(STATEDIR)/glibc-first.compile

$(STATEDIR)/glibc-first.compile: $(glibc-first_compile_deps_default)
	@$(call targetinfo, $@)
	cd $(GLIBC_FIRST_BUILDDIR) && $(GLIBC_FIRST_PATH) $(MAKE) $(PARALLELMFLAGS) lib
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Install
# ----------------------------------------------------------------------------

glibc-first_install: $(STATEDIR)/glibc-first.install

$(STATEDIR)/glibc-first.install: $(glibc-first_install_deps_default)
	@$(call targetinfo, $@)
	cd $(GLIBC_FIRST_BUILDDIR) && \
		$(GLIBC_FIRST_PATH) $(MAKE) $(GLIBC_FIRST_MAKEVARS) \
		install_root=$(SYSROOT) install-lib-all install-headers
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Target-Install
# ----------------------------------------------------------------------------

glibc-first_targetinstall: $(STATEDIR)/glibc-first.targetinstall

$(STATEDIR)/glibc-first.targetinstall: $(glibc-first_targetinstall_deps_default)
	@$(call targetinfo, $@)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Clean
# ----------------------------------------------------------------------------

glibc-first_clean:
	rm -rf $(STATEDIR)/glibc-first.*
	rm -rf $(IMAGEDIR)/glibc-first_*
	rm -rf $(GLIBC_FIRST_DIR)

# vim: syntax=make
