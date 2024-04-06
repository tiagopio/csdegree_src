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
 
int fun(int c, int n) {
  if (c == n) {
    if (c % 2) return 2;
    return 3;
  }
  if (c % 2) return 2 + fun(c + 1, n);
  return 3 + fun(c + 1, n);
}
 
void solve() {
  int n;
  scanf("%d", &n);
  printf("%d\n", fun(1, n));
}
 
int main() {
  int t = 1;
  scanf("%d%*c", &t);
  while(t--) {
    solve();
  }
  return 0;
}