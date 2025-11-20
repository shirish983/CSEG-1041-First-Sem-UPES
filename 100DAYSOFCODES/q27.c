#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Invalid input. n must be >= 1.\n");
        return 0;
    }

    for (int i = 1, count = 0; count < n; i += 2) {
        sum += i;
        count++;
    }

    printf("Sum of the first %d odd numbers = %d\n", n, sum);

    return 0;
}
