/* prog10_15, �Q�Ϋ��ШD�}�C�����M */
#include <stdio.h> 
#include <stdlib.h>
int main(void)
{
   int a[3]={5,7,9};
   int i,sum=0;
   for(i=0;i<3;i++)
      sum+=*(a+i);         /* �[�`�}�C�������`�M */
   printf("sum=%d\n",sum);

   system("pause");
   return 0;
}

