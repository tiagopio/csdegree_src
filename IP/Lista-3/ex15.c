#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void solve() 
{
  char str[201];
  scanf(" %200[^\n]", str);

  int i, j;
  for (i = 0; i < strlen(str); i++)
  {
    str[i] = tolower(str[i]);
  }

  int count[26] = {0};
  int max = 0;

  for (j = 0; j < strlen(str); j++)
  {
    // str[j] = 'o'
    if (isalpha(str[j])) // ok
    {
      int index = str[j] - 'a'; // 'o' - 'a' = 14;
      count[index]++; // 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0  
      //       1       >  0
      if (count[index] > max) {
        max = count[index];
        // max = 1;
      }
    }
  }

  for (i = 0; i < 26; i++) {
    if (count[i] == max)
    {
      printf("%c", 'a' + i);
    }
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