#include<stdio.h>
#define ROWMAX 12
#define COLMAX 10
int main(){
	int row,column,y;
	row=1;
	printf("Multiplication Table \n");
	printf("=============================\n");
	do//outer loop start
	{
		column=1;
		do//inner loop start;
		{
			y=row*column;
			printf("%5d",y);
			column=column+1;
		}
		while(column<=COLMAX);//inner loop Over
		printf("\n");
		row =row+1;
	}
	while(row<=ROWMAX);
	printf("--------------------------------------\n");
}
