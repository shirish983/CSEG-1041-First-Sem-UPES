#include <stdio.h>

enum Menu { ADD=1, SUBTRACT, MULTIPLY };

int main() {
    int choice, a, b;
    scanf("%d %d %d", &choice, &a, &b);

    switch(choice) {
        case ADD:
            printf("%d\n", a + b);
            break;
        case SUBTRACT:
            printf("%d\n", a - b);
            break;
        case MULTIPLY:
            printf("%d\n", a * b);
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
