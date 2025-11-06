.section .rodata

.text

.globl fat
fat:
    pushq %rbp
    movq %rsp, %rbp 

    subq $16, %rsp
    
    cmpl $0, %edi
    jle endif
    movl %edi, -4(%rbp)
    decl %edi
    call fat
    movl -4(%rbp), %r8d
    imull %eax, %r8d
    movl %r8d, %eax
    
    leave
    ret

    endif:
    movl $1, %eax
    
    leave
    ret