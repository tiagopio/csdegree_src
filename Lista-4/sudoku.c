#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <limits.h>

int check_horizontal(int matrix[9][9]){

    int i, j, k, valid = 1;

    for(i = 0; i < 9 && valid; i++)
        for(j = 0; j < 9 && valid; j++)
            for(k = 0; k < 9 && valid; k++)
                if((j != k) && (matrix[i][j] == matrix[i][k]))
                    valid = 0;

    return valid;
}

int check_vertical(int matrix[9][9]){

    int i, j, k, valid = 1;

    for(j = 0; j < 9 && valid; j++)
        for(i = 0; i < 9 && valid; i++)
            for(k = 0; k < 9 && valid; k++)
                if((i != k) && (matrix[i][j] == matrix[k][j]))
                    valid = 0;

    return valid;
}

void fill_matrix(int matrix[9][9]){
    int i, j;

    for(i = 0; i < 9; i++)
        for(j = 0; j < 9; j++){
            scanf("%d", &matrix[i][j]);
            while(matrix[i][j] < 1 || matrix[i][j] > 9){
                scanf("%d", &matrix[i][j]);
            }
        }
}

int check_subgrid(int mini[3][3]){
    int i, j, num, exists = 0;

    for(num = 1; num <= 9; num++){
        for(i = 0; i < 3; i++)
            for(j = 0; j < 3; j++)
                if(mini[i][j] == num) exists++;
        if(exists > 1) return 0;
        exists = 0;
    }

    return 1;
}

int check_subgrids(int matrix[9][9]){
    int i, j, k, l, mini[3][3];

    for(i = 0; i < 9; i += 3)
        for(j = 0; j < 9; j += 3){
            for(k = 0; k < 3; k++)
                for(l = 0; l < 3; l++)
                    mini[k][l] = matrix[k+i][l+j];
            if(!check_subgrid(mini))
                return 0;
        }

    return 1;
}

int main()
{
    int matrix[9][9];
    fill_matrix(matrix);

    if(check_horizontal(matrix) && check_vertical(matrix) && check_subgrids(matrix))
        printf("valido\n");
    else
        printf("invalido\n");

    return 0;
}
