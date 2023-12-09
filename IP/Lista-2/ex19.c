#include <stdio.h>

void solve(int *arr, int size)
{
  int i;

  for (i = 0; i < size; i++)
  {
    if (i == size - 1 || arr[i] != arr[i + 1]) {
      printf("%d\n", arr[i]);
    }
  }
}

int main()
{
  int arr[1000];
  int n;

  scanf("%d", &n);
  if (n < 1 || n > 1000) return 0;

  int i;
  for (i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  solve(arr, n);

  return 0;
}

