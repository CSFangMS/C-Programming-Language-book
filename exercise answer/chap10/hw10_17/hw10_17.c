/* hw10_17.c */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int A[5]={74,48,30,17,62};
   int i,min,max;
   int min_idx=0,max_idx=0;
   min=max=A[0];
   
   for(i=0;i<5;i++)
   {
      if(*(A+i)>max)   /* �P�_�̤j�� */
      {
         max=*(A+i);	
         max_idx=i;
      }
      if(*(A+i)<min)   /* �P�_�̤p�� */
      {
         min=*(A+i);	
         min_idx=i;
      }
   }
   printf("�}�C�̤������̤j�Ȭ�%d",max);
   printf(", ���ޭȬ�%d\n",max_idx); 
   printf("�}�C�̤������̤p�Ȭ�%d",min);
   printf(", ���ޭȬ�%d\n",min_idx); 
   
   system("pause");
   return 0;
}

/* output--------------------------
�}�C�̤������̤j�Ȭ�74, ���ޭȬ�0
�}�C�̤������̤p�Ȭ�17, ���ޭȬ�3
---------------------------------*/
