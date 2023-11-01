#include <stdio.h>
#include <stdbool.h>
 
bool data_valida(int dia, int mes, int ano) {
    if (ano < 1000 || ano > 9999 || mes < 1 || mes > 12 || dia < 1 || dia > 31) {
        return false;
    }
 
    int dia_no_mes[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
 
    if (ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0)) {
        dia_no_mes[2] = 29;
    }
 
    return dia <= dia_no_mes[mes];
}
 
int main() {
    int data, dia, mes, ano;
 
    scanf("%d", &data);
 
    dia = data / 1000000;
    mes = (data / 10000) % 100;
    ano = data % 10000;
 
    if (data_valida(dia, mes, ano)) {
 
        char meses[12][15] = {
            "janeiro", "fevereiro", "marco", "abril", "maio", "junho",
            "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"
        };
 
        printf("%02d de %s de %02d\n", dia, meses[mes - 1], ano);
    } else {
        printf("Data invalida!\n");
    }
 
    return 0;
}