    #include <stdio.h>
    #include <string.h>
     
    void solve() 
    {
      
      //char str[102];
     
      /*fgets(str, sizeof(str), stdin);
      fflush(stdin);*/
      //scanf("%s%*c", str);
     
      int c = 0, i;
      char atual;
      while(1)
      {
        scanf("%c", &atual);
     
        if(atual == '\n') break;
     
        if (atual == '0' || atual == '6' || atual == '9') c+= 6;
        if (atual == '3' || atual == '5' || atual == '2') c+= 5;
        if (atual == '1') c+= 2;
        if (atual == '4') c+= 4;
        if (atual == '7') c+= 3;
        if (atual == '8') c+= 7;
      }
      printf("%d leds\n", c);
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