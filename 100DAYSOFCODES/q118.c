#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    long long sum = 0, total = (long long)n * (n + 1) / 2;

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("%lld", total - sum);
    return 0;
}
