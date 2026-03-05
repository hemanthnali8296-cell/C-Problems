#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i=0,order;
    int  s=0,c=0;
    while(i<n){
        scanf("%d",&order);
        if(order==1){
            s++;
        }else{
            c++;
        }
        i++;
    }
    printf("Successful: %d\n",s);
    printf("Cancelled: %d\n",c);
    if(c>s){
        printf("Status: Risk");
    }else{
        printf("Status: Safe");
    }
    return 0;
}