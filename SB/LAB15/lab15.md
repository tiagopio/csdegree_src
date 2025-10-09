Chamada de Função
Aula-09 - Chamada de função
1. Considere o programa a seguir, composto pelos arquivos “main.c” e “sum.c”. Traduza apenas o arquivo "main.c" para Assembly (arquivo “main.S”) o mais literal possível.

Se necessário, use estes registradores para valores temporários: %rax, %rcx, %rdx, %rdi, %rsi, %r8, %r9, %r10, %r11. Não utilize %rbx, %r12, %r13, %r14, %r15 ainda.

Utilize o modelo abaixo para construir o seu código. Comente o seu código e note que "return 0" não está traduzido.

Teste o seu programa, comparando a saída com a versão C.

main.c

#include <stdio.h>



int sum(const char *prefix, int v1, short v2, int *s);

void show(long err, int val, int r);



int val = 432;

short age = 4;

int r = 0;

long err = 2048;



int main()

{

   val = sum("Hello", val, age, &r);

   show(err, val, r);

   return 0;

}

sum.c

#include <stdio.h>



int sum(const char *prefix, int v1, short v2, int *s)

{

   *s = v1 + v2;

   printf("%s: %d\n", prefix, *s);

   return v1 * v2;

}



void show(long err, int val, int r)

{

   printf("err = %ld, val = %d, r = %d\n", err, val, r);

}

Modelo

.section .rodata



.data



.text



.globl main

main:

   pushq %rbp

   movq  %rsp, %rbp



   # Seu código aqui...



   # Faça o "return"



   leave

   ret

2. Considere o programa a seguir, composto pelos arquivos “main.c” e “filtro.c”. Traduza apenas o arquivo "main.c" para Assembly (arquivo “main.S”) o mais literal possível. 

Se necessário, use estes os registradores para valores temporários: %rax, %rcx, %rdx, %rdi, %rsi, %r8, %r9, %r10, %r11. Não utilize %rbx, %r12, %r13, %r14, %r15 ainda.

Utilize o modelo abaixo para construir o seu código. Comente o seu código e note que "return 0" não está traduzido.

Importante: a função printf() pode mudar os valores de alguns registradores, ou seja, não confie que depois do printf() os registradores manterão os valores que você colocou antes de chamar a função (veremos isso nas próximas aulas).

main.c

#define LEN 4

#define LIM 10



long filtro(unsigned char x, short lim, long b);



int i = 0;

long bias = 256;

unsigned char vet[LEN] = {12,3,20,8};



int main()

{

  for (i = 0; i < LEN; i++) {

    bias = filtro(vet[i], LIM, bias);

  }

  return 0;

}

filtro.c

#include <stdio.h>



long filtro(unsigned char v, short l, long b) 

{

  long r;

  unsigned short x = (unsigned short)v;

  unsigned short y = (unsigned short)l;



  if (x < y)

    r = 0;

  else

    r = (long)l;



  printf("v = %u, l = %d, b = %ld, r = %ld\n", (unsigned int)v, (int)l, b, r);



  return r;

}

RECONHECIMENTO

Este material foi produzido por Noemi Rodriguez (PUC-Rio), Ana Lúcia de Moura (PUC-Rio) e Raúl Renteria (PUC-Rio), e adaptado por Bruno Silvestre (UFG).