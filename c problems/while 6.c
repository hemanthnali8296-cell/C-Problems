#include<stdio.h>
int main(){
    int weight,n;
    scanf("%d %d",&weight,&n);
    int w,i=0;
    int sum=0,count=0;
    while(i<n){
        scanf("%d",&w);
        sum+=w;
        if(sum<=weight){
            count++;
        }
         i++;
    }
    if(weight>sum){
        printf("Passengers Allowed: %d\n",count);
        printf("Overload: Yes");
    }else{
        printf("Passengers Allowed: %d\n",count);
        printf("Overload: No");
    }
    return 0;
}