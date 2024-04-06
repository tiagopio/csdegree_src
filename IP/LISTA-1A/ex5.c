#include <stdio.h>
#include <math.h>

typedef struct {
  double height, side, volume, base_area;
} Pyramid;

void read_data(Pyramid* pyramid)
{
  scanf("%lf %lf", &pyramid->height, &pyramid->side);
}

double calc_base_area(Pyramid pyramid)
{
  return 3 * pyramid.side * pyramid.side * sqrt(3) / 2;
}

double calc_volume(Pyramid pyramid, double base_area)
{
  return (double)1/3 * base_area * pyramid.height;
}

void print_data(double volume)
{
  printf("O VOLUME DA PIRAMIDE E = %.2lf METROS CUBICOS\n", volume);
}

int main()
{
  Pyramid pyramid;
  double base_area, volume;

  read_data(&pyramid);
  base_area = calc_base_area(pyramid);
  volume = calc_volume(pyramid, base_area);

  print_data(volume);

  return 0;
}

