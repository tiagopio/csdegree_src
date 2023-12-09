#include <stdio.h>

int solve(int arr[], int size) 
{
  int s = 0, i;

  for (i = 0; i < size; i++)
    s += arr[i];

  return s;
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

  printf("%d\n", solve(arr, n));
 
  return 0;
}
