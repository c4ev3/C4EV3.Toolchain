#!/bin/bash

for i in ptxconfigs/*.ptxconfig; do
	test -e ptxconfig && rm ptxconfig
	ln -sf $i ptxconfig
	echo -e "\n --- Process config : $i\n"
	ptxdist oldconfig
done

rm ptxconfig
