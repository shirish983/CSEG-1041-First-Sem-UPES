#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    struct Student s[5], top;
    int i;

    for (i = 0; i < 5; i++)
        scanf("%s %d %d", s[i].name, &s[i].roll_no, &s[i].marks);

    top = s[0];
    for (i = 1; i < 5; i++) {
        if (s[i].marks > top.marks)
            top = s[i];
    }

    printf("Top Student: %s  Roll No: %d  Marks: %d\n", top.name, top.roll_no, top.marks);
    return 0;
}
