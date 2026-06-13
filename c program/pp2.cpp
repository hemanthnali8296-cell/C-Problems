#include<stdio.h>
int main(){
	int A,B,C;
	printf("ENTER THE NUMBER:");
	scanf("%d",&A);
	printf("ENTER THE ANOTHER NUMBER:");
	scanf("%d",&B);
	if(A>B)
	printf("A=%d and B=%d - therefore A is Grater",A,B);
	else if(A<B)
	printf("A=%d and B=%d - therefore A is Smaller",A,B);
	else
	printf("A=%d and B=%d - therefore A is Equal",A,B);
}
