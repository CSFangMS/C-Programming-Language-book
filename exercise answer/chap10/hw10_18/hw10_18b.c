/* hw10_18b.c */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   char *ptr="We are best friends.";
   int i=0,count=0;
   
   printf("字串=");
   puts(ptr);   
   
   while(*(ptr+i) != '\0')
   {   
      if((*(ptr+i)>=97) && (*(ptr+i)<=122))
         count++;
      i++;
   }
   printf("字串裡小寫字母的字元數為:%d\n",count); 
   
   system("pause");
   return 0;
}

/* output--------------------
字串=We are best friends.
字串裡小寫字母的字元數為:15
---------------------------*/
