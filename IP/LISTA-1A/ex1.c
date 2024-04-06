#include <stdio.h>

double spent(double salary, double kw)
{
  return (salary * 0.7) / 100;
}

void read_data(double* salary, double* kw)
{
  scanf("%lf %lf", salary, kw);
}

void print_data(double salary, double kw, double spent)
{
  printf("Custo por kW: R$ %.2lf\n", spent);
  printf("Custo do consumo: R$ %.2f\n", spent *kw);
  printf("Custo com desconto: R$ %.2f\n", spent * kw * 0.90);
}

int main()
{
  double salary, kw, total_spent;
  
  read_data(&salary, &kw);
  total_spent = spent(salary, kw);
  
  print_data(salary, kw, total_spent);
}
