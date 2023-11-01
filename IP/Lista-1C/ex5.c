#include <stdio.h>
 
int main() {
  int a1, r, n;
  scanf("%d %d %d", &a1, &r, &n);
 
  int amount = 0, count = 0;
  while (count < n) 
  {
    amount += a1 + count * r;
    count++;
  }
 
  printf("%d\n", amount);
 
  return 0;
}