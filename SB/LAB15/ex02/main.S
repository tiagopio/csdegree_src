.section .rodata

.data

.globl i
.align 4
i: .int 0

.globl bias
.align 8
bias: .long 256

.globl vet
.align 1
vet: .byte 12, 3, 20, 8

.text

.globl main

main:
    pushq %rbp
    movq  %rsp, %rbp

    # Seu código aqui...
    for:
        cmp $4, i
        jle endfor

        # acessando o cara do vetor
        # &vet[i] + (i * sizeof(vet[i]))
        
    endfor:
    # Faça o "return"

    leave
    ret