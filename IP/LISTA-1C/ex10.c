#include <stdio.h>
 
int main() {
  double n, i, K, s;
 
  scanf("%lf %lf %lf %lf", &n, &i, &K, &s);
 
  printf("Tabuada de soma:\n");
  double B;
  int k = 0;
  while (k < K) {
    B = i + k * s;
    double resultado = n + B;
    printf("%.2lf + %.2lf = %.2lf\n", n, B, resultado);
    k++;
  }
 
  printf("Tabuada de subtracao:\n");
  k = 0;
  while (k < K) {
    B = i + k * s;
    double resultado = n - B;
    printf("%.2lf - %.2lf = %.2lf\n", n, B, resultado);
    k++;
  }
 
  printf("Tabuada de multiplicacao:\n");
  k = 0;
  while (k < K) {
    B = i + k * s;
    double resultado = n * B;
    printf("%.2lf x %.2lf = %.2lf\n", n, B, resultado);
    k++;
  }
 
  printf("Tabuada de divisao:\n");
  k = 0;
  while (k < K) {
    B = i + k * s;
    double resultado = n / B;
    printf("%.2lf / %.2lf = %.2lf\n", n, B, resultado);
    k++;
  }
 
  return 0;
}