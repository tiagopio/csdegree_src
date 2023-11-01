#include <stdio.h>
 
int invert_numbers(int number)
{
    int original, reversed = 0, rest;
 
    original = number;
 
    while (number != 0)
    {
        rest = number % 10;
        reversed = reversed * 10 + rest;
        number /= 10;
    }
 
    return reversed;
}
 
int max_number(int a, int b)
{
    return (a > b) ? a : b;
}
 
int main()
{
  int index;
 
  scanf("%d", &index);
  
  while (index--)
  {
    int a, b, new_a, new_b, max;
 
    scanf("%d %d", &a, &b);
 
    new_a = invert_numbers(a);
    new_b = invert_numbers(b);
 
    max = max_number(new_a, new_b);
 
    printf("%d\n", max);
  }
  
  return 0;
}