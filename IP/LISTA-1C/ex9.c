#include <stdio.h>
 
int main() {
  int n;
  long long int factorial = 1;
 
  scanf("%d", &n);
 
  if (n < 0) {
    printf("Fatorial não está definido para números negativos.\n");
  } else {
    int original_n = n;
 
    while (n > 1) {
      factorial *= n;
      n--;
    }
 
    printf("%d! = %lld\n", original_n, factorial);
  }
 
  return 0;
}