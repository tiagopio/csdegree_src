#include <stdio.h>
#define SIZE 3

void read_data(int* number)
{
    scanf("%d", number);
}

int invert_number(int number)
{
    int d1, d2, d3;
    d1 = number % 10;
    d2 = (number / 10) % 10;
    d3 = number / 100;

    return d1 * 100 + d2 * 10 + d3;
}

void print_data(int inverted_number)
{
    printf("%d\n", inverted_number);
}

int main()
{
    int number, new_number;
    
    read_data(&number);
    new_number = invert_number(number);
    
    print_data(new_number);
    
    return 0;
}