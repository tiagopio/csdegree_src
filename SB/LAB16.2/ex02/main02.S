.section .rodata

.data

.globl v1 
.align 2 
v1: .word 1, 2

.globl v2
.align 8
v2: .quad 1, 2, 3

.text

.globl aux
aux:
    pushq %rbp
    movq %rsp, %rbp
    subq $16, %rsp

    movq %rdi, -8(%rbp)    
    movl %esi, -12(%rbp)
    movl %ebx, -16(%rbp)

    movl $2, %ebx
    for:
    # teste
    cmpl $0, %ebx
    jl endfor
        # bloco
        movq -8(%rbp), %rdi
        movl -12(%rbp), %esi
        movq $v2, %rdx
        movl %ebx, %ecx
        call sum
    # decremento
    decl %ebx
    # jump
    jmp for
    endfor:

    movl -16(%rbp), %ebx

    leave
    ret

.globl main
main:
    pushq %rbp
    movq %rsp, %rbp

    subq $16, %rsp

    movl $0, %r8d
    while:
    # teste
    cmpl $2, %r8d
    jge endwhile
        # bloco
        movl %r8d, -4(%rbp)
        movq $v1, %rdi
        movl %r8d, %esi
        call aux
        movl -4(%rbp), %r8d
        # incremento
        incl %r8d
        # jump
        jmp while
    endwhile:

    movl $0, %eax

    leave
    ret