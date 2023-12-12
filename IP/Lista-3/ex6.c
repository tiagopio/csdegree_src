#include <stdio.h>
#include <string.h>

void solve()
{
  char s[201], tmp[201];
  while (scanf(" %200[^\n]*c", s) != EOF)
  {
    int flag = 0;
    strcpy(tmp, s);
    int x = strlen(tmp);
    int c = 0;
    int i;
    for (i = x - 1; i >= 0; i--) {
      if (tmp[i] != s[c])
      {
        flag = 1;
        break;
      }
      c++;
    }
    if (flag) {
      printf("nao\n");
    } else {
      printf("sim\n");
    }
  }
}

int main() 
{
  solve();
  return 0;
}