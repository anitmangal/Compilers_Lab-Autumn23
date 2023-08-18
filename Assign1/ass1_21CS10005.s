	.file	"code.c"							# Source File is code.c

# ######## calculateFrequency ######## #
# #### CODE FOR calculateFrequency #### #
	.text
	.globl	calculateFrequency					# calculateFrequency is a global name
	.type	calculateFrequency, @function		# calculateFrequency is a function
calculateFrequency:								# Definition of calculateFrequency
	.LFB0:
		.cfi_startproc
		endbr64
		pushq	%rbp								# Save current state of base pointer
		.cfi_def_cfa_offset 16
		.cfi_offset 6, -16
		movq	%rsp, %rbp							# Set stack pointer as base pointer
		.cfi_def_cfa_register 6
		movq	%rdi, -24(%rbp)						# Set (rbp-24) as first argument, pointer to arr1[]
		movl	%esi, -28(%rbp)						# Set (rbp-28) as second argument, int n
		movq	%rdx, -40(%rbp)						# Set (rbp-40) as third argument, pointer to fr1[]
		movl	$0, -12(%rbp)						# Set i (rbp-12) = 0 as initial value of for loop
		jmp	.L2										# Unconditionally jump to label L2
	# For loop of i
	.L7:
		movl	$1, -4(%rbp)						# Set ctr (rbp-4) to 1
		movl	-12(%rbp), %eax						# Get value of i (rbp-12) into eax
		addl	$1, %eax							# Add 1 to value in eax. (eax now stores i+1)
		movl	%eax, -8(%rbp)						# Set j (rbp-8) as i+1 (eax)
		jmp	.L3										# Unconditionally jump to label L3
	# For loop of j
	.L5:
		movl	-12(%rbp), %eax						# Get value of  i (rbp-12) and store into eax
		cltq										# Covert value at eax to quadword
		leaq	0(,%rax,4), %rdx					# Load into rdx the effective address of rax (4 bytes)
		movq	-24(%rbp), %rax						# Get arr1[] and put into rax
		addq	%rdx, %rax							# Add address of arr1 and effective address of i to make arr1+i
		movl	(%rax), %edx						# Get address of arr1+i and store into edx
		movl	-8(%rbp), %eax						# Get value of j (rbp-8) and store into eax
		cltq
		leaq	0(,%rax,4), %rcx					# Get effective address og j at rax (4bytes) and set rcx with it
		movq	-24(%rbp), %rax						# Get address of arr1[] and store into rax
		addq	%rcx, %rax							# Add address of arr1[] and j to get arr1+j
		movl	(%rax), %eax						# Get value at arr1[j] and store into eax
		cmpl	%eax, %edx							# Compare arr1[j] and arr1[i]
		jne	.L4										# If unequal, increment j and skip
		addl	$1, -4(%rbp)						# Increment ctr (rbp-4) by 1
		movl	-8(%rbp), %eax						# Get value of j (rbp-8)
		cltq										# Convert value at eax to quadword
		leaq	0(,%rax,4), %rdx					# Load into rdx effective address ofj, taking 4 bytes
		movq	-40(%rbp), %rax						# Get address to fr1 and set rax
		addq	%rdx, %rax							# Add values of fr1 address and j
		movl	$0, (%rax)							# Set fr[j]  = 0
	.L4:
		addl	$1, -8(%rbp)						# Increment i in the for loop
	.L3:
		movl	-8(%rbp), %eax						# Set eax as value of j (rbp-8)
		cmpl	-28(%rbp), %eax						# Compare n (rbp-28) and j (eax)
		jl	.L5										# If j < n, jump to label L5
		movl	-12(%rbp), %eax						# Get value of i (rbp-12) and store in eax
		cltq										# Convert 32 bit value of eax to quadword (64 bit)
		leaq	0(,%rax,4), %rdx					# Load into rdx the effective address of i (rax - 4 bytes)
		movq	-40(%rbp), %rax						# Get address of fr1 (rbp-40) and store in rax
		addq	%rdx, %rax							# Add address of fr1 (rax) and the effective address of i (rdx)
		movl	(%rax), %eax						# Set eax as value stored in fr1+i (address stored in rax)
		testl	%eax, %eax							# Do bitwise& of fr1[i] (eax) with fr1[i] (eax) and set flags accordingly
		je	.L6										# If value at fr1[i] is 0, jump to label L6, skipping body of if statement
		movl	-12(%rbp), %eax						# Get value of i (rbp-12) and store in eax
		cltq										# Convert value of eax to quadword
		leaq	0(,%rax,4), %rdx					# Load into rdx the effective address of the value stored in rax (4 bytes)
		movq	-40(%rbp), %rax						# Get address of fr1[] (rbp - 40) and store into rax
		addq	%rax, %rdx							# Add address of fr1[] with i bytes to get fr1+i in rdx
		movl	-4(%rbp), %eax						# Get value of ctr (rbp-4) and set into eax
		movl	%eax, (%rdx)						# Get value of ctr (eax) and write into fr1[i] (rdx)
	.L6:
		addl	$1, -12(%rbp)						# Increment i (rbp-12) in for loop
	.L2:
		movl	-12(%rbp), %eax						# Get value of i (rbp-12) and store in eax
		cmpl	-28(%rbp), %eax						# Compare value of i (eax) and n (rbp-28)
		jl	.L7										# If the value is less, jump to label L7 (body of for loop)
	nop
	nop
	popq	%rbp								# Pop from stack into base pointer
	# Return procedure
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
	.LFE0:
		.size	calculateFrequency, .-calculateFrequency

