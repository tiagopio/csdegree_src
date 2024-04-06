#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <limits.h>

typedef long long ll;
typedef long double ld;
#define N 1000

void solve()
{
  int n, s = 0;
  int mat[N][N], tmp[N][N];
  scanf("%d", &n);
  
  int i, j;
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      scanf("%d", &mat[i][j]);
      if (i == j) s += mat[i][j];
    }
  }
  
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      tmp[i][j] = mat[j][i];
    }
  }
  
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      mat[i][j] *= s;
      mat[i][j] += tmp[i][j];
      printf("%d ", mat[i][j]);
    }
    printf("\n");
  }
}

int main()
{
  int t = 1;
  // scanf("%d", &t);
  // getchar();
  
  while(t--)
  {
    solve();
  }
  return 0;
}
