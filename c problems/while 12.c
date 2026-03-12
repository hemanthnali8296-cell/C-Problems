#include<stdio.h>
int main(){
    int n,power,i=0;
    scanf("%d",&n);
    int max=0,count=0;
    while(i<n){
        scanf("%d",&power);
        if(power>max){
            max=power;
        }if(power>5){
        count++;
    }
        i++;
    }
    printf("Maximu  Usage: %d\n",max);
    
    printf("Surge Hours: %d",count);
    return 0;
}