#include <stdio.h>
#define PI 3.14159

void read_data(double* radius, double* height)
{
  scanf("%lf %lf", radius, height);
}

double calc_circle_area(double radius)
{
  return PI * radius * radius;
}

double calc_lateral_area(double radius, double height)
{
  return 2 * PI * radius * height;
}

double calc_totalArea(double circle_area, double lateral_area)
{
  return 2 * circle_area + lateral_area;
}

double total_spent(double total_area)
{
  return total_area * 100;
}

void print_data(double total_spent)
{
  printf("O VALOR DO CUSTO E = %.2lf\n", total_spent);
}

int main()
{
  double radius, height, total_area, circle_area, lateral_area, spent;
  
  read_data(&radius, &height);
  circle_area = calc_circle_area(radius);
  lateral_area = calc_lateral_area(radius, height);
  total_area = calc_totalArea(circle_area, lateral_area);
  spent = total_spent(total_area);
  
  print_data(spent);
  
  return 0;
}
