#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <limits.h>

typedef long long ll;
typedef long double ld;
#define N 100

void check(int m[N][N], int i, int j)
{
  int p = 0;
  
  if (m[i][j] == 1) p++;
  if (m[i][j + 1] == 1) p++;
  if (m[i + 1][j] == 1) p++;
  if (m[i + 1][j + 1] == 1) p++;

  if (p >= 2)
  {
    printf("S");
    return;
  }

  printf("U");
}

void solve()
{
  int n, m[100][100];
  scanf("%d", &n);
  
  int i, j;
  for (i = 0; i < n + 1; i++)
  {
    for (j = 0; j < n + 1; j++) 
    {
      scanf("%d", &m[i][j]); 
    }
  }
  
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      check(m, i, j);
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