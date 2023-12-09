    #include <stdio.h>
    #include <math.h>
     
    int solve(int n)
    {
      int new = 0;
      int r, i = 0;
      
      while (n != 0)
      {
        int r = n % 2;
        new += r * pow(10, i);
        n /= 2; 
        i++; 
      }
     
      return new;
    }
     
    int main()
    {
     
      int n;
     
      while (scanf("%d", &n) != EOF)
      {
        printf("%d\n", solve(n));
      }
     
      return 0;
    }