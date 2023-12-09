#include <stdio.h>

void solve(int arr[], int size) 
{
  int i;
  for (i = size - 1; i >= 0; i--)
    printf("%d ", arr[i]);
  printf("\n");
}

int main()
{
  int n;
  scanf("%d", &n);

  if (n > 5000) return 1;
  
  int arr[n];
  int i;
  for (i = 0; i < n; i++)
    scanf("%d", &arr[i]);

  solve(arr, n);

  return 0;
}
