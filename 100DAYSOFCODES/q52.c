#include <stdio.h>

int main() {
    int blocks[] = {1, 2, 5, 3, 1};
    int i, j;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < blocks[i]; j++) {
            printf("*\n");
        }
        printf("\n");
    }

    return 0;
}
