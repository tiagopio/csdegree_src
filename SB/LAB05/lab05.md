# Inteiro com sinal

### 1. Analise o programa abaixo, sem executá-lo, ou seja, descreva o que será impresso na tela e explique por quê?

Obs: Assuma que o endereço da variável "s" é 0x100, da variável "i" é 0x200 e da variável "c" é 0x300.

Agora, execute o programa e compare a saída da execução do programa com a sua resposta. Caso o seu resultado seja diferente da execução do programa, tente identificar a razão da divergência de resultados.

Obs: O endereço das variáveis provavelmente serão diferentes de 0x100, 0x200 e 0x300. Isso já é esperado...

```c
#include <stdio.h>

void dump(void *p, int n) {
  unsigned char *p1 = p;
  while (n--) {
    printf("%p - 0x%02X\n", p1, *p1);
    p1++;
  }
}

int main(void) {
  short s = -3;
  int i = -151;
  char c = 150;

  printf("dump de s: %d\n", s);
  dump(&s, sizeof(s));

  printf("\ndump de i: %d\n", i);
  dump(&i, sizeof(i));

  printf("\ndump de c: %d\n", c);
  dump(&c, sizeof(c));

  return 0;
}
```

### 2. Analise o programa abaixo, sem executá-lo, ou seja, descreva o que será impresso na tela e explique por quê?

Agora, execute o programa e compare a saída da execução do programa com a sua resposta. Caso o seu resultado seja diferente da execução do programa, tente identificar a razão da divergência de resultados.

```c
#include <stdio.h>

void dump(void *p, int n) {
  unsigned char *p1 = p;
  while (n--) {
    printf("%p - 0x%02X\n", p1, *p1);
    p1++;
  }

}

int main() {
  short s;
  int i;
  long l;

  s = 108;
  i = (int)s;
  printf("--- s:\n");
  dump(&s, sizeof(s));
  printf("--- i:\n");
  dump(&i, sizeof(i));

  printf("-----------------------------------------------------------------");

  i = -10;
  l = (long)i;
  printf("--- i:\n");
  dump(&i, sizeof(i));
  printf("--- c:\n");
  dump(&l, sizeof(l));

  printf("-----------------------------------------------------------------");

  l = 83728472363;
  i = (int)l;
  s = (short)l;

  printf("--- c:\n");
  dump(&l, sizeof(l));
  printf("--- i:\n");
  dump(&i, sizeof(i));
  printf("--- s:\n");
  dump(&s, sizeof(s));

  return 0;
}
```

### 3.  Em C, o programador pode atribuir um signed char, que ocupa 8 bits, a um unsigned int, que ocupa 32 bits, como no trecho abaixo:

```c
#include <stdio.h>

int main() {
  signed char sc = -1;
  unsigned int ui = sc;
  printf("0x%08X\n", ui);

  return 0;
}
```

Um estudante argumentou que sem um regra rígida, alguém pode implementar um compilador C onde os dois valores para "ui" abaixo seriam válidos:

``0x000000FF``

``0xFFFFFFFF``

a) Explique por que seria possível interpretar os dois valores que o estudante citou para "ui" como sendo válidos.

b) Depois de responder a pergunta anterior "no papel", execute o programa C, veja o valor impresso de "ui" e  verifique qual regra é seguida em C.

### 4. Explique porque a operação de shift para esquerda ``n`` vezes tem o efeito de multiplicar o número por dois N vezes, por exemplo:

```c
#include <stdio.h>

int main() {
  int n = 64;
  printf("n = %d (0x%08X)\n", n, n);
  
  n = n << 1;
  printf("n = %d (0x%08X)\n", n, n);
  printf("---\n");
  
  n = 12;
  printf("n = %d (0x%08X)\n", n, n);
  
  n = n << 4;
  printf("n = %d (0x%08X)\n", n, n);
  
  return 0;
}
```

Explique também porque a operação de shift para direita de uma posição tem o efeito de dividir o número por dois.

Obs: Lembrando que no caso do shift aritmético para direita o bit do sinal é repetido.

```c
#include <stdio.h>

int main() {
  int n = 64;
  printf("n = %d (0x%08X)\n", n, n);
 
  n = n >> 1;
  printf("n = %d (0x%08X)\n", n, n);
  printf("---\n");
  
  n = -24;
  printf("n = %d (0x%08X)\n", n, n);
  
  n = n >> 2;
  printf("n = %d (0x%08X)\n", n, n);
  
  return 0;
}
```

### 5. Analise o programa abaixo, sem executá-lo, ou seja, descreva o que será impresso na tela e explique por quê?

Agora, execute os programas e compare a saída da execução do programa com a sua resposta. Caso o seu resultado seja diferente da execução do programa, tente identificar a razão da divergência de resultados.

##### prog-01.c
```c
#include <stdio.h>

int main (void) {
  unsigned int x = 0xffffffff;
  unsigned int y = 2;
  
  printf("x = %u, y = %u\n", x, y);
  printf("x é menor do que y? %s\n", (x < y) ? "sim" : "não");

  return 0;
}
```

##### prog-02.c
```c
#include <stdio.h>

int main (void) {
  int x = 0xffffffff;
  int y = 2;
  
  printf("x = %d, y = %d\n", x, y);
  printf("x é menor do que y? %s\n", (x < y) ? "sim" : "não");
  
  return 0;
}
```


##### prog-03.c
```c
#include <stdio.h>

int main (void) {
  int x = 0xffffffff;
  unsigned int y = 2;
  
  printf("x = %d, y = %u\n", x, y);
  printf("x é menor do que y? %s\n", (x < y) ? "sim" : "não");
  
  return 0;
}
```

#### RECONHECIMENTO

##### Este material foi produzido por Noemi Rodriguez (PUC-Rio), Ana Lúcia de Moura (PUC-Rio) e Raúl Renteria (PUC-Rio), e adaptado por Bruno Silvestre (UFG).