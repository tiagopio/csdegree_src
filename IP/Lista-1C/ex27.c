#include <stdio.h>
#include <math.h>
 
int factorial(int n)
{
  int factorial = 1;
 
  while (n > 1)
  {
    factorial *= n;
    n--;
  }
  return factorial;
}
 
int main()
{
  double x, result = 0, rad = 0.0;
  int N;
    
    
  scanf("%lf %d", &x, &N);
 
  int i = 0;
  for (i; i <= N; i++)
  {
    result += pow(-1, i) * pow(x, 2 * i) / factorial(2 * i);
  }
 
  printf("cos(%.2lf) = %.6lf\n", x, result);
 
  return 0;
}