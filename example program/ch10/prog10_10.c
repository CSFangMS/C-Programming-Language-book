/* prog10_10, �Na�Pb�Ȥ���(���T�d��) */
#include <stdio.h> 
#include <stdlib.h>
void swap(int *,int *);   /* ���swap()�쫬���ŧi */
int main(void)
{
   int a=5,b=20;
   printf("�洫�e... ");
   printf("a=%d,b=%d\n",a,b);
   swap(&a,&b);      /* �I�sswap()���,�öǤJa�Pb����} */
   printf("�洫��... ");
   printf("a=%d,b=%d\n",a,b);

   system("pause");
   return 0;
}

void swap(int *p1,int *p2)		/* swap()��ƪ��w�q */
{
   int tmp=*p1;
   *p1=*p2;
   *p2=tmp;
}

