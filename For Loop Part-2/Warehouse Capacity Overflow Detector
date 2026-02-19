#include<stdio.h>
int main(){
     int capacity,n,overflow,ov;
     int sum=0,count=0;
     scanf("%d %d",&capacity,&n);
     for(int i=0;i<n;i++){
          scanf("%d",&overflow);
          sum+=overflow;
          ov=capacity-sum ;
          if(sum>capacity){
               count++;
          }
     }
     printf("Remaining Capacity: %d\n",ov);
     printf("Overflow Days: %d",count);
return 0;
}
