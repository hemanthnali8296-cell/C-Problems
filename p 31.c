#include <stdio.h>
int main() {
   int n,i,arr[100];
   printf("Enter the value:");
   scanf("%d",&n);
   for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
   }
   printf("array elements:");
   for(i=0;i<n;i++){
   printf("%d",arr[i]);
   }
    return 0;
}


