#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    int max_end = arr[0], max_sum = arr[0];

    for (int i = 1; i < n; i++) {
        if (max_end + arr[i] > arr[i]) max_end += arr[i];
        else max_end = arr[i];
        if (max_end > max_sum) max_sum = max_end;
    }

    printf("%d", max_sum);
    return 0;
}
