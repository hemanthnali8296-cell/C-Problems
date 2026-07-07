#include<stdio.h>
int main(){
   long long int number,digit,count=0;
	printf("Enter The Number:\n");
	scanf("%lld",&number);
	printf("Entered Number is:%lld\n",number);
	while(number!=0){
	number/=10;
		digit=number%10;
		count++;
	}
	printf("This Number contains %lld Digits",count);
}
