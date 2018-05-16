$(common-objpfx)posix/waitpid.os: \
 ../sysdeps/unix/sysv/linux/waitpid.c ../include/libc-symbols.h \
 $(common-objpfx)config.h \
 ../sysdeps/wordsize-32/symbol-hacks.h ../include/errno.h \
 ../stdlib/errno.h ../include/features.h ../include/sys/cdefs.h \
 ../misc/sys/cdefs.h ../sysdeps/wordsize-32/bits/wordsize.h \
 ../include/gnu/stubs.h ../sysdeps/unix/sysv/linux/bits/errno.h \
 /opt/cross/arm-linux/include/linux/errno.h \
 /opt/cross/arm-linux/include/asm/errno.h \
 /opt/cross/arm-linux/include/asm-generic/errno.h \
 /opt/cross/arm-linux/include/asm-generic/errno-base.h ../include/tls.h \
 ../ports/sysdeps/arm/nptl/tls.h ../sysdeps/unix/sysv/linux/dl-sysdep.h \
 ../ports/sysdeps/arm/dl-sysdep.h ../sysdeps/generic/dl-sysdep.h \
 /opt/cross/lib/gcc/arm-linux-gnueabi/8.1.0/include/stdbool.h \
 /opt/cross/lib/gcc/arm-linux-gnueabi/8.1.0/include/stddef.h \
 ../sysdeps/generic/stdint.h ../bits/wchar.h \
 ../ports/sysdeps/unix/sysv/linux/arm/eabi/sysdep.h \
 ../ports/sysdeps/unix/sysv/linux/arm/sysdep.h \
 ../ports/sysdeps/unix/arm/sysdep.h ../sysdeps/unix/sysdep.h \
 ../sysdeps/generic/sysdep.h ../sysdeps/unix/sysv/linux/sys/syscall.h \
 /opt/cross/arm-linux/include/asm/unistd.h ../ports/sysdeps/arm/sysdep.h \
 ../nptl/descr.h ../include/limits.h \
 /opt/cross/lib/gcc/arm-linux-gnueabi/8.1.0/include-fixed/limits.h \
 ../include/bits/posix1_lim.h ../posix/bits/posix1_lim.h \
 ../nptl/sysdeps/unix/sysv/linux/bits/local_lim.h \
 /opt/cross/arm-linux/include/linux/limits.h ../include/bits/posix2_lim.h \
 ../posix/bits/posix2_lim.h ../include/bits/xopen_lim.h \
 $(common-objpfx)bits/stdio_lim.h ../include/sched.h \
 ../posix/sched.h ../bits/types.h ../bits/typesizes.h ../include/time.h \
 ../time/time.h ../sysdeps/unix/sysv/linux/bits/sched.h \
 ../include/setjmp.h ../setjmp/setjmp.h \
 ../ports/sysdeps/arm/eabi/bits/setjmp.h \
 ../sysdeps/unix/sysv/linux/bits/sigset.h ../include/sys/types.h \
 ../posix/sys/types.h ../include/endian.h ../string/endian.h \
 ../ports/sysdeps/arm/bits/endian.h ../include/sys/select.h \
 ../misc/sys/select.h ../bits/select.h ../bits/time.h \
 ../sysdeps/unix/sysv/linux/sys/sysmacros.h \
 ../ports/sysdeps/unix/sysv/linux/arm/nptl/bits/pthreadtypes.h \
 ../sysdeps/generic/hp-timing.h ../nptl/sysdeps/pthread/list.h \
 ../ports/sysdeps/unix/sysv/linux/arm/nptl/lowlevellock.h \
 ../include/xlocale.h ../locale/xlocale.h \
 ../sysdeps/unix/sysv/linux/sys/param.h \
 /opt/cross/arm-linux/include/linux/param.h \
 /opt/cross/arm-linux/include/asm/param.h ../include/atomic.h \
 ../include/stdlib.h ../stdlib/stdlib.h \
 ../sysdeps/unix/sysv/linux/bits/waitflags.h ../bits/waitstatus.h \
 ../include/alloca.h ../stdlib/alloca.h ../ports/sysdeps/arm/stackinfo.h \
 ../nptl/sysdeps/pthread/allocalim.h \
 ../ports/sysdeps/unix/sysv/linux/arm/nptl/bits/atomic.h \
 ../ports/sysdeps/unix/sysv/linux/arm/kernel-features.h \
 ../sysdeps/unix/sysv/linux/kernel-features.h \
 ../ports/sysdeps/arm/nptl/pthreaddef.h ../nptl/../nptl_db/thread_db.h \
 ../include/pthread.h ../nptl/sysdeps/pthread/pthread.h \
 ../include/signal.h ../signal/signal.h \
 ../ports/sysdeps/unix/sysv/linux/arm/sys/procfs.h ../include/sys/time.h \
 ../time/sys/time.h ../ports/sysdeps/unix/sysv/linux/arm/sys/user.h \
 ../ports/sysdeps/unix/sysv/linux/arm/eabi/nptl/unwind.h \
 ../include/resolv.h ../resolv/resolv.h ../include/netinet/in.h \
 ../inet/netinet/in.h ../include/sys/socket.h ../socket/sys/socket.h \
 ../include/sys/uio.h ../misc/sys/uio.h \
 ../sysdeps/unix/sysv/linux/bits/uio.h \
 ../sysdeps/unix/sysv/linux/bits/socket.h ../bits/sockaddr.h \
 /opt/cross/arm-linux/include/asm/socket.h \
 /opt/cross/arm-linux/include/asm/sockios.h \
 ../sysdeps/unix/sysv/linux/bits/in.h ../bits/byteswap.h \
 ../ports/sysdeps/unix/sysv/linux/arm/eabi/nptl/sysdep-cancel.h \
 ../nptl/pthreadP.h ../nptl/descr.h \
 ../nptl/sysdeps/unix/sysv/linux/internaltypes.h \
 ../nptl/sysdeps/pthread/pthread-functions.h ../include/sys/wait.h \
 ../posix/sys/wait.h ../sysdeps/unix/sysv/linux/bits/signum.h \
 ../sysdeps/unix/sysv/linux/bits/siginfo.h \
 ../sysdeps/unix/sysv/linux/bits/sigaction.h \
 ../sysdeps/unix/sysv/linux/bits/sigcontext.h \
 /opt/cross/arm-linux/include/asm/sigcontext.h \
 ../sysdeps/unix/sysv/linux/bits/sigstack.h \
 ../ports/sysdeps/unix/sysv/linux/arm/sys/ucontext.h \
 ../nptl/sysdeps/pthread/bits/sigthread.h ../include/sys/resource.h \
 ../resource/sys/resource.h ../sysdeps/unix/sysv/linux/bits/resource.h

