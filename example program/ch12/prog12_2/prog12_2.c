/* prog12_2, �����ɮפ��e��䥦���ɮ� */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   FILE *fptr1,*fptr2;     /* �ŧi���V�ɮת�����fpt1�Pfpt2 */
   char ch;
	
   fptr1=fopen("welcome.txt","r");	/* �}�ҥiŪ�����ɮ� */
   fptr2=fopen("output.txt","w");	/* �}�ҥi�g�J���ɮ� */
	
   if((fptr1!=NULL) && (fptr2!=NULL))		/* �p�G�}�ɦ��\ */
   {
      while((ch=getc(fptr1))!=EOF) 			/* �P�_�O�_��F�ɧ� */
         putc(ch,fptr2);		/* �N�r��ch�g��fptr2�ҫ��V���ɮ� */
      fclose(fptr1);			/* ����fptr1�ҫ��V���ɮ� */
      fclose(fptr2); 			/* ����fptr2�ҫ��V���ɮ� */
      printf("�ɮ׫�������!!\n");
   }
   else	
      printf("�ɮ׶}�ҥ���!!\n");

   system("pause");
   return 0;
}

