/* prog11_12, �ǻ����c�}�C */
#include <stdio.h>
#include <stdlib.h>
#define MAX 3

struct data			/* �w�q���쪺���cdata */
{
   char name[10];
   int math;
};
int maximum(struct data arr[]);	/* �ŧi���maximum()���쫬 */
int main(void)
{
   int idx;
   struct data s1[MAX]={{"Mary",87},{"Flora",93},{"Jenny",74}}; 
   
   idx=maximum(s1);    /* �I�smaximum()��� */
   printf("%s�����Z�̰�, ",(s1+idx)->name);	/* �L�X�̰������m�W */
   printf("���Ƭ�%d��\n",(s1+idx)->math);	/* �L�X�̰��������Z */
   
   system("pause");
   return 0;
}
int maximum(struct data arr[]) 	/* maximum()��ƪ��w�q */
{
   int m,i,index;
   m=arr->math;				/* �Nm�]�Ȭ�arr[0].math */
   for(i=0;i<MAX;i++)		
     if((arr+i)->math>m)
     {
         m=(arr+i)->math;
         index=i;
     }
   return index;			/* �Ǧ^�}�C�����ޭ� */
}

