/* hw12_18a.c */
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <io.h>
#include <sys/stat.h>
int main(void)
{   
   char str[6];
   int arr[]={11326,4445,15589,23740,76840};
   int i,f1; 
   
   f1=creat("c:\\prog\\hw12_18.txt",S_IWRITE);
   
   if(f1!=-1)
   {
      for(i=0;i<5;i++)
      {
         strcpy(str,itoa(arr[i],str,10));
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
