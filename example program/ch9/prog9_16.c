/* prog9_16, ���Ƥ����}�C�������� */
#include <stdio.h>
#include <stdlib.h>
#define SIZE 4
void show(int arr[]);		/* ���show()���쫬 */
void add2(int arr[]);		/* ���add2()���쫬 */

int main(void)
{
   int A[SIZE]={5,3,6,1};
   printf("�I�sadd2()�e,�}�C�����e��: ");   
   show(A);			/* �I�s���show() */
   add2(A); 			/* �I�s���add2() */
   printf("�I�sadd2()��,�}�C�����e��: "); 
   show(A); 			/* �I�s���show() */
       
   system("pause");
   return 0;
}
void show(int arr[])
{
   int i;
   for(i=0;i<SIZE;i++)	/* �L�X�}�C���e */
      printf("%d ",arr[i]);
   printf("\n");
}
void add2(int arr[])
{
   int i;
   for(i=0;i<SIZE;i++)	
      arr[i]+=2;
}

