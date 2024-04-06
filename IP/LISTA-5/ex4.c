#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
 
typedef struct {
  double u, x, y, z, result;
} item;
 
double calc(double u, double x, double y, double z) {
  return sqrt(pow(u, 2) + pow(x, 2) + pow(y, 2) + pow(z, 2)); 
}
 
void bubble(item *list, int size) {
  int i, j;
  for (i = 0; i < size - 1; i++) {
    for (j = 0; j < size - i - 1; j++) {
      if (list[j].result > list[j + 1].result) {
        item tmp = list[j + 1];
        list[j + 1] = list[j];
        list[j] = tmp;
      }
    }
  }
}
 
void solve() {
  int n, i;
  scanf("%d", &n);
  item *list = (item*)malloc(n * sizeof(item));
  for (i = 0; i < n; i++) {
    scanf("%lf %lf %lf %lf", &list[i].u, &list[i].x, &list[i].y, &list[i].z);
    list[i].result = calc(list[i].u, list[i].x, list[i].y, list[i].z);
  }
  bubble(list, n);
  for (i = 0; i < n; i++) {
    printf("Vetor: (%.2lf, %.2lf, %.2lf, %.2lf) Norma: %.2lf\n", list[i].u, list[i].x, list[i].y, list[i].z, list[i].result);
  }
} 
 
int main() {
  int t = 1, c = 1;
  //scanf("%d%*c", &t);
  while(t--) {
    //printf("Caso de teste %d\n", c);
    solve();
    //c++;
  }
  return 0;
}