    #include <stdio.h>
    #include <stdlib.h>
    #include <math.h>
    #include <string.h>
    #include <ctype.h>
     
    typedef long long ll;
    typedef long double ld;
    #define N 10
     
    void solve()
    {
        double a, b, c, d;
        
        scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
     
        printf("%.3lf %.3lf\n", a * a + b * c, a * b + b * d);
        printf("%.3lf %.3lf\n", c * a + d * c, c * b + d * d);
    }
     
    int main()
    {
        int t = 1;
        // scanf("%d", &t);
        
        while (t--)
        {
            solve();
        }
        
        return 0;
    }