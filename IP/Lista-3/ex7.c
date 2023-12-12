#include <stdio.h>
#include <string.h>

void solve()
{  
  int x;
  char s[500];
  scanf("%d", &x);
  scanf(" %499[^\n]*c", s);
  int i;
  for (i = 0; i < x && s[i] != '\0'; i++) {
    printf("%c", s[i]);
  }
  printf("\n");
}

int main() 
{
  int t = 1;
  scanf("%d", &t);
  getchar();
  while (t--)
  {
    solve();
  }
  return 0;
}