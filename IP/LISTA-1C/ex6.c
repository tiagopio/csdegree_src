#include <stdio.h>
 
int main() {
  int n;
  if (scanf("%d", &n) != 1 || n <= 1) {
    printf("Numero invalido!\n");
    return 1; // Saída de erro
  }
 
  double amount = 0.0;
  int k = 1;
  while (k <= n) {
    amount += 1.0 / k;
    k++;
  }
 
  printf("%.6lf\n", amount);
 
  return 0;
}