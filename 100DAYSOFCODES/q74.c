#include <stdio.h>

int main() {
    int matrix[100][100], transpose[100][100], i, j, row, col;
    scanf("%d %d", &row, &col);
    for(i = 0; i < row; i++)
        for(j = 0; j < col; j++)
            scanf("%d", &matrix[i][j]);
    for(i = 0; i < row; i++)
        for(j = 0; j < col; j++)
            transpose[j][i] = matrix[i][j];
    for(i = 0; i < col; i++) {
        for(j = 0; j < row; j++)
            printf("%d ", transpose[i][j]);
        printf("\n");
    }
    return 0;
}
