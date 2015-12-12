
TOOLCHAIN_CLEANUP_HOST_DIRS := \
	"$(PTXCONF_SYSROOT_CROSS)/lib" \
	"$(PTXCONF_SYSROOT_CROSS)/libexec" \
	"$(PTXCONF_SYSROOT_CROSS)/bin" \
	"$(PTXCONF_SYSROOT_CROSS)/$(call remove_quotes,$(PTXCONF_GNU_TARGET))/bin"

$(STATEDIR)/world.cleanup: $(STATEDIR)/world.targetinstall
	@$(call targetinfo)
	@find "$(PTXCONF_SYSROOT_CROSS)/"* -depth -type d -print0 | \
		xargs -r -0 -- rmdir -v --ignore-fail-on-non-empty --
#	# remove all static host libraries
	find $(TOOLCHAIN_CLEANUP_HOST_DIRS) \
		-wholename "$(PTXCONF_SYSROOT_CROSS)/lib/gcc" -prune -o \
		-type f -name "*.a" -print0 | xargs -0 -r rm
#	# strip all host binaries
	find $(TOOLCHAIN_CLEANUP_HOST_DIRS) \
		-wholename "$(PTXCONF_SYSROOT_CROSS)/lib/gcc" -prune -o \
		-type f \( -executable -o -name "*.so*" \) -print0 \
		| xargs -0 -n1 --verbose strip --preserve-dates || true
#	# make sure there are no bogus rpaths
	find "$(PTXCONF_SYSROOT_CROSS)/$(call remove_quotes,$(PTXCONF_GNU_TARGET))" \
		-type f \( -executable -o -name "*.so*" \) -print0 \
		| xargs -0 chrpath -k -d 2>/dev/null || true
ifdef PTXCONF_TOOLCHAIN_CONFIG_SYSROOT
#	# size compromise: compressed debug sections in static libraries are too large
	find "$(PTXCONF_SYSROOT_CROSS)/sysroot-$(call remove_quotes,$(PTXCONF_GNU_TARGET))/usr/lib" \
		-type f -name "*.a" -print0 \
		| xargs -0 -n1 $(PTXCONF_SYSROOT_CROSS)/bin/$(PTXCONF_GNU_TARGET)-objcopy \
			--preserve-dates --strip-debug --keep-file-symbols
endif
#	# compress debug sections and remove any absolute paths
	find "$(PTXCONF_SYSROOT_CROSS)" "$(PTXCONF_SYSROOT_CROSS)/lib/gcc" \
		$(patsubst %,-wholename % -prune -o,$(TOOLCHAIN_CLEANUP_HOST_DIRS)) \
		-type f \( -executable -o -name "*.so*" -o -name "*.a" -o -name "*.o" \) -print0 \
		| xargs -0 -n1 $(PTXCONF_SYSROOT_CROSS)/bin/$(PTXCONF_GNU_TARGET)-objcopy \
			--wildcard \
			--strip-symbol=$(GLIBC_BUILDDIR)/*.o \
			--strip-symbol=$(GLIBC_BUILDDIR)/*.os \
			--strip-symbol=$(PTXCONF_SYSROOT_TARGET)/usr/lib/*.o \
			--preserve-dates --compress-debug-sections 2>/dev/null || true
	find "$(PTXCONF_SYSROOT_TARGET)" \
		-name "*.cmd" -print0 | xargs -0 -r rm

	@$(call touch)

world: $(STATEDIR)/world.cleanup

# vim: syntax=make
