/* prog11_11, �ǻ����c����}���Ƹ� */
#include <stdio.h>
#include <stdlib.h>

struct data		/* �w�q���쪺���cdata */
{
   char name[10];
   int math;
};
void swap(struct data *,struct data *);   /* swap()���쫬 */

int main(void)
{
   struct data s1={"Jenny",74};	/* �ŧi���c�ܼ�s1�A�ó]�w��� */
   struct data s2={"Teresa",88};	/* �ŧi���c�ܼ�s2�A�ó]�w��� */  
     
   swap(&s1,&s2);		/* �I�sswap()��� */
   printf("�I�sswap()��ƫ�:\n");     
   printf("s1.name=%s, s1.math=%d\n",s1.name,s1.math);
   printf("s2.name=%s, s2.math=%d\n",s2.name,s2.math);
       
   system("pause");
   return 0;
}
void swap(struct data *p1,struct data *p2)
{
   struct data tmp;
   tmp=*p1;
   *p1=*p2;
   *p2=tmp;
}

