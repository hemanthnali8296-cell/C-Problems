#include<stdio.h>
int main(){
    int n,hours;
    scanf("%d",&n);
    int i=0,total=0,burnout=0;
    while(i<n){
        scanf("%d",&hours);
        total+=hours;
        if(hours>4){
            burnout++;
        }
        i++;
    }
    printf("Total Overtime: %d\n",total);
    printf("Burnout Days: %d",burnout);
    return 0;
}