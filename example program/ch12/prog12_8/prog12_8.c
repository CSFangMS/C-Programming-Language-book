/* prog12_8, ��J��ƨ�G�i���ɮ� */
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <io.h>
#include <sys/stat.h>
int main(void)
{  
   int f1;
   struct data	  			/* �w�q���cdata */
   {
      char name[10];
      int math;
   }student={"Jenny",96};		/* �ŧi���c�ܼ�data�A�ó]�w��� */	   
   
   f1=open("score.bin",O_CREAT|O_WRONLY|O_BINARY,S_IREAD);
   if((f1!=-1))		/* �ɮ׶}�Ҧ��\ */
   {
      write(f1,&student,sizeof(student));
      close(f1);
      printf("��Ƥw�g�J�ɮ�!!\n");
   }
   else	
      printf("�ɮ׶}�ҥ���!!\n");
   
   system("pause");
   return 0;
}

