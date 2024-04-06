#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <limits.h>
#include <float.h>
#include <ctype.h>
#include <assert.h>
#include <time.h>
#include <complex.h>
#include <locale.h>
 
#define MAX(a,b) ((a) > (b) ? (a) : (b))
#define MIN(a,b) ((a) < (b) ? (a) : (b))
#define ABS(a) ((a) < 0 ? -(a) : (a))
#define SWAP(a,b) do { typeof(a) temp = (a); (a) = (b); (b) = temp; } while(0)
#define MOD 1000000007
#define INF INT_MAX
#define EPS DBL_EPSILON
const int N = 2e5+5;
 
int fun(int *vec, int n) {
  if (n <= 1) return 0;
  if (vec[0] * 10 == vec[1]) return 1;
  return fun(vec + 1, n - 1);
}
 
void solve() {
  int n, vec[30], i;
  scanf("%d", &n);
  for (i = 0; i < n; i++) scanf("%d", &vec[i]);
  printf("%s", fun(vec, n) ? "VERDADEIRO\n" : "FALSO\n");
}
 
int main() {
  int t = 1;
  scanf("%d%*c", &t);
  while(t--) {
    solve();
  }
  return 0;
}