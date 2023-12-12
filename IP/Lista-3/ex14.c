#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void solve() 
{
  char str[51];

  while (scanf(" %50[^\n]*c", str) != EOF)
  {
    int i, m = 1;
    for (i = 0; str[i] != '\0'; i++) 
    {
      if (isalpha(str[i]))
      {
        if (m) {
          str[i] = toupper(str[i]);
        }
        else {
          str[i] = tolower(str[i]);
        }

        m = !m;
      }
    }
    printf("%s", str);
    printf("\n");
  }
}

int main()
{
  int t = 1;
  // scanf("%d", &t);
  //getchar();

  while (t--)
  {
    solve();
  }
  return 0;
}