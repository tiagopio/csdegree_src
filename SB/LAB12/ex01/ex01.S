.section .rodata

.data

.text

.globl ex01

ex01:
    pushq %rbp
    movq  %rsp, %rbp

    # Seu código aqui...
    movl a, %eax
    cmpl b, %eax
    jle end_if01

    negl c
    movl c, %eax
    cltd
    idiv %eax

    movl %eax, d

end_if01:
    movl b, %edx
    cmpl a, %edx
    jl end_if2

    addl a, %edx
    imull c, %edx
    movl %edx, c
    
    movl $1024, d

    leave

    ret
