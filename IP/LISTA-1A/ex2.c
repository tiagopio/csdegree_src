#include <stdio.h>
 
void read_data(double* fahrenheit_temp, double* rain_inches)
{
  scanf("%lf %lf", fahrenheit_temp, rain_inches);
}
 
double fahrenheit_to_celsius(double temp)
{
  return (5.0 / 9.0) * (temp - 32);
}
 
double inches_to_mm(double rain_inches)
{
  return rain_inches * 25.4;
}
 
void print_data(double temp_celsius, double rain_mm)
{
  printf("O VALOR EM CELSIUS = %.2lf\n", temp_celsius);
  printf("A QUANTIDADE DE CHUVA E = %.2lf\n", rain_mm);
}
 
int main()
{
  double temp, rain_inches;
  
  read_data(&temp, &rain_inches);
  temp = fahrenheit_to_celsius(temp);
  rain_inches = inches_to_mm(rain_inches);
  
  print_data(temp, rain_inches);
  
  return 0;
}