/* progC_12, �N�r���ഫ����� */
#include <stdio.h>
#include <stdlib.h>
#define POW atoi(a)*atoi(a)
int main(void)
{
   char a[10];
		
   printf("Input a number:");
   gets(a);
   printf("%d*%d=%d\n",atoi(a),atoi(a),POW);
   system("pause");
   return 0;
}

