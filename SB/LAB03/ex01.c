// 1010010101
// pegar o menor cara é x & 1 -> 00000[bit]
// pegar o maior cara é x & (1 << 32) + ((1 << 32) - 1)-> [bit]11111

#include <stdio.h>

int main(void) {
  unsigned int x = 0x01020304;
  unsigned int a, b;

  // Manter o byte menos significativo de x e os outros bits em '0'
  a = x & 0xFF;
  // 00000000 00000000 00000000 11111111;
  // O byte mais significativo com todos os bits em '1'
  // e manter os outros bytes com o mesmo valor dos bytes de x
  b = (x | 0xFF000000); 
  // 11111111 00000000 00000000 000000000
  // 00000000 11111111 11111111 111111111
  printf("a = 0x%08X\n", a);
  printf("b = 0x%08X\n", b);

  return 0;
}