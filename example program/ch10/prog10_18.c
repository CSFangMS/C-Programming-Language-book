/* prog10_18, ��ƶǦ^�Ȭ����� */
#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
int *maximum(int *);		/* �ŧimaximum()��ƪ��쫬 */
int main(void)
{
   int a[SIZE]={3,1,7,2,6};
   int i,*ptr;
   printf("array a=");
   for(i=0;i<SIZE;i++)
      printf("%d ",a[i]);
   ptr=maximum(a);		/* �I�smaximum()��ơA�öǤJ�}�Ca */
   printf("\nmaximum=%d\n",*ptr);

   system("pause");
   return 0;
}

int *maximum(int *arr)	/* �w�qmaximum()��� */
{
   int i,*max;
   max=arr;				/* �]�w����max���V�}�C���Ĥ@�Ӥ��� */
   for(i=1;i<SIZE;i++)		
      if(*max < *(arr+i))
         max=arr+i;
   return max; 			/* �Ǧ^�̤j�Ȥ���������} */
}

