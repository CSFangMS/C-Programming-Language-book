/* prog11_13, �C�|���A���ϥ� */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   enum color		/* �w�q�C�|���Acolor */
   {
      red,
      green,
      blue
   };   
   enum color shirt;	/* �ŧi�C�|���A���ܼ�shirt */
   
   printf("sizeof(shirt)=%d\n",sizeof(shirt));
   printf("red=%d\n",red);
   printf("green=%d\n",green);      
   printf("blue=%d\n",blue);   
   
   shirt=green; 		/* �Nshirt���ȳ]��green */
   if(shirt==green)
      printf("�z��ܤF��⪺��A\n");
   else   
      printf("�z��ܤF�D��⪺��A\n");

   system("pause");
   return 0;
}

