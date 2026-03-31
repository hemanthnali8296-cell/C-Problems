#include <stdio.h>

int main() {
    int n;

    // Input size
    printf("Enter number of days: ");
    scanf("%d", &n);

    int arr[n];

    // Input array
    printf("Enter performance values:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Start from last element
    int max = arr[n - 1];

    printf("Leader elements are:\n");
    printf("%d ", max);

    // Traverse from right to left
    for(int i = n - 2; i >= 0; i--) {
        if(arr[i] >= max) {
            printf("%d ", arr[i]);
            max = arr[i];
        }
    }

    return 0;
}