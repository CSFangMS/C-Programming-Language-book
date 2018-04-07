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
      printf("姓別:女,");
   else
      printf("姓別:男,");
   
   if(tom.marriage==0)
      printf("未婚,");
   else
      printf("已婚,");   
   
   printf("%d歲,存款有%d元\n",tom.age,tom.money);
   
   printf("sizeof(tom)=%d\n",sizeof(tom)); 
   
   system("pause");
   return 0;
}

/* output--------------------------
姓別:男,未婚,21歲,存款有100元
sizeof(tom)=8
---------------------------------*/
