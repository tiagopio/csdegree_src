#include <stdio.h>
#include <math.h>

typedef struct {
  double a, b, c;
} QuadEquation;

void read_data(QuadEquation* equation)
{
  scanf("%lf %lf %lf", &equation->a, &equation->b, &equation->c);
}

double calc_delta(QuadEquation equation)
{
  return equation.b * equation.b - 4 * equation.a * equation.c;
}

void print_data(double delta)
{
  printf("O VALOR DE DELTA E = %.2lf\n", delta);
}

int main()
{
  QuadEquation equation;
  double delta;

  read_data(&equation);
  delta = calc_delta(equation);
  print_data(delta);

  return 0;
} 
