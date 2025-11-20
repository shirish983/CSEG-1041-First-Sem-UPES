#include <stdio.h>

int main() {
    int num, temp, first, last, digits = 0;
    int pow10 = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 10 && num > -10) {
        printf("After swapping: %d\n", num);
        return 0;
    }

    temp = num;
    if (temp < 0) temp = -temp;

    last = temp % 10;

    while (temp > 0) {
        first = temp % 10;
        temp /= 10;
        digits++;
    }

    for (int i = 1; i < digits; i++) {
        pow10 *= 10;
    }

    int middle = (num < 0 ? -num : num);
    middle = middle % pow10;
    middle /= 10;

    int result = last * pow10 + middle * 10 + first;

    if (num < 0) result = -result;

    printf("After swapping: %d\n", result);

    return 0;
}
