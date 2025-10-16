.data

.globl size
.align 4
size: .int 5

.globl a
.align 2
a: .word 5, 1, 7, 2, 9

.globl b
.align 4
b: .int 6, 3, 8, 4, 2

.globl nums
.align 8
nums: .quad 0, 0, 0, 0, 0

.globl factor
.align 2
factor: .word 100

.text

.globl ex03

ex03:
    pushq %rbp
    movq  %rsp, %rbp

    # Seu código aqui...
    
    movl $0, %eax
    
    movq $a, %rdx

    while:
    cmpl size, %eax
    jge endwhile
        # acessar a[i] = addr(a) + (i * sizeof(T))
        movq $a, %r10
        movslq %eax, %r11
        imulq $2, %r11
        addq %r11, %r10

        movw (%r10), %cx
        cmpw $6, %cx
        jle else
            movq $b, %r8
            movabs $0, %r9
            imulq $4, %r9
            addq %r9, %r8
            # sei la vou guarda b0 em algum canto
            # ja convertido pra long
            movslq (%r8), %r9
            movslq factor, %rdi
            addq %r9, %rdi

            movq $nums, %r8
            movslq %eax, %r9
            imulq $8, %r9
            addq %r9, %r8
            
            movq %rdi, (%r8)
            jmp endif
        else:
            movq $b, %r8
            movslq %eax, %r9
            imulq $4, %r9
            addq %r9, %r8

            movswq (%rdx), %rdi
            movslq (%r8), %r11
            imulq %r11, %rdi

            movq $nums, %r8
            movslq %eax, %r9
            imulq $8, %r9
            addq %r9, %r8

            movq %rdi, (%r8)
        endif:
        incl %eax
        addq $2, %rdx
        jmp while
    endwhile:

    leave
    ret