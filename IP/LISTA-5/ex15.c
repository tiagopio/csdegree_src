#include <stdio.h>
#include <stdlib.h>
 
typedef struct {
  int likes;
  int rt;
  int mentions;
} user;
 
void solve() {
  int n, m, i, j;
  scanf("%d %d", &n, &m);
 
  user **mat;
  mat = (user**)malloc(n * sizeof(user*));
 
  for (i = 0; i < n; i++) {
    mat[i] = (user*)malloc(n * sizeof(user));
  }
 
  while (m--) {
    int usr, pos, l, r, md;
    scanf("%d%d%d%d%d", &usr, &pos, &l, &r, &md);
 
    mat[usr][pos].likes = l;
    mat[usr][pos].rt = r;
    mat[usr][pos].mentions = md;
  }
 
  for (i = 0; i < n; i++) {
    int l1 = 0, rt1 = 0, me1 = 0;
    for (j = 0; j < n; j++) {
      l1 += mat[i][j].likes;
      rt1 += mat[i][j].rt;
      me1 += mat[i][j].mentions;
    }
    
    if (l1 || rt1 || me1) {
      printf("Usuario %d - num. likes: %d, num. retweets: %d e num. mencoes: %d\n", i, l1, rt1, me1);
    }
  }
 
  for (i = 0; i < n; i++) {
    free(mat[i]);
  }
  free(mat);
}
 
int main() {
  int t = 1;
  // scanf("%d", &t);
  while (t--) {
    solve();
  }
  return 0;
}