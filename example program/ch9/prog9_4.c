/* prog9_4, �@���}�C���������]�� */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int i,age[3];
   for(i=0;i<3;i++)
   {
      printf("�п�Jage[%d]����:",i);
      scanf("%d",&age[i]);	  /* ����L��J�ƭȵ��}�Cage�̪����� */
   }
   for(i=0;i<3;i++)
      printf("age[%d]=%d\n",i,age[i]);

   system("pause");
   return 0;
}

