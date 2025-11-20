#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int i, len;
    fgets(str, sizeof(str), stdin);
    len = 0;
    while(str[len] != '\0' && str[len] != '\n')
        len++;
    for(i = len - 1; i >= 0; i--)
        printf("%c", str[i]);
    return 0;
}
