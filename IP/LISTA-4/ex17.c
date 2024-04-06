    #include <stdio.h>
    #include <stdlib.h>
    #include <math.h>
    #include <string.h>
    #include <ctype.h>
    #include <limits.h>
     
    typedef long long ll;
    typedef long double ld;
     
    #define N 50000
     
    void solve()
    {
      int n, mt[N][6];
      scanf("%d", &n);
      int i, j;
      for (i = 0; i < n; i++)
      {
        for (j = 0; j < 6; j++)
        {
          scanf("%d", &mt[i][j]);
        }
      }
      int a, b, c, d, e, f;
      scanf("%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f);
     
      int q = n, s = 0, qui = 0, qua = 0;
     
      int p;
      for (i = 0; i < n; i++)
      {
        p = 0;
        for (j = 0; j < 6; j++)
        {
          if (mt[i][j] == a || mt[i][j] == b || mt[i][j] == c || mt[i][j] == d || mt[i][j] == e ||mt[i][j] == e || mt[i][j] == f) p++;
        }
        if (p == 6) s++;
        if (p == 5) qui++;
        if (p == 4) qua++;
      }
     
      if (s != 0) {
        printf("Houve %d acertador(es) da sena\n", s);
      } else {
        printf("Nao houve acertador para sena\n");
      }
     
      if (qui != 0) {
        printf("Houve %d acertador(es) da quina\n", qui);
      } else {
        printf("Nao houve acertador para sena\n");
      }
     
      if (qua != 0) {
        printf("Houve %d acertador(es) da quadra\n", qua);
      } else {
        printf("Nao houve acertador para sena\n");
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