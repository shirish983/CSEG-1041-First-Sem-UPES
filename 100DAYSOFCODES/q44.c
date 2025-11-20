#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Enter a positive number.\n");
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        double num = 2 * i - 1;
        double den = 2 * i;
        sum += num / den;
    }

    printf("Sum of the series up to %d terms = %.6f\n", n, sum);

    return 0;
}
