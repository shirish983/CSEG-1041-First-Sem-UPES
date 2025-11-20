#include <stdio.h>

int main() {
    int n;
    long long product = 1;   // use long long to avoid overflow quickly

    printf("Enter n: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("No even numbers in this range.\n");
        return 0;
    }

    for (int i = 2; i <= n; i += 2) {
        product *= i;
    }

    printf("Product of even numbers from 1 to %d = %lld\n", n, product);

    return 0;
}
