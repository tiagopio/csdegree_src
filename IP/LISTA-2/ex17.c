#include <stdio.h>

void solve(int *arr, int size)
{
  int i, j, c = 0;

  for (i = 0; i < size; i++)
  {
    for (j = 0; j < size; j++)
    {     
      if (arr[i] == arr[j] && i != j) break;
    }
    if (j == size) c++;
  }

  printf("%d\n", c);
}

int main()
{
  int arr[5000];

  int n;
  scanf("%d", &n);
  if (n > 5000) return 0;

  int i;
  for (i = 0; i < n; i++) scanf("%d", &arr[i]);
  
  solve(arr, n); 

  return 0;
}
