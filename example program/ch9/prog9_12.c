/* prog9_12, �ǻ��@���}�C���Ƹ� */
#include <stdio.h>
#include <stdlib.h>
#define SIZE 4
void show(int arr[]);		/* �ŧi���show()���쫬 */
int main(void)	
{
   int A[SIZE]={5,3,6,1};		/* �]�w�}�CA����� */
   printf("�}�C�����e��: ");   
   show(A);					/* �I�s���show() */

   system("pause");
   return 0;
}
void show(int arr[])			/* ���show()���w�q */
{
   int i;
   for(i=0;i<SIZE;i++)		
      printf("%d ",arr[i]); 	/* �L�X�}�C���e */
   printf("\n");
}

