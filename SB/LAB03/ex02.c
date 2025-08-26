#include <stdio.h>

int odd_ones(unsigned int x) {
    // escreva seu código aqui
    int qtd = 0;  
    for (int pot = 0; pot < 32; pot++) {
        qtd += (x & (1 << pot) ? 0 : 1);
    }
    return qtd & 1;
}

int main() {
  unsigned int v;

  v = 0x01010101;
  printf("%X tem número %s de bits\n", v, odd_ones(v) ? "impar" : "par");
  v = 0x01030101;
  printf("%X tem número %s de bits\n", v, odd_ones(v) ? "impar" : "par");

  return 0;
}