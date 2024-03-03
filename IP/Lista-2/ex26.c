#include <stdio.h>

int v[9];

void bubble() {
  for (int i = 0; i < 9 - 1; i++) {
    for (int j = 0; j < 9 - i - 1; j++) {
      if (v[j] > v[j + 1]) {
        int tmp = v[j + 1];
        v[j + 1] = v[j];
        v[j] = tmp;
      }
    }
  }
}

void solve() {
  int sum = 0, v[9];
  
  for (int i = 0; i < 9; i++) {
    scanf("%d", &v[i]);
    sum += v[i];
  }
  int dif = sum - 100;
  printf("%d\n", dif);
  int ok = 0;
  for (int i = 0; i < 9; i++) {
    int x = v[i];
    for (int j = 0; j < 9; j++) {
      if (i != j && v[i] + v[j] == dif) {
        v[i] = -1;
        v[j] = -1;
        ok = 1;
        break;
      }
    }
    if (ok) break;
  }
  bubble();
  for (int i = 0; i < 9; i++) {
    printf("%d ", v[i]);
  }
  printf("\n");
}

int main() {
  int t = 1;
  scanf("%d%*c", &t);
  
  while(t--) {
    solve();
  }

  return 0; 
}
