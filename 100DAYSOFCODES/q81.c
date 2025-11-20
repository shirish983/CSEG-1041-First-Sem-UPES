#include <stdio.h>

int main() {
    char str[1000];
    int i = 0, count = 0;
    fgets(str, sizeof(str), stdin);
    while(str[i] != '\0' && str[i] != '\n') {
        count++;
        i++;
    }
    printf("%d", count);
    return 0;
}
