#include <stdio.h>
#include <string.h>

#define N 256

void solve() 
{ 
  char str[N];
  char clr[N];
  char tmp[N];

  scanf("%[^\n]", str);
  scanf("\n%[^\n]", clr);
  int i, j = 0;
  for (i = 0; i < strlen(str); i++) {
    if (strchr(clr, str[i]) == NULL) {
      tmp[j++] = str[i];
    }
  }

  tmp[j] = '\0';
  printf("%s\n", tmp);
}

int main()
{
  int t = 1;
  // scanf("%d", &t);
  while (t--)
  {
    solve();
  }
  return 0;
}