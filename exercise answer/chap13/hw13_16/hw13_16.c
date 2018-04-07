/* hw13_16.c */
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
   FILE *fptr;
   char ch;
	
   if(argc>1)	/* �R�O�C���޼ƿ�J�� */
   {
      fptr=fopen(argv[1],"r");	/* �}���ɮ� */
      if(fptr!=NULL)	/* �ɮ׶}�Ҧ��\ */
      {
         while((ch=getc(fptr))!=EOF)/* �P�_�O�_��F�ɧ� */
            printf("%c",ch);	/* �@���L�X�@�Ӧr�� */
         printf("\n");
         fclose(fptr);	/* �����ɮ� */
      }
      else	/* �ɮ׶}�ҥ��� */
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
