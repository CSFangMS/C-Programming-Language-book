/* hw14_2 */
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
   int *ptr,*ptri;
   ptr=(int *) malloc(3*sizeof(int));   /* �t�m3�Ӧs���ƪ��Ŷ� */
   ptri=(int *) malloc(sizeof(int));
   
   *ptr=12;			/* ��t�m���O�ЪŶ�����1�Ӧ�m�]�Ȭ�12 */
   *(ptr+1)=35;		/* ���2�Ӧ�m�]�Ȭ�35 */
   *(ptr+2)=140;		/* ���3�Ӧ�m�]�Ȭ�140 */
   
   for(*ptri=0;*ptri<3;*ptri=*ptri+1)
      printf("*ptr+%d=%d\n",*ptri,*(ptr+*ptri));   /* �L�X�s�񪺭� */
    
   free(ptr);           /* �����ptr�ҫ��V���O�ЪŶ� */
   free(ptri);  

   system("pause");
   return 0;
}