../include/libc-symbols.h:

$(common-objpfx)config.h:

../sysdeps/wordsize-32/symbol-hacks.h:

../include/errno.h:

../stdlib/errno.h:

../include/features.h:

../include/sys/cdefs.h:

../misc/sys/cdefs.h:

../sysdeps/wordsize-32/bits/wordsize.h:

../include/gnu/stubs.h:

../sysdeps/unix/sysv/linux/bits/errno.h:

/opt/cross/arm-linux/include/linux/errno.h:

/opt/cross/arm-linux/include/asm/errno.h:

/opt/cross/arm-linux/include/asm-generic/errno.h:

/opt/cross/arm-linux/include/asm-generic/errno-base.h:

../include/tls.h:

../ports/sysdeps/arm/nptl/tls.h:

../sysdeps/unix/sysv/linux/dl-sysdep.h:

../ports/sysdeps/arm/dl-sysdep.h:

../sysdeps/generic/dl-sysdep.h:

/opt/cross/lib/gcc/arm-linux-gnueabi/8.1.0/include/stdbool.h:

/opt/cross/lib/gcc/arm-linux-gnueabi/8.1.0/include/stddef.h:

../sysdeps/generic/stdint.h:

../bits/wchar.h:

../ports/sysdeps/unix/sysv/linux/arm/eabi/sysdep.h:

