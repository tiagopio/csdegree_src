.section .rodata

.data

.globl a
.align 4
a: .int 0

.globl b
.align 8
b: .int 2

.text

.globl ex02

ex02:
    pushq %rbp
    movq  %rsp, %rbp

    # Seu código aqui...
    
    cmpl $0, a
    je finalzao
        cmpq $5, b
        jge else
            movslq a, %rax
            imulq b, %rax
            movslq a, %rdx
            shlq $1, %rdx
            addq %rax, %rdx 
            movq %rdx, b
            jmp endif01
        else:
            movq b, %rax
            xorq $0x1FL, %rax
            movl %eax, a
        endif01:
    finalzao:

    leave
    ret