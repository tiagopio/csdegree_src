.section .rodata

.align 1
fmt: .string "Hello"

.data

.globl val
.align 4
val: .int 432

.globl age
.align 2
age: .short 4

.globl r
.align 4
r: .int 0

.globl err
.align 8
err: .long 2048

.text

.globl main

main:
    pushq %rbp
    movq  %rsp, %rbp

    # Seu código aqui...
    # val = sum("Hello", val, age, &r);
    movq $fmt, %rdi # 1o. param
    movl val, %esi # 2o. param
    movw age, %dx # 3o. param
    movq $r, %rcx # 4o. param

    call sum
    movl %eax, val

    # show(err, val, r);
    movq err, %rdi
    movl val, %esi
    movl r, %edx
    
    call show
    
    # Faça o "return"
    movl $0, %eax

    leave
    ret