/* prog9_17, ��w�ƧǪk */
#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
void show(int a[]), bubble(int a[]);	/* �w�q��ƪ��쫬 */
int main(void)
{
   int data[SIZE]={26,5,81,7,63};
   
   printf("�Ƨǫe...\n");
   show(data);				/* �L�X�}�C���e */
   bubble(data);				/* �I�sbubble()��� */		
   printf("�Ƨǫ�...\n");
   show(data); 				/* �L�X�}�C���e */
   system("pause");
   return 0;
}
void show(int a[]) 			/* �ۭq���show() */
{
   int i;
   for(i=0;i<SIZE;i++)	
      printf("%d ",a[i]); 		/* �L�X�}�C�����e */
   printf("\n");
}

void bubble(int a[])		/* �ۭq���bubble() */
{
   int i,j,temp;
   for(i=1;i<SIZE;i++)
      for(j=0;j<(SIZE-i);j++)
         if(a[j]>a[j+1])
         {
            temp=a[j];	            
            a[j]=a[j+1];
            a[j+1]=temp;
         }
}

