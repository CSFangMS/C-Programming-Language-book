/* hw12_16a.c */
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <io.h>
#include <sys/stat.h>
int main(void)
{   
   int i,rnd;
   int f1; 
   char str[3];  
   
   f1=creat("c:\\prog\\rand.bin",O_CREAT|O_WRONLY|O_BINARY);
   
   if(f1!=-1)
   {
      for(i=0;i<10;i++)
      {
         rnd=rand()%16+1;
         strcpy(str,itoa(rnd,str,10));
         write(f1,str,sizeof(str));
      }
      close(f1);
      printf("�ɮ׼g�J����!!\n"); 
   }
   else
      printf("�ɮ׶}�ҥ���!!\n");

   system("pause");
   return 0;
}

/* output-----------
�ɮ׼g�J����!!
------------------*/
