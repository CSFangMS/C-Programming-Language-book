/* prog11_2, ���c���j�p */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   struct data	/* �w�q���c */
   {
      char name[10];
      int math;
   } student;
   printf("sizeof(student)=%d\n",sizeof(student));
   
   system("pause");
   return 0;
}

