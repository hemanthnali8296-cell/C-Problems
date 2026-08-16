#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main() {
   char *buffer;
   if((buffer = (char *)malloc(10))==NULL){
   printf("malloc failed.\n");
   exit(1);
   }
   printf("Buffer of size %d created \n",_msize(buffer));
   strcpy(buffer,"MOGILICHERLA");
   printf("\n Buffer contains:%s \n",buffer);
   if((buffer=(char *)realloc(buffer,15))==NULL)
   {
      printf("Reallocation failed.\n");
      exit(1);
   }
   printf("\n Buffer size modified");
   printf("\n Buffer still contains:%s\n",buffer);
   return 0;
}
