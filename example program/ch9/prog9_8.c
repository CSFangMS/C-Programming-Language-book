/* prog9_8, �}�C���j�M */
#include <stdio.h>
#include <stdlib.h>
#define SIZE 6		/* �w�qSIZE��6 */
int main(void)
{
   int i,num,flag=0;
   int A[SIZE]={33,75,69,41,33,19};
		
   printf("�}�CA�������Ȭ�:");
   for(i=0;i<SIZE;i++)			
      printf("%d ",A[i]); 			/* �L�X�}�C�����e */
   
   printf("\n�п�J���j�M�����:");		
   scanf("%d",&num); 				/* ��J���j�M����� */
   
   for(i=0;i<SIZE;i++)
      if(A[i]==num)	/* �P�_�}�C�����O�_�P��J�ȬۦP */
      {
         printf("���F! A[%d]=%d\n",i,A[i]);
         flag=1;		/* �]flag��1�A�N�����ۦP���ƭ� */
      }
   if(flag==0)
      printf("�S�����ۦP��!!\n");
   
   system("pause");
   return 0;
}

