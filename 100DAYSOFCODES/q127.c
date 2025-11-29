#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *in, *out;
    int ch;

    in = fopen("input.txt", "r");
    if (in == NULL) {
        printf("input.txt not found\n");
        return 1;
    }

    out = fopen("output.txt", "w");
    if (out == NULL) {
        fclose(in);
        return 1;
    }

    while ((ch = fgetc(in)) != EOF) {
        if (ch >= 'a' && ch <= 'z')
            ch = ch - 32;
        fputc(ch, out);
    }

    fclose(in);
    fclose(out);

    printf("Conversion complete\n");
    return 0;
}
