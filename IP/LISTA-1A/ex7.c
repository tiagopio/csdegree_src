#include <stdio.h>
#include <math.h>

typedef struct {
  double s1, s2, s3;
} Triangle;

void read_data(Triangle* triangle)
{
  scanf("%lf %lf %lf", &triangle->s1, &triangle->s2, &triangle->s3);  
}

double calc_t(Triangle triangle)
{
  return (triangle.s1 + triangle.s2 + triangle.s3) / 2;
}

double calc_area(Triangle triangle, double t)
{
  double area = sqrt(t * (t- triangle.s1) * (t - triangle.s2) * (t - triangle.s3));
  return area;
}

int main()
{
  Triangle triangle;
  double t, area;

  read_data(&triangle);
  t = calc_t(triangle);
  area = calc_area(triangle, t);

  printf("A AREA DO TRIANGULO E = %.2lf\n", area);

  return 0;
}
