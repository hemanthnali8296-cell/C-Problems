#include<stdio.h>
int main(){
	char grade;
	scanf("%c",&grade);
	switch(grade){
		case'A':
			printf("Excellent\n");
			break;
	    case 'B':
	    case 'c':
		     printf("Well done\n");
			 break;
		case 'D':
		     printf("You Passed\n");
			 break;
		case 'F':
		     printf("Better Try Again\n");
			 break;
		default :
		      printf("Inavalid Grade");	 	
	}
}
