.section .rodata

.data

.globl a
.align 4
a: .int 30

.globl b
.align 4
b: .int 45

.globl c
.align 4
c: .int -60

.globl d
.align 4
d: .int 25

.text

.globl ex01

ex01:
    pushq %rbp
    movq  %rsp, %rbp

    # Seu código aqui...

    movl a, %eax
    movl b, %edx
    cmpl %edx, %eax
    jle endif01
        notl c
    endif01:

    cmpl %eax, %edx 
    jl endif02
        addl %edx, %eax 
        imull c, %eax 
        movl %eax, c
        movl $1024, d
    endif02:

    leave
    ret