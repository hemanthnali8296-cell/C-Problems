#include <stdio.h>
int main() {
   int n,i;
   int largest,secondlargest;
     scanf("%d",&n);
     int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }largest = arr[0];
       secondlargest= -1;
     for(i=1;i<n;i++){
        if(arr[i]>largest){
            secondlargest=largest;
            largest = arr[i];
        }else if(arr[i]<largest&&arr[i]>secondlargest){
            secondlargest = arr[i];
        }
     } 
     printf("%d",secondlargest);
    return 0;
}