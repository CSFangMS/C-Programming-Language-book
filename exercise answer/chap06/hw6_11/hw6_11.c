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
   
   printf("工作時數=%d小時\n",hr);
   printf("薪資=%.2f元\n",salary); 
              
   system("pause");
   return 0;
}

/* output-----------
工作時數=80小時
薪資=6562.50元
------------------*/
