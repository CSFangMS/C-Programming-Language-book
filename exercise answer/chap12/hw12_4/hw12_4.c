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
      printf("�ɮ׫�������!!\n");
      printf("�`�@��%d�Ӧr��\n",count); 
   }
   else
      printf("�ɮ׶}�ҥ���!!\n"); 
   
   system("pause");
   return 0;
}

/* output------------
�ɮ׫�������!!
�`�@��34�Ӧr��
-------------------*/
