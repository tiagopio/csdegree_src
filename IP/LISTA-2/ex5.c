#include <stdio.h>

void solve(int arr[], int size) 
{
  int i, m = arr[0], j = 0;
  for (i = 0; i < size; i++)
  {
    if (arr[i] > m)
    {
      m = arr[i];
      j = i;
    }
  }

  printf("%d %d\n", j, m);
}

int main()
{
  int n;
  do {
    scanf("%d", &n);

    if (n < 1 || n > 10000) return 1;

    int arr[n];
    int i;
    for (i = 0; i < n; i++)
      scanf("%d", &arr[i]);

    solve(arr, n);
  }
  while (n != 0);  

  return 0;
}
