#include <stdio.h>

int main() {
    int num, original, digit, count = 0;
    int temp;
    long long sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    // Step 1: Count the digits
    temp = num;
    while (temp > 0) {
        temp /= 10;
        count++;
    }

    // Step 2: Compute sum of each digit raised to the power 'count'
    temp = num;
    while (temp > 0) {
        digit = temp % 10;

        // compute digit^count using a loop
        long long power = 1;
        for (int i = 0; i < count; i++) {
            power *= digit;
        }

        sum += power;
        temp /= 10;
    }

    // Step 3: Check Armstrong condition
    if (sum == original)
        printf("%d is an Armstrong number.\n", original);
    else
        printf("%d is not an Armstrong number.\n", original);

    return 0;
}
