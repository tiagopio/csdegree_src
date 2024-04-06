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
  double x, y;
  double value;
} frac;
 
void solve() {
  int n, i, j, f = 0, s = 0;
  double a, b;
  char ch;
  frac *vec = NULL;
  
  while(scanf("%lf %c %lf", &a, &ch, &b) == 3) {
      s++;
      vec = realloc(vec, s * sizeof(frac));
      vec[s - 1].x = a;
      vec[s - 1].y = b;
      vec[s - 1].value = vec[s - 1].x / vec[s - 1].y;
      char tmp = getchar();
      if (tmp == '\n') break;
  }
 
  for (i = 0; i < s; i++) {
    frac tmp = vec[i];
    for (j = i; j < s; j++) {
      if (vec[i].value == vec[j].value && i != j) {
        printf("%.0lf/%.0lf equivalente a %.0lf/%.0lf\n", vec[i].x, vec[i].y, vec[j].x, vec[j].y);
        f = 1;
      }
    }
  }
  if (!f) printf("Nao ha fracoes equivalentes na sequencia\n");
  free(vec);
}
 
int main() {
  int t = 1, i = 1;
  scanf("%d%*c", &t);
  while(t--) {
    printf("Caso de teste %d\n", i);
    solve();
    i++;
  }
  return 0;
}