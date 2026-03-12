#include<stdio.h>
int main() {
    int fuel, n;
    scanf("%d %d", &fuel, &n);
    int i=0,trips=0;
    int consume;
    int sum=0;
    int temp=fuel;
    while(i<n) {
        scanf("%d",&consume);
        if(sum+consume<=fuel) {
            sum+=consume;
            temp=fuel-sum;
            trips++;
        }
        i++;
    }
    printf("Completed Trips: %d\n", trips);
    printf("Remaining Fuel: %d\n", temp);
    return 0;
}