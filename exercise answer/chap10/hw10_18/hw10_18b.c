/* hw10_18b.c */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   char *ptr="We are best friends.";
   int i=0,count=0;
   
   printf("�r��=");
   puts(ptr);   
   
   while(*(ptr+i) != '\0')
   {   
      if((*(ptr+i)>=97) && (*(ptr+i)<=122))
         count++;
      i++;
   }
   printf("�r��̤p�g�r�����r���Ƭ�:%d\n",count); 
   
   system("pause");
   return 0;
}

/* output--------------------
�r��=We are best friends.
�r��̤p�g�r�����r���Ƭ�:15
---------------------------*/
