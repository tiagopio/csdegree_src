.data

.globl max
.align 2
max: .short 0

.globl vet
.align 2
vet: .short 50, 10, 67, 42

.text

.globl ex01

ex01:
    pushq %rbp
    movq  %rsp, %rbp

    # i = 0, do for
    movb $0, %al
    for:
        # comparacao
        cmpb $4, %al
        jge endfor

        # bloco
        movq $vet, %rdx
        movsbq %al, %rcx
        imulq $2, %rcx
        addq %rdx, %rcx
        movw (%rcx), %r8w
        // aqui está o cara

        cmpw max, %r8w
        jle fim
        movw %r8w, max

        fim:
        incb %al
        # jumpa pro for dnv
        jmp for
    endfor:

    # Seu código aqui...

    leave
    ret