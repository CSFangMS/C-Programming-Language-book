/* hw15_14.c */
#include <stdio.h>
int main(void)
{   
   struct status
   {
      unsigned sex:1;
      unsigned marriage:1;
      unsigned age:7;
      unsigned money:24;
   };
   struct status tom={1,0,21,100};
     
   if(tom.sex==0)
      printf("�m�O:�k,");
   else
      printf("�m�O:�k,");
   
   if(tom.marriage==0)
      printf("���B,");
   else
      printf("�w�B,");   
   
   printf("%d��,�s�ڦ�%d��\n",tom.age,tom.money);
   
   printf("sizeof(tom)=%d\n",sizeof(tom)); 
   
   system("pause");
   return 0;
}

/* output--------------------------
�m�O:�k,���B,21��,�s�ڦ�100��
sizeof(tom)=8
---------------------------------*/
