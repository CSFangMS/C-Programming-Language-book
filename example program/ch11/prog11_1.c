/* prog11_1, ���c�ܼƪ���J�P��X */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   struct data		/* �w�q���cdata */
   {
      char name[10];
      int math;
   } student; 		/* �ŧidata���A�����c�ܼ�student */
   
   printf("�п�J�m�W: "); 
   gets(student.name);    			/* ��J�ǥͩm�W */
   printf("�п�J���Z :"); 
   scanf("%d",&student.math);  	/* ��J�ǥͦ��Z */
     
   printf("�m�W:%s\n", student.name); 
   printf("���Z:%d\n", student.math); 
   
   system("pause");
   return 0;
}

