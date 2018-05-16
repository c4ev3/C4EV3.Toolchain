$(common-objpfx)nptl/init.o: init.c \
 ../include/libc-symbols.h $(common-objpfx)config.h \
 ../sysdeps/wordsize-32/symbol-hacks.h ../include/assert.h \
 ../assert/assert.h ../include/features.h ../include/sys/cdefs.h \
 ../misc/sys/cdefs.h ../sysdeps/wordsize-32/bits/wordsize.h \
 ../include/gnu/stubs.h ../include/limits.h \
 /opt/cross/lib/gcc/arm-linux-gnueabi/8.1.0/include-fixed/limits.h \
 ../include/bits/posix1_lim.h ../posix/bits/posix1_lim.h \
 ../nptl/sysdeps/unix/sysv/linux/bits/local_lim.h \
 /opt/cross/arm-linux/include/linux/limits.h ../include/bits/posix2_lim.h \
 ../posix/bits/posix2_lim.h ../include/bits/xopen_lim.h \
 $(common-objpfx)bits/stdio_lim.h ../include/signal.h \
 ../signal/signal.h ../sysdeps/unix/sysv/linux/bits/sigset.h \
 ../bits/types.h ../bits/typesizes.h \
 ../sysdeps/unix/sysv/linux/bits/signum.h ../include/time.h \
 ../time/time.h ../sysdeps/unix/sysv/linux/bits/siginfo.h \
 ../sysdeps/unix/sysv/linux/bits/sigaction.h \
 ../sysdeps/unix/sysv/linux/bits/sigcontext.h \
 /opt/cross/arm-linux/include/asm/sigcontext.h \
 /opt/cross/lib/gcc/arm-linux-gnueabi/8.1.0/include/stddef.h \
 ../sysdeps/unix/sysv/linux/bits/sigstack.h \
 ../ports/sysdeps/unix/sysv/linux/arm/sys/ucontext.h \
 ../ports/sysdeps/unix/sysv/linux/arm/sys/procfs.h ../include/sys/time.h \
 ../time/sys/time.h ../bits/time.h ../include/sys/select.h \
 ../misc/sys/select.h ../bits/select.h ../include/sys/types.h \
 ../posix/sys/types.h ../include/endian.h ../string/endian.h \
 ../ports/sysdeps/arm/bits/endian.h \
 ../sysdeps/unix/sysv/linux/sys/sysmacros.h \
 ../ports/sysdeps/unix/sysv/linux/arm/nptl/bits/pthreadtypes.h \
 ../ports/sysdeps/unix/sysv/linux/arm/sys/user.h \
 ../nptl/sysdeps/pthread/bits/sigthread.h ../include/stdlib.h \
 ../stdlib/stdlib.h ../sysdeps/unix/sysv/linux/bits/waitflags.h \
 ../bits/waitstatus.h ../include/xlocale.h ../locale/xlocale.h \
 ../include/alloca.h ../stdlib/alloca.h ../ports/sysdeps/arm/stackinfo.h \
 ../nptl/sysdeps/pthread/allocalim.h ../include/unistd.h \
 ../posix/unistd.h ../nptl/sysdeps/unix/sysv/linux/bits/posix_opt.h \
 ../bits/environments.h ../bits/confname.h ../include/getopt.h \
 ../posix/getopt.h ../sysdeps/unix/sysv/linux/sys/param.h \
 /opt/cross/arm-linux/include/linux/param.h \
 /opt/cross/arm-linux/include/asm/param.h ../include/sys/resource.h \
 ../resource/sys/resource.h ../sysdeps/unix/sysv/linux/bits/resource.h \
 ../nptl/pthreadP.h ../include/pthread.h \
 ../nptl/sysdeps/pthread/pthread.h ../include/sched.h ../posix/sched.h \
 ../sysdeps/unix/sysv/linux/bits/sched.h \
 ../ports/sysdeps/arm/eabi/bits/setjmp.h ../include/setjmp.h \
 ../setjmp/setjmp.h \
 /opt/cross/lib/gcc/arm-linux-gnueabi/8.1.0/include/stdbool.h \
 ../sysdeps/unix/sysv/linux/sys/syscall.h \
 /opt/cross/arm-linux/include/asm/unistd.h ../nptl/descr.h \
 ../sysdeps/generic/hp-timing.h ../nptl/sysdeps/pthread/list.h \
 ../ports/sysdeps/unix/sysv/linux/arm/nptl/lowlevellock.h \
 ../include/atomic.h \
 ../ports/sysdeps/unix/sysv/linux/arm/nptl/bits/atomic.h \
 ../sysdeps/generic/stdint.h ../bits/wchar.h \
 ../ports/sysdeps/unix/sysv/linux/arm/eabi/sysdep.h \
 ../ports/sysdeps/unix/sysv/linux/arm/sysdep.h \
 ../ports/sysdeps/unix/arm/sysdep.h ../sysdeps/unix/sysdep.h \
 ../sysdeps/generic/sysdep.h ../ports/sysdeps/arm/sysdep.h \
 ../sysdeps/unix/sysv/linux/dl-sysdep.h ../ports/sysdeps/arm/dl-sysdep.h \
 ../sysdeps/generic/dl-sysdep.h ../include/tls.h \
 ../ports/sysdeps/arm/nptl/tls.h ../nptl/descr.h \
 ../ports/sysdeps/unix/sysv/linux/arm/kernel-features.h \
 ../sysdeps/unix/sysv/linux/kernel-features.h \
 ../ports/sysdeps/arm/nptl/pthreaddef.h ../nptl/../nptl_db/thread_db.h \
 ../ports/sysdeps/unix/sysv/linux/arm/eabi/nptl/unwind.h \
 ../include/resolv.h ../resolv/resolv.h ../include/netinet/in.h \
 ../inet/netinet/in.h ../include/sys/socket.h ../socket/sys/socket.h \
 ../include/sys/uio.h ../misc/sys/uio.h \
 ../sysdeps/unix/sysv/linux/bits/uio.h \
 ../sysdeps/unix/sysv/linux/bits/socket.h ../bits/sockaddr.h \
 /opt/cross/arm-linux/include/asm/socket.h \
 /opt/cross/arm-linux/include/asm/sockios.h \
 ../sysdeps/unix/sysv/linux/bits/in.h ../bits/byteswap.h \
 ../nptl/sysdeps/unix/sysv/linux/internaltypes.h \
 ../nptl/sysdeps/pthread/pthread-functions.h \
 ../sysdeps/unix/sysv/linux/ldsodefs.h ../ports/sysdeps/arm/ldsodefs.h \
 ../include/elf.h ../elf/elf.h ../sysdeps/generic/dl-dtprocnum.h \
 ../sysdeps/generic/ldsodefs.h ../include/string.h ../string/string.h \
 ../ports/sysdeps/arm/bits/string.h ../include/bits/string2.h \
 ../string/bits/string2.h ../include/dlfcn.h ../dlfcn/dlfcn.h \
 ../include/bits/dlfcn.h ../bits/dlfcn.h ../include/link.h ../elf/link.h \
 ../bits/elfclass.h ../ports/sysdeps/arm/bits/link.h \
 ../ports/sysdeps/arm/bits/linkmap.h ../sysdeps/generic/dl-lookupcfg.h \
 ../nptl/sysdeps/pthread/bits/libc-lock.h ../sysdeps/generic/bp-sym.h \
 ../include/fpu_control.h ../ports/sysdeps/arm/eabi/fpu_control.h \
 ../include/sys/mman.h ../misc/sys/mman.h \
 ../ports/sysdeps/unix/sysv/linux/arm/bits/mman.h \
 ../ports/sysdeps/unix/sysv/linux/arm/dl-procinfo.c \
 ../nptl/sysdeps/unix/sysv/linux/fork.h ../version.h \
 ../include/shlib-compat.h ../nptl/sysdeps/unix/sysv/linux/smp.h

