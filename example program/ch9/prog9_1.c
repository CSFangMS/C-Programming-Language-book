/* prog9_1, �@���}�C���򥻾ާ@ */ 
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int i,score[4]; 	/* �ŧi����ܼ�i�P��ư}�Cscore */
   
   score[0]=78;		/* �]�w�}�C���Ĥ@�Ӥ�����78 */
   score[1]=55; 		/* �]�w�}�C���ĤG�Ӥ�����55 */
   score[2]=92;   	/* �]�w�}�C���ĤT�Ӥ�����92 */
   score[3]=80; 		/* �]�w�}�C���̫�@�Ӥ�����80 */
   
   for(i=0;i<=3;i++)
      printf("score[%d]=%d\n",i,score[i]);  /* �L�X�}�C�����e */
   
   system("pause");
   return 0;
}

