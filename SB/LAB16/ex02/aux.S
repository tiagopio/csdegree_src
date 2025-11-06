.section .rodata

fmt: .string "Valor: x = %ld, i = %d\n"

.data

.globl x
.align 8
x: .quad 10

.text

.globl aux
aux:
    pushq %rbp
    movq %rsp, %rbp
    subq $16, %rsp

    # o i está em edi
    # *ptr está rsi

    movq $5, x
    movq %rdi, -8(%rbp)
    movq %rsi, -16(%rbp)

    movl %edi, %edx
    movq $fmt, %rdi
    movq x, %rsi

    movl $0, %eax
    call printf

    movq -8(%rbp), %rdi
    movq -16(%rbp), %rsi

    movslq %edi, %rax
    addq x, %rax
    addq (%rsi), %rax
    
    leave
    ret