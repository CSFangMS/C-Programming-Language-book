/* hw12_9.c */
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <io.h>
#include <sys/stat.h>
#define SIZE 16
int main(void)
{   
   char buffer[SIZE];
   int f1,f2,bytes;
   
   f1=open("c:\\prog\\welcome.txt",O_RDONLY|O_TEXT);
   f2=creat("c:\\prog\\output2.txt",S_IWRITE);
   
   if((f1!=-1)&&(f2!=-1))
   {
      while(!eof(f1))
      {
         bytes=read(f1,buffer,SIZE);
         write(f2,buffer,bytes);
      }
      close(f1);
      close(f2);
      printf("�ɮ׫�������!!\n"); 
   }
   else
      printf("�ɮ׶}�ҥ���!!\n");

   system("pause");
   return 0;
}

/* output---------
�ɮ׫�������!!
----------------*/
