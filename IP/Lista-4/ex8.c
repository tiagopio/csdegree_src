    #include <stdio.h>
    #include <stdlib.h>
    #include <math.h>
    #include <string.h>
    #include <ctype.h>
    #include <limits.h>
     
    typedef long long ll;
    typedef long double ld;
    #define N 6
     
    void solve()
    {
      int mat[100][100];
      int n, m, k, z;
     
      scanf("%d%d%d%d", &n, &m, &k, &z);
     
      printf("P2\n%d %d\n%d\n", n, m, 255);
      int i, j;
     
      for (i = 0; i < n; i++)
      {
        for (j = 0; j < m; j++)
        {
          mat[i][j] = 0;
        }
      }
     
      while (k > 0) 
      {
        int t = k - 1, l1 = k - 1, l2 = m - k, d = n - k;
     
        for (i = t; i < k; i++) 
        {
          for (j = 0; j < m; j++) 
          {
            mat[i][j] = z;
          }
        }
     
        for (i = 0; i < n; i++) 
        {
          for (j = l1; j < k; j++)
          {
            mat[i][j] = z;
          }  
        }
     
        for (i = 0; i < n; i++) 
        {
          mat[i][l2] = z;
        }
     
        for (j = 0; j < n; j++) 
        {
          mat[d][j] = z;
        }
        k--;
      }
     
      for (i = 0; i < n; i++)
      {
        for (j = 0; j < m; j++)
        {
          printf("%d ", mat[i][j]);
        }
        printf("\n");
      }
     
    }
     
    int main()
    {
      int t = 1;
      // scanf("%d", &t);
      while(t--)
      {
        solve();
      }
      return 0;
    }