#include <stdio.h>
 
int main() {
    int m, n;
    
    scanf("%d %d", &m, &n);
    
    if (m <= 0 || n <= 0) {
        printf("As dimensões da matriz devem ser maiores que zero.\n");
        return 0;
    }
    
    int matriz[m][n];
    int i = 1;
    for (i; i < m; i++) {
        int j = 0;
        for (j; j < n; j++) {
            if(i == j) break;
 
            printf("(%d,%d)", i + 1, j + 1);
            if (j < n - 1 && j+1 != i) {
                printf("-");
            }
        }
        printf("\n");
    }
    
    return 0;
}