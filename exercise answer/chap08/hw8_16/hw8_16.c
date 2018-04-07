/* hw8_16.c */
#include <stdio.h>
#include <stdlib.h>
int find_K(int);

int main(void)
{
    printf("find_k(19)=%d\n",find_k(19));
    printf("find_k(23)=%d\n",find_k(23));    
    printf("find_k(29)=%d\n",find_k(29));
   system("pause");
   return 0;
}

int find_k(int n)
{
   int np;
   np=(n-2)/4;
   if(n-(4*np+2)<4*(np+1)+2-n)
     return np;
   else
     return np+1;
}

/* output ---------
find_k(19)=4
find_k(23)=5
find_k(29)=7
------------------*/

