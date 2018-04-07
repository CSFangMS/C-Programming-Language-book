/* hw13_16.c */
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
   FILE *fptr;
   char ch;
	
   if(argc>1)	/* 命令列有引數輸入時 */
   {
      fptr=fopen(argv[1],"r");	/* 開啟檔案 */
      if(fptr!=NULL)	/* 檔案開啟成功 */
      {
         while((ch=getc(fptr))!=EOF)/* 判斷是否到達檔尾 */
            printf("%c",ch);	/* 一次印出一個字元 */
         printf("\n");
         fclose(fptr);	/* 關閉檔案 */
      }
      else	/* 檔案開啟失敗 */
         printf("File Opening Failure!!\n");
   }
   system("pause");
   return 0;
}

/* output-----------------------------------
C:\Documents and Settings\wien> cd c:\prog
C:\prog>hw13_16 welcome.txt
Welcome to the
world of C language
-------------------------------------------*/
