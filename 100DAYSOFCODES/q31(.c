#include <stdio.h>

int main() {
    int num, temp, rem;
    long long binary = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("Binary = 0\n");
        return 0;
    }

    temp = num;

    long long place = 1;   // to build the reversed binary number

    while (temp > 0) {
        rem = temp % 2;          // get last binary digit
        binary += rem * place;   // store it in reverse order
        place *= 10;
        temp /= 2;
    }

    printf("Binary representation = %lld\n", binary);

    return 0;
}
