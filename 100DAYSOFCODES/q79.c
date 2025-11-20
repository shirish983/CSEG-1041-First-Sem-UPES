#include <stdio.h>

int main() {
    int matrix[100][100], i, j, row, col;
    scanf("%d %d", &row, &col);
    for(i = 0; i < row; i++)
        for(j = 0; j < col; j++)
            scanf("%d", &matrix[i][j]);
    for(i = 0; i < row; i++)
        printf("%d ", matrix[i][i]);
    printf("\n");
    for(i = 0; i < row; i++)
        printf("%d ", matrix[i][col-i-1]);
    return 0;
}
