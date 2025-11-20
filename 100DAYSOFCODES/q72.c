#include <stdio.h>

int main() {
    int matrix[100][100], i, j, row, col, sum = 0;
    scanf("%d %d", &row, &col);
    for(i = 0; i < row; i++)
        for(j = 0; j < col; j++)
            scanf("%d", &matrix[i][j]);
    for(i = 0; i < row; i++)
        for(j = 0; j < col; j++)
            sum += matrix[i][j];
    printf("%d", sum);
    return 0;
}
