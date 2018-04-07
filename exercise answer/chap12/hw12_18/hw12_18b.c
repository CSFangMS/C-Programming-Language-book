/* hw12_18b.c */
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <io.h>
#include <sys/stat.h>
int main(void)
{   
   int arr[]={11326,4445,15589,23740,76840};
   int i,f1; 
   
   f1=creat("c:\\prog\\hw12_18.bin",S_IWRITE);
   
   if(f1!=-1)
   {      
      write(f1,arr,sizeof(arr));
      
      close(f1);
      printf("檔案寫入完成!!\n"); 
   }
   else
      printf("檔案開啟失敗!!\n");

   system("pause");
   return 0;
}

/* output-----------
檔案寫入完成!!
------------------*/
