/* prog12_9, Ū���G�i���ɮת����e */
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <io.h>
#include <sys/stat.h>
int main(void)
{ 
   int f1;
   struct data	
   {
      char name[10];
      int math;
   }student;   		/* �ŧi���c�ܼ�student */
   f1=open("score.bin",O_RDONLY | O_BINARY);
   
   if((f1!=-1))		/* �ɮ׶}�Ҧ��\ */
   {
      read(f1,&student,sizeof(student)); /* Ū����ƨõ�student�s�� */
      printf("student.name=%s\n",student.name); 
      printf("student.math=%d\n",student.math); 
      close(f1);
   }
   else	/* �ɮ׶}�ҥ��� */
      printf("�ɮ׶}�ҥ���!!\n");
   
   system("pause");
   return 0;
}

