#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);
    int n = 0;
    while(str[n] != '\0' && str[n] != '\n') n++;
    int i, j, k;
    for(i = 0; i < n; i++) {
        for(j = 1; j <= n - i; j++) {
            for(k = i; k < i + j; k++)
                printf("%c", str[k]);
            printf("\n");
        }
    }
    return 0;
}
