/* prog11_9, �H���ШӪ�ܵ��c�}�C */
#include <stdio.h>
#include <stdlib.h>
#define MAX 3
int main(void)
{
   int i,m,index=0;
   struct data			/* �w�q���cdata */
   {
      char name[10];
      int math;
   } student[MAX]={{"Mary",87},{"Flora",93},{"Jenny",74}};
   
   m=student->math;		/* �Nm�]�Ȭ�student[0].math */
   for(i=1;i<MAX;i++)		/* ��X���c�}�C�����e */
   {
      if((student+i)->math > m)
      {
         m=(student+i)->math;
         index=i;
      }
   }
   printf("%s�����Z�̰�, ",(student+index)->name);
   printf("���Ƭ�%d��\n",(student+index)->math);
   system("pause");
   return 0;
}

