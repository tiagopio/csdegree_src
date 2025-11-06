.section .rodata

.data

.globl v1
.align 2
v1: .word 32, 34, 27, 4

.globl v2
.align 4
v2: .long 12, 22, 31, 23, 6

.globl v3
.align 1
v3: .byte 0, 0, 0, 0

.globl v4
.align 8
v4: .quad 0, 0, 0, 0, 0, 0, 0, 0

.globl i
.align 4
i: .long 0

.globl j
.align 2
j: .word 0

.text

.globl aux

aux:
    pushq %rbp
    movq  %rsp, %rbp

    # Seu código aqui...

    # init for
    movl $0, i
    for:
    
    # check
    cmpl $4, i
    jge endfor
        
        # bloco
        movw $0, j

        while:
        # check
        cmpw $5, j
        jge endwhile

        # tenho que comparar i com j, j é short i é int
        movswl j, %eax
        cmpl i, %eax
        jne else
            # v3[i] = v1[i] + v2[j];
            # v2[j] = addr(j) + (j * sizeof(T))
            movq $v2, %r10
            movswq j, %r11
            imulq $4, %r11
            addq %r11, %r10
            # (%r10) é um int
            movl (%r10), %eax # v2[j] ta em %eax

            movq $v1, %r10
            movslq i, %r11
            imulq $2, %r11
            addq %r11, %r10
            movswl (%r10), %edx

            addl %eax, %edx # %edx = %edx + %eax
            
            movq $v3, %r10
            movslq i, %r11
            imulq $1, %r11
            addq %r11, %r10
            movb %dl, (%r10)

            jmp endif
        else:
            # v3[i] = v1[i] + v2[j];
            # v2[j] = addr(j) + (j * sizeof(T))
            movq $v2, %r10
            movswq j, %r11
            imulq $4, %r11
            addq %r11, %r10
            # (%r10) é um int
            movl (%r10), %eax # v2[j] ta em %eax

            movq $v1, %r10
            movslq i, %r11
            imulq $2, %r11
            addq %r11, %r10
            movswl (%r10), %edx

            addl %eax, %edx # %edx = %edx + %eax

            movl i, %ecx
            movswl j, %esi
            addl %esi, %ecx # %ecx = i + j
            
            # acessar v4[i + j]
            movq $v4, %r10
            movslq %ecx, %r11
            imulq $8, %r11
            addq %r11, %r10
            movslq %edx, %rsi
            addq %rsi, (%r10)

        endif:

        incw j

        jmp while
        endwhile:

    # atribuicao
    incl i

    # jump
    jmp for
    
    endfor:

    leave
    ret