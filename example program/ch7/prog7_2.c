/* prog7_2, �ϥ�for�j��p����v */
#include <stdio.h>
#include <stdlib.h>			/* �Nstdlib.h���Y�ɧt�A�i��  */
int main(void)
{
   int i,count=0;

   for(i=1;i<=10000;i++)
      if ((rand()%6+1)==3)		/* ���üƷ��Y��l */
         count++;				/* ���l�I�Ƭ�3�I�ɡAcount+1 */
   printf("�Y10000����l�ɡA�X�{3�I�����Ƭ�%d��\n",count);
   printf("���v��%.3f\n",(float)count/10000);

   system("pause");
   return 0;
}

