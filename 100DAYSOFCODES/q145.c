#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

struct Student topStudent(struct Student s[], int n) {
    struct Student top = s[0];
    for (int i = 1; i < n; i++) {
        if (s[i].marks > top.marks)
            top = s[i];
    }
    return top;
}

int main() {
    struct Student s[5], top;
    for (int i = 0; i < 5; i++)
        scanf("%s %d %d", s[i].name, &s[i].roll_no, &s[i].marks);

    top = topStudent(s, 5);
    printf("Top Student: %s  Roll No: %d  Marks: %d\n", top.name, top.roll_no, top.marks);
    return 0;
}
