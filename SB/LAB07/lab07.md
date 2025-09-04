# Array, Estrutura e União

## Introdução

O termo "offset" do campo é usado para dizer qual é o deslocamento em bytes do campo em relação ao início da estrutura. Por exemplo, na estrutura abaixo, o offset de “m” é 0 (zero), o offset de “n” é 4 e o offset “p”  é 8 bytes do início da estrutura:

```c
struct X {
  int m;      // +0 bytes do início
  int n;      // +4 bytes do início
  long p;      // +8 bytes do início
};
```

### 1. Calcule "na mão" os offsets dos campos, tamanho, alinhamento das estruturas e uniões abaixo (indicando os paddings):

```c
struct X {
  char a;
  long b;
  int c;
};

union Y {
  unsigned int a;
  char b[26];
  short c[4];
};

struct S {
  int a[4];
  union Y y;
  struct X x;
};

union R {
  short a;
  struct S b[2];
  char c;
  union Y d;
  int e[3];
  struct X *f[5];
};
```

### 2. No código C abaixo, assuma que a "struct S" sempre irá possuir quatro campos com os nomes "a", "b", "c" e "d". No entanto, ela poderá  ter mais campos.

Dessa forma,  implemente a função offsets(), que dado o ponteiro para o início de uma “struct S”, ela calcula e exibe os offsets dos campos "a'", "b", "c" e "d".

**Obs**: A função deve funcionar sem alteração para qualquer definição da "struct S", desde que a estrutura tenha os quatro campos citados, mesmo que os campos estejam em qualquer ordem.


```c
#include <stdio.h>

/*
struct S {
  campo a;
  campo b;
  campo c;
  campo d;
};
*/

void offsets(struct S *ptr) {
   // calcular e exibir os offsets
}

//----------------------------------------------

// Cria a variável varS

struct S varS;

int main() {
  offsets(&varS);
  return 0;
}
```

Para testar o seu código, use as duas definições da "struct S" abaixo. Faça as contas "na mão" para verificar que a função implementada está correta.

#### Exemplo A

```c
struct S {
  long a;
  char b;  
  int c;
  short d;
};
```

##### Exemplo B

```c
struct S {
  char c[3];
  int a;
  union {
    char x[9];
    long y;
  } d;
  short b;
};
```

### 3. Analise o programa abaixo, sem executá-lo, descreva o que será impresso na tela e explique por quê?

Depois, execute o programa e compare a saída da execução do programa com a sua resposta.

**Obs**: se necessário, use a função dump() para entender o que está acontecendo.

```c
#include <stdio.h>

struct X {
  int   a;
  short b;
  int   c;
};

struct Y {
   long  p;
   char  q;
   short r;
};

// Cria a variável x e inicializa os campos da estrutura

struct X x = {
   .a = 2048,
   .b = 17,
   .c = 0xBebaCafe
};

int main() {
  char  *pChar;
  short *pShort;
  struct Y *pY;

  printf("x.a = %d\n", x.a);
  printf("x.b = %d\n", x.b);
  printf("x.c = %x\n", x.c);

  printf("---\n");

  pChar  = (char*)&x;
  pChar  = pChar + 4;
  *pChar = *pChar | 0x20;

  printf("x.a = %d\n", x.a);
  printf("x.b = %d\n", x.b);
  printf("x.c = %x\n", x.c);
  printf("---\n");

  pShort = (short*)&x;
  pShort[3] = -1;

  printf("x.a = %d\n", x.a);
  printf("x.b = %d\n", x.b);
  printf("x.c = %x\n", x.c);
  printf("---\n");

  pY = (struct Y*)&x;
  pY->q = 'D';
  pY->r = -125;

  printf("x.a = %d\n", x.a);
  printf("x.b = %d\n", x.b);
  printf("x.c = %x\n", x.c);

  return 0;
}
```