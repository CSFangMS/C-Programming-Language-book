/* prog11_10, �ǻ����c���Ƹ� */
#include <stdio.h>
#include <stdlib.h>

struct data		
{
   char name[10];
   int math;
};

void display(struct data);	   /* �ŧi���display()���쫬 */	

int main(void)
{
   struct data s1={"Jenny",74};   /* �]�w���c�ܼ�s1����� */
   display(s1);		/* �I�s���display()�A�ǤJ���c�ܼ�s1 */
   
   system("pause");
   return 0;
}

void display(struct data st)     /* �w�qdisplay()��� */
{
   printf("�ǥͩm�W: %s\n",st.name);  
   printf("�ƾǦ��Z: %d\n",st.math);
}

