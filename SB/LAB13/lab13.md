Assembly: Acessando Array
Aula-07 - Mecanismos de controle
Aula-08 - Assembly: Acessando array
1. Traduza o arquivo sum.c abaixo para Assembly o mais literal possível.

Obs: Comente o seu código!

Se necessário, use estes os registradores para valores temporários: %rax, %rcx, %rdx, %rdi, %rsi, %r8, %r9, %r10, %r11. Não utilizar %rbx, %r12-%r15.

sum.c

int s = 0;

int nums[4] = {65, -105, 111, 34};



void sum()

{

  int i = 0;

  while (i < 4) {

    s = s + nums[i];

    i++;

  }

}

main01.c

#include <stdio.h>



extern int s;

void sum();



int main()

{

  sum();

  printf ("soma = %d\n", s);

  return 0;

}

Utilize o template abaixo:

.data



.text



.globl sum

sum:

    pushq %rbp

    movq  %rsp, %rbp



    # Seu código aqui...



    leave

    ret

Compile o programa:

gcc -no-pie -o sum main01.c sum.S

2. Traduza o arquivo swap.c abaixo para Assembly o mais literal possível.

Obs: Comente o seu código!

Se necessário, use estes os registradores para valores temporários: %rax, %rcx, %rdx, %rdi, %rsi, %r8, %r9, %r10, %r11. Não utilizar %rbx, %r12-%r15.

swap.c

long last = 0;

long values[5] = {50,-10,60,-20,70};



void swap()

{

  int i;

  int j = 4;



  for (i = 0; i < j; i++, j--)

  {

     long tmp = values[i];

     values[i] = values[j];

     values[j] = tmp;

  }



  last = values[4];

}

main02.c

#include <stdio.h>



extern long last;

extern long values[5];



void swap();



int main()

{

  swap();



  for (int i = 0; i < 5; i ++) 

     printf("values[%d] = %ld\n", i, values[i]);



  printf("last = %ld\n", last);



  return 0;

}

RECONHECIMENTO

Este material foi produzido por Noemi Rodriguez (PUC-Rio), Ana Lúcia de Moura (PUC-Rio) e Raúl Renteria (PUC-Rio), e adaptado por Bruno Silvestre (UFG).