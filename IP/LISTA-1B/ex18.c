#include <stdio.h>
#include <math.h>
 
int main()
{
  double a, b, c;
  
  scanf("%lf %lf %lf", &a, &b, &c);
 
  if (fabs(b - c) < a && a < b + c && fabs(a - c) < b && b < a + c && fabs(a - b) < c && c < a + b)
  {
    printf("Perimetro = %.1lf\n", a + b + c);
  } else {
    printf("Area = %.1lf\n", ((a + b) * c) / 2);
  }
 
  return 0;
}