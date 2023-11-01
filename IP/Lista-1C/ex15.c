#include <stdio.h>
#include <math.h>
 
int main() {
  double n, e;
    
  scanf("%lf", &n);
  scanf("%lf", &e);
    
  double r = 1.0;
  double erro = fabs(n - r * r); 
 
  while (erro > e) {
    r = 0.5 * (r + n / r);
    erro = fabs(n - r * r);
    printf("r: %.9lf, erro: %.9lf\n", r, erro);
  }
    
  return 0;
}