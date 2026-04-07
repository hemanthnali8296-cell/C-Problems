#include <stdio.h>

int findEquilibrium(int arr[], int n) {
    int total = 0;

    // Step 1: Find total sum
    for(int i = 0; i < n; i++) {
        total += arr[i];
    }

    int leftSum = 0;

    // Step 2: Traverse array
    for(int i = 0; i < n; i++) {
        total = total - arr[i];  // Now total acts as right sum

        if(leftSum == total) {
            return i;  // equilibrium index
        }

        leftSum += arr[i];
    }

    return -1;
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int result = findEquilibrium(arr, n);

    printf("%d", result);

    return 0;
}