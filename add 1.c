#include<stdio.h>
int main(){
    int n;
    printf("Enter the value:");
    scanf("%d",&n);
    int sum=0;
    int m=n;
      while(m!=0){
        int rem=m%10;
        int cube=rem*rem*rem;
        sum=sum+cube;
        m/=10;
      }
      if(sum==n){
        printf("Armstrong");
      }else{
        printf("Not an Armstrong");
      }
}