#include <stdio.h>
 
int main() {
    double salary, new_salary;
 
    scanf("%lf", &salary);
 
    if (salary <= 300.00) {
        new_salary = salary * 1.50;
    } else {
        new_salary = salary* 1.30;
    }
 
    printf("SALARIO COM REAJUSTE = %.2lf\n", new_salary);
 
    return 0;
}