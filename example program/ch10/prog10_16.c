/* prog10_16, �Q�Ϋ��ШD�}�C�����M */
#include <stdio.h> 
#include <stdlib.h>
int main(void)
{
   int a[3]={5,7,9};
   int i,sum=0;
   int *ptr=a;			/* �]�w����ptr���V�}�C����a[0] */
   for(i=0;i<3;i++)
      sum+=*(ptr++);    	/* �p��}�C�����Ȫ��֥[  */
   printf("sum=%d\n",sum);

   system("pause");
   return 0;
}

