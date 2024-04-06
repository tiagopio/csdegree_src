#include <stdio.h>
 
int main()
{
  int first_number, second_number;
  
  scanf("%d %d", &first_number, &second_number);
  
  if (first_number % 2 == 0)
  {
    int count = 1;
    while (count <= second_number)
    {
      if (first_number % 2 == 0)
        printf("%d ", first_number);
      count++;
      first_number += 2;
    }
    printf("\n");
  } else 
    printf("O PRIMEIRO NUMERO NAO E PAR\n");
  
  return 0;
}