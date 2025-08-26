#include <stdio.h>

unsigned int convertB2L(unsigned int x) {
  // escreva seu código aqui
    return (x << 24) | (0xFF0000 & (x << 8)) | (0xFF00 & (x >> 8)) | (0xFF & (x >> 24));
}

int main() {
  unsigned int b = 0x12AB34AB;
  unsigned int l = convertB2L(b);
  printf("b = 0x%08X\n", b);
  printf("l = 0x%08X\n", l);

  return 0;
}
