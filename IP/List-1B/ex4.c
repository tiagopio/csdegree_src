#include <stdio.h>
 
int main() {
    int hours;
    double cost;
 
    scanf("%d", &hours);
 
    if (hours >= 3) {
        cost = 10.00 * (hours / 3) + 5.00 * (hours % 3);
    } else {
        cost = 5.00 * hours;
    }
 
    printf("O VALOR A PAGAR E = %.2lf\n", cost);
 
    return 0;
}