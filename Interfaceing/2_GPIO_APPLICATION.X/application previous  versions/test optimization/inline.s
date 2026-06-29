	.file	"inline.c"
	.text
	.p2align 4
	.globl	return_2
	.def	return_2;	.scl	2;	.type	32;	.endef
	.seh_proc	return_2
return_2:
	.seh_endprologue
	movl	$2, %eax
	ret
	.seh_endproc
	.p2align 4
	.globl	return_3
	.def	return_3;	.scl	2;	.type	32;	.endef
	.seh_proc	return_3
return_3:
	.seh_endprologue
	movl	$3, %eax
	ret
	.seh_endproc
	.section .rdata,"dr"
.LC0:
	.ascii "the value of sum is %d\12\0"
	.section	.text.startup,"x"
	.p2align 4
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
	subq	$40, %rsp
	.seh_stackalloc	40
	.seh_endprologue
	call	__main
	movl	$5, %edx
	leaq	.LC0(%rip), %rcx
	call	printf
	xorl	%eax, %eax
	addq	$40, %rsp
	ret
	.seh_endproc
	.def	__main;	.scl	2;	.type	32;	.endef
	.ident	"GCC: (MinGW-W64 x86_64-ucrt-posix-seh, built by Brecht Sanders, r3) 14.2.0"
	.def	printf;	.scl	2;	.type	32;	.endef
