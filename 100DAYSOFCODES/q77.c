#include <stdio.h>

int main() {
    int matrix[100][100], i, j, row, col, flag = 1;
    scanf("%d %d", &row, &col);
    if(row != col) {
        printf("Not Square Matrix");
        return 0;
    }
    for(i = 0; i < row; i++)
        for(j = 0; j < col; j++)
            scanf("%d", &matrix[i][j]);
    for(i = 0; i < row; i++)
        for(j = i + 1; j < row; j++)
            if(matrix[i][i] == matrix[j][j])
                flag = 0;
    if(flag)
        printf("Distinct");
    else
        printf("Not Distinct");
    return 0;
}
