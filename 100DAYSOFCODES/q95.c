#include <stdio.h>
#include <string.h>

int main() {
    char str1[1000], str2[1000], temp[2000];
    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);
    int len1 = 0, len2 = 0, i;
    while(str1[len1] != '\0' && str1[len1] != '\n') len1++;
    while(str2[len2] != '\0' && str2[len2] != '\n') len2++;
    if(len1 != len2) {
        printf("Not Rotation");
        return 0;
    }
    for(i = 0; i < len1; i++) temp[i] = str1[i];
    for(i = 0; i < len1; i++) temp[i+len1] = str1[i];
    temp[2*len1] = '\0';
    for(i = 0; i <= 2*len1 - len2; i++) {
        int j;
        for(j = 0; j < len2; j++)
            if(temp[i+j] != str2[j])
                break;
        if(j == len2) {
            printf("Rotation");
            return 0;
        }
    }
    printf("Not Rotation");
    return 0;
}
