/* prog14_1, �ʺA�O����t�m���d�� */
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
   int *ptr,i;
   ptr=(int *) malloc(3*sizeof(int));   /* �t�m3�Ӧs���ƪ��Ŷ� */
   
   *ptr=12;			/* ��t�m���O�ЪŶ�����1�Ӧ�m�]�Ȭ�12 */
   *(ptr+1)=35;		/* ���2�Ӧ�m�]�Ȭ�35 */
   *(ptr+2)=140;		/* ���3�Ӧ�m�]�Ȭ�140 */
   
   for(i=0;i<3;i++)
      printf("*ptr+%d=%d\n",i,*(ptr+i));   /* �L�X�s�񪺭� */
    
   free(ptr);           /* �����ptr�ҫ��V���O�ЪŶ� */

   system("pause");
   return 0;
}
