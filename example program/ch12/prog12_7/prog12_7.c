/* prog12_7, Ū���G�i���ɮת����e */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   double a,b;
   int i,arr[3];
   FILE *fptr;

   fptr=fopen("number.bin","rb");	 /* �}���ɮ� */
   fread(&a,sizeof(double),1,fptr);  /* ��Ū������Ƴ]�w��a�s�� */
   fread(&b,sizeof(double),1,fptr);  /* ��Ū������Ƴ]�w��b�s�� */ 
   fread(arr,sizeof(int),3,fptr); /* ��Ū������Ƴ]�w���}�Carr�s�� */
   
   printf("a=%4.2f\n",a);
   printf("b=%4.2f\n",b);
   for(i=0;i<3;i++)
      printf("arr[%d]=%d\n",i,arr[i]);
   
   fclose(fptr);		/* �����ɮ� */

   system("pause");
   return 0;
}
