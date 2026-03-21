#include <stdio.h>
#include <limits.h>
int main() {
    int n,MIN;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    int largest=MIN;
    int secondLargest=MIN;
    for(int i=0;i<n;i++) {
        if(arr[i]>largest) {
            secondLargest=largest;
            largest=arr[i];
        }
        else if(arr[i]<largest&&arr[i]>secondLargest) {
            secondLargest=arr[i];
        }
    }
    if(secondLargest==MIN){
        printf("No second highest salary\n");
    }else{
        printf("%d\n", secondLargest);}
    return 0;
}