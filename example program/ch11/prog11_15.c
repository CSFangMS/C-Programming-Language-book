/* prog11_15, �Q��typedef�өw�q��ƫ��A */
#include <stdio.h>
#include <stdlib.h>
struct data		
{
   char name[10];
   int math;
};
typedef struct data SCORE;	/* �� struct data �w�q���s�����A */
void display(SCORE);			/* �ŧi���display()���쫬 */	
int main(void)
{
   SCORE s1={"Jenny",74};		/* �]�w���c�ܼ�s1����� */
   display(s1);				/* �I�sdisplay()�A�ǤJ���c�ܼ�s1 */
   
   system("pause");
   return 0;
}
void display(SCORE st)     	/* �w�q���display()*/
{
   printf("�ǥͩm�W: %s\n",st.name);  
   printf("�ƾǦ��Z: %d\n",st.math);
}

