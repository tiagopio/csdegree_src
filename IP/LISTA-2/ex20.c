    #include <stdio.h>
    #include <stdlib.h>
    #include <math.h>
     
    double max(double *arr, int size) 
    {
      int i;
      double m = arr[0];
      for (i = 0; i < size; i++)
      {
        if (arr[i] > m)
        {
          m = arr[i];
        }
      }
     
      return m;
    }
     
    void solve(double *f, double *s)
    {
      double result[3];
      int i;
      for (i = 0; i < 3; i++) {
        result[i] = fabs(s[i] - f[i]);
      }
     
      printf("%.2lf\n", max(result, 3));
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
         
        solve(f, s);
        for (j = 0; j < 3; j++) f[j] = s[j];
      } 
         
      return 0;
    }