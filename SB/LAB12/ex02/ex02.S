.section .rodata



.data



.text

.globl ex02

ex02:

   pushq %rbp

   movq  %rsp, %rbp

   # Seu código aqui...

    cmpl $0, a
    je end_if1

    jmp end_if2
    
else_if2:

end_if2:

end_if1:

   leave

   ret