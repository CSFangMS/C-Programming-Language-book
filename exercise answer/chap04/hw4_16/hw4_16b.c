/* hw4_16b.c, ��J�r�ꪺ���~ */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   char str1[8]; 
   char str2[8];
   char str3[8]; 
    
   printf("Input a string:");
   scanf("%s %s %s",str1,str2,str3);   
   printf("The string is %s %s %s\n",str1,str2,str3);
   
   system("pause");
   return 0;
}

/* output-----------------------
Input a string:No more goodbye 
The string is No more goodbye 
------------------------------*/
