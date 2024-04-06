#include <stdio.h>
 
int main() {
    double grade;
    char concept;
 
    scanf("%lf", &grade);
 
    if (grade >= 9.0) {
        concept = 'A';
    } else if (grade >= 7.5) {
        concept = 'B';
    } else if (grade >= 6.0) {
        concept = 'C';
    } else {
        concept = 'D';
    }
 
    printf("NOTA = %.1lf CONCEITO = %c\n", grade, concept);
 
    return 0;
}