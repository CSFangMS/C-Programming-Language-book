/* prog15_3, �����B��l�u<<�v���ϥνd�� */
#include <stdio.h>
#include <stdlib.h>
#define SIZE 8	  	/* �w�qSIZE��8�A�N��H8�ӼƦr����ܤG�i�� */
void show_binary(int);	/* �ŧishow_binary()��ƪ��쫬 */
int main(void)
{
   int a;
   a=(89<<1);	/* �N���89�������@�Ӧ줸�A�M��]�w���ܼ�a�s�� */
   
   printf("89�G�i�쪺�Ȭ�: ");
   show_binary(89);			/* ��ܼƦr89���G�i�� */   
   printf("�����@�Ӧ줸��: ");
   show_binary(a);			/* ���89�����@�Ӧ줸�᪺�G�i�� */
   printf("�����@�Ӧ줸�᪺�Q�i��Ȭ�: %d\n",a); 
   
   system("pause");
   return 0;
}
void show_binary(int num)		/* show_binary()��ƪ��w�q */
{
   int i,b[SIZE]={0};
   for(i=1;i<=SIZE;i++)
   { 
     b[SIZE-i]=num%2;		/* �Nnum%2���l�Ƴ]�w��b[SIZE-i]�s�� */
      num=num/2;   		/* �Nnum/2���ȳ]�^��num */
   }
   for(i=0;i<SIZE;i++)
      printf("%d",b[i]);	
   printf("\n");
}

