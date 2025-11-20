#include <stdio.h>

int main() {
    char str[1000];
    int i = 0, vowels = 0, consonants = 0;
    fgets(str, sizeof(str), stdin);
    while(str[i] != '\0' && str[i] != '\n') {
        char c = str[i];
        if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
                vowels++;
            else
                consonants++;
        }
        i++;
    }
    printf("%d %d", vowels, consonants);
    return 0;
}
