/* hw6_25.c */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{    
   int year=1900;
   
   start: 
      if(year%400==0)
         printf("%d ",year);     
      else if(year%4==0 && year%100!=0)
         printf("%d ",year);
      year+=4;
      if(year<=2000)      
         goto start;   
   
   printf("為潤年\n");
      
   system("pause");
   return 0;
}

/* output-----------------------------------------------------------
1904 1908 1912 1916 1920 1924 1928 1932 1936 1940 1944 1948 1952 
1956 1960 1964 1968 1972 1976 1980 1984 1988 1992 1996 2000 為潤年
-------------------------------------------------------------------*/
