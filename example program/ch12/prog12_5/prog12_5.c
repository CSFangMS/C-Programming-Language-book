/* prog12_5, �ƻs�ɮפ��e */
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <io.h>
#include <sys/stat.h>
#define SIZE 512        /* �]�wread()�@���iŪ�����̤j�줸�լ�512 */
int main(void)
{
   char buffer[SIZE];
   int f1,f2,bytes;

   f1=open("welcome.txt",O_RDONLY|O_TEXT);
   f2=creat("output2.txt",S_IWRITE);
	
   if((f1!=-1)&&(f2!=-1))		/* �����ɮ׬O�_�}�Ҧ��\ */
   {
      while(!eof(f1))			/*  �p�G�٨S��Ū���ɮץ��� */
      {
         bytes=read(f1,buffer,SIZE);	/* �qf1Ū����� */
         write(f2,buffer,bytes);		/* �N��Ƽg�J�ɮ�f1�� */
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

