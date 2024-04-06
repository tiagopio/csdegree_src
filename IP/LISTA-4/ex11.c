#include <stdio.h>

#define MAX_N 100
#define MAX_M 100

int main() {
    int n, m;
    int mat[MAX_N][MAX_M];

    scanf("%d %d", &n, &m);
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if (mat[i][j] == 1111) {
                printf("%d %d\n", i, j);
                return 0;
            }
        }
    }
    printf("WALLY NAO ESTA NA MATRIZ\n");

    return 0;
}
