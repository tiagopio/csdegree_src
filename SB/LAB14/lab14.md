Assembly: Mecanismos de Controle
Aula-07 - Mecanismos de controle
Aula-08 - Assembly: Acessando array
1. Traduza apenas o arquivo ex01.c abaixo para Assembly o mais literal possível.

Se necessário, use estes os registradores para valores temporários: %rax, %rcx, %rdx, %rdi, %rsi, %r8, %r9, %r10, %r11.

Não utilizar %rbx, %r12 - %r15.

main01.c

#include <stdio.h>



extern short vet[4];

extern short max;



void ex01();



int main()

{

  ex01();

  printf("max = %d\n", max);

  return 0;

}

ex01.c

short vet[4] = {50, 10, 67, 42};

short max = 0;



void ex01()

{

  char i;

  for (i = 0; i < 4; i++) {

     if (vet[i] > max)

        max = vet[i];

  }

}

2.  Traduza apenas o arquivo ex02.c abaixo para Assembly o mais literal possível.

Se necessário, use estes os registradores para valores temporários: %rax, %rcx, %rdx, %rdi, %rsi, %r8, %r9, %r10, %r11.

Não utilizar %rbx, %r12 - %r15.

main02.c

#include <stdio.h>



extern unsigned char letters[];

extern int even;

extern int odd;



void ex02();



int main()

{

  ex02();



  printf("even = %d\n", even);

  printf("odd  = %d\n", odd);



  return 0;

}

ex02.c

unsigned char letters[] = "abcdefghij";

int even = 0;

int odd = 0;



void ex02()

{

   unsigned int count = 0;



   while (letters[count]) {

      if (letters[count++] & 1)

        odd++;

      else

        even++;

   }

}

3.  Traduza apenas o arquivo ex03.c abaixo para Assembly o mais literal possível.

Se necessário, use estes os registradores para valores temporários: %rax, %rcx, %rdx, %rdi, %rsi, %r8, %r9, %r10, %r11.

Não utilizar %rbx, %r12 - %r15.

main03.c

#include <stdio.h>



extern long nums[];

extern int  size;



void ex03();



int main()

{

  int i;



  for (i = 0; i < size; i++)

    printf("nums[%d] = %ld\n", i, nums[i]);



  ex03();



  printf("---\n");

  for (i = 0; i < size; i++)

    printf("nums[%d] = %ld\n", i, nums[i]);



  return 0;

}

ex03.c

int size = 5;



short a[5] = {5,1,7,2,9};

int   b[5] = {6,3,8,4,2};

long nums[5] = {0};       // Zera todas as posições



short factor = 100;



void ex03()

{

  int i = 0;

  short *ptr = a;



  while (i < size) {

    if (a[i] > 6)

      nums[i] = b[0] + factor;

    else

      nums[i] = *ptr * b[i];

    i++;

    ptr++;

   }

}