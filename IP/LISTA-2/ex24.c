#include <stdio.h>

int solve()
{
  int arr[10000], n, i;
  
  while (1)
  {
    scanf("%d", &n);
    if (n == 0) break;
    
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);
      
    int m = arr[0];
    for (i = 1; i < n; i++)
    {
      if (arr[i] > m) m = arr[i];
    }

    int v_count[m + 1], v_ord[n];
    for (i = 0; i <= m; ++i) v_count[i] = 0;

    for (i = 0; i < n; i++) v_count[arr[i]]++;
    
    for (i = 1; i <= m; i++)
    {
      v_count[i] += v_count[i - 1];
    }

    for (i = n - 1; i >= 0; i--)
    {
      v_ord[--v_count[arr[i]]] = arr[i];
    }
    
    for (i = 0; i < n; i++) arr[i] = v_ord[i];
    for (i = 0; i < n; ++i) printf("%d ", arr[i]);
    printf("\n");
  }

  return 0;
}

int main()
{
  solve();
  return 0;
}
