    #include <stdio.h>
     
    void solve(int *a, int s)
    {
      int i;
      for (i = 0; i < s - 1; i++)
      {
        int j;
        for (j = 0; j < s - i - 1; j++)
        {
          if (a[j] > a[j + 1])
          {
            int tmp = a[j];
            a[j] = a[j + 1];
            a[j + 1] = tmp;
          }
        }
      }
      for (i = 0; i < s; i++) printf("%d\n", a[i]);
    }
     
    int main()
    {
      int a[1000];
      int n;
     
      scanf("%d", &n);
      if (n < 1 || n > 1000) return 0;
     
      int i;
      for (i = 0; i < n; i++) scanf("%d", &a[i]);
     
      solve(a, n);
     
      return 0;
    }