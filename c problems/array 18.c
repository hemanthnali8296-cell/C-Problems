#include <stdio.h>
int longestGrowth(int arr[],int n) {
    int maxLength = 1;
    int currentLength = 1;
    for (int i=1;i<n;i++) {
        if (arr[i]>arr[i - 1]) {
            currentLength++;
        } else {
            currentLength=1;
        }
        if (currentLength>maxLength) {
            maxLength=currentLength;
        }
    }
    return maxLength;
}
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
        for (int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    int result=longestGrowth(arr,n);
    printf("Longest Continuous Growth Length: %d\n", result);
    return 0;
}