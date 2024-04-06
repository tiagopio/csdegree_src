#include <stdio.h>
 
int main() {
    int acc;
    double consume, acc_value;
    char type;
 
    
    scanf("%d %lf %c", &acc, &consume, &type);
 
    switch (type) {
        case 'R':
            acc_value = 5.00 + 0.05 * consume;
            break;
        case 'C':
            if (consume <= 80.0) {
                acc_value = 500.00;
            } else {
                acc_value = 500.00 + 0.25 * (consume - 80.0);
            }
            break;
        case 'I':
            if (consume <= 100.0) {
                acc_value = 800.00;
            } else {
                acc_value = 800.00 + 0.04 * (consume - 100.0);
            }
            break;
        default:
            printf("Tipo de consumidor inválido.\n");
            return 1; 
    }
 
    printf("CONTA = %d\n", acc);
    printf("VALOR DA CONTA = %.2lf\n", acc_value);
 
    return 0;
}