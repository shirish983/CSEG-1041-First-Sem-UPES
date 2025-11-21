#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);
    int i = 0, lastSpace = -1;
    while(str[i] != '\0' && str[i] != '\n') {
        if(str[i] == ' ') lastSpace = i;
        i++;
    }
    i = 0;
    while(i < lastSpace) {
        if(i == 0 && str[i] != ' ')
            printf("%c.", str[i]);
        else if(str[i] == ' ' && str[i+1] != ' ')
            printf("%c.", str[i+1]);
        i++;
    }
    i = lastSpace + 1;
    while(str[i] != '\0' && str[i] != '\n') {
        printf("%c", str[i]);
        i++;
    }
    return 0;
}
