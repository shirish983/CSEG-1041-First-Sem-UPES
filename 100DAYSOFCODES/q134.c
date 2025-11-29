#include <stdio.h>

enum Status { SUCCESS, FAILURE, TIMEOUT };

int main() {
    enum Status s;
    scanf("%d", &s);

    if (s == SUCCESS)
        printf("Operation Successful\n");
    else if (s == FAILURE)
        printf("Operation Failed\n");
    else if (s == TIMEOUT)
        printf("Operation Timed Out\n");
    else
        printf("Invalid Status\n");

    return 0;
}
