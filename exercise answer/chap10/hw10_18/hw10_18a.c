/* hw10_18a.c */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   char *ptr="We are best friends.";
   int count=0;
   
   while(*(ptr+count)!='\0')
      count++;
   printf("ptr指向的字串裡，共有%d個字元\n",count); 
   
   system("pause");
   return 0;
}

/* output----------------------
ptr指向的字串裡，共有20個字元
-----------------------------*/
