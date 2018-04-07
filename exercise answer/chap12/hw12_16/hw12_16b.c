/* hw12_16b.c */
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <io.h>
#include <sys/stat.h>
int main(void)
{   
   int num,sum=0,bytes;
   int f1; 
   char buffer[3];  
   
   f1=open("c:\\prog\\rand.bin",O_RDONLY|O_BINARY);
   
   if(f1!=-1)
   {
      while(!eof(f1))
      {
         bytes=read(f1,buffer,3);
         num=atoi(buffer);
         printf("%02d ",num); 
         sum+=num;
      }
      close(f1);
      printf("\n檔案讀取完成!!\n"); 
      printf("平均值=%.2f\n",(float)sum/10); 
   }
   else
      printf("檔案開啟失敗!!\n");

   system("pause");
   return 0;
}

/* output---------------------
10 04 15 05 02 13 07 15 03 01
檔案讀取完成!!
平均值=7.50
----------------------------*/
