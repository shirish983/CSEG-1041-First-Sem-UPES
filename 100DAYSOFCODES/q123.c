#include <stdio.h>

int main() {
    FILE *fp;
    char ch;
    int characters = 0, words = 0, lines = 0;
    int prev = ' ';

    fp = fopen("info.txt", "r");
    if (fp == NULL) {
        printf("File not found\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        characters++;

        if (ch == '\n')
            lines++;

        if ((prev == ' ' || prev == '\n' || prev == '\t') &&
            (ch != ' ' && ch != '\n' && ch != '\t'))
            words++;

        prev = ch;
    }

    fclose(fp);

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}
