.data

# char c = -20;
.globl c
.align 1
c: .byte -20

# int i = -256;
.globl i
.align 4
i: .int -256 

# int j = 512;
.globl j
.align 4
j: .int 512

# long l = 128;
.globl l
.align 8
l: .quad 128

# unsigned short us = 111;
.globl us
.align 2
us: .short 1024

# unsigned int ui = 1024;
.globl ui
.align 4
ui: .int 1024

# unsinged long ul = 2048;
.globl ul
.align 4
ul: .quad 2048

.text

.globl aux

aux:
    pushq %rbp
    movq  %rsp, %rbp

    # Se necessário, usar apenas os registradores (ou suas variações) abaixo:
    # %rax, %rcx, %rdx, %rdi, %rsi, %r8, %r9, %r10, %r11

    # Seu código aqui...

    # Atribuições simples
    # j = 68000; mover uma constante para j, o tipo de j é int, usamos l
    movl $68000, j

    # l = 4096; mover uma constante para l, o tipo de l é long, usamos q
    movq $4096, l

    # i = j, pegamos o valor de j, colocamos em um reg, e movemos para i
    # lembre que nao existe mov com fonte = memoria e destino = memoria.
    # portanto devemos usar um registrador como auxiliar
    # o tipo de j é int, podemos usar eax
    movl j, %eax
    movl %eax, i

    # Expressões 
    # j = 10 + i - 5;
    movl $10, %eax # %eax = i
    addl i, %eax # %eax = %eax + i = 10 + i
    subl $5, %eax # %eax = %eax - 5
    movl %eax, j

    # i = (i * 2) - (j + 5);
    movl i, %eax # %eax = i
    imull $2, %eax # %eax = %eax * 2
    movl j, %edx # %edx = j
    addl $5, %edx
    subl %edx, %eax
    movl %eax, i

    # Casts, olhe bem os tipos, lembre que nao existe movzlq
    # ui = i, int com sinal pra int sem sinal
    movl i, %eax
    movl %eax, ui

    # j = c, um char ta indo pra um inteiro, extensao bl com sinal: s
    movsbl c, %eax
    movl %eax, j

    # ul = ui, um int ta indo pra um long, extensao lq sem sinal, movzlq
    # nao existe, usamos um pedaco do registrador para simular
    # movo pra um registrador de 8 bytes, os 4 bytes mais significativos
    # serao zerados, pegamos os 4 bytes menos significativos
    movl ui, %eax
    movq %rax, ul

    # us = ul, truncamento, um long esta indo para um short, basta usar os
    # pedacos do registrador
    movl ul, %eax
    movw %ax, us

    # c = i + j, truncamento, c recebe a soma de dois longs (int)
    movl i, %eax # %eax = i
    addl j, %eax # %eax = %eax + j
    movw %al, c
    
    # Ponteiros
    # long *ptr;
    # ptr = &l;
    movq $l, %eax
    # *ptr = 128;
    movq $128, (%eax)

    # int *iptr;
    # iptr = &i;
    movq $i, %edx
    addl (%edx), j

    leave
    ret