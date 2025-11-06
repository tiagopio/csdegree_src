.data

.globl c
.align 1
c: .byte 67

.globl s
.align 2
s: .short 23

.globl i
.align 4
i: .int 0

.globl j
.align 4
j: .int 0

.globl l
.align 8
l: .quad 1023

.globl ui
.align 4
ui: .int 2047

.globl ul
.align 8
ul: .long 4095

.text

#---------------------------------------------------------------------------------

.globl atribuicoes
atribuicoes:

	pushq %rbp
	movq  %rsp, %rbp

	# Se necessário, usar apenas os registradores (ou suas variações) abaixo:
	# %rax, %rcx, %rdx, %rdi, %rsi, %r8, %r9, %r10, %r11

	# Seu código aqui...
    # c = 23;
    movb $93, c
    
    # s = 75;
    movw $75, s

    # j = 52;
    movl $52, j

    # l = 7265;
    movq $7265, l

    # i = j, mov de memoria para memoria nao existe
    movl j, %eax # %eax = j
    movl %eax, i # i = %eax = j 

	leave
	ret

#---------------------------------------------------------------------------------

.globl cast
cast:

	pushq %rbp
	movq  %rsp, %rbp


	# Se necessário, usar apenas os registradores (ou suas variações) abaixo:
	# %rax, %rcx, %rdx, %rdi, %rsi, %r8, %r9, %r10, %r11

	# Seu código aqui...
    # ui = i; mesmo tipo, um signed o outro unsigned, nao existe mov de memoria para memoria
    movl i, %eax
    movl %eax, ui

    # j = s, um short indo pra um int, ambos signed, movswl
    movswl s, %eax
    movl %eax, j

    # ul = ui, um int indo pra um long, operacao sem sinal movzlq, essa operacao nao existe
    # use um pedaco de um registrador e pegue ele inteiro dps
    movl ui, %eax
    movq %rax, ul

    # s = c + j; vamos somar um char em um int, convertemos o char pra int primeiro, somamos
    # e depois vamos truncar essa soma em um short
    movsbl c, %eax # %eax = (int)c
    movl j, %edx # %edx = j
    addl %eax, %edx # %edx = %edx + %eax
    movw %dx, s

	leave
	ret

#---------------------------------------------------------------------------------

.globl expressoes
expressoes:

	pushq %rbp
	movq  %rsp, %rbp

	# Se necessário, usar apenas os registradores (ou suas variações) abaixo:
	# %rax, %rcx, %rdx, %rdi, %rsi, %r8, %r9, %r10, %r11

	# Seu código aqui...
    # lembre-se de olhar o tipo das coisas

    # i = j * s;
    movl j, %eax # %eax = j
    movswl s, %edx # %edx = (int)s
    imull %edx, %eax # %eax = %eax * %edx
    movl %eax, i

    # j = 1 + (s * 3);
    movswl s, %edx # %edx = (int)s
    imull $3, %edx # %edx = %edx * 3;
    movl $1, %eax # %eax = 1
    addl %edx, %eax # %eax = %eax + %edx = 1 + %edx
    movl %eax, j

    # ui = 2 * (i + s * 2); converter tudo pra int
    movswl s, %eax # %eax = (int)s
    imull $2, %eax # %eax = %eax * 2
    movl i, %edx # %edx = i
    addl %eax, %edx # %edx = %edx + %eax
    movl $2, %eax # %eax = 2
    imull %edx, %eax # %eax = %eax * %edx = 2 * %edx
    movl %eax, ui

    #         %rax         %rdx
    # ul = (l + j * 3) - (s + 1024); as coisas tem q ser long
    movslq j, %rax # %rax = j
    imulq $3, %rax # %rax = %rax * 3
    addq l, %rax # %rax = %rax + l
    movswq s, %rdx # %rdx = s
    addq $1024, %rdx # %rdx = %rdx + 1024
    subq %rdx, %rax # %rax = %rax - %rdx
    movq %rax, ul

	leave
	ret

#---------------------------------------------------------------------------------

.globl bitAbit
bitAbit:

	pushq %rbp
	movq  %rsp, %rbp

	# Se necessário, usar apenas os registradores (ou suas variações) abaixo:
	# %rax, %rcx, %rdx, %rdi, %rsi, %r8, %r9, %r10, %r11

	# Seu código aqui...
    
    # c = c & 0x0F;
    andb $0x0F, c
    
    # s = s | 0x80;
    orw $0x80, s
    # i = i ^ 0x55;
    xorl $0x55, i

    # j = (j | s) ^ c;
    movswl s, %eax # %eax = (int)s
    movl j, %edx # %edx = j
    orl %eax, %edx # %edx = %edx | %eax
    movsbl c, %eax
    xorl %eax, %edx # %edx = %edx ^ %eax
    movl %edx, j

    # l = l >> 2
    shrl $2, l
    
    # ui = ui << 1
    shll $1, ui

    # ul = ul >> 4
    shrl $4, ul

    leave
	ret

#---------------------------------------------------------------------------------

.globl ponteiros
ponteiros:

	pushq %rbp
	movq  %rsp, %rbp

	# Se necessário, usar apenas os registradores (ou suas variações) abaixo:
	# %rax, %rcx, %rdx, %rdi, %rsi, %r8, %r9, %r10, %r11

	# Seu código aqui...
    movq $s, %r10
    movw $128, (%r10)

	leave
	ret