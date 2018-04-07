/* hw15_9.c */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{  
   int a=159;
   int b=0147;
   int c=0x618A;
    
   printf("%dªº¤K¶i¦ì¬°%o, ¤Q¤»¶i¦ì¬°%x\n",a,a,a);
   printf("%oªº¤Q¶i¦ì¬°%d, ¤Q¤»¶i¦ì¬°%x\n",b,b,b);
   printf("%Xªº¤K¶i¦ì¬°%o, ¤Q¶i¦ì¬°%d\n",c,c,c); 
   
   system("pause");
   return 0;
}

/* output----------------------------
159ªº¤K¶i¦ì¬°237, ¤Q¤»¶i¦ì¬°9f
147ªº¤Q¶i¦ì¬°103, ¤Q¤»¶i¦ì¬°67
618Aªº¤K¶i¦ì¬°60612, ¤Q¶i¦ì¬°24970
-----------------------------------*/
