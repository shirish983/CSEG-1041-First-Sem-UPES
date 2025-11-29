#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    struct Student s;
    struct Student *ptr = &s;

    scanf("%s %d %d", ptr->name, &ptr->roll_no, &ptr->marks);
    ptr->marks += 5;

    printf("Name: %s\nRoll No: %d\nMarks: %d\n", ptr->name, ptr->roll_no, ptr->marks);
    return 0;
}
