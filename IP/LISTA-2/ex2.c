#include <stdio.h>

int solve(int arr[], int size, int k) 
{
  int c = 0, i;
  for (i = 0; i < size; i++)
  {
    if (arr[i] >= k) c++;
  }

  return c;
}

int main()
{
  int n, k;
  
  do {
    scanf("%d", &n); 
  } while(n < 1 || n > 1000);
  
  int v[n];

  int i;
  for (i = 0; i < n; i++)
    scanf("%d", &v[i]);

  scanf("%d", &k);
  
  printf("%d\n", solve(v, n, k));

  return 0;
}
