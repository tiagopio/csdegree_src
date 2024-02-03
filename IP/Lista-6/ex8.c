#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
 
int comp_strings(char *string, char *new, int len, int init, int final) {
  if (final == 0) return 1;
  if (new[final] == string[init]) {
    return comp_strings(string, new, len, init + 1, final - 1);
  }
  return 0;
}
 
void solve() {
  int i, n;
  scanf("%d%*c", &n);
  char * string = (char*)malloc(n * sizeof(char));
  char * new = (char*)malloc(n * sizeof(char));
  scanf("%[^\n]%*c", string);
  int len = strlen(string);
  strcpy(new, string);
  if (comp_strings(string, new, len, 0, len - 1)) printf("PALINDROMO\n");
  else printf("NAO PALINDROMO\n");
}
 
int main() {
  int t = 1, c = 1;
  scanf("%d%*c", &t);
  while(t--) {
    //printf("Caso de teste %d\n", c);
    solve();
    //c++;
  }
  return 0;
}