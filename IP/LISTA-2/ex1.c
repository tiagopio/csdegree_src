#include <stdio.h>

void solve(int arr[], int size) 
{
  int a;
  scanf("%d", &a);

  int i;
  for (i = 0; i < size; i++)
  {
    if (a == arr[i])
    {
      printf("ACHEI\n");
      i = size + 1;
    }
  }
  if (i == size) printf("NAO ACHEI\n");
}

int main()
{
  int n, m;

  scanf("%d", &n);
  if (n < 1 || n > 100000) return 1;
  
  int arr[n];
  int i;
  for (i = 0; i < n ; i++)
    scanf("%d", &arr[i]);

  scanf("%d", &m);
  if (m < 1 || m > 1000) return 1;
  
  while (m--) 
  {
    solve(arr, n);
  }

  return 0;
}
