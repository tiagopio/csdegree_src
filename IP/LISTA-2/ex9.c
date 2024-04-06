    #include <stdio.h>
    #include <math.h>
     
    double solve(double *f, double *s)
    {
      return sqrt(pow((f[0] - s[0]), 2) + pow((f[1] - s[1]), 2) + pow((f[2] - s[2]), 2));
    }
     
    int main()
    {
      int n;
     
      scanf("%d", &n);
     
      if (n < 2 || n > 1000) return 0;
     
      double f[3], s[3]; 
     
      int i;
      for (i = 0; i < 3; i++) scanf("%lf", &f[i]);
      while (n-- != 1)
      {
        int j;
        for (j = 0; j < 3; j++) scanf("%lf", &s[j]);
     
        printf("%.2lf\n", solve(f, s));
        for (j = 0; j < 3; j++) f[j] = s[j];
      } 
     
      return 0;
    }