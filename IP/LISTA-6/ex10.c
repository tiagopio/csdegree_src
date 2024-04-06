#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
 
char print_prefix(char * str, int len, int init) {
  if (init == len - 1) {
    printf("%c\n", str[init]);
  }
  else {
    printf("%c", str[init]);
    print_prefix(str, len, init + 1);
  }
}
 
void solve() {
  int i;
  char * string =(char*)malloc(500 * sizeof(char));
  scanf("%500[^\n]%*c", string);
  int len = strlen(string);
  int tmp = len;
  for (i = 0; i < tmp; i++) {
    print_prefix(string, len, 0);
    len--;
  }
  
}
 
int main() {
  int t = 1, c = 1;
  scanf("%d%*c", &t);
  while(t--) {
    printf("Caso de teste %d\n", c);
    solve();
    c++;
  }
  return 0;
}