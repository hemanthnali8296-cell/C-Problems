#include<stdio.h>
int main(){
    int capacity,n;
    int i=0;
    scanf("%d %d",&capacity,&n);
    int change,occupied=0,critical=0;
    int threshold =capacity*0.9;
    while(i<n){
        scanf("%d",&change);
        occupied+=change;
        if(occupied>threshold){
            critical++;
        }
        i++;
    }
    printf("Final Occupied Beds: %d\n",occupied);
    printf("Critical Hours: %d\n",critical);
    return 0;
}