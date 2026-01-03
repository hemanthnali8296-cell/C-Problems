#include <stdio.h>
int main() {
   int n,arr[100],num,found=0;
   int i;
   printf("Enter the value:");
   scanf("%d",&n);
   for(  i=0;i<n;i++){
    scanf("%d",&arr[i]);
   }
   scanf("%d",&num);
   for(i=0;i<n;i++){
    if(arr[i]==num){
        found=1;
        break;
    }
   }
   if(found==1){
    printf("found");
   }else{
    printf("Not found");
   }
    
    return 0;
}