#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &k);

    int q[n], front = 0, rear = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) q[rear++] = i;
        if (front < rear && q[front] <= i - k) front++;
        if (i >= k - 1) {
            if (front < rear) printf("%d ", arr[q[front]]);
            else printf("0 ");
        }
    }
    return 0;
}
