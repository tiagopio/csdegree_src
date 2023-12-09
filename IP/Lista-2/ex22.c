#include <stdio.h>

void sep_digits(char *s, int *arr) {
  int i;
  for (i = 0; s[i] != '\0'; i++) {
    arr[i] = s[i] - '0';
  }
}

int solve() {
  char user[100000];
  int q, q_end, k, idx, max, c, v[100000];

  while (1) {
    scanf("%d %d%*c", &q, &q_end);
    if (q == 0 && q_end == 0) break;
    scanf("%s%*c", user);
    sep_digits(user, v);

    k = q - q_end;
    max = 0;
    for (c = 0; c <= k; c++) {
      if (v[c] > max) {
        max = v[c];
        idx = c;
      }

      if (c == k) {
        printf("%d", max);
        max = 0;
        k++;
        c = idx;
      }

      if (k == q) break;
    }
    printf("\n");
  }

  return 0;
}

int main() {
  solve();
  return 0;
}

