#include <stdio.h>

int main() {
    long long bin, temp, digit;
    long long revComp = 0, onesComp = 0;
    long long place = 1;

    printf("Enter a binary number: ");
    scanf("%lld", &bin);

    temp = bin;

    // Step 1: Generate reversed 1's complement
    while (temp > 0) {
        digit = temp % 10;  // extract last bit

        if (digit == 0)
            revComp = revComp * 10 + 1;  // 0 -> 1
        else
            revComp = revComp * 10 + 0;  // 1 -> 0

        temp /= 10;
    }

    // Step 2: Reverse again to print properly
    temp = revComp;
    while (temp > 0) {
        digit = temp % 10;
        onesComp = onesComp * 10 + digit;
        temp /= 10;
    }

    printf("1's Complement = %lld\n", onesComp);

    return 0;
}
