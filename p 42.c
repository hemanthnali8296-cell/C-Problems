#include <stdio.h>
int main() {
    int n,i,j,arr[100],temp;
    printf("Enter the value:");
    scanf("%d",&n);//3
    for(i=0;i<n;i++){//{1,2,3

        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++){ // 0  3-1=2 
        for(j=i+1;j<n;j++){  //1  1<3 
            if(arr[i]>arr[j]){//  
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
for(i=0;i<n;i++){
    printf("%d",arr[i]);
}
    return 0;
}