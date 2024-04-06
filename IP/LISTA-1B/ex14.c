#include <stdio.h>
 
int main() {
    int worker_id, dependents;
    double min_salary, salary, taxes;
 
    scanf("%d %lf %d %lf %lf", &worker_id, &min_salary, &dependents, &salary, &taxes);
    
    double brute;
    if (salary > 12 * min_salary) {
        brute = 0.20 * salary;
    } else if (salary > 5 * min_salary) {
        brute = 0.08 * salary;
    } else {
        brute = 0.00;
    }
    
    double liquid = brute - (300.00 * dependents);
    double normal = (taxes / 100.0) * salary;
    double result= liquid - normal;
    
    printf("MATRICULA = %d\n", worker_id);
    printf("IMPOSTO BRUTO = %.2lf\n", brute);
    printf("IMPOSTO LIQUIDO = %.2lf\n", liquid);
    printf("RESULTADO = %.2lf\n", result);
 
    if (result< 0) {
        printf("IMPOSTO A RECEBER\n");
    } else if (result== 0) {
        printf("IMPOSTO QUITADO\n");
    } else {
        printf("IMPOSTO A PAGAR\n");
    }
    
    return 0;
}