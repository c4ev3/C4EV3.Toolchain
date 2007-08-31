#!/usr/bin/make
# -- Makefile to build all ptxconfigs
# -- Carsten Schlote <c.schlote@konzeptpark.de>

# -- start this fragment with 'make -f build_all.mk' or the supplied wrapper script!
SHELL=/bin/bash

# -- Defines and Lists --------------------------------------------------------

builddate = $(shell date +%y%m%d-%H%M)
subversionrev = $(strip $(shell svnversion))

configdir = ptxconfigs
configfiles = $(wildcard $(configdir)/*.ptxconfig)
configs = $(basename $(notdir $(wildcard $(configdir)/*.ptxconfig)))

gstatedir = gstate
suffix_buildtime = .buildtag
suffix_buildstatus = .status
suffix_buildrevision = .svnrev
gstatefiles = $(addprefix $(gstatedir)/,$(addsuffix $(suffix_buildtime),$(configs)))

instdirs = $(foreach i,$(configfiles),$(shell . $i && echo $${PTXCONF_PREFIX} ))

distdir = dists
suffix_distarc = .tar.bz2
distfiles = $(addprefix $(distdir)/,$(addsuffix $(suffix_distarc),$(configs)))

statuspagefile = $(gstatedir)/OSELAS-BuildAll-Status.txt

# -- Macros -------------------------------------------------------------------

define PrintHeaderMsg
	@echo -en "\n\n---------------------------------------------------------------------\n"
	@echo -en "-- $(1)"
	@echo -en "\n---------------------------------------------------------------------\n\n"
endef

define UpdateStatusPage
	@echo -e "# OSELAS Toolchain Build All Status " > $(statuspagefile).tmp
	@echo -e "# Script started $(cat $(gstatedir)/lastbuilddate) on SVN $(subversionrev)" >> $(statuspagefile).tmp
	@echo -e "# Status page updated : `date`" >> $(statuspagefile).tmp
	@echo -e "# Build date\tSVNRev\tStatus\tToolchain" >> $(statuspagefile).tmp
	@for i in $(configs); do \
	   if test -e $(gstatedir)/$$i$(suffix_buildtime); then cat $(gstatedir)/$$i$(suffix_buildtime); else echo -n "000000-0000"; fi; \
	   echo -en "\t"; \
	   if test -e $(gstatedir)/$$i$(suffix_buildrevision); then cat $(gstatedir)/$$i$(suffix_buildrevision); else echo -n "n.a."; fi; \
	   echo -en "\t"; \
	   if test -e $(gstatedir)/$$i$(suffix_buildstatus); then cat $(gstatedir)/$$i$(suffix_buildstatus); else echo -n "n.a."; fi; \
	   echo -en "\t"; \
	   echo "$$i"; \
	done >> $(statuspagefile).tmp
	@mv $(statuspagefile).tmp $(statuspagefile)
endef

define SetupInstallDirs 
	@dirs=""; for i in $(instdirs); do \
	  if [ ! -d "$$i" ]; then \
	    echo "Creating install dir : $$i"; \
	    sudo mkdir -p $$i; \
	    sudo chown $(USER) $$i; \
	  else \
	    echo "Skipping install dir : $$i"; \
	  fi; \
	done
endef

define RemoveInstallDirs
	@dirs=""; for i in $(instdirs); do \
	  if [ -d "$$i" ]; then \
	    echo "Remove install dir contents : $$i"; \
	    rm -rf $$i/*; \
	  else \
	    echo "Skipping non-existing install dir : $$i"; \
	  fi; \
	done
endef

define BuildChain
	$(call PrintHeaderMsg, Rebuild toolchain $(1))
	ptxdist distclean  
	ptxdist select $$<

	@instdir=$(shell . ptxconfig && echo $${PTXCONF_PREFIX}); \
	if [ -d $$instdir ]; then \
	   echo "Removing existing toolchain files in $$instdir"; echo rm -rf "$$instdir/*"; \
	fi;
        
	# -- Intentionally fix make target, we don't want to rebuild broken chains over and oover again
	# -- Update status output
	echo -n "$(builddate)" > $$@
	echo -n "Build" > $(gstatedir)/$(1)$(suffix_buildstatus)
	echo -n "$(subversionrev)" > $(gstatedir)/$(1)$(suffix_buildrevision)
	$(call UpdateStatusPage)

	@(echo "ptxdist go" ; if ptxdist go; then echo -n "Success"; else echo -n "Failed"; fi) > $(gstatedir)/$(1)$(suffix_buildstatus)

	$(call PrintHeaderMsg, Saving logs for toolchain $(1))
	@if test -e logfile; then cp -v logfile $(distdir)/$(1)-logfile; else echo "No logfile?";  fi
	@if test -e deptree.ps; then cp -v deptree.ps $(distdir)/$(1)-deptree.ps; else echo "No deptree.ps?";  fi

	$(call PrintHeaderMsg, Create archive for toolchain $(1))
	@if test -L state/toolchain-install-dir; then \
	  echo tar cjf $(distdir)/$(1).tar.bz2 -C `readlink state/toolchain-install-dir`; \
	else \
	  echo "No symbolic link to install dir found - no archive created."; \
	fi

	$(call UpdateStatusPage)
endef


# -- Targets ------------------------------------------------------------------

.PHONY : all mkgstatedir mkdistdir updatestatpage updatestatpage_forced mkblddatetag clean distclean

all : mkblddatetag mkinstdirs $(gstatefiles) updatestatpage

dist :  $(distfiles)

mkgstatedir :
	@mkdir -p $(gstatedir)

mkdistdir :
	@mkdir -p $(distdir)   

mkinstdirs :
	$(call SetupInstallDirs)

rminstdirs :
	$(call RemoveInstallDirs)

$(gstatedir)/laststatus : $(gstatefiles)
	@echo "Toolchain Status Changed - Status Page updated"
	$(call UpdateStatusPage)
	@touch $@

updatestatpage: mkgstatedir $(gstatedir)/laststatus

updatestatpage_forced: mkgstatedir
	$(call UpdateStatusPage)

$(gstatedir)/lastbuilddate : mkgstatedir $(configfiles)
	@echo -n "$(builddate)" > $(gstatedir)/lastbuilddate

mkblddatetag: $(gstatedir)/lastbuilddate

clean :
	-rm -rf $(gstatedir)

distclean : clean
	-rm -rf $(distdir)

# -- Rules --------------------------------------------------------------------

define BuildChainRules
$(gstatedir)/$(1).buildtag : $(configdir)/$(1).ptxconfig | mkgstatedir mkdistdir
	$(call BuildChain) 

$(distdir)/$(1)$(suffix_distarc) : $(gstatedir)/$(1).buildtag
	@echo "BROKEN FIXME - needs some way to derive install location from ptxconfig"

build_$(1) : $(gstatedir)/$(1).buildtag updatestatpage

endef

$(foreach CFG,$(configs),$(eval $(call BuildChainRules,$(CFG))))



