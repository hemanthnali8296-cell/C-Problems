#include<stdio.h>
int main(){
	//Calculate marks of these subjects;
	int Telugu,Eng,Maths,Science,Social,Tamil;
	printf("Marks of the subjects------------\n");
		scanf("%d %d %d %d %d %d",&Telugu,&Eng,&Maths,&Science,&Social,&Tamil);
	int Total= Telugu+Eng+Maths+Science+Social+Tamil;
	int avg=Total/6;
	printf("You Scored %d Marks in Telugu\n",Telugu);
	printf("You Scored %d Marks in English\n",Eng);
	printf("You Scored %d Marks in Maths\n",Maths);
	printf("You Scored %d Marks in Science\n",Science);
	printf("You Scored %d Marks in Social\n",Social);
	printf("You Scored %d Marks in Tamil\n",Tamil);
	printf("The Total marks of All Subjects:%d\n",Total);
	printf("Average of the All Subjects:%d",avg);
}
