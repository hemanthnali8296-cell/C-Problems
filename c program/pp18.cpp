#include<stdio.h>
int count(long long int num){
	int count=0;
	if(num==0){
		return 1;
	}
	for(;num!=0;num/=10){
		count++;
	}
	return count;
}
int main(){
	long long int num;
	printf("Enter The Number:\n");
	scanf("%lld",&num);
	printf("You Entered Number:%lld\n",num);
	printf("The Number of digits in the number: %lld",count(num));
}
