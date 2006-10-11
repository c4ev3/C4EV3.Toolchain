# -*-makefile-*-
# $Id$
#
# Copyright (C) 2006 by Marc Kleine-Budde <mkl@pengutronix.de>
#          
# See CREDITS for details about who has contributed to this project.
#
# For further information about the PTXdist project and license conditions
# see the README file.
#

#
# We provide this package
#
PACKAGES-$(PTXCONF_GLIBC_FINAL) += glibc_final

#
# Paths and names
#
GLIBC_FINAL_DIR	= $(BUILDDIR)/$(GLIBC)-build

# ----------------------------------------------------------------------------
# Get
# ----------------------------------------------------------------------------

glibc_final_get: $(STATEDIR)/glibc_final.get

$(STATEDIR)/glibc_final.get: $(glibc_final_get_deps_default)
	@$(call targetinfo, $@)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Extract
# ----------------------------------------------------------------------------

glibc_final_extract: $(STATEDIR)/glibc_final.extract

$(STATEDIR)/glibc_final.extract: $(glibc_final_extract_deps_default)
	@$(call targetinfo, $@)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Prepare
# ----------------------------------------------------------------------------

glibc_final_prepare: $(STATEDIR)/glibc_final.prepare

$(STATEDIR)/glibc_final.prepare: $(glibc_final_prepare_deps_default)
	@$(call targetinfo, $@)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Compile
# ----------------------------------------------------------------------------

glibc_final_compile: $(STATEDIR)/glibc_final.compile

$(STATEDIR)/glibc_final.compile: $(glibc_final_compile_deps_default)
	@$(call targetinfo, $@)
	cd $(GLIBC_BUILDDIR) && $(GLIBC_PATH) $(MAKE) $(PARALLELMFLAGS)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Install
# ----------------------------------------------------------------------------

glibc_final_install: $(STATEDIR)/glibc_final.install

$(STATEDIR)/glibc_final.install: $(glibc_final_install_deps_default)
	@$(call targetinfo, $@)
	cd $(GLIBC_BUILDDIR) && \
		$(GLIBC_PATH) $(MAKE) install_root=$(SYSROOT) \
			install-bin install-rootsbin \
			install-sbin install-data install-others
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Target-Install
# ----------------------------------------------------------------------------

glibc_final_targetinstall: $(STATEDIR)/glibc_final.targetinstall

$(STATEDIR)/glibc_final.targetinstall: $(glibc_final_targetinstall_deps_default)
	@$(call targetinfo, $@)
	@$(call touch, $@)

# ----------------------------------------------------------------------------
# Clean
# ----------------------------------------------------------------------------

glibc_final_clean:
	rm -rf $(STATEDIR)/glibc_final.*
	rm -rf $(IMAGEDIR)/glibc_final_*
	rm -rf $(GLIBC_FINAL_DIR)

# vim: syntax=make
