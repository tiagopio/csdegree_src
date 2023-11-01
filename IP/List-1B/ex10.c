#include <stdio.h>
 
int main() {
    double num1, num2, num3;
 
    scanf("%lf %lf %lf", &num1, &num2, &num3);
 
    if (num1 > num2) {
        double temp = num1;
        num1 = num2;
        num2 = temp;
    }
    if (num1 > num3) {
        double temp = num1;
        num1 = num3;
        num3 = temp;
    }
    if (num2 > num3) {
        double temp = num2;
        num2 = num3;
        num3 = temp;
    }
 
    printf("%.2lf, %.2lf, %.2lf\n", num1, num2, num3);
 
    return 0;
}