/* hw12_4.c */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{ 
   FILE *fptr1,*fptr2;
   char ch;
   int count=0;
   
   fptr1=fopen("c:\\prog\\welcome.txt","r");
   fptr2=fopen("c:\\prog\\output.txt","w");
   
   if((fptr1!=NULL) && (fptr2!=NULL))
   {
      while((ch=getc(fptr1))!=EOF)
      {
         putc(ch,fptr2);
         count++;
      }
      fclose(fptr1);				
      fclose(fptr2);
      printf("檔案拷貝完成!!\n");
      printf("總共有%d個字元\n",count); 
   }
   else
      printf("檔案開啟失敗!!\n"); 
   
   system("pause");
   return 0;
}

/* output------------
檔案拷貝完成!!
總共有34個字元
-------------------*/
