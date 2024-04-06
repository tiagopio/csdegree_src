#include <stdio.h>

int sum_div(int n)
{
  int sum = 0;
  
  int i = 1;
  for (i; i <= n / 2; i++)
  {
    if (n % i == 0)
      sum += i;
  }
  
  return sum;
}

int main()
{
  int n;
  
  scanf("%d", &n);
  
  int i = 0;
  int n1 = 1;
  
  while (i < n)
  {
    
    int sum = sum_div(n1);
    if (sum > n1 && sum_div(sum) == n1)
    {
      printf("(%d,%d)\n", n1, sum);
      i++;
    }
    n1++;
  }
  
  return 0;
}