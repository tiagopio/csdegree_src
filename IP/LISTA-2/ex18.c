    #include <stdio.h>
     
    int solve()
    {
       int arr[11], f, l;
       int i;
       for (i = 0; i < 11; i++)
       {
         scanf("%d", &arr[i]);
         if (i == 9) {
            f = arr[i];
         } else if (i == 10)
         {
            l = arr[i];
         }
       }
       
       int s1 = 1, s2 = 1, c = 1, b1 = 0, b2 = 0;
       for (i = 0; i < 9; i++) {
          s1 = arr[i] * c;
          b1 = b1 + s1;
          c++;
       }
       b1 %= 11;
       if (b1 == 10) b1 = 0;
       
       c = 9;
       
       for (i = 9; i >= 0; i--) {
          s2 = arr[i] * c;
          b2 = b2 + s2;
          c--;
       }
       b2 %= 11;
       if (b2 == 10) b2 = 0;
       
       if (b1 == arr[9] && b2 == arr[10]) return 1;
       return 0;
    }
     
    int main()
    {
      int t;
      scanf("%d", &t);
      
      while (t--) 
      {
        printf("%s", solve() ? "CPF valido\n" : "CPF invalido\n");  
      }   
      
      return 0;
    }