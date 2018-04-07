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
      printf("n=%2d, for�j��%2d��, ",i,cnt1); 
      rfib(i);
      printf("���j%d��\n",cnt2);
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
n= 1, for�j�� 1��, ���j1��
n= 2, for�j�� 1��, ���j1��
n= 3, for�j�� 3��, ���j3��
n= 4, for�j�� 4��, ���j5��
n= 5, for�j�� 5��, ���j9��
n= 6, for�j�� 6��, ���j15��
n= 7, for�j�� 7��, ���j25��
n= 8, for�j�� 8��, ���j41��
n= 9, for�j�� 9��, ���j67��
n=10, for�j��10��, ���j109��
n=11, for�j��11��, ���j177��
n=12, for�j��12��, ���j287��
n=13, for�j��13��, ���j465��
n=14, for�j��14��, ���j753��
n=15, for�j��15��, ���j1219��
n=16, for�j��16��, ���j1973��
n=17, for�j��17��, ���j3193��
n=18, for�j��18��, ���j5167��
n=19, for�j��19��, ���j8361��
n=20, for�j��20��, ���j13529��
n=21, for�j��21��, ���j21891��
n=22, for�j��22��, ���j35421��
n=23, for�j��23��, ���j57313��
n=24, for�j��24��, ���j92735��
n=25, for�j��25��, ���j150049��
n=26, for�j��26��, ���j242785��
n=27, for�j��27��, ���j392835��
n=28, for�j��28��, ���j635621��
n=29, for�j��29��, ���j1028457��
n=30, for�j��30��, ���j1664079��
--------------------------------*/
