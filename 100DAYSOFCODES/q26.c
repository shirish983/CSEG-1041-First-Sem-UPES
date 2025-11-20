#include <stdio.h>

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Invalid input. n must be >= 1.\n");
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        printf("%d ", i);
    }

    return 0;
}
