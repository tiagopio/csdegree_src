    #include <stdio.h>
    #include <stdlib.h>
    #include <math.h>
    #include <string.h>
    #include <ctype.h>
    #include <limits.h>
     
    typedef long long ll;
    typedef long double ld;
     
    #define Y 320
    #define X 10
     
    int check(int mt[Y][Y], int lg[X][X], int size, int x)
    { 
      int i, j, k, l, p = 0;
      for (i = 0; i < size; i++)
      {
        for (j = 0; j < size; j++)
        {
          p = 0;
          for (k = 0; k < x; k++)
          {
            for (l = 0; l < x; l++)
            {
              if (mt[i + k][j + l] == lg[k][l]) p++;
              if (p == x * x) return 1;
            }
          }
        }
      }
     
      return 0;
    } 
     
    void solve()
    {
      int x, y, lg[X][X], mt[Y][Y];
      scanf("%d", &x);
      int i, j;
      for (i = 0; i < x; i++)
      {
        for (j = 0; j < x; j++)
        {
          scanf("%d", &lg[i][j]);
        }
      }
      scanf("%d", &y);
      for (i = 0; i < y; i++)
      {
        for (j = 0; j < y; j++)
        {
          scanf("%d", &mt[i][j]);
        }
      }
      int size = y - x;
      // printf("%d\n", check(mt, lg, size, x));
      if (check(mt, lg, size, x)) {
        printf("sim\n");
      } else {
        printf("nao\n");
      }
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