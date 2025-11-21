#include <stdio.h>

int main() {
    int n, x, leftSum = 0, rightSum = 0;
    scanf("%d", &n);

    int total = n * (n + 1) / 2;

    for(x = 1; x <= n; x++) {
        leftSum += x;
        rightSum = total - (leftSum - x);
        if(leftSum == rightSum) {
            printf("%d", x);
            return 0;
        }
    }
    printf("-1");
    return 0;
}
