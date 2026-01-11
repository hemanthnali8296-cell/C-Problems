#include <stdio.h>
int main() {
    int n,i,j,prime;
    int sum=0;
    printf("Enter the n value:");
    scanf("%d",&n);

    for(i=2;i<=n;i++){
        prime =1;
        for(j=2;j<=i/2;j++){
            if(i%j==0){
                prime =0;
                break;
            }
        }
        if(prime==1){
            sum= sum+i;
        }
    }
    printf("%d",sum);
    
    return 0;
}