#include<stdio.h>
#define pi 3.14
#include<math.h>
int main(){
	//Calculating Area of  a circle
	//formula is 2*pi*sqr(r)
	
	int r;
	float area;
	float volume;
	printf("What is the Radius?\n:");
	scanf("%d",&r);
	area = pi*pow(r,2);
	printf("The Area of The Circle with radius %d  is =%f\n",r,area);
	volume = (4/3)*pi*pow(r,3);
	printf("The Volume of The Sphere with radius %d  is =%.2f\n",r,volume);
	printf("The Volume of The Sphere with radius %d  is =%.3f",r,volume);
}
