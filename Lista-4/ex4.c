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
        int m, n;
        do {
            scanf("%d", &m);
        } while(m <= 0 || m > 10);
        
        do {
            scanf("%d", &n);
        } while(n <= 0 || n > 10);
        int mat[m][n];
        int i, j;
        for (i = 0; i < m; i++) {
            for (j = 0; j < n; j++) {
                scanf("%d", &mat[i][j]);
            }
        }
        
        for (i = 0; i < m; i++) {
            printf("linha %d: ", i + 1);
            for (j = 0; j < n; j++) {
                printf("%d", mat[i][j]);
                if (j < n - 1) printf(",");
            }
            printf("\n");
        }
        
        
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