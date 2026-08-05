#include<stdio.h>
#include<ctype.h>
int main(){
	char a;
	int x;
	float p,q;
	 a='A';
	 x=125;
	 p=10.25,q=18.76;
	 printf("%c is stored at addr %o.\n",a,&a);
	 printf("%d is stored at addr %o.\n",x,&x);
	 printf("%f is stored at addr %o.\n",p,&p);
	 printf("%f is stored at addr %o.\n",q,&q);
	 
}
