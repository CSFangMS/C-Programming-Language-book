/* prog11_5, �_�����c���ϥ� */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   struct date		/* �w�q���cdate */
   {
      int month;
      int day;
   };
   struct data		/* �w�q�_�����cdata */
   {
      char name[10];
      int math;
      struct date birthday;		
   } s1={"Mary Wang",74,{10,2}};   /* �]�w���c�ܼ�s1����� */
   
   printf("�ǥͩm�W: %s\n",s1.name);  
   printf("�ͤ�: %d��%d��\n",s1.birthday.month,s1.birthday.day);
   printf("�ƾǦ��Z: %d\n",s1.math);
   
   system("pause");
   return 0;
}

