.data

.globl s
.align 4
s: .int 0

.globl nums
.align 4
nums: .int 65, -105, 111, 34

.text

.globl sum

sum:
    pushq %rbp
    movq  %rsp, %rbp

    # Seu código aqui...
    # int i = 0
    movl $0, %ecx
    
    while01:
        # fazendo a comparacao
        cmpl $4, %ecx
        jge endwhile01

        # gambiarra
        movq $nums, %r8 
        movslq %ecx, %r9
        imulq $4, %r9
        addq %r8, %r9
        movl (%r9), %edx
        
        addl %edx, s
        incl %ecx
        jmp while01
    endwhile01:

    leave
    ret