../ports/sysdeps/unix/sysv/linux/arm/sysdep.h:

../ports/sysdeps/unix/arm/sysdep.h:

../sysdeps/unix/sysdep.h:

../sysdeps/generic/sysdep.h:

../sysdeps/unix/sysv/linux/sys/syscall.h:

/opt/cross/arm-linux/include/asm/unistd.h:

../ports/sysdeps/arm/sysdep.h:

../nptl/descr.h:

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

../include/sched.h:

../posix/sched.h:

../bits/types.h:

../bits/typesizes.h:

../include/time.h:

../time/time.h:

../sysdeps/unix/sysv/linux/bits/sched.h:

../include/setjmp.h:

../setjmp/setjmp.h:

../ports/sysdeps/arm/eabi/bits/setjmp.h:

../sysdeps/unix/sysv/linux/bits/sigset.h:

../include/sys/types.h:

../posix/sys/types.h:

../include/endian.h:

../string/endian.h:

../ports/sysdeps/arm/bits/endian.h:

../include/sys/select.h:

../misc/sys/select.h:

../bits/select.h:

../bits/time.h:

../sysdeps/unix/sysv/linux/sys/sysmacros.h:

../ports/sysdeps/unix/sysv/linux/arm/nptl/bits/pthreadtypes.h:

../sysdeps/generic/hp-timing.h:

../nptl/sysdeps/pthread/list.h:

../ports/sysdeps/unix/sysv/linux/arm/nptl/lowlevellock.h:

../include/xlocale.h:

../locale/xlocale.h:

../sysdeps/unix/sysv/linux/sys/param.h:

/opt/cross/arm-linux/include/linux/param.h:

/opt/cross/arm-linux/include/asm/param.h:

../include/atomic.h:

../include/stdlib.h:

../stdlib/stdlib.h:

../sysdeps/unix/sysv/linux/bits/waitflags.h:

../bits/waitstatus.h:

../include/alloca.h:

../stdlib/alloca.h:

../ports/sysdeps/arm/stackinfo.h:

../nptl/sysdeps/pthread/allocalim.h:

../ports/sysdeps/unix/sysv/linux/arm/nptl/bits/atomic.h:

../ports/sysdeps/unix/sysv/linux/arm/kernel-features.h:

../sysdeps/unix/sysv/linux/kernel-features.h:

../ports/sysdeps/arm/nptl/pthreaddef.h:

../nptl/../nptl_db/thread_db.h:

../include/pthread.h:

../nptl/sysdeps/pthread/pthread.h:

../include/signal.h:

../signal/signal.h:

../ports/sysdeps/unix/sysv/linux/arm/sys/procfs.h:

../include/sys/time.h:

../time/sys/time.h:

../ports/sysdeps/unix/sysv/linux/arm/sys/user.h:

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

../ports/sysdeps/unix/sysv/linux/arm/eabi/nptl/sysdep-cancel.h:

../nptl/pthreadP.h:

../nptl/descr.h:

../nptl/sysdeps/unix/sysv/linux/internaltypes.h:

../nptl/sysdeps/pthread/pthread-functions.h:

../include/sys/wait.h:

../posix/sys/wait.h:

../sysdeps/unix/sysv/linux/bits/signum.h:

../sysdeps/unix/sysv/linux/bits/siginfo.h:

../sysdeps/unix/sysv/linux/bits/sigaction.h:

../sysdeps/unix/sysv/linux/bits/sigcontext.h:

/opt/cross/arm-linux/include/asm/sigcontext.h:

../sysdeps/unix/sysv/linux/bits/sigstack.h:

../ports/sysdeps/unix/sysv/linux/arm/sys/ucontext.h:

../nptl/sysdeps/pthread/bits/sigthread.h:

../include/sys/resource.h:

../resource/sys/resource.h:

../sysdeps/unix/sysv/linux/bits/resource.h:
