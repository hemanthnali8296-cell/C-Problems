#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int i=0,status;
    int str=0,max=0;
    while(i<n){
        scanf("%d",&status);
        if(status==0){
            str++;
            if(str>max){
                max=str;
            }
        }else{
            str=0;
        }
        i++;
    }
    printf("Longest Failure Streak: %d",max);
    
    return 0;
}