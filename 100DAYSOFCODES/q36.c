#include <stdio.h>

int main() {
    int a, b, hcf;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Make sure numbers are positive
    if (a <= 0 || b <= 0) {
        printf("Please enter positive numbers.\n");
        return 0;
    }

    // HCF calculation using loop
    for (int i = 1; i <= a && i <= b; i++) {
        if (a % i == 0 && b % i == 0) {
            hcf = i;
        }
    }

    printf("HCF (GCD) = %d\n", hcf);

    return 0;
}
