/* hw8_27.c */
#include <stdio.h>
#include <stdlib.h>
void count_r(void), count_for(void);
int fib(int),rfib(int);
int cnt1,cnt2;
int main(void)   
{
   int i;
   for(i=1;i<=30;i++)
   {
      cnt1=0;
      cnt2=0;
      fib(i);
      printf("n=%2d, for°j°é%2d¦¸, ",i,cnt1); 
      rfib(i);
      printf("»¼°j%d¦¸\n",cnt2);
   }
   
   system("pause");
   return 0;
}

void count_for(void)
{
   cnt1++;   
}

void count_r(void)
{
   cnt2++;   
}

int fib(int n)
{
   int i,fn;
   int fn_1=1,fn_2=1;   
   
   for(i=1;i<=n;i++)
   {
      count_for();
      if(n==1 || n==2)
         return 1;
      else      
      {
         fn=fn_1+fn_2;
         fn_2=fn_1;
         fn_1=fn;
      }
   }
   return fn;      
}

int rfib(int n)
{
   count_r();
   if(n==1 || n==2)
      return 1;
   else 
      return rfib(n-1)+rfib(n-2);   
}

/* output-------------------------
n= 1, for°j°é 1¦¸, »¼°j1¦¸
n= 2, for°j°é 1¦¸, »¼°j1¦¸
n= 3, for°j°é 3¦¸, »¼°j3¦¸
n= 4, for°j°é 4¦¸, »¼°j5¦¸
n= 5, for°j°é 5¦¸, »¼°j9¦¸
n= 6, for°j°é 6¦¸, »¼°j15¦¸
n= 7, for°j°é 7¦¸, »¼°j25¦¸
n= 8, for°j°é 8¦¸, »¼°j41¦¸
n= 9, for°j°é 9¦¸, »¼°j67¦¸
n=10, for°j°é10¦¸, »¼°j109¦¸
n=11, for°j°é11¦¸, »¼°j177¦¸
n=12, for°j°é12¦¸, »¼°j287¦¸
n=13, for°j°é13¦¸, »¼°j465¦¸
n=14, for°j°é14¦¸, »¼°j753¦¸
n=15, for°j°é15¦¸, »¼°j1219¦¸
n=16, for°j°é16¦¸, »¼°j1973¦¸
n=17, for°j°é17¦¸, »¼°j3193¦¸
n=18, for°j°é18¦¸, »¼°j5167¦¸
n=19, for°j°é19¦¸, »¼°j8361¦¸
n=20, for°j°é20¦¸, »¼°j13529¦¸
n=21, for°j°é21¦¸, »¼°j21891¦¸
n=22, for°j°é22¦¸, »¼°j35421¦¸
n=23, for°j°é23¦¸, »¼°j57313¦¸
n=24, for°j°é24¦¸, »¼°j92735¦¸
n=25, for°j°é25¦¸, »¼°j150049¦¸
n=26, for°j°é26¦¸, »¼°j242785¦¸
n=27, for°j°é27¦¸, »¼°j392835¦¸
n=28, for°j°é28¦¸, »¼°j635621¦¸
n=29, for°j°é29¦¸, »¼°j1028457¦¸
n=30, for°j°é30¦¸, »¼°j1664079¦¸
--------------------------------*/
