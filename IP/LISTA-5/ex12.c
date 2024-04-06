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
 
typedef struct {
  int p, consume;
} im;
 
void solve() {
  int n, i, j, c = 1, pep = 0;
  double brute = 0;
  while (scanf("%d", &n) && n) {
    pep = 0;
    brute = 0;
    int _[1000000] = {0};
    if (c != 1) printf("\n");
    printf("Cidade# %d:\n", c);
    im *vec = (im*)malloc(n * sizeof(im));
    for (i = 0; i < n; i++) {
      scanf("%d%d", &vec[i].p, &vec[i].consume);
      int total = vec[i].consume / vec[i].p;
      _[total] += vec[i].p;
      brute += vec[i].consume;
      pep += vec[i].p;
    }
    for (i = 0; i < 1000000; i++) {
      if (_[i]) {
        printf("%d-%d ", _[i], i);
      }
    }
    printf("\n");
    printf("Consumo medio: %.2lf m3.\n ", brute / pep);
    c++;
    
  }
}
 
int main() {
  int t = 1, i = 1;
  //scanf("%d%*c", &t);
  while(t--) {
    //printf("Caso de teste %d\n", i);
    solve();
    
    //i++;
  }
  return 0;
}