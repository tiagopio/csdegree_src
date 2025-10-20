.section .rodata

str01: .string "'a' maior do que 'b'\n"

str02: .string "Valor de 'b': %d\n"

.data

.globl a
.align 1
a: .byte 97

.globl b
.align 1
b: .byte 105

.text

.globl main

main:
    pushq %rbp
    movq  %rsp, %rbp

    # Seu código aqui...
    # di, si, dx, cx, r8, r9
    movb a, %dil
    movb b, %sil
    call maximo

    movsbl a, %edx
    cmpl %eax, %edx
    jne else
        movq $str01, %rdi
        movl $0, %eax
        call printf
        jmp endif
    else:
        movq $str02, %rdi
        movsbl b, %edx
        movl %edx, %esi
        movl $0, %eax
        call printf
    endif:

    movl $0, %eax   # return 0

    leave
    ret