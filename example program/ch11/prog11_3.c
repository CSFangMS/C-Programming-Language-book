/* prog11_3, ���c�ܼƪ���ȳ]�w */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   struct data	/* �w�q���cdata */
   {
      char name[10];
      int math;
   };
   struct data student={"Mary Wang",74};  /* �]�w���c�ܼƪ�� */

   printf("�ǥͩm�W: %s\n",student.name);
   printf("�ƾǦ��Z: %d\n",student.math);

   system("pause");
   return 0;
}

