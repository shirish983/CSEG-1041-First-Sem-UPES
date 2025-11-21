#include <stdio.h>

int main() {
    char str[1000];
    int i = 0, j, flag = 1;
    fgets(str, sizeof(str), stdin);
    while(str[i] != '\0' && str[i] != '\n')
        i++;
    j = i - 1;
    i = 0;
    while(i < j) {
        if(str[i] != str[j]) {
            flag = 0;
            break;
        }
        i++;
        j--;
    }
    if(flag)
        printf("Palindrome");
    else
        printf("Not Palindrome");
    return 0;
}