../include/libc-symbols.h:

$(common-objpfx)config.h:

../sysdeps/wordsize-32/symbol-hacks.h:

../include/assert.h:

../assert/assert.h:

../include/features.h:

../include/sys/cdefs.h:

../misc/sys/cdefs.h:

../sysdeps/wordsize-32/bits/wordsize.h:

../include/gnu/stubs.h:

../include/limits.h:

/opt/cross/lib/gcc/arm-linux-gnueabi/8.1.0/include-fixed/limits.h:

../include/bits/posix1_lim.h:

../posix/bits/posix1_lim.h:

../nptl/sysdeps/unix/sysv/linux/bits/local_lim.h:

/opt/cross/arm-linux/include/linux/limits.h:

../include/bits/posix2_lim.h:

../posix/bits/posix2_lim.h:

../include/bits/xopen_lim.h:

$(common-objpfx)bits/stdio_lim.h:

../include/signal.h:

../signal/signal.h:

../sysdeps/unix/sysv/linux/bits/sigset.h:

../bits/types.h:

../bits/typesizes.h:

../sysdeps/unix/sysv/linux/bits/signum.h:

../include/time.h:

../time/time.h:

../sysdeps/unix/sysv/linux/bits/siginfo.h:

../sysdeps/unix/sysv/linux/bits/sigaction.h:

