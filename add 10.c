#include <stdio.h>
int main() {
   int size;
   scanf("%d",&size);
   int arr[size];
   for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
   }
   int size_of =size/2;
   for(int i=0;i<size;i++){
        if(arr[i]>size_of){
            printf("%d",arr[i]);
        }
   }
    
    return 0;
}