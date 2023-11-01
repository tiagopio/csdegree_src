#include <stdio.h>

void calculate_notes_and_coins(int value)
{
    int notes_100, notes_50, notes_10, coins_1;

    notes_100 = value / 100;
    value %= 100;

    notes_50 = value / 50;
    value %= 50;

    notes_10 = value / 10;
    value %= 10;

    coins_1 = value;

    printf("NOTAS DE 100 = %d\n", notes_100);
    printf("NOTAS DE 50 = %d\n", notes_50);
    printf("NOTAS DE 10 = %d\n", notes_10);
    printf("MOEDAS DE 1 = %d\n", coins_1);
}


int main()
{
    int value;
    
    scanf("%d", &value);
    
    calculate_notes_and_coins(value);
    
    return 0;
}
