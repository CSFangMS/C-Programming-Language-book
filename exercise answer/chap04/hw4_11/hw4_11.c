/* hw4_11.c */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int id,age;
   printf("請輸入學號: ");
   scanf("%d",&id);
   printf("請輸入年齡: ");
   scanf("%d",&age); 
   printf("學號=%d, 年齡=%d\n",id,age);
   
   system("pause");
   return 0;
}

/* output-----------
請輸入學號: 100
請輸入年齡: 18
學號=100, 年齡=18
------------------*/
