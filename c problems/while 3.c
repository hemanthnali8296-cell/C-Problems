#include<stdio.h>
int main(){
    int total,n;
    scanf("%d %d",&total,&n);
    int data;
    data=total; 
    int used,sum=0,remaining=0,count=0;
    int i=0;
    while(i<n){
        scanf("%d",&used);
        sum+=used;
        if(sum<=total){
            count++;
            remaining=data-sum;
        }   
        i++;
    }
    printf("Data used : %d\n",count);
    if(remaining<=0){
        printf("Remaining data :0 GB");
    }
    else{
        printf("Remaining data : %dGB",remaining);
    }
    return 0;
}