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
 
char string[5000];
 
int fun(char *str, int len, int x) {
  if (x == len) return 0;
  else {
    if (str[x] == '5') return 1 + fun(str, len, x + 1);
    return fun(str, len, x + 1);
  }
}
 
void solve() {
  scanf("%4999[^\n]%*c", string);
  int len = strlen(string);
  printf("%d\n", fun(string, len, 0));
}
 
int main() {
  int t = 1;
  scanf("%d%*c", &t);
  while(t--) {
    solve();
  }
  return 0;
}