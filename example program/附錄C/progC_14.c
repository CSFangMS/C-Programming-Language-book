/* progC_14, �ϥ�malloc()�t�m�O���� */
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <ctype.h>
int main(void)
{
   char *mem;
   int i=0;
   
   if((mem=(char *)malloc(64))!=NULL)	/* �t�m64 bytes���O���� */
   {
      printf("Memory allocated!!\n");
      printf("Input a string:");
      gets(mem);
      while(*(mem+i)!='\0')
      {
         if(islower(*(mem+i)))	/* �N�r���ഫ�������j�g */
            *(mem+i)=toupper(*(mem+i));
         i++;
      }
      printf("After convert,string is %s\n",mem);
      free(mem);
      printf("Memory deallocated!!\n");
   }
   else
      printf("Memory allocated failed!!\n");
   system("pause");
   return 0;
}

