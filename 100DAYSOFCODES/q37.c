#include <stdio.h>

int main() {
    int a, b, hcf = 1, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a <= 0 || b <= 0) {
        printf("Please enter positive numbers.\n");
        return 0;
    }

    // Find HCF using a loop
    for (int i = 1; i <= a && i <= b; i++) {
        if (a % i == 0 && b % i == 0) {
            hcf = i;
        }
    }

    // Calculate LCM
    lcm = (a * b) / hcf;

    printf("LCM = %d\n", lcm);

    return 0;
}
