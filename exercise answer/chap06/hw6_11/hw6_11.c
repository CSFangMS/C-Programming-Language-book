/* hw6_11.c */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{    
   int hr=80;
   float salary=0.0f;  
   
   if(hr<=60)
      salary=hr*75;
   else if(hr>60 && hr<=75)
      salary=60*75+(hr-60)*75*1.25;
   else
      salary=60*75+15*75*1.25+(hr-75)*75*1.75;
   
   printf("�u�@�ɼ�=%d�p��\n",hr);
   printf("�~��=%.2f��\n",salary); 
              
   system("pause");
   return 0;
}

/* output-----------
�u�@�ɼ�=80�p��
�~��=6562.50��
------------------*/
