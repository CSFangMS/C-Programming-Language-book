/* hw15_16.c */
#include <stdio.h>
int main(void)
{   
   int num;
   struct status
   {
      unsigned floppy:3;
      unsigned hard_disk:6;
      unsigned cd_rom:6;
      unsigned printer:5;
   } computer;
    
   printf("�п�J�n�мƥ�:"); 
   scanf("%d",&num);
   computer.floppy=num;
   printf("�п�J�w�мƥ�:"); 
   scanf("%d",&num);
   computer.hard_disk=num;
   printf("�п�J���о��ƥ�:"); 
   scanf("%d",&num);
   computer.cd_rom=num;
   printf("�п�J�L����ƥ�:"); 
   scanf("%d",&num);
   computer.printer=num;
   
   printf("\n�n�м�%d�x, ",computer.floppy);
   printf("�w��%d�x\n",computer.hard_disk);
   printf("���о�%d�x, ",computer.cd_rom); 
   printf("�L���%d�x\n",computer.printer); 
   
   system("pause");
   return 0;
}

/* output--------------
�п�J�n�мƥ�:1
�п�J�w�мƥ�:3
�п�J���о��ƥ�:2
�п�J�L����ƥ�:2

�n�м�1�x, �w��3�x
���о�2�x, �L���2�x
---------------------*/
