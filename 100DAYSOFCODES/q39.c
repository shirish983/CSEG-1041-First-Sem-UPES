#include <stdio.h>

int main() {
    int num, digit;
    long long product = 1;
    int foundOdd = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        num = -num;   // handle negative numbers
    }

    while (num > 0) {
        digit = num % 10;

        if (digit % 2 != 0) {   // odd digit
            product *= digit;
            foundOdd = 1;
        }

        num /= 10;
    }

    if (foundOdd)
        printf("Product of odd digits = %lld\n", product);
    else
        printf("No odd digits found.\n");

    return 0;
}
