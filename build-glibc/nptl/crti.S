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
/*@TRAILER_BEGINS*/
	.hidden	__pthread_initialize_minimal_internal
	.ident	"GCC: (GCC for c4ev3 2018-05-15) 8.1.0"
	.section	.note.GNU-stack,"",%progbits
