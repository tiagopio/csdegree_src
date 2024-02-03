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
 
int fun(int n, int x) {
  if (x == 0) return 1;
  return n * fun(n, x - 1);
}
 
void solve() {
  int n, x;
  scanf("%d%d", &n, &x);
  printf("%d\n", fun(n, x));
}
 
int main() {
  int t = 1;
  scanf("%d%*c", &t);
  while(t--) {
    solve();
  }
  return 0;
}