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

    # vou usar %eax como i
    movl $0, %eax # int i = 0

    while01:
    cmpl $4, %eax
    jge endwhile01
    
        # addr(nums) + (i * sizeof(T))
        movq $nums, %r10
        movslq %eax, %r11
        imulq $4, %r11 
        addq %r11, %r10
        movl (%r10), %edx

        addl %edx, s
        incl %eax
        jmp while01
    endwhile01:

    leave
    ret