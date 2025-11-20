#include <stdio.h>

int main() {
    int matrix[100][100], i, j, row, col, flag = 1;
    scanf("%d %d", &row, &col);
    if(row != col) {
        printf("Not Symmetric");
        return 0;
    }
    for(i = 0; i < row; i++)
        for(j = 0; j < col; j++)
            scanf("%d", &matrix[i][j]);
    for(i = 0; i < row; i++)
        for(j = 0; j < col; j++)
            if(matrix[i][j] != matrix[j][i])
                flag = 0;
    if(flag)
        printf("Symmetric");
    else
        printf("Not Symmetric");
    return 0;
}
