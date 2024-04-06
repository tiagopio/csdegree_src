       
            #include <stdio.h>
        #include <stdlib.h>
        #include <math.h>
             
        void solve() 
        {
          int r, c;
             
          scanf("%d%d", &r, &c);
             
          int m[r][c];
         
             int flag = 1, i, j;
             
             for (i = 0; i < r; i++) 
             {
                 for (j = 0; j < c; j++)
                 {
                         if (c == 1) {
                        printf("%d", flag);
                        break;
                         // flag = !flag;
                    } else {
                        printf("%d", flag);
                        flag = !flag;
                    }
                 }
                 flag = !flag;
                 printf("\n");
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
        