#include <stdio.h>

/*
struct S {
  campo a;
  campo b;
  campo c;
  campo d;
};
*/


struct S {
  long a;
  char b;  
  int c;
  short d;
};


/*
struct S {
  char c[3];
  int a;
  union {
    char x[9];
    long y;
  } d;
  short b;
};
*/

void offsets(struct S *ptr) {
   // calcular e exibir os offsets
   printf("offset: %lu\n", (size_t)&ptr->a - (size_t)ptr);
   printf("offset: %lu\n", (size_t)&ptr->b - (size_t)ptr);
   printf("offset: %lu\n", (size_t)&ptr->c - (size_t)ptr);
   printf("offset: %lu\n", (size_t)&ptr->d - (size_t)ptr);
}

//----------------------------------------------

// Cria a variável varS

struct S varS;

int main() {
  offsets(&varS);
  return 0;
}