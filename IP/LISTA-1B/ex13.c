#include <stdio.h>
 
int main() {
    int carbon_quant, rockwell_dr, resistance;
 
    scanf("%d", &carbon_quant);
    scanf("%d", &rockwell_dr);
    scanf("%d", &resistance);
 
    if (carbon_quant < 7 && rockwell_dr > 50 && resistance > 80000) {
        printf("ACO DE GRAU = 10\n");
    } else if (carbon_quant < 7 && rockwell_dr > 50) {
        printf("ACO DE GRAU = 9\n");
    } else if (carbon_quant < 7) {
        printf("ACO DE GRAU = 8\n");
    } else {
        printf("ACO DE GRAU = 7\n");
    }
 
    return 0;
}