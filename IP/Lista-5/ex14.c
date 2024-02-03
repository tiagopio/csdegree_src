#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
struct complex{
  double real, imaginary;
};
 
struct root {
  struct complex x_, x__;
};
 
struct root calc_root(double a, double b, double c) {
  struct root temp;
  
  double delta = b * b - 4 * a * c;
 
  if (delta > 0) {
    temp.x_.real = (-b + sqrt(delta)) / (2 * a);
    temp.x__.real = (-b - sqrt(delta)) / (2 * a);
    temp.x_.imaginary = temp.x__.imaginary = 0.0;
  } else if (delta == 0) {
    temp.x_.real = temp.x__.real = -b / (2 * a);
    temp.x_.imaginary = temp.x__.imaginary = 0.0;
  } else {
    temp.x_.real = -b / (2 * a);
    temp.x_.imaginary = sqrt(fabs(delta)) / (2 * a);
    temp.x__.real = -b / (2 * a);
    temp.x__.imaginary = -sqrt(fabs(delta)) / (2 * a);
  }
 
  return temp;
}
 
 
void complex_print(struct complex c, char *name) {
  printf("%s = ", name);
 
    if(c.real != 0.0){
        printf("%.2lf", c.real);
        if (c.imaginary != 0.0) {
            if (c.imaginary == 1.0) {
                printf("+i");
            } else if (c.imaginary == -1.0) {
                printf("-i");
            } else {
                printf("%.2lfi", c.imaginary);
            }
        }
    } else {
        if (c.imaginary != 0.0) {
            if (c.imaginary == 1.0) {
                printf("i");
            } else if (c.imaginary == -1.0) {
                printf("-i");
            } else {
                printf("%.2lfi", c.imaginary);
            }
        }
 
        if(c.imaginary == 0.0){
            printf("0.00");
        }
    }
 
    printf("\n");
}
 
 
void solve() {
  double a, b, c;
  struct root result;
  scanf("%lf %lf %lf", &a, &b, &c);
  result = calc_root(a, b, c);
 
  complex_print(result.x_, "x1");
  complex_print(result.x__, "x2");
}
 
int main() {
  int t = 1;
  // scanf("%d", &t);
  while(t--) {
    solve();
  }
  return 0;
}