#include <stdio.h>
 
int main()
{
  int number, reversed = 0, r, o;
  
  scanf("%d", &number);
  
  if (number > 99999)
  {
    printf("NUMERO INVALIDO\n");
    return 0;
  }
  
  o = number;
  
  while (number != 0)
  {
    r = number % 10;
    reversed = reversed * 10 + r;
    number /= 10;
  }
  
  if (o == reversed)
    printf("PALINDROMO\n");
  else
    printf("NAO PALINDROMO\n");
  
  return 0;
}