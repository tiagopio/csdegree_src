#include <stdio.h>
 
int main() {
    int n;
 
    scanf("%d", &n);
 
    int sum_div = 1;
    printf("%d = 1", n);
 
    int i = 2;
    for (i; i <= n / 2; i++) {
        if (n % i == 0) {
            sum_div += i;
            printf(" + %d", i);
        }
    }
 
    if (sum_div == n) {
        printf(" = %d (NUMERO PERFEITO)\n", n);
    } else {
        printf(" = %d (NUMERO NAO E PERFEITO)\n", sum_div);
    }
 
    return 0;
}