/* prog15_1, �N�Q�i���ƥH�G�i��Ӫ�� */
#include <stdio.h>
#include <stdlib.h>
#define SIZE 8	  		/* �w�qSIZE��8�A�N��H8�ӼƦr��ܤG�i�� */
void show_binary(int);	/* �ŧishow_binary()��ƪ��쫬 */
int main(void)
{
   printf("89���G�i�쬰: ");
   show_binary(89);		/* ���89���G�i��*/
      
   system("pause");
   return 0;
}
void show_binary(int num)	/* ���show_binary()���w�q */
{
   int i,b[SIZE]={0};		/* �ŧi�}�Cb�A�ó]�w��������ȳ��O0 */
   for(i=1;i<=SIZE;i++)
   { 
      b[SIZE-i]=num%2;	/* �Nnum%2���l�Ƴ]�w��b[SIZE-i]�s�� */
      num=num/2;   		/* �Nnum/2���ȳ]�^��num */
   }
   for(i=0;i<SIZE;i++)
      printf("%d",b[i]);	
   printf("\n");
}

