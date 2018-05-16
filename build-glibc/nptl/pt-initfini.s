	.cpu arm10tdmi
	.eabi_attribute 20, 1
	.eabi_attribute 21, 1
	.eabi_attribute 23, 3
	.eabi_attribute 24, 1
	.eabi_attribute 25, 1
	.eabi_attribute 26, 2
	.eabi_attribute 30, 2
	.eabi_attribute 34, 0
	.eabi_attribute 18, 4
	.file	"pt-initfini.c"
	.text
	.syntax divided
	
#include "defs.h"
	
/*@HEADER_ENDS*/
	
/*@TESTS_BEGIN*/
	.arm
	.syntax unified
	.align	2
	.global	dummy
	.arch armv5t
	.syntax unified
	.arm
	.fpu softvfp
	.type	dummy, %function
dummy:
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	cmp	r0, #0
	bxeq	lr
	bx	r0	@ indirect register sibling call
	.syntax divided
	
/*@TESTS_END*/
	
/*@_init_PROLOG_BEGINS*/
	.arm
	.syntax unified
	.align	2
	.syntax unified
	.arm
	.fpu softvfp
	.type	call_initialize_minimal, %function
call_initialize_minimal:
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	b	__pthread_initialize_minimal_internal(PLT)
	.syntax divided
	.section .init
	.arm
	.syntax unified
	.section	.init,"ax",%progbits
	.align	2
	.global	_init
	.syntax unified
	.arm
	.fpu softvfp
	.type	_init, %function
_init:
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, lr}
	bl	__pthread_initialize_minimal_internal(PLT)
	.syntax divided
@ 82 "../nptl/sysdeps/pthread/pt-initfini.c" 1
	ALIGN
@ 0 "" 2
@ 83 "../nptl/sysdeps/pthread/pt-initfini.c" 1
	END_INIT
@ 0 "" 2
@ 85 "../nptl/sysdeps/pthread/pt-initfini.c" 1
	
/*@_init_PROLOG_ENDS*/
@ 0 "" 2
@ 86 "../nptl/sysdeps/pthread/pt-initfini.c" 1
	
/*@_init_EPILOG_BEGINS*/
@ 0 "" 2
@ 87 "../nptl/sysdeps/pthread/pt-initfini.c" 1
	.section .init
@ 0 "" 2
	.arm
	.syntax unified
	pop	{r4, pc}
	.syntax divided
	END_INIT
	
/*@_init_EPILOG_ENDS*/
	
/*@_fini_PROLOG_BEGINS*/
	.section .fini
	.arm
	.syntax unified
	.section	.fini,"ax",%progbits
	.align	2
	.global	_fini
	.syntax unified
	.arm
	.fpu softvfp
	.type	_fini, %function
_fini:
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, lr}
	.syntax divided
@ 102 "../nptl/sysdeps/pthread/pt-initfini.c" 1
	ALIGN
@ 0 "" 2
@ 103 "../nptl/sysdeps/pthread/pt-initfini.c" 1
	END_FINI
@ 0 "" 2
@ 104 "../nptl/sysdeps/pthread/pt-initfini.c" 1
	
/*@_fini_PROLOG_ENDS*/
@ 0 "" 2
	.arm
	.syntax unified
	bl	i_am_not_a_leaf(PLT)
	.syntax divided
@ 115 "../nptl/sysdeps/pthread/pt-initfini.c" 1
	
/*@_fini_EPILOG_BEGINS*/
@ 0 "" 2
@ 116 "../nptl/sysdeps/pthread/pt-initfini.c" 1
	.section .fini
@ 0 "" 2
	.arm
	.syntax unified
	pop	{r4, pc}
	.syntax divided
	END_FINI
	
/*@_fini_EPILOG_ENDS*/
	
/*@TRAILER_BEGINS*/
	.hidden	__pthread_initialize_minimal_internal
	.ident	"GCC: (GCC for c4ev3 2018-05-15) 8.1.0"
	.section	.note.GNU-stack,"",%progbits
