#include <stdio.h>
 
int main() {
    int year;
 
 
    scanf("%d", &year);
 
    if (year >= 1582 && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))) {
        printf("ANO BISSEXTO\n");
    } else {
        printf("ANO NAO BISSEXTO\n");
    }
 
    return 0;
}