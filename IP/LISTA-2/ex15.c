#include <stdio.h>
#include <stdlib.h>

void solve(int *a, int s)
{
  int d, c = 0, i, j;
  int m_d = abs(a[1] - a[0]);
  
  for (i = 0; i < s - 1; i++)
  {
    for (j = i + 1; j < s; j++)
    {
      c++;
      d = abs(a[j] - a[i]);

      if (d < m_d) m_d = d;
    }
  }

  printf("%d %d\n", m_d, c);
}

int main()
{
  int n[1000], t, x;

  scanf("%d", &t);
  if (t < 1 || t > 10) return 0;

  while (t--)
  {
    scanf("%d", &x);
    if (x < 2 || x > 1000) return 0;
    
    int i;
    for (i = 0; i < x; i++) scanf("%d", &n[i]);

    solve(n, x);
  }

  return 0;
}
