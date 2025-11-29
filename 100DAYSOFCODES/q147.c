#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    int salary;
};

int main() {
    FILE *fp;
    struct Employee e[3];

    for (int i = 0; i < 3; i++)
        scanf("%s %d %d", e[i].name, &e[i].id, &e[i].salary);

    fp = fopen("employee.dat", "wb");
    fwrite(e, sizeof(struct Employee), 3, fp);
    fclose(fp);

    struct Employee r[3];
    fp = fopen("employee.dat", "rb");
    fread(r, sizeof(struct Employee), 3, fp);
    fclose(fp);

    for (int i = 0; i < 3; i++)
        printf("Name: %s  ID: %d  Salary: %d\n", r[i].name, r[i].id, r[i].salary);

    return 0;
}
