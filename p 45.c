#include <stdio.h>
int main() {

int n;
int i;
  int sum=0;
float average;
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
    sum =sum + arr[i];
}
sum=sum+arr[i];
 average =(float) sum / n;
printf(" %d %.2f",sum,average);
    
    return 0;
}