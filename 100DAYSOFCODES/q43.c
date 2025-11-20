#include <stdio.h>

int main() {
    int num, temp, digit;
    long long sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Enter a positive number.\n");
        return 0;
    }

    temp = num;

    while (temp > 0) {
        digit = temp % 10;

        long long fact = 1;
        for (int i = 1; i <= digit; i++) {
            fact *= i;
        }

        sum += fact;
        temp /= 10;
    }

    if (sum == num)
        printf("%d is a strong number.\n", num);
    else
        printf("%d is not a strong number.\n", num);

    return 0;
}
