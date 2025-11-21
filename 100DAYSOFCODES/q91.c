#include <stdio.h>

int main() {
    char str[1000];
    int i = 0, j = 0;
    fgets(str, sizeof(str), stdin);
    while(str[i] != '\0' && str[i] != '\n') {
        char c = str[i];
        if(c!='a'&&c!='e'&&c!='i'&&c!='o'&&c!='u'&&c!='A'&&c!='E'&&c!='I'&&c!='O'&&c!='U') {
            str[j] = str[i];
            j++;
        }
        i++;
    }
    str[j] = '\0';
    printf("%s", str);
    return 0;
}
