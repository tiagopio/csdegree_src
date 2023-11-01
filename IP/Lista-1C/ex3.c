#include <stdio.h>
 
int main()
{
  int number;
  
  scanf("%d", &number);
  
  int count = 1;
 
  while (count <= number)
  {
    if (count % 2 == 0)
      printf("%d^2 = %d\n", count, count * count);
    count++;
  }
  
  return 0;
}