/* hw10_20.c */
#include <stdio.h>
#include <stdlib.h>
int length(char *);
int main(void)
{
   int i,total=0;
   char *ptr[3]={"Tom","Lily","James Lee"};
   
   for(i=0;i<3;i++)
   {
      puts(ptr[i]);
      total+=length(ptr[i]);
   }
   printf("�T�Ӧr��@%d�Ӧ줸��\n",total*sizeof(char));
    
   system("pause");
   return 0;
}

int length(char *ptr)
{
   int count=0;   
   while(*(ptr+count)!='\0')
      count++;
   count=count+1;
   return count;
}

/* output-------------
Tom
Lily
James Lee
�T�Ӧr��@19�Ӧ줸��
--------------------*/
