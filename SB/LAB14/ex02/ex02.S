.data

.globl letters
.align 1
letters: .string "abcdefghij"

.globl even
.align 4
even: .int 0

.globl odd
.align 4
odd: .int 0

.text

.globl ex02

ex02:
    pushq %rbp
    movq  %rsp, %rbp

    # Seu código aqui...
    # unsigned int count = 0
    # usar %eax
    movl $0, %eax

    while:
    movq $letters, %r10
    movslq %eax, %r9
    imulq $1, %r9
    addq %r9, %r10
    movb (%r10), %dl

    cmpb $0, %dl
    je endwhile

        # corpo
        movq $letters, %r10
        movl %eax, %ebx
        incl %eax
        movslq %ebx, %r9
        imulq $1, %r9
        addq %r9, %r10
        movb (%r10), %dl

        andb $1, %dl
        cmpb $1, %dl
        jne else
            incl odd
            jmp endif
        else:
            incl even
        endif:
        jmp while
    endwhile:

    leave
    ret