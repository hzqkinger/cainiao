	.file	"main.c"
.globl globa_var
	.data
	.align 4
	.type	globa_var, @object
	.size	globa_var, 4
globa_var:
	.long	84
	.comm	global_var2,4,4
	.section	.rodata
.LC0:
	.string	"%d\n"
	.text
.globl func1
	.type	func1, @function
func1:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	movl	-4(%rbp), %eax
	movl	%eax, %esi
	movl	$.LC0, %edi
	movl	$0, %eax
	call	printf
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	func1, .-func1
.globl main
	.type	main, @function
main:
.LFB1:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movl	$1, -32(%rbp)
	movl	$2, -28(%rbp)
	movl	$10, -12(%rbp)
	movl	-32(%rbp), %eax
	movl	%eax, -12(%rbp)
	movl	-28(%rbp), %eax
	movl	%eax, -32(%rbp)
	movl	-12(%rbp), %eax
	movl	%eax, -28(%rbp)
	movl	$1, -8(%rbp)
	movl	static_var.1603(%rip), %edx
	movl	static_var2.1604(%rip), %eax
	leal	(%rdx,%rax), %eax
	addl	-8(%rbp), %eax
	addl	-4(%rbp), %eax
	movl	%eax, %edi
	call	func1
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	main, .-main
	.data
	.align 4
	.type	static_var.1603, @object
	.size	static_var.1603, 4
static_var.1603:
	.long	85
	.local	static_var2.1604
	.comm	static_var2.1604,4,4
	.ident	"GCC: (GNU) 4.4.7 20120313 (Red Hat 4.4.7-18)"
	.section	.note.GNU-stack,"",@progbits
