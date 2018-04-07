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
      printf("姓別:女,");
   else
      printf("姓別:男,");
   
   if(maruco.marriage==0)
      printf("未婚,");
   else
      printf("已婚,");   
   
   printf("%d歲,身高%d公分,",maruco.age,maruco.height);
   printf("體重%d公斤\n",maruco.weight); 
   
   printf("sizeof(maruco)=%d\n",sizeof(maruco)); 
   
   system("pause");
   return 0;
}

/* output---------------------------------
姓別:女,未婚,19歲,身高162公分,體重50公斤
sizeof(maruco)=4
----------------------------------------*/
