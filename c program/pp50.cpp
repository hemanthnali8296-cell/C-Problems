#include<stdio.h>
int add(int a,int b){
	 int result=a+b;
	return result;
}
int sub(int a,int b){
	int result=a-b;
	return result;
}
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	printf("%d\n",add(a,b));
	printf("%d\n",sub(a,b));
}
