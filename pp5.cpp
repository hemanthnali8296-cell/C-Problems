#include <stdio.h>
int main() {
     int A,B;
char OPERATION;
int result;
printf ("Enter a value for A :  ");
scanf ("%d",&A);
printf("\n");
printf ("Enter a value for B :  ");
scanf ("%d",&B);
printf("\n");
printf("Enter an operation  :  ");
scanf(" %c",&OPERATION);
  if (OPERATION == '+')
  { 
     result =A+B;
    printf ("A=%d %c %d =%d", A ,OPERATION ,B,result);
   // printf("%d",result);
  }

    

  

    return 0;
}
