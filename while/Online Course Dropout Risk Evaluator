#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int hours,i=0,inactiveweeks=0;
    while(i<n){
        scanf("%d",&hours);
        if(hours==0){
            inactiveweeks++;
        }
        i++;
    }
    printf("Inactive weeks: %d\n",inactiveweeks);
    if(inactiveweeks>=3){
        printf("Risk Status: High");
    }else{
        printf("Risk Status: Low");
    }
    return 0;
}
