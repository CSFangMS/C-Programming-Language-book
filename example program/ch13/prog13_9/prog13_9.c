/* prog13_9, �ƻs�ɮפ��e */
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
   FILE *fptr1,*fptr2;
   char ch;
	
   if(argc==3)	/* �R�O�C��3�Ӥ޼ƿ�J�� */
   {
      fptr1=fopen(argv[1],"r");	/* �}���ɮ� */
      fptr2=fopen(argv[2],"w");
      if((fptr1!=NULL) && (fptr2!=NULL))	/* �ɮ׶}�Ҧ��\ */
      {
         while((ch=getc(fptr1))!=EOF)		/* �P�_�O�_��F�ɧ� */
            putc(ch,fptr2);					/* �@�������@�Ӧr�� */
         fclose(fptr1);
         fclose(fptr2);
         printf("�ɮ׫�������!!\n");
      }
      else	
         printf("�ɮ׶}�ҥ���!!\n");
   }
   else
      printf("�Э��s�ˬd��J!!\n");
   system("pause");
   return 0;
}

