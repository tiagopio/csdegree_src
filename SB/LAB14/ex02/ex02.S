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

    // count = 0
    movl $0, %ecx

    while:
        movq $letters, %rax
        movl %ecx, %edx
        # é 1, nao precisa multiplicar
        addq %rax, %rdx
        movb (%rdx), %r8b
        incl %ecx
        
        cmpb $0, %r8b
        je endwhile

        andb $1, %r8b

        cmpb $0, %r8b
        jne else # if
            incl odd
            jmp while
        else: # else
            incl even
        # count++
        jmp while
    endwhile:

    leave
    ret