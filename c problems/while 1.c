#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int noise;
    int i=0;
    int violations=0,str=0,lon=0;
    while(i<n){
        scanf("%d",&noise);
        if(noise>70){
            violations++;
            str++;
            if(str>lon){
                lon=str;
            }
        }else{
            str=0;
        }
        i++;
    }
    printf("Noise Violation:%d\n",violations);
    printf("Longest Violation Streak:%d",lon);
    return 0;
}