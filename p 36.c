#include <stdio.h>
int main() {
    int n,arr[100], sum=0;
    int i;
    printf("Enter the value:");
    scanf("%d",&n);
    for(  i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }for(  i=0;i<n;i++){
        if(arr[i]%2!=0){
        printf("%d",arr[i]);
        sum++;
    }
    }
    return 0;
}