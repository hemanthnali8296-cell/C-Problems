#include <stdio.h>
int main() {
    int walletbalence,n;
    scanf("%d %d",&walletbalence,&n);
    int i=0,purchase,success=0;
    while(i<n){
        scanf("%d ",&purchase);
        if(walletbalence>=purchase){
            walletbalence-=purchase;
            success++;
        }else{
            break;
        }
        i++;
    }
    printf("Successful Purchases: %d\n",success);
    printf("Final Balance: %d",walletbalence);
    return 0;
}