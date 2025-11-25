#include <stdio.h>

void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high], i = low;
    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            swap(&arr[i], &arr[j]);
            i++;
        }
    }
    swap(&arr[i], &arr[high]);
    return i;
}

int quickselect(int arr[], int low, int high, int k) {
    if (low == high) return arr[low];
    int p = partition(arr, low, high);
    int count = p - low + 1;
    if (count == k) return arr[p];
    else if (k < count) return quickselect(arr, low, p - 1, k);
    else return quickselect(arr, p + 1, high, k - count);
}

int main() {
    int n, k;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &k);

    printf("%d", quickselect(arr, 0, n - 1, k));
    return 0;
}
