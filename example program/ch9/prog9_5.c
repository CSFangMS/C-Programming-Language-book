/* prog9_5, ����}�C�����Ȫ��j�p */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int A[5]={74,48,30,17,62};
   int i,min,max;
   min=max=A[0];		/* �Nmax�Pmin���]���}�C���Ĥ@�Ӥ��� */
   
   for(i=0;i<5;i++)
   {
      if(A[i]>max) 	/* �P�_A[i]�O�_�j��max */
         max=A[i];	
      if(A[i]<min) 	/* �P�_A[i]�O�_�p��min */
         min=A[i];	
   }
   printf("�}�C�̤������̤j�Ȭ�%d\n",max);
   printf("�}�C�̤������̤p�Ȭ�%d\n",min);
   
   system("pause");
   return 0;
}

