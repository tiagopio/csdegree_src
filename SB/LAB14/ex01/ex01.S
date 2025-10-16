.data

.globl vet
.align 2
vet: .short 50, 10, 67, 42

.globl max
.align 2
max: .short 0

.text

.globl ex01

ex01:
    pushq %rbp
    movq  %rsp, %rbp

    # Seu código aqui...
    # char i tem 1 byte vou usar al como i
    # init do for
    movb $0, %al
    for:
    cmpb $4, %al # %al - 4
    jge endfor

        # corpo

        movq $vet, %r10
        movsbq %al, %r9
        imulq $2, %r9
        addq %r9, %r10

        movw (%r10), %dx

        cmpw max, %dx
        jle endif
        movw %dx, max

        endif:
        
        # incrementos
        incb %al

        # jump
        jmp for

    endfor:

    leave
    ret