/* prog9_7, �}�C���ɭ��ˬd */
#include <stdio.h>
#include <stdlib.h>
#define MAX 5		/* �w�qMAX��5 */
int main(void)
{
   int score[MAX]; 	/* �ŧiscore�}�C�A�i�s��MAX�Ӿ�� */
   int i=0,num;
   float sum=0.0f;
   
   printf("�п�J���Z�A�n�����п�J0:\n");
   do
   {
      if(i==MAX)		/* ��i���Ȭ�MAX�ɡA��ܰ}�C�w���A�Y�����J */
      {
         printf("�}�C�Ŷ��w�ϥΧ���!!\n"); 
         i++;			/* ������Ni�ȥ[1�A�]��23��|��i���ȴ�1�� */
         break;
      }
      printf("�п�J���Z:");
      scanf("%d",&score[i]);
   }while(score[i++]>0);   /* ��J���Z�A��J0�ɵ��� */
   num=i-1;
   for(i=0;i<num;i++)
      sum+=score[i];		/* �p�⥭�����Z */
   printf("�������Z�� %.2f\n",sum/num);
   
   system("pause");
   return 0;
}

