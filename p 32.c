#include <stdio.h>
int main() {
    int n,i,arr[100],sum=0;
    printf("Enter the value:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("sum of Array elements: ");
    printf("%d",sum);
    
    return 0;
}