#include <stdio.h>

void solve() {
  int a, b;
  int ca[100000] = {0};
  int cb[100000] = {0};

  scanf("%d%d", &a, &b);
  int v1[a], v2[b];

  int id = 0;
  for (int i = 0; i < a; i++) {
    int n; scanf("%d", &n);
    if (ca[n]) {
      i--;
      ca[n]++;
    }
    else {
      ca[n]++;
      v1[id] = n;
      id++;
    }
  }
  id = 0;
  for (int i = 0; i < b; i++) {
    int n; scanf("%d", &n);
    if (cb[n]) {
      i--;
      cb[n]++;
    }
    else {
      cb[n]++;
      v2[id] = n;
      id++;
    }
  }
  
  int count[10000] = {0};
  for (int i = 0; i < a; i++) {
    printf("%d, ", v1[i]);
    count[v1[i]]++;
  }
  for (int i = 0; i < b; i++) {
    if (!count[v2[i]]) {
      printf("%d, ", v2[i]);
    } else count[v2[i]]++;
  }
  printf("\n");
  for (int i = 0; i < b; i++) {
    if (ca[v2[i]] + cb[v2[i]] >= 2) printf("%d, ", v2[i]);
  }
}
 
int main() {
  solve();
  return 0;
}
