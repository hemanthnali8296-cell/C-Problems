#include<stdio.h>
int main(){
    int n,hours;
    scanf("%d",&n);
    int i=0,sum=0,count=0;
    while(i<n){
        scanf("%d",&hours);
        sum+=hours;
        if(hours>2){
            count++;
        }
          i++;
    }
    printf("Total Delay: %d\n",sum);
    printf("Delayed Days: %d",count);
    return 0;
}