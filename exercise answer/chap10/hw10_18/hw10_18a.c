/* hw10_18a.c */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   char *ptr="We are best friends.";
   int count=0;
   
   while(*(ptr+count)!='\0')
      count++;
   printf("ptr���V���r��̡A�@��%d�Ӧr��\n",count); 
   
   system("pause");
   return 0;
}

/* output----------------------
ptr���V���r��̡A�@��20�Ӧr��
-----------------------------*/
