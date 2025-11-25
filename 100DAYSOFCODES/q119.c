#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    for (int i = 0; i < n; i++) {
        int idx = arr[i];
        if (arr[idx] < 0) {
            printf("%d", idx);
            return 0;
        }
        arr[idx] = -arr[idx];
    }

    return 0;
}
