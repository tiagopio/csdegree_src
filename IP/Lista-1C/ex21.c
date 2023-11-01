#include <stdio.h>
 
int check_prime(int num)
{
    if(num < 2){
    return 0;
    }
    else{   
      int x = num / 2;
      int i = 2;
      for(i; i <=x; i++)
      {
          if(num % i == 0)
          {
            return 0;
          }
      }
  }
 
  return 1;
}
 
int main()
{
  int a = 1, b = 100;
 
  int A, B, C;
 
  scanf("%d%d%d", &A, &B, &C);
 
  int mmc = 1;
  int i;
 
  for(i = a; i <= b; i++){
    if(check_prime(i))
    {
      if (A % i != 0 && B % i != 0 && C % i != 0)
        continue;
      else printf("%d %d %d :%d\n", A, B, C, i);
 
      while (A % i == 0 || B % i == 0 || C % i == 0)
      {
        
        if (A % i == 0)
          A = A / i;
        if (B % i == 0)
          B = B / i;
        if (C % i == 0)
          C = C / i;
        
        mmc *= i;
        if (A == 1 && B == 1 && C == 1)
          break;
        if (A % i == 0 || B % i == 0 || C % i == 0)
          printf("%d %d %d :%d\n", A, B, C, i);
        else continue;
        
      }
    }
    
  }
 
  printf("MMC: %d\n", mmc);
 
  return 0;
}