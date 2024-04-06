#include <stdio.h>

void read_data(int* number)
{
    scanf("%d", number);
}

int proc(int number)
{
    int aux_value, a, b, c, d;
    c = number % 10;
    aux_value = number / 10;
    b = aux_value % 10;
    aux_value /= 10;
    a = aux_value % 10;
    aux_value = a + (b * 3) + (c * 5);
    d = aux_value % 7;
    return number * 10 + d;
}

void print_data(int new_number)
{
    printf("O NOVO NUMERO E = %d\n", new_number);
}

int main()
{
    int number, new_number;
    
    read_data(&number);
    
    new_number = proc(number);
    print_data(new_number);
    
    return 0;
}
