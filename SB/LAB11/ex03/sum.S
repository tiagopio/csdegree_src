.section .rodata

fmt: .string "Soma: %ld\n"

.data

# Definição das variáveis aqui...
.globl sum
.align 8
sum: .quad 0

.globl vet
.align 8
vet: .quad 10,20,30,40,50

.text

.globl main

main:
    pushq %rbp
    movq  %rsp, %rbp
    # Inicializações de 'i' e 'ptr' aqui
    # Obs: utilize %ecx para 'i' e %r8 para 'ptr'
    movl $0, %ecx
    movq $vet, %r8
beginwhile:
    cmpl $5, %ecx

    jge  endwhile      # while() {
        movq sum, %rax
        movq (%r8), %rdx
        addq %rdx, %rax
        movq %rax, sum
        addq $8, %r8
        incl %ecx
    # Bloco do while aqui...
    jmp beginwhile     # }

endwhile:
    movq $fmt, %rdi    # printf()
    movq sum, %rsi
    movl $0, %eax
    call printf

    movl $0, %eax      # return 0
    leave
    ret