../sysdeps/unix/sysv/linux/bits/sigcontext.h:

/opt/cross/arm-linux/include/asm/sigcontext.h:

/opt/cross/lib/gcc/arm-linux-gnueabi/8.1.0/include/stddef.h:

../sysdeps/unix/sysv/linux/bits/sigstack.h:

../ports/sysdeps/unix/sysv/linux/arm/sys/ucontext.h:

../ports/sysdeps/unix/sysv/linux/arm/sys/procfs.h:

../include/sys/time.h:

../time/sys/time.h:

../bits/time.h:

../include/sys/select.h:

../misc/sys/select.h:

../bits/select.h:

../include/sys/types.h:

../posix/sys/types.h:

../include/endian.h:

../string/endian.h:

../ports/sysdeps/arm/bits/endian.h:

../sysdeps/unix/sysv/linux/sys/sysmacros.h:

../ports/sysdeps/unix/sysv/linux/arm/nptl/bits/pthreadtypes.h:

../ports/sysdeps/unix/sysv/linux/arm/sys/user.h:

../nptl/sysdeps/pthread/bits/sigthread.h:

../include/stdlib.h:

../stdlib/stdlib.h:

../sysdeps/unix/sysv/linux/bits/waitflags.h:

../bits/waitstatus.h:

../include/xlocale.h:

../locale/xlocale.h:

../include/alloca.h:

../stdlib/alloca.h:

../ports/sysdeps/arm/stackinfo.h:

../nptl/sysdeps/pthread/allocalim.h:

../include/unistd.h:

../posix/unistd.h:

../nptl/sysdeps/unix/sysv/linux/bits/posix_opt.h:

../bits/environments.h:

../bits/confname.h:

../include/getopt.h:

../posix/getopt.h:

../sysdeps/unix/sysv/linux/sys/param.h:

/opt/cross/arm-linux/include/linux/param.h:

/opt/cross/arm-linux/include/asm/param.h:

../include/sys/resource.h:

../resource/sys/resource.h:

../sysdeps/unix/sysv/linux/bits/resource.h:

../nptl/pthreadP.h:

../include/pthread.h:

../nptl/sysdeps/pthread/pthread.h:

../include/sched.h:

../posix/sched.h:

../sysdeps/unix/sysv/linux/bits/sched.h:

../ports/sysdeps/arm/eabi/bits/setjmp.h:

../include/setjmp.h:

