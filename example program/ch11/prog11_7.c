/* prog11_7, ���c�}�C���ϥ� */
#include <stdio.h>
#include <stdlib.h>
#define MAX 2
int main(void)
{
   int i;
   struct data			/* �w�q���cdata */
   {
      char name[10];
      int math;
   } student[MAX];		/* �ŧi���c�}�Cstudent */
   
   for(i=0;i<MAX;i++)	 
   {
      printf("�ǥͩm�W: ");
      gets(student[i].name);			/* ��J�ǥͩm�W */
      printf("�ƾǦ��Z: ");
      scanf("%d",&student[i].math);		/* ��J�ǥͼƾǦ��Z */
      fflush(stdin);            			/* �M�Žw�İϤ������ */
   }

   for(i=0;i<MAX;i++)					/* ��X���c�}�C�����e */
      printf("%s���ƾǦ��Z=%d\n",student[i].name,student[i].math);
   
   system("pause");
   return 0;
}

