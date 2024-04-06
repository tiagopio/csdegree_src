#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
typedef struct {
  double u, x, y, z;
} point;
 
double calc_dis(point a, point b) {
  return (sqrt( pow(a.u - b.u, 2) + pow(a.x - b.x, 2) + pow(a.y - b.y, 2) + pow(a.z - b.z, 2)));
}
 
void solve() {
  int n;
  point a, b;
  scanf("%d", &n);
  --n;
  scanf("%lf %lf %lf %lf", &a.u, &a.x, &a.y, &a.z);
  while (n--) {
    scanf("%lf %lf %lf %lf", &b.u, &b.x, &b.y, &b.z);
    printf("%.2lf\n", calc_dis(a, b));
    a.u = b.u;
    a.x = b.x;
    a.y = b.y;
    a.z = b.z;
  }
}
 
int main() {
  int t = 1;
  //scanf("%d", &t);
 
  while(t--) {
    solve();
  }
  return 0;
}