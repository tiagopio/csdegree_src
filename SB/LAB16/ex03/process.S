.section .rodata

.text

.globl process
process:
    push %rbp
    movq %rsp, %rbp

    /*
        verdes - chamada:
            %rbx
            %r12
            %r13
            %r14
            %r15
        amarelos - chamadora:
            resto
    */
    subq $32, %rsp
    # %di, si, dx, cx, r8, r9
    movl %edi, -4(%rbp) # a
    movl %esi, -8(%rbp) # b
    movl %edx, -12(%rbp) # c
    movl %ecx, -16(%rbp) # d
    movl %r8d, -20(%rbp) # e
    movl %r9d, -24(%rbp) # f

    movl -4(%rbp), %r9d 
    movl -8(%rbp), %r8d
    movl -12(%rbp), %ecx
    movl -16(%rbp), %edx
    movl -20(%rbp), %esi
    movl -24(%rbp), %edi
    call calc

    movl %eax, %edi
    addl -4(%rbp), %edi
    addl -8(%rbp), %edi
    addl -12(%rbp), %edi
    addl -16(%rbp), %edi
    addl -20(%rbp), %edi
    addl -24(%rbp), %edi

    movl %edi, %eax
    
    leave
    ret