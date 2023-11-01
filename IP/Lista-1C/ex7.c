#include <stdio.h>
 
int main() {
    int matricula;
    double notas_prova[8], notas_lista[5], nota_trabalho, presenca;
    
    while (1) {
        scanf("%d", &matricula);
        if (matricula == -1) {
            break;
        }
        
        scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &notas_prova[0], &notas_prova[1], &notas_prova[2], &notas_prova[3], &notas_prova[4], &notas_prova[5], &notas_prova[6], &notas_prova[7]);
        
        scanf("%lf %lf %lf %lf %lf", &notas_lista[0], &notas_lista[1], &notas_lista[2], &notas_lista[3], &notas_lista[4]);
        
        scanf("%lf %lf", &nota_trabalho, &presenca);
        
        double media_prova = (notas_prova[0] + notas_prova[1] + notas_prova[2] + notas_prova[3] + notas_prova[4] + notas_prova[5] + notas_prova[6] + notas_prova[7]) / 8.0;
        
        double media_lista = (notas_lista[0] + notas_lista[1] + notas_lista[2] + notas_lista[3] + notas_lista[4]) / 5.0;
        
        double nota_final = 0.7 * media_prova + 0.15 * media_lista + 0.15 * nota_trabalho;
        
        if (nota_final >= 6.0 && presenca >= (0.75 * 128)) {
            printf("Matricula: %d, Nota Final: %.2lf, Situacao Final: APROVADO\n", matricula, nota_final);
        } else if (presenca < (0.75 * 128) && nota_final < 6.0) {
            printf("Matricula: %d, Nota Final: %.2lf, Situacao Final: REPROVADO POR NOTA E POR FREQUENCIA\n", matricula, nota_final);
        } else if (presenca < (0.75 * 128)) {
            printf("Matricula: %d, Nota Final: %.2lf, Situacao Final: REPROVADO POR FREQUENCIA\n", matricula, nota_final);
        } else {
            printf("Matricula: %d, Nota Final: %.2lf, Situacao Final: REPROVADO POR NOTA\n", matricula, nota_final);
        }
    }
    
    return 0;
}