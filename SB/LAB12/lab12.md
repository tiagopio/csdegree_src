Assembly: Mecanismos de Controle
Aula-07 - Mecanismos de controle
1. Traduza apenas o arquivo ex01.c abaixo para Assembly o mais literal possível.

Se necessário, use estes os registradores para valores temporários: %rax, %rcx, %rdx, %rdi, %rsi, %r8, %r9, %r10, %r11.

Altere os valores de 'a' e 'b' em ex01.c para testar a execução dos 'ifs' na função ex02().

*Utilize o template abaixo para construir o seu código de ex01.c.


main01.c

#include <stdio.h>



extern int a;

extern int b;

extern int c;

extern int d;



void ex01();



int main()

{

  ex01();

  printf("a = %d\n", a);

  printf("b = %d\n", b);

  printf("c = %d\n", c);

  printf("d = %d\n", d);

  return 0;

}

ex01.c

int a = 30;

int b = 45;

int c = -60;

int d = 25;



void ex01()

{

  if (a > b) {

    c = -c;

    d = c / 3;

  }



  if (b >= a) {

    c = (a + b) * c;

    d = 1024;

  }

}

Template em Assembly

.section .rodata



.data



.text

.globl ex01

ex01:

   pushq %rbp

   movq  %rsp, %rbp



   # Seu código aqui...



   leave

   ret

Compile o seu código usando:

  gcc -no-pie -o ex01 main01.c ex01.S

 Traduza apenas o arquivo ex02.c abaixo para Assembly o mais literal possível.

Se necessário, use estes os registradores para valores temporários: %rax, %rcx, %rdx, %rdi, %rsi, %r8, %r9, %r10, %r11.

Altere os valores de 'a' e 'b' no arquivo ex02.c para testar os 'ifs'.

*Utilize o template do exercício 1. Lembre-se de modificar o nome da função de ex01 para ex02 ao copiar o template.

main02.c

#include <stdio.h>



extern int  a;

extern long b;



void ex02();



int main()

{

  ex02();



  printf("a = %d (0x%.8X)\n", a, a);

  printf("b = %ld (0x%.16lX)\n", b, b);



  return 0;

}

ex02.c

int  a = 0;

long b = 2;



void ex02()

{

  if (a) {

    if (b < 5) {

       b = (a << 1) + (a * b);

    }

    else {

       a = b ^ 0x1FL;

    }

  }

}

Compile o seu código usando:

  gcc -no-pie -o ex02 main02.c ex02.S