# ######## printArrayWithFrequency ######## #
# #### DATA FOR printArrayWithFrequency #### #
	.section	.rodata
.LC0:
	.string	"Element\tFrequency"
.LC1:
	.string	"%d\t%d\n"
# #### CODE FOR printArrayWithFrequency #### #
	.text
	.globl	printArrayWithFrequency				# printArrayWithFrequency is a global name
	.type	printArrayWithFrequency, @function	# printArrayWithFrequency is a function
printArrayWithFrequency:
	.LFB1:
		.cfi_startproc
		endbr64
		pushq	%rbp								# Save current base pointer
		.cfi_def_cfa_offset 16
		.cfi_offset 6, -16
		movq	%rsp, %rbp							# Set base pointer as stack pointer
		.cfi_def_cfa_register 6
		subq	$48, %rsp							# Subtract 48 from stack pointer
		movq	%rdi, -24(%rbp)						# Get value of first argument, arr1 (rdi) and set at (rbp-24)
		movq	%rsi, -32(%rbp)						# Get value of second argument, fr1 (rsi) and set at (rbp-32)
		movl	%edx, -36(%rbp)						# Get value of third argument, n (edx) and set at (rbp-36)
		leaq	.LC0(%rip), %rdi					# Load into rdi "Element\tFrequency" as first argument
		call	puts@PLT							# Syscall to print
		movl	$0, -4(%rbp)						# Set i (rbp-4) as 0
		jmp	.L9										# Unconditionally jump to L9
	# Body of for loop
	.L11:
		movl	-4(%rbp), %eax						# Get value of i and store into eax
		cltq										# Convert to quadword
		leaq	0(,%rax,4), %rdx					# Set rdx as effective adress of i
		movq	-32(%rbp), %rax						# Get value of address of fr1(rbp-32) and set rax
		addq	%rdx, %rax							# Add effective address of i and fr1 to get fr1+i
		movl	(%rax), %eax						# Convert value at rax to eax
		testl	%eax, %eax							# Self bitwise& to update flags
		je	.L10									# If zero, skip body
		movl	-4(%rbp), %eax						# Get value of i (rbp-4) and store into eax
		cltq										# Convert to quadword
		leaq	0(,%rax,4), %rdx					# Get effective adress from i and store in rdx
		movq	-32(%rbp), %rax						# Set value of fr1 at rax
		addq	%rdx, %rax							# Add fr1 and i to make fr1+i
		movl	(%rax), %edx						# Get fr1[i] to edx
		movl	-4(%rbp), %eax						# Get value of i to eax
		cltq										# Convert to quadword
		leaq	0(,%rax,4), %rcx					# Get effective address from i and store in rcx
		movq	-24(%rbp), %rax						# Get address of arr1[] and store in rax
		addq	%rcx, %rax							# Add address of arr1[] and i
		movl	(%rax), %eax						# Get eax part from rax
		movl	%eax, %esi							# Set second argument to arr1[]+i
		leaq	.LC1(%rip), %rdi					# Load into rdi the first argument
		movl	$0, %eax							# Set eax part to 0
		call	printf@PLT							# syscall to print
	.L10:
		addl	$1, -4(%rbp)						# Increment i in for loop
	.L9:
		movl	-4(%rbp), %eax						# Get value of i into eax
		cmpl	-36(%rbp), %eax						# Compare value of n (rbp-36) and i (eax)
		jl	.L11									# If less, jump to L11
	nop
	nop
	leave
	# Return procedure
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	printArrayWithFrequency, .-printArrayWithFrequency

# ######## main ######## #
# #### DATA FOR main #### #
	.section	.rodata
	.align 8
.LC2:
	.string	"\n\nCount frequency of each integer element of an array:"
	.align 8
.LC3:
	.string	"------------------------------------------------"
	.align 8
.LC4:
	.string	"Input the number of elements to be stored in the array :"
.LC5:
	.string	"%d"
	.align 8
.LC6:
	.string	"Enter each elements separated by space: "
# #### CODE FOR main #### #
	.text
	.globl	main								# main is a global name
	.type	main, @function						# main is a function
main:
	.LFB2:
		.cfi_startproc
		endbr64
		pushq	%rbp								# Save current base pointer
		.cfi_def_cfa_offset 16
		.cfi_offset 6, -16
		movq	%rsp, %rbp							# Set current stack pointer as base pointer
		.cfi_def_cfa_register 6
		subq	$832, %rsp							# Subtract 832 from rsp to allocate space for arr, fr1, n and i
		movq	%fs:40, %rax						# Segment overwriting rax value
		movq	%rax, -8(%rbp)						# Set value at rax to (rbp-8)
		xorl	%eax, %eax							# Set eax as 0
		leaq	.LC2(%rip), %rdi					# Get print string 1 into rdi as first argument of printf
		call	puts@PLT							# syscall
		leaq	.LC3(%rip), %rdi					# Print string 2
		call	puts@PLT							# syscall
		leaq	.LC4(%rip), %rdi					# Print string 3
		movl	$0, %eax							# Set eax at 0
		call	printf@PLT							# Syscall
		leaq	-828(%rbp), %rax					# Get value of n (rbp-828) and set rax
		movq	%rax, %rsi							# Get value of rax and store as second argumet in rsi
		leaq	.LC5(%rip), %rdi					# Print string 4 as first argument in rdi
		movl	$0, %eax							# Set eax to 0
		call	__isoc99_scanf@PLT					# scanf
		leaq	.LC6(%rip), %rdi					# Get print string 5 as first argument in rdi
		movl	$0, %eax							# Put 0 at eax
		call	printf@PLT							# syscall
		movl	$0, -824(%rbp)						# Set i (rbp-828) = 0 in for loop
		jmp	.L13									# Jump to L13
	# For loop 1
	.L14:
		leaq	-816(%rbp), %rax					# Get effective adress of arr1(rbp-816)
		movl	-824(%rbp), %edx					# Get value of i (rbp-24) and set at edx
		movslq	%edx, %rdx							# Sign-extended move of i from edx to rdx
		salq	$2, %rdx							# Left shift i rdx by 2 bits (multiply by 4)
		addq	%rdx, %rax							# Add values of rdx and rax
		movq	%rax, %rsi							# Load value of rax as second argument
		leaq	.LC5(%rip), %rdi					# Load first argument of scanf
		movl	$0, %eax							# Set instruction selector for eax as 0
		call	__isoc99_scanf@PLT					# Scanf called
		addl	$1, -824(%rbp)						# Increment i (rbp-824)
	.L13:
		movl	-828(%rbp), %eax					# Get value of n (rbp-828) and set eax
		cmpl	%eax, -824(%rbp)					# Compare n(eax) and i(rbp-824)
		jl	.L14									# Jump if less to L14
		movl	$0, -820(%rbp)						# Set 0 at i (rbp-820) in for loop
		jmp	.L15									# Jump unconditionally to L15
	# For loop 2
	.L16:
		movl	-820(%rbp), %eax					# Get value of i and set at eax
		cltq										# Convert to quadword
		movl	$-1, -416(%rbp,%rax,4)				# Set -1 at (base, rax, 4)-416
		addl	$1, -820(%rbp)						# Increment i (rbp-820)
	.L15:
		movl	-828(%rbp), %eax					# Get value of n (rbp-828) and set at eax
		cmpl	%eax, -820(%rbp)					# Compare with value of i (rbp-820) 
		jl	.L16									# If i < n jump to L16
		movl	-828(%rbp), %ecx					# Get value of n (rbp-828) and set ecx
		leaq	-416(%rbp), %rdx					# Get effective address of fr1 at rdx, third arguemnt
		leaq	-816(%rbp), %rax					# Get effective address of arr1 at rax
		movl	%ecx, %esi							# Set second argument, esi, as n (ecx)
		movq	%rax, %rdi							# Set first argument, rdi, as arr1
		call	calculateFrequency					# Call calculateFrequency(arr1, n, fr1)
		movl	-828(%rbp), %edx					# Set third argument, edx, as n (rbp-828)
		leaq	-416(%rbp), %rcx					# Load effective address of fr1 (rbp-416) and set rcx 
		leaq	-816(%rbp), %rax					# Load effective address of arr1 (rbp-816) and set rax
		movq	%rcx, %rsi							# Set second argument, rsi, as fr1(rcx)
		movq	%rax, %rdi							# Set first argument, rdi, as arr1(rax)
		call	printArrayWithFrequency				# Call printArrayWithFrequency(arr1, fr1, n)
		movl	$0, %eax							# Set eax as 0
		movq	-8(%rbp), %rcx						# Set rbp-8 as rcx
		xorq	%fs:40, %rcx						# xor fs:40 and rcx
		je	.L18									# Jump if they are equal to L18
		call	__stack_chk_fail@PLT
	.L18:
		leave
	# Return procedure
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 9.4.0-1ubuntu1~20.04.1) 9.4.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	 1f - 0f
	.long	 4f - 1f
	.long	 5
0:
	.string	 "GNU"
1:
	.align 8
	.long	 0xc0000002
	.long	 3f - 2f
2:
	.long	 0x3
3:
	.align 8
4:
