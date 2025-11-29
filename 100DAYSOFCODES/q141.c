#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    struct Student s;
    scanf("%s %d %d", s.name, &s.roll_no, &s.marks);
    printf("Name: %s\nRoll No: %d\nMarks: %d\n", s.name, s.roll_no, s.marks);
    return 0;
}
