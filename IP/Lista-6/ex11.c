#include <stdio.h>
#include <stdlib.h>
 
long long int prod(int b, int x) {
  if (x <= 0) return 0;
  return b + prod(b, x - 1);
}
 
int main() {
  int n, m;
  int t = 1;
  scanf("%d", &t);
  while(t--) {
    scanf("%d%d", &n, &m);
    printf("%lld\n", prod(n, m));
  }
  return 0;
}