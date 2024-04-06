#include <stdio.h>

void bubble(double *a, int s)
{
  int i;
  for (i = 0; i < s - 1; i++)
  {
    int j;
    for (j = 0; j < s - i - 1; j++)
    {
      if (a[j] > a[j + 1])
      {
        double tmp = a[j];
        a[j] = a[j + 1];
        a[j + 1] = tmp;
      }
    }
  }
}

double solve(double *a, int s)
{
  double m;
  
  bubble(a, s);
  int c = s - (s / 2);
  if (s % 2 != 0) m = a[c - 1];
  else 
  {
    int x = s / 2;
    m = (a[x] + a[x - 1]) / 2;
  }

  return m;
}

int main()
{
  double arr[1000000];

  int n;
  scanf("%d", &n);
  if (n < 0 || n > 1000000) return 0;
  
  int i;
  for (i = 0; i < n; i++) scanf("%lf", &arr[i]);

  printf("%.2lf\n", solve(arr, n));
  
  return 0;
}

