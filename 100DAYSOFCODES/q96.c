#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);
    int i = 0, start, end;
    while(str[i] != '\0' && str[i] != '\n') {
        start = i;
        while(str[i] != ' ' && str[i] != '\0' && str[i] != '\n') i++;
        end = i - 1;
        int j;
        for(j = end; j >= start; j--)
            printf("%c", str[j]);
        if(str[i] == ' ') printf(" ");
        if(str[i] != '\0') i++;
    }
    return 0;
}
