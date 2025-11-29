#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    struct Student s[5];
    int i;

    for (i = 0; i < 5; i++)
        scanf("%s %d %d", s[i].name, &s[i].roll_no, &s[i].marks);

    for (i = 0; i < 5; i++)
        printf("Name: %s  Roll No: %d  Marks: %d\n", s[i].name, s[i].roll_no, s[i].marks);

    return 0;
}
