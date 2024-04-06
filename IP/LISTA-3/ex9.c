#include <stdio.h>
#include <string.h>

void solve() 
{
  int b, e;
  scanf("%d%d", &b, &e);
  int s = e - b + 1;
  char seq[s];
  char new[6];
  
  int c = 0;
  int i;
  for (i = b; i <= e; i++) {
    seq[c] = i;
    c++;
  }
  
  for (i = 0; i < s; i++) {
    sprintf(new,"%d", seq[i]);
    printf("%s", new);
  }
  for (i = s - 1; i >= 0; i--) {
    sprintf(new, "%d", seq[i]);
    int x = strlen(new);
    int j;
    for (j = x; j >= 0; j--) 
      printf("%c", new[j]);
  }
  printf("\n");
}

int main()
{
  int t = 1;
  scanf("%d", &t);
  while (t--)
  {
    solve();
  }
  return 0;
}