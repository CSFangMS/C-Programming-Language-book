/* progC_11, �r�����j�p�g�ഫ */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(void)
{
   int i=0;
   char a[20];
   printf("Input a string:");
   gets(a);
   while(a[i]!='\0')
   {
      if(islower(a[i]))		/* �r�����p�g */
         a[i]=toupper(a[i]);
      else if(isupper(a[i]))	/* �r�����j�g */
         a[i]=tolower(a[i]);
      i++;
   }
   printf("After conversion: %s\n",a);
   system("pause");
   return 0;
}

