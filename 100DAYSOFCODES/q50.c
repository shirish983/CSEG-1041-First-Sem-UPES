#include <stdio.h>

int main() {
    for (int i = 5; i >= 1; i--) {
        for (int space = 0; space < 5 - i; space++) {
            printf(" ");
        }
        for (int star = 1; star <= i; star++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