../setjmp/setjmp.h:

/opt/cross/lib/gcc/arm-linux-gnueabi/8.1.0/include/stdbool.h:

../sysdeps/unix/sysv/linux/sys/syscall.h:

/opt/cross/arm-linux/include/asm/unistd.h:

../nptl/descr.h:

../sysdeps/generic/hp-timing.h:

../nptl/sysdeps/pthread/list.h:

../ports/sysdeps/unix/sysv/linux/arm/nptl/lowlevellock.h:

../include/atomic.h:

../ports/sysdeps/unix/sysv/linux/arm/nptl/bits/atomic.h:

../sysdeps/generic/stdint.h:

../bits/wchar.h:

../ports/sysdeps/unix/sysv/linux/arm/eabi/sysdep.h:

../ports/sysdeps/unix/sysv/linux/arm/sysdep.h:

../ports/sysdeps/unix/arm/sysdep.h:

../sysdeps/unix/sysdep.h:

../sysdeps/generic/sysdep.h:

../ports/sysdeps/arm/sysdep.h:

../sysdeps/unix/sysv/linux/dl-sysdep.h:

../ports/sysdeps/arm/dl-sysdep.h:

../sysdeps/generic/dl-sysdep.h:

../include/tls.h:

../ports/sysdeps/arm/nptl/tls.h:

../nptl/descr.h:

../ports/sysdeps/unix/sysv/linux/arm/kernel-features.h:

../sysdeps/unix/sysv/linux/kernel-features.h:

../ports/sysdeps/arm/nptl/pthreaddef.h:

../nptl/../nptl_db/thread_db.h:

../ports/sysdeps/unix/sysv/linux/arm/eabi/nptl/unwind.h:

../include/resolv.h:

../resolv/resolv.h:

../include/netinet/in.h:

../inet/netinet/in.h:

../include/sys/socket.h:

../socket/sys/socket.h:

../include/sys/uio.h:

../misc/sys/uio.h:

../sysdeps/unix/sysv/linux/bits/uio.h:

../sysdeps/unix/sysv/linux/bits/socket.h:

../bits/sockaddr.h:

/opt/cross/arm-linux/include/asm/socket.h:

/opt/cross/arm-linux/include/asm/sockios.h:

../sysdeps/unix/sysv/linux/bits/in.h:

../bits/byteswap.h:

../nptl/sysdeps/unix/sysv/linux/internaltypes.h:

../nptl/sysdeps/pthread/pthread-functions.h:

../sysdeps/unix/sysv/linux/ldsodefs.h:

../ports/sysdeps/arm/ldsodefs.h:

../include/elf.h:

../elf/elf.h:

../sysdeps/generic/dl-dtprocnum.h:

../sysdeps/generic/ldsodefs.h:

../include/string.h:

../string/string.h:

../ports/sysdeps/arm/bits/string.h:

../include/bits/string2.h:

../string/bits/string2.h:

../include/dlfcn.h:

../dlfcn/dlfcn.h:

../include/bits/dlfcn.h:

../bits/dlfcn.h:

../include/link.h:

../elf/link.h:

../bits/elfclass.h:

../ports/sysdeps/arm/bits/link.h:

../ports/sysdeps/arm/bits/linkmap.h:

../sysdeps/generic/dl-lookupcfg.h:

../nptl/sysdeps/pthread/bits/libc-lock.h:

../sysdeps/generic/bp-sym.h:

../include/fpu_control.h:

../ports/sysdeps/arm/eabi/fpu_control.h:

../include/sys/mman.h:

../misc/sys/mman.h:

../ports/sysdeps/unix/sysv/linux/arm/bits/mman.h:

../ports/sysdeps/unix/sysv/linux/arm/dl-procinfo.c:

../nptl/sysdeps/unix/sysv/linux/fork.h:

../version.h:

../include/shlib-compat.h:

../nptl/sysdeps/unix/sysv/linux/smp.h:
