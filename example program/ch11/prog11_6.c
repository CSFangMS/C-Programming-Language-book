/* prog11_6, ���c�}�C���j�p */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   struct data		/* �w�q���c */
   {
       char name[10];
       int math;
   }student[10];
   
   printf("sizeof(student[3])=%d\n",sizeof(student[3]));
   printf("sizeof(student)=%d\n",sizeof(student));
   system("pause");
   return 0;
}

