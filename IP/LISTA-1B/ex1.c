#include <stdio.h>
 
int main() {
    double nota1, nota2, nota3;
    double media;
 
    scanf("%lf %lf %lf", &nota1, &nota2, &nota3);
 
    media = (nota1 + nota2 + nota3) / 3.0;
 
    printf("MEDIA = %.2lf\n", media);
 
    if (media >= 6.0) {
        printf("APROVADO\n");
    } else {
        printf("REPROVADO\n");
    }
 
    return 0;
}