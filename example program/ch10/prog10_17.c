/* prog10_17, �N�}�C��n�Ӥ������Ȩ��N��num */
#include<stdio.h>
#include <stdlib.h>
void replace(int *,int,int);   /* �ŧireplace()��ƪ��쫬 */
int main(void)
{
   int a[5]={13,32,67,14,95};
   int i,num=24;

   replace(a,4,num);			/* �I�s���replace() */
   printf("�m����A�}�C�����e��");
   for(i=0;i<5;i++)			/* �L�X�}�C�����e */
      printf("%3d",a[i]);
   printf("\n");
      
   system("pause");
   return 0;
}

void replace(int *ptr,int n,int num)
{
   *(ptr+n-1)=num;      /* �N�}�C��n�Ӥ����]�Ȭ�num */
}

