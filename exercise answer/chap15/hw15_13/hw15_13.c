/* hw15_13.c */
#include <stdio.h>
int main(void)
{   
   int num;
   struct status
   {
      unsigned sex:1;
      unsigned marriage:1;
      unsigned age:7;
   } tom;
    
   printf("(0)�k (1)�k�A�п�J�ʧO:"); 
   scanf("%d",&num);
   tom.sex=num;
   printf("(0)���B (1)�w�B�A�п�J�B�ê��p:"); 
   scanf("%d",&num);
   tom.marriage=num;
   printf("�п�J�~��:"); 
   scanf("%d",&num);
   tom.age=num;
   
   if(tom.sex==0)
      printf("�m�O:�k,");
   else
      printf("�m�O:�k,");   
   
   if(tom.marriage==0)
      printf("���B,");
   else
      printf("�w�B,");      
   
   printf("%d��\n",tom.age);
   
   printf("sizeof(tom)=%d\n",sizeof(tom)); 
   
   system("pause");
   return 0;
}

/* output--------------------------
(0)�k (1)�k�A�п�J�ʧO:1
(0)���B (1)�w�B�A�п�J�B�ê��p:0
�п�J�~��:21
�m�O:�k,���B,21��
sizeof(tom)=4
---------------------------------*/
