#include<stdio.h>
#include<math.h>
int add(int a,int b,int c,int d){
	return (a+b+c+d);
}
  float mul(float a,float b,float c,float d){
 	return (a*b*c*d);
 }
  int sub(int a,int b,int c,int d){
  	return (a-b-c-d);
  }
  int div(int a,int b,int c,int d){
  	return pow(a,b)+pow(c,d);
  }
  int power(int a,int b,int c,int d){
  	return(a^b^c^d);
  }
  int main(){
  	int a,b,c,d;
  	printf("Enter the values:\n");
  	scanf("%d %d %d %d",&a,&b,&c,&d);
  	printf("Addition :%d\n",add(a,b,c,d));
  	printf("Subtraction: %d\n",sub(a,b,c,d));
  	printf("MULTIPLICATION: %.2f\n",mul(a,b,c,d));
  	printf("Division%d\n",div(a,b,c,d));
  	printf("a^b+c^d = %d\n",power(a,b,c,d));
  }
