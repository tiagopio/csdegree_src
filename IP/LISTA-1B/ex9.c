#include <stdio.h>
 
int main() {
    int numero, unidades, dezenas, centenas, milhares;
 
    // Read the integer
    scanf("%d", &numero);
 
    // Check if the number is within the specified range
    if (numero <= 0 || numero > 9999) {
        printf("Numero invalido!\n");
    } else {
        unidades = numero % 10;
        dezenas = (numero / 10) % 10;
        centenas = (numero / 100) % 10;
        milhares = (numero / 1000) % 10;
 
        printf("(%s ordem) %d =", (milhares > 0) ? "quarta" : (centenas > 0) ? "terceira" : (dezenas > 0) ? "segunda" : "primeira", numero);
 
        if (milhares > 0) {
            printf(" %d unidade%s de milhar + ", milhares, (milhares > 1) ? "s" : "");
        }
        if (centenas > 0) {
            printf(" %d centena%s + ", centenas, (centenas > 1) ? "s" : "");
        }
        if (dezenas > 0) {
            printf(" %d dezena%s + ", dezenas, (dezenas > 1) ? "s" : "");
        }
        if (unidades > 0) {
            printf(" %d unidade%s", unidades, (unidades > 1) ? "s" : "");
        }
 
        printf(" = ");
 
        if (milhares > 0) {
            printf("%d", milhares * 1000);
            if (centenas > 0 || dezenas > 0 || unidades > 0) {
                printf(" + ");
            }
        }
        if (centenas > 0) {
            printf("%d", centenas * 100);
            if (dezenas > 0 || unidades > 0) {
                printf(" + ");
            }
        }
        if (dezenas > 0) {
            printf("%d", dezenas * 10);
            if (unidades > 0) {
                printf(" + ");
            }
        }
        if (unidades > 0) {
            printf("%d", unidades);
        }
 
        printf("\n");
    }
 
    return 0;
}