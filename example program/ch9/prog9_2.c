/* prog9_2, �@���}�C���򥻾ާ@(���~���ܽd) */ 
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int i,score[4]; 	/* �ŧi����ܼ�i�P��ư}�Cscore */
   
   score[0]=78;		
   score[1]=55; 		
   /* score[2]=92;  �����N���Nscore[2]�]�� */
   score[3]=80; 		
   
   for(i=0;i<=4;i++)	/* �����N�N���ޭȶW�X�}�Cscore���i�e�\�d�� */
      printf("score[%d]=%d\n",i,score[i]);  
   
   system("pause");
   return 0;
}

