/* hw14_6 */
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
   int num,i,sum=0;
   struct student        	/* �w�q���cstudent */
   {
      char name[10];
      int score;
   } *ptr;				/* �ŧi���V���cstudent������ptr */

   printf("Number of student: ");
   scanf("%d",&num);
   
   ptr=(struct student *) malloc(num*sizeof(struct student));
   
   for(i=0;i<num;i++)
   {  
      fflush(stdin);     			/* �M�Žw�İϪ����e */
      printf("name for student %d: ",i+1);
      gets((ptr+i)->name);			/* �N��J���r��g�Jname���� */
      printf("score for student %d: ",i+1);
      scanf("%d",&(ptr+i)->score);	/* �N��J����Ƽg�Jscore���� */
   }
   for(i=0;i<num;i++)
      sum=sum+ (ptr+i)->score;
      
   printf("averag=%lf\n",(float)sum/num);

   free(ptr);     					/* ����O�ЪŶ� */

   system("pause");
   return 0;
}
