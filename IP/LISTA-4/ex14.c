    #include <stdio.h>
    #include <stdlib.h>
    #include <math.h>
    #include <string.h>
    #include <ctype.h>
    #include <limits.h>
     
    typedef long long ll;
    typedef long double ld;
     
    #define NM 1000
     
    double max_e(double mat[NM][NM], int n, int m)
    {
      int max = INT_MIN;
      int i, j;
      for (i = 0; i < n; i++)
      {
        for (j = 0; j < m; j++)
        {
          int new = mat[i][j];
          if (new > max)
            max = new;
        }
      }
      return max;
    }
     
    double min_e(double mat[NM][NM], int n, int m)
    {
      int min = INT_MAX;
      int i, j;
      for (i = 0; i < n; i++)
      {
        for (j = 0; j < m; j++)
        {
          int new = mat[i][j];
          if (new < min)
            min = new;
        }
      }
      return min;
    }
     
    void solve()
    {
      int n, m;
      double mt[NM][NM];
      scanf("%d%d", &n, &m);
      int i, j;
     
      for (i = 0; i < n; i++)
      {
        for (j = 0; j < m; j++)
        {
          scanf("%lf", &mt[i][j]);
        }
      }
     
      double max = max_e(mt, n, m);
      double min = min_e(mt, n, m);
     
      int c = 0, p = 0;
      for (i = 0; i < n; i++)
      {
        for (j = 0; j < m; j++)
        {
          if (mt[i][j] == max) c++;
          if (mt[i][j] == min) p++;
        }
      }
      printf("%.0lf %.2lf%%\n%.0lf %.2lf%%\n", min, 100 * (p / (double)(n * m)), max, 100 * (c / (double)(n * m)));
    }
     
    int main()
    {
      int t = 1;
      //scanf("%d", &t);
      
      while(t--)
      {
        solve();
      }
     
      return 0;
    }