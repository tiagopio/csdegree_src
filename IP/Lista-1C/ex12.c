#include <stdio.h>
 
int main()
{
  int games_number;;
  
  scanf("%d", &games_number);
  
  if (games_number < 2)
  {
    printf("Campeonato invalido!\n");
    
  } else {
    int final = 1, i = 1;
    
    while (i <= games_number)
    {
      int j = i + 1;
      
      while (j <= games_number)
      {
        printf("Final %d: Time%d X Time%d\n", final, i, j);
        final++;
        j++;
      }
      i++;
    }
  }
  
  return 0;
}