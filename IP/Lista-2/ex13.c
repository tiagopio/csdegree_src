#include <stdio.h>

void solve(int *a, int s)
{
  int n = a[0], q = 0, qtd = 0, j, c = 0;
  int max = n;

  while (c < s)
  {
    qtd = 0;
    for (j = 0; j < s; j++)
    {
      if (n == a[j]) qtd++;
      if (qtd > q || (qtd == q && n < max)) 
      {
        q = qtd;
        max = a[j];
      }
    }
    c++;
    n = a[c];
  }

  printf("%d\n%d\n", max, q);
}

int main()
{
  int arr[1000000], n;

  scanf("%d", &n);
  if (n < 1 || n > 10000000) return 0;

  int i;
  for (i = 0; i < n; i++) scanf("%d", &arr[i]);
 
  solve(arr, n);

  return 0;
}

