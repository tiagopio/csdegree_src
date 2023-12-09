    #include <stdio.h>
    #include <string.h>
    #include <ctype.h>
    #include <math.h>
     
    int solve()
    {
        char str[1000];
        int a = 0, e = 0, ii = 0, o = 0, u = 0, find = 0, index;
      int aa = 0, ee = 0, iii = 0, oo = 0, uu = 0, i = 0; 
        scanf("%1000[^\n]", str);    
     
        for (i = 0; str[i] != '\0'; i++)
        {
            if (str[i] == ';') {
          find++;
          index = i;
        } 
        }
        if (!find) {
        printf("FORMATO INVALIDO!\n");
        return 0;
      }
     
        for (i = 0; str[i] != ';'; i++)
        {
            if (tolower(str[i]) == 'a') a++;
            if (tolower(str[i]) == 'e') e++;
            if (tolower(str[i]) == 'i') ii++;
            if (tolower(str[i]) == 'o') o++;
            if (tolower(str[i]) == 'u') u++;
        }
      printf("(%d,%d,%d,%d,%d)\n", a, e, ii, o , u);
      for (i = index; str[i] != '\0'; i++)
        {
            if (tolower(str[i]) == 'a') aa++;
            if (tolower(str[i]) == 'e') ee++;
            if (tolower(str[i]) == 'i') iii++;
            if (tolower(str[i]) == 'o') oo++;
            if (tolower(str[i]) == 'u') uu++;
        }
     
        printf("(%d,%d,%d,%d,%d)\n", aa, ee, iii, oo , uu);
     
      double d;
      d = sqrt(pow(a - aa, 2) + pow(e - ee, 2) + pow(ii - iii, 2) + pow(o - oo, 2) + pow(u - uu, 2));
     
      printf("%.2lf\n", d);
     
        return 0;    
    }
     
    int main()
    {
        solve();
        return 0;
    }