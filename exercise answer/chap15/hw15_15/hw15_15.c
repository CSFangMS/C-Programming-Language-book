/* hw15_15.c */
#include <stdio.h>
int main(void)
{   
   struct status
   {
      unsigned sex:1;
      unsigned marriage:1;
      unsigned age:7;
      unsigned height:8;
      unsigned weight:8;
   };
   struct status maruco={0,0,19,162,50};
     
   if(maruco.sex==0)
      printf("�m�O:�k,");
   else
      printf("�m�O:�k,");
   
   if(maruco.marriage==0)
      printf("���B,");
   else
      printf("�w�B,");   
   
   printf("%d��,����%d����,",maruco.age,maruco.height);
   printf("�魫%d����\n",maruco.weight); 
   
   printf("sizeof(maruco)=%d\n",sizeof(maruco)); 
   
   system("pause");
   return 0;
}

/* output---------------------------------
�m�O:�k,���B,19��,����162����,�魫50����
sizeof(maruco)=4
----------------------------------------*/
