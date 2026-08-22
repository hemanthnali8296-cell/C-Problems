#include<stdio.h>
int main(){
	int num,i;
	scanf("%d",&num);
	for(i=0;i<num;i++){
		for(int j=0;j<=i;j++){
printf("* ");
	}
	printf("\n");	
	}
	for(i=0;i<=num;i++){
		for(int j=num-1;j>i;j--){
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
