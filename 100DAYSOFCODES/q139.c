#include <stdio.h>

enum Status { SUCCESS=1, FAILURE=0, TIMEOUT=5 };

int main() {
    printf("SUCCESS = %d\n", SUCCESS);
    printf("FAILURE = %d\n", FAILURE);
    printf("TIMEOUT = %d\n", TIMEOUT);
    return 0;
}
