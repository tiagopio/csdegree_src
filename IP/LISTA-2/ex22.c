#include <stdio.h>
#include <math.h>

void solve() {
  int n, d;
  
  while(scanf("%d%d", &n, &d) && n + d) {
    int v[n];
    for (int i = 0;  i < n; i++) {
      v[i] = -1;
    }
    int tmp = d;
    int top = -1;
    for (int i = 0; i < n; i++) {
      int x; scanf("%1d", &x);
      while(top > -1 && d && x > v[top]) {
        top--;
        d--;
      }
      if (top + 1 < n - tmp) v[++top] = x;
    }
    for (int i = 0; i < n; i++) {
      if (v[i] != -1) printf("%d", v[i]);
    }
    printf("\n");
  }

}

int main() {
  int t = 1;
  
  // scanf("%d%*c", &t);
  while(t--) {
    solve();
  }

  return 0;
}
