/* prog10_9, �Na�Pb�Ȥ���(���~�ܽd) */
#include <stdio.h> 
#include <stdlib.h>
void swap(int,int);	/* swap()��ƪ��쫬 */
int main(void)
{
   int a=5,b=20;
   printf("�洫�e... ");
   printf("a=%d,b=%d\n",a,b);
   swap(a,b);		/* �I�sswap()��ơA�Na�Mb����ܼƪ��Ȥ��� */
   printf("�洫��... ");
   printf("a=%d,b=%d\n",a,b);
   
   system("pause");
   return 0;
}

void swap(int x,int y)	/* �w�qswap()��� */
{
   int tmp=x;
   x=y;
   y=tmp;
}

