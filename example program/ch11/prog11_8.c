/* prog11_8, �ϥΫ��V���c������ */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   struct data	/* �w�q���c */
   {
      char name[10];
      int math;
      int eng;
   } student,*ptr;	/* �ŧi���c�ܼ�student�Ϋ��V���c������ptr */

   ptr=&student;			/* �Nptr���V���c�ܼ�student����} */
   printf("�ǥͩm�W: ");	
   gets(ptr->name); 	 	/* ��J�r�굹student��name�����s�� */
   printf("�ƾǦ��Z: ");
   scanf("%d",&ptr->math);	/* ��J��Ƶ�student��math�����s��*/
   printf("�^�妨�Z: ");
   scanf("%d",&ptr->eng); /* ��J��Ƶ�student��eng�����s��*/

   printf("�ƾǦ��Z=%d, ",ptr->math);
   printf("�^�妨�Z=%d, ",ptr->eng);
   printf("��������=%.2f\n",(ptr->math + ptr->eng)/2.0);
   system("pause");
   return 0;
}

