#include <stdio.h>

int leading_zeros(unsigned short n) {
    int qtd = 0;
    for (int i = 15; i >= 0; i--) {
        if (!(n & (1 << i))) qtd++;
        else return qtd;
    }
    return qtd;
}

int main() {
    printf("%d zeros\n", leading_zeros(0));
    printf("%d zeros\n", leading_zeros(0x0083));
    printf("%d zeros\n", leading_zeros(0x0607));
    printf("%d zeros\n", leading_zeros(24432));
    printf("%d zeros\n", leading_zeros(0xC2A4));
}