.data

.globl last
.align 8
last: .long 0

.globl values
.align 8
values: .long 5, -10, 60, 20, 40

.text

.globl swap

swap:
    pushq %rbp
    movq  %rsp, %rbp

    # int i;
    # int j = 4, vou usar ecx
    movl $4, %ecx

    # i = 0, do for
    movl $0, %eax
    for:
        # comparacao
        cmpl %ecx, %eax
        jge endfor

        # bloco
        # preciso de values[i]
        movq $values, %r8
        movslq %eax, %r9
        imulq $8, %r9
        addq %r8, %r9
        movq (%r9), %rsi # esse é meu tmp

        # preciso de values[j]
        movq $values, %rdx
        movslq %ecx, %rdi
        imulq $8, %rdi
        addq %rdx, %rdi
        movq (%rdi), %r9

        movq %rsi, %rdi

        # incrementos
        incl %eax # i++
        decl %ecx # j--

        # jumpa pro for dnv
        jmp for
    endfor:

    # Seu código aqui...

    leave
    ret