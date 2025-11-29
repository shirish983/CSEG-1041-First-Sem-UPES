#include <stdio.h>

enum Color { RED, GREEN, BLUE, YELLOW };

int main() {
    enum Color c;
    const char *names[] = { "RED", "GREEN", "BLUE", "YELLOW" };

    for (c = RED; c <= YELLOW; c++)
        printf("%s = %d\n", names[c], c);

    return 0;
}
