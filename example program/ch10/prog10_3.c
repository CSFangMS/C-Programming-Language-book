/* prog10_3, �����ܼƪ��ϥ� */
#include <stdio.h> 
#include <stdlib.h>
int main(void)
{
   int a=5,b=3;
   int *ptr; 		/* �ŧi�����ܼ�ptr */
 	
   ptr=&a;			/* �Na����}�]������ptr�s�� */
   printf("&a=%p, &ptr=%p, ptr=%p, *ptr=%d\n",&a,&ptr,ptr,*ptr);
   ptr=&b; 			/* �Nb����}�]������ptr�s�� */
   printf("&b=%p, &ptr=%p, ptr=%p, *ptr=%d\n",&b,&ptr,ptr,*ptr);
    
   system("pause");
   return 0;
}

