#include <stdio.h>

int main() {
    int n, i, j, count, found = -1;
    scanf("%d", &n);
    int nums[n];
    for(i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    for(i = 0; i < n; i++) {
        count = 0;
        for(j = 0; j < n; j++) {
            if(nums[j] == nums[i]) count++;
        }
        if(count > n / 2) {
            found = nums[i];
            break;
        }
    }
    printf("%d", found);
    return 0;
}
