#include <stdio.h>

enum Gender { MALE, FEMALE };

struct Person {
    char name[50];
    enum Gender gender;
};

int main() {
    struct Person p;
    scanf("%s %d", p.name, &p.gender);

    if (p.gender == MALE)
        printf("%s is Male\n", p.name);
    else if (p.gender == FEMALE)
        printf("%s is Female\n", p.name);
    else
        printf("Inval

          
