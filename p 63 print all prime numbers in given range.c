#include <stdio.h>
int main() {
    int start,end,i,j,prime;
     printf("Enter the starting:");
     scanf("%d",&start);
     printf("Enter the ending:");
     scanf("%d",&end);

     for(i=start;i<=end;i++){
        if(i<=1)
       continue;
       prime=1;
       for(j=2;j<=i/2;j++){
        if(i%j==0){
            prime=0;
            break;
        }
       }if(prime ==1){
        printf("%d ",i);
       }
     }
    return 0;
}