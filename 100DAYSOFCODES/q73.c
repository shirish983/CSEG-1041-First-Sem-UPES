#include <stdio.h>

int main() {
    int matrix[100][100], rowSum[100], i, j, row, col;
    scanf("%d %d", &row, &col);
    for(i = 0; i < row; i++)
        for(j = 0; j < col; j++)
            scanf("%d", &matrix[i][j]);
    for(i = 0; i < row; i++) {
        rowSum[i] = 0;
        for(j = 0; j < col; j++)
            rowSum[i] += matrix[i][j];
    }
    for(i = 0; i < row; i++)
        printf("%d ", rowSum[i]);
    return 0;
}
