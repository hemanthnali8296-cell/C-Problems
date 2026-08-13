#include<stdio.h>
#include<stdlib.h>
#define NULL 0
int main(){
	int *p,*t,table;
	int size;
	printf("\n What is the size of table?");
    scanf("%d",&size);
	printf("\n");
	 
	 // --------------memory allocation------------
	 if (table= (int *)malloc(size*sizeof(int))==NULL){
	 	printf("No Space available\n");
	 	exit(1);
	 }	
	 printf("\n Address of the first byte is %u\n",t);
	 //reading table value
	 printf("\n Input table Values\n");
	 for(p=t;p<t+size;p++){
	 	scanf("%d",p);
	 }
	 //printing table values in reverse order;
	 for(p=t+size-1;p>=t;p--){
	 	printf("%d is stored at address %u \n",*p,p);
	 }
}
