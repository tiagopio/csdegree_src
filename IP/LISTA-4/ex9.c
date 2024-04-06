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
  int n, m;
  scanf("%d%d", &n, &m);
  int i, j;
  int flag = 0, num = 1;

  for (i = 0; i < n; i++)
  {
    for (j = 0; j < m; j++) 
    {
      if (m % 2 != 0) {
        if (flag)
        {
          printf("%d ", num);
          num++;
          flag = !flag;
        } else {
          printf("0 ");
          flag = !flag;
        }
      } else {
        if (flag)
        {
          printf("%d ", num);
          num++;
          flag = !flag;
        } else {
          printf("0 ");
          flag = !flag;
        }
        if (j + 1 == m) flag = !flag;
      }
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