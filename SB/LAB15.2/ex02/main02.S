.section .rodata

str: .string "Iteração %d, v = %d\n"

.data

.globl i
.align 4
i: .long 0

.globl v
.align 2
v: .word 0

.globl vetA
.align 2
vetA: .word 28, 42, 16, 23, 47

.globl vetB
.align 4
vetB: .long 0, 0, 0, 0, 0

.text

.globl main

main:
    pushq %rbp
    movq  %rsp, %rbp

    # Seu código aqui...
    # di, si, dx, cx, r8, r9
    
    while:
    # test
    cmpl $5, i
    jge endwhile
    
        # bloco
        movq $vetA, %r10
        movslq i, %r11
        imulq $2, %r11
        addq %r11, %r10
        movw (%r10), %r8w
        shlw $2, %r8w
        movw %r8w, v

        movq $str, %rdi
        movl i, %esi
        movswl v, %edx
        movl $0, %eax
        call printf

        movl i, %edi
        movw v, %si
        movq $vetB, %r10
        movslq i, %r11
        imulq $4, %r11
        addq %r11, %r10
        movq %r10, %rdx
        call process
    # inc
    incl i

    # jump
    jmp while
    
    endwhile:

    movq $vetB, %rdi
    movq $5, %rsi
    call show

    movl $0, %eax   # return 0

    leave
    ret