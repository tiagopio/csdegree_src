#include <stdio.h>

typedef struct {
  double car_price, distributor_fees, taxes;
} Car;

void read_data(Car* car)
{
  scanf("%lf %lf %lf", &car->car_price, &car->distributor_fees, &car->taxes);
}

double calc_final_price(Car car)
{
  double price = car.car_price;
  return price + (price * (car.distributor_fees / 100)) + (price * (car.taxes / 100));
}

void print_data(double final_price)
{
  printf("O VALOR DO CARRO E = %.2lf\n", final_price);
}

int main()
{
  Car nissan_silvia_s14;
  double final_price;

  read_data(&nissan_silvia_s14);
  final_price = calc_final_price(nissan_silvia_s14);
  print_data(final_price);

  return 0;
}
