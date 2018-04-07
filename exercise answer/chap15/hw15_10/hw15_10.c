/* hw15_10.c */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{  
   int n;
   
   printf("請輸入八進位整數:");
   scanf("%o",&n); 
   printf("%o的十進位為%d, 十六進位為%x\n",n,n,n);
   
   system("pause");
   return 0;
}

/* output-----------------------
請輸入八進位整數:147
147的十進位為103, 十六進位為67
------------------------------*/
