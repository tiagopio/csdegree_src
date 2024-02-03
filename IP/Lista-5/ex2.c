#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
 
typedef struct {
  char name[50];
  double price;
} item;
 
void solve() {
  int m, p, i, j, qtd;
  double final = 0;
  char string[50];
  scanf("%d%*c", &m);
  item *list = (item*)malloc(m * sizeof(item));
  for (i = 0; i < m; i++) {
    scanf("%s", list[i].name);
    scanf("%lf%*c", &list[i].price);
  }
  scanf("%d%*c", &p);
 
  for (i = 0; i < p; i++) {
    scanf("%s %d%*c", string, &qtd);
    for (j = 0; j < m; j++) { 
      if (strcmp(list[j].name, string) == 0) {
        final += (qtd * list[j].price);
        break;
      }
    }
  } 
  printf("R$ %.2lf\n", final);
 
  free(list);
} 
 
int main() {
  int t = 1, c = 1;
  scanf("%d%*c", &t);
  while(t--) {
    //printf("Caso de teste %d\n", c);
    solve();
    //c++;
  }
  return 0;
}