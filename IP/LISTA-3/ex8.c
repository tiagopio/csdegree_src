#include <stdio.h>
#include <string.h>

int solve()
{  
  char s[500], x;
  scanf("%c %499[^\n]*c", &x, s);
  getchar();
  
  int i;
  for (i = 0; s[i] != '\0'; i++) {
    if (x == s[i]) {
      printf("Caractere %c encontrado no indice %d da string.\n", x, i);
      return 0;
    }
  }

  printf("Caractere %c nao encontrado.\n", x);
  return 0;
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