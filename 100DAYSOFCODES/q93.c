#include <stdio.h>

int main() {
    char str1[1000], str2[1000];
    int freq1[26] = {0}, freq2[26] = {0}, i = 0, flag = 1;
    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);
    while(str1[i] != '\0' && str1[i] != '\n') {
        if(str1[i] >= 'a' && str1[i] <= 'z')
            freq1[str1[i]-'a']++;
        i++;
    }
    i = 0;
    while(str2[i] != '\0' && str2[i] != '\n') {
        if(str2[i] >= 'a' && str2[i] <= 'z')
            freq2[str2[i]-'a']++;
        i++;
    }
    for(i = 0; i < 26; i++)
        if(freq1[i] != freq2[i])
            flag = 0;
    if(flag)
        printf("Anagram");
    else
        printf("Not Anagram");
    return 0;
}
