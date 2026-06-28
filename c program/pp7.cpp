#include<stdio.h>
int main(){
	char ope;
		double first,second;
		printf("Enter an Operator (+,-,*,/)");
		scanf("%c",&ope);
		printf("Enter the first operand:\n");
		scanf("%lf",&first);
		printf("Enter the second Operand:\n");
		scanf("%lf",&second);
		switch(ope){
			case '+':
				printf("%.1lf + %.1lf = %.1lf",first,second,first+second);
				break;
				case '-':
				printf("%.1lf - %.1lf = %.1lf",first,second,first-second);
				break;
				case '*':
				printf("%.1lf * %.1lf = %.1lf",first,second,first*second);
				break;
				case '/':
				printf("%.1lf / %.1lf = %.1lf",first,second,first/second);
				break;
		default :
			printf("Error Oparator is n ot correct");
				
		}
}
