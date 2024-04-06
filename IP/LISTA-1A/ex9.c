#include <stdio.h>
#include <math.h>

typedef struct {
  double weigth, acc, time;
} TakeOff;

void read_data(TakeOff* take_off)
{
  scanf("%lf %lf %lf", &take_off->weigth, &take_off->acc, &take_off->time);
}

double calc_speed(TakeOff take_off)
{
  return take_off.acc * 3.6 * take_off.time;
}

double calc_space(TakeOff take_off)
{
  return 0.5 * take_off.acc * take_off.time * take_off.time;
}

double calc_work(TakeOff take_off, double speed)
{
  double weigth = take_off.weigth * 1000;
  return weigth * pow(speed / 3.6, 2) / 2;
}

void print_data(double speed, double space, double work)
{
  printf("VELOCIDADE = %.2lf\n", speed);
  printf("ESPACO PERCORRIDO = %.2lf\n", space);
  printf("TRABALHO REALIZADO = %.2lf\n", work);
}

int main()
{
  TakeOff take_off;
  double speed, space, work;

  read_data(&take_off);
  speed = calc_speed(take_off);
  space = calc_space(take_off);
  work = calc_work(take_off, speed);

  print_data(speed, space, work);

  return 0;
}
