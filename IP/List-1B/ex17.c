#include <stdio.h>
 
int main() {
    double numbers[4];
 
    int i = 0;
    for (i; i < 4; i++) {
        scanf("%lf", &numbers[i]);
    }
 
    i = 0;
    for (i; i < 3; i++) {
        int j = 0;
        for (j; j < 3 - i; j++) {
            if (numbers[j] > numbers[j + 1]) {
                double temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }
 
    i = 0;
    for (i; i < 4; i++) {
        printf("%.2lf", numbers[i]);
        if (i < 3) {
            printf(", ");
        }
    }
    printf("\n");
 
    return 0;
}