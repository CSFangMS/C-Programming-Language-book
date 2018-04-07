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
    
   printf("(0)女 (1)男，請輸入性別:"); 
   scanf("%d",&num);
   tom.sex=num;
   printf("(0)未婚 (1)已婚，請輸入婚姻狀況:"); 
   scanf("%d",&num);
   tom.marriage=num;
   printf("請輸入年齡:"); 
   scanf("%d",&num);
   tom.age=num;
   
   if(tom.sex==0)
      printf("姓別:女,");
   else
      printf("姓別:男,");   
   
   if(tom.marriage==0)
      printf("未婚,");
   else
      printf("已婚,");      
   
   printf("%d歲\n",tom.age);
   
   printf("sizeof(tom)=%d\n",sizeof(tom)); 
   
   system("pause");
   return 0;
}

/* output--------------------------
(0)女 (1)男，請輸入性別:1
(0)未婚 (1)已婚，請輸入婚姻狀況:0
請輸入年齡:21
姓別:男,未婚,21歲
sizeof(tom)=4
---------------------------------*/
