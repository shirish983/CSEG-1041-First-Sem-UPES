#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    struct Student *s;
    s = (struct Student*)malloc(sizeof(struct Student));
    if (s == NULL) return 1;

    scanf("%s %d %d", s->name, &s->roll_no, &s->marks);
    printf("Name: %s\nRoll No: %d\nMarks: %d\n", s->name, s->roll_no, s->marks);

    free(s);
    return 0;
}
