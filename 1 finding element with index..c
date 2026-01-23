#include<stdio.h>
int main(){
    int n,target,found=1;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&target);
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            found=i;
            break;
        }
        
    }if(found!=1){
        printf("Element is found by index: %d",found);
    }else{ printf("Element Not found");}
    return 0;
}