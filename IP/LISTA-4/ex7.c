    #include <stdio.h>
    #include <stdlib.h>
    #include <math.h>
    #include <string.h>
    #include <ctype.h>
    #include <limits.h>
     
    typedef long long ll;
    typedef long double ld;
    #define N 6
     
    int calc_amp(int m[N][N], int i, int j)
    {
      int sum;
     
      sum = m[i][j] + m[i][j + 1] + m[i][j + 2] + m[i + 1][j + 1] + m[i + 2][j] + m[i + 2][j + 1] + m[i][j + 2]; 
     
      return sum;
    }
     
    void solve()
    {
      int i, j;
      int mat[N][N];
      
      for (i = 0; i < 6; i++) 
      {
        for (j = 0; j < 6; j++)
        {
          scanf("%d", &mat[i][j]);
        }
      }
     
      int max = INT_MIN;
      for (i = 0; i < 4; i++)
      {
        int new = 0;
        for (j = 0; j < 4; j++)
        {
          new = calc_amp(mat, i, j);
          // printf("i: %d j: %d = %d\n", i, j, new);
          if (new > max) 
            max = new;
        }
      }
     
      //printf("%d\n", calc_amp(mat, 2, 3));
     
      printf("%d\n", max);
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