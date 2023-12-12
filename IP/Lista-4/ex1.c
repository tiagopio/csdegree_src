    #include <stdio.h>
    #include <stdlib.h>
    #include <math.h>
     
    void solve() 
    {
      int a, b, c, d;
      scanf("%d%d%d%d", &a, &b, &c, &d);
     
      double det = (a * d) - (b * c);
     
      printf("%.2lf\n", det);
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