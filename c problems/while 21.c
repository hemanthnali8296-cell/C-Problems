#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int count;
    int i=0;
    int totalCongestion=0,maxStreak=0,currentStreak=0;
    while (i<n){
        scanf("%d",&count);
        if(count>20) {
            totalCongestion++;
            currentStreak++;
            if(currentStreak>maxStreak){
                maxStreak=currentStreak;
            }
        }else{
            currentStreak=0;
        }
        i++;
    }
    printf("Congestion Minutes: %d\n",totalCongestion);
    printf("Longest Congestion Streak: %d\n",maxStreak);
    return 0;
}