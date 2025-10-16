.data

.globl last
.align 8
last: .quad 0

.globl values
.align 8
values: .quad 50, -10, 60, -20, 70

.text

.globl swap

swap:
    pushq %rbp
    movq  %rsp, %rbp

    # Seu código aqui...
    # int i
    # int j = 4
    # vou usar %edx como j
    movl $4, %edx

    # init
    movl $0, %eax

    # test
    for01:
    cmpl %edx, %eax
    jge endfor01
        
        # bloco
        movq $values, %r10
        movslq %eax, %r11
        imulq $8, %r11
        addq %r11, %r10
        movq (%r10), %rsi # %rsi = tmp = values[i]

        movq $values, %r8
        movslq %edx, %r9
        imulq $8, %r9
        addq %r9, %r8
        movq (%r8), %rcx
        movq %rcx, (%r10)

        movq %rsi, (%r8)

        # incrementos
        incl %eax
        decl %edx

        # jumpa pro for01 dnv
        jmp for01
        
    endfor01:

    movq $values, %r10
    movabs $4, %r11
    imulq $8, %r11
    addq %r11, %r10
    movq (%r10), %r9
    movq %r9, last

    leave
    ret