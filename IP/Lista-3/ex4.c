    #include <stdio.h>
     
    void solve()
    {
      char one[] = "one", two[] = "two", three[] = "three";
     
      char c, o = 0, t = 0, th = 0, i = 0;
      while (1) 
      {
        scanf("%c", &c);
     
        if (c == '\n') break;
     
        
        if (c != one[i]) o++;
        if (c != two[i]) t++;
        if (c != three[i]) th++;
        i++;
      }
      if (o == 1) printf("1\n");
      if (t == 1) printf("2\n");
      if (th == 1) printf("3\n");
    }
     
    int main()
    {
      int t;
      scanf("%d", &t);
      getchar();
      while (t--) 
      {
        solve();
      }
     
      return 0;
    } 