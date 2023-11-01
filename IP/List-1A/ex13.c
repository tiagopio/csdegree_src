#include <stdio.h>

void read_data(double* a, double* b, double* c, double* d, double* e, double* f)
{
  scanf("%lf %lf %lf %lf %lf %lf", a, b, c, d, e, f);
}

void calc(double a, double b, double c, double d, double e, double f, double* x, double* y)
{
  double det = a * e - b * d;

  if (det == 0) {
    printf("no solution.\n");
    return;
  }

  *x = (c * e - b * f) / det;
  *y = (a * f - c * d) / det;
}

void print_data(double x, double y)
{
  printf("O VALOR DE X E = %.2lf\n", x);
  printf("O VALOR DE Y E = %.2lf\n", y);
}

int main()
{
  double a, b, c, d, e, f;
  double x, y;

  read_data(&a, &b, &c, &d, &e, &f);

  calc(a, b, c, d, e, f, &x, &y);

  print_data(x, y);

  return 0;
}
