/* prog9_13, �L�X�ܼƪ���} */
#include <stdio.h>
#include <stdlib.h>
void func(int);
int main(void)
{
   int a=13;
   printf("��main()��,a=%d,a����}=%p\n",a,&a);
   func(a);			/* �o�O�ǭȩI�s������ */
   
   system("pause");
   return 0;
}

void func(int a)		/* �ۭq���func() */
{	
   printf("��func()��,a=%d,a����}��=%p\n",a,&a);
}

