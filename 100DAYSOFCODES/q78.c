#include <stdio.h>

int main() {
    int matrix[100][100], i, j, n, sum = 0;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);
    for(i = 0; i < n; i++)
        sum += matrix[i][i];
    printf("%d", sum);
    return 0;
}
