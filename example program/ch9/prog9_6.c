/* prog9_6, ��J���w�Ӽƪ���ƨ�}�C�� */
#include <stdio.h>
#include <stdlib.h>
#define MAX 10		/* �w�qMAX��10 */
int main(void)
{
   int score[MAX];	/* �ŧi��10�Ӥ�������ư}�C */
   int i=0,num;
   int sum=0;		/* �ŧi�ΨӦ��Z�`�M���ܼ�sum */
	
   printf("�п�J���Z�A�n�����п�J0:\n");
   do 
   {
      printf("�п�J���Z:");
      scanf("%d",&score[i]);
   }while(score[i++]>0);  		/* ��J���Z�A��J0�ɵ��� */
   num=i-1;
   for(i=0;i<num;i++)
      sum+=score[i];				/* �p�⥭�����Z */
   printf("�������Z�� %.2f\n",(float)sum/num);
   system("pause");
   return 0;
}

