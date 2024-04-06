#include <stdio.h>
 
int main() {
    int a, b, c;
    char order[4];
 
    scanf("%d %d %d", &a, &b, &c);
    getchar();
    scanf("%s", order);
 
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    if (b > c) {
        int temp = b;
        b = c;
        c = temp;
    }
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
 
    int i = 0;
    for (i; i < 3; i++) {
        if (order[i] == 'A') {
            printf("%d ", a);
        } else if (order[i] == 'B') {
            printf("%d ", b);
        } else if (order[i] == 'C') {
            printf("%d ", c);
        }
    }
    printf("\n");
 
    return 0;
}