#!/bin/bash
# This is some wrapper to call the makefile fragment, which builds all toolchains
# - might be a good place for common preparations and final postprocessing

BUILDLOG=build_all_logs/build_all.log-`date +%y%m%d-%H%M`
#set -x
if test -z ${ISCRON}; then set -x; fi

if test ! -e build_all.lock; then
	touch build_all.lock
	
	# -- Update current SVN workcopy
	svn update

	# -- Start make, which check dependencies on the ptxconfig files stored in gstate
	# -- For each updated ptxconfig the toolchain is recompiled
	# -- Finaly a status file suitable for parsing is generated and stored in
	# --   gstate/OSELAS-BuildAll-Status.txt
	# -- The make process is started with via nice to avoid cpu-load on compile host
	mkdir -p build_all_logs
	if test ${ISCRON}; then
		nice -n 5 make -f build_all.mk > $BUILDLOG
	else
		nice -n 5 make -f build_all.mk 
	fi
	if test -z "`cat $BUILDLOG`"; then rm $BUILDLOG; fi

	# -- Dump status file info
	echo -e "\n\nStatus stored in gstate/OSELAS-BuildAll-Status.txt"
	rm -f build_all.lock
	
else
	#Don't output things - causes mail flooding with cron
	#echo "Build script still active ? (Remove lock build_all.lock otherwise)"
	make -f build_all.mk updatestatpage
fi

# -- ToDo ---------------------------------------------------------------------
# [ ] Checkout a new working copy of trunk for each chain, and do building in parallel
# [ ] Create a nice HTML output for the status showing the actual status of each chain
# [ ] Add checks to ensure consitency of ptxconfig files and install locations -
#       apply fixup-ptxconfigs.sh?
# [ ] Add code to create all install directory at once - so you have to enter the
#       sudo password only once, when this script started the first time.
# [ ] Remove link to installation directory from cross-toolchain.make?
#       We need some way to determine the installation path from outside ptxdist...
# [x] Add lock file for cron triggered operation


