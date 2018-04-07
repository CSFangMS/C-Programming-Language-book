/* hw14_2 */
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
   int *ptr,*ptri;
   ptr=(int *) malloc(3*sizeof(int));   /* 配置3個存放整數的空間 */
   ptri=(int *) malloc(sizeof(int));
   
   *ptr=12;			/* 把配置之記憶空間的第1個位置設值為12 */
   *(ptr+1)=35;		/* 把第2個位置設值為35 */
   *(ptr+2)=140;		/* 把第3個位置設值為140 */
   
   for(*ptri=0;*ptri<3;*ptri=*ptri+1)
      printf("*ptr+%d=%d\n",*ptri,*(ptr+*ptri));   /* 印出存放的值 */
    
   free(ptr);           /* 釋放由ptr所指向的記憶空間 */
   free(ptri);  

   system("pause");
   return 0;
}
