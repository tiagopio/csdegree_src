.section .rodata

.data

.globl i
.align 4
i: .long 0

.globl bias
.align 8
bias: .quad 256

.globl vet
.align 1
vet: .byte 12, 3, 20, 8

.text

.globl main

main:
    pushq %rbp
    movq  %rsp, %rbp

    # Seu código aqui...
    # init
    movl $0, i
    for:

    # test
    cmpl $4, i
    jge endfor

        # bloco
        # pegando vet[i]
        movq $vet, %r10
        movslq i, %r11
        imulq $1, %r11
        addq %r11, %r10
        # (%r10) é vet[i]
        
        # di, si, dx, cx, 8, 9
        movb (%r10), %dil
        movw $10, %si
        movq bias, %rdx 
        call filtro

        movq %rax, bias
    # inc
    incl i

    # jump
    jmp for
    
    endfor:

    # Faça o "return"
    movl $0, %eax

    leave
    ret