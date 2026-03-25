#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int sales[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&sales[i]);
    }
    int isSorted=1;
    for(int i=0;i<n-1;i++) {
        if(sales[i]>sales[i+1]) {
            isSorted=0;
            break;
        }
    }
    if(isSorted){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}