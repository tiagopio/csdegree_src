    #include <stdio.h>
    #include <string.h>
    #include <ctype.h>
     
    //  
     
    void solve() 
    {
      int c = 0, l = 0, v = 0, i;
      char a;
      while(1)
      {
        scanf("%c", &a);
        a = tolower(a);
        if(a == '\n') break;
     
        /*
        if(a >= 97 && a <= 122){
          
        }
        */
     
     
        if (a >= 97 && a <= 122) {
          l++;
        }
        if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u') 
        {
          v++;
        } else {
          if (a >= 97 && a <= 122) 
            c++;
        }
      }
      printf("Letras =  %d\nVogais = %d\nConsoantes = %d\n", l, v, c);
    }
     
    int main() 
    {
      int t;
      scanf("%d%*c", &t);
     
      while (t--) 
      {
        solve();
      }  
     
      return 0;
    }