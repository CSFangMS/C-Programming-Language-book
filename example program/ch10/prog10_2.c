/* prog10_2, �����ܼƪ��ŧi */
#include <stdio.h> 
#include <stdlib.h>
int main(void)
{
   int *ptr,num=20;	/* �ŧi�ܼ�num�P�����ܼ�ptr */

   ptr=&num;			/* �Nnum����}�]������ptr�s�� */
   printf("num=%d, &num=%p\n",num,&num); 
   printf("*ptr=%d, ptr=%p, &ptr=%p\n",*ptr,ptr,&ptr); 
   system("pause");
   return 0;
}

