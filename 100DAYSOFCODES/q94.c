#include <stdio.h>
#include <string.h>

int main() {
    char str[1000], word[1000], longest[1000];
    int i = 0, j = 0, maxLen = 0, len;
    fgets(str, sizeof(str), stdin);
    longest[0] = '\0';
    while(1) {
        j = 0;
        while(str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
            word[j++] = str[i++];
        }
        word[j] = '\0';
        len = j;
        if(len > maxLen) {
            maxLen = len;
            strcpy(longest, word);
        }
        if(str[i] == '\0' || str[i] == '\n')
            break;
        i++;
    }
    printf("%s", longest);
    return 0;
}
