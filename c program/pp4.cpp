#include<stdio.h>
int main(){
	int A,B;
	int result;
	char operation;
	printf("Enter The VAlue of A:\n");
	scanf("%d",&A);
	printf("Enter theb operation\n");
	scanf("%c",&operation);
	printf("Enter the value of B:\n");
	scanf("%d",&B);
	if(operation == '+'){
		result =A+B;
		printf("A= %d %c %d= %d",A,operation,B,result);
	}
	
	
}
