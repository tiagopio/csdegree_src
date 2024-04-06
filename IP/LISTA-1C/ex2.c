#include <stdio.h>
 
void read_data(double* fahrenheit_temp)
{
  scanf("%lf", fahrenheit_temp);
}
 
double fahrenheit_to_celsius(double fahrenheit_temp)
{
  return 5 * (fahrenheit_temp - 32) / 9;
}
 
int main()
{
  int temp_number;
  
  scanf("%d", &temp_number);
  
  int count = 1;
 
  while (count <= temp_number)
  {
    double fahrenheit_temp;
    read_data(&fahrenheit_temp);
    printf("%.2lf FAHRENHEIT EQUIVALE A %.2lf CELSIUS\n", fahrenheit_temp, fahrenheit_to_celsius(fahrenheit_temp));
    count++;
  }
  
  return 0;
}