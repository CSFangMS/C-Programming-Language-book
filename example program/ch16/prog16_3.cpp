// prog16_3, ���L�ܼƪ��ϥ�
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   bool is_odd;			/* �ŧi���L���A���ܼ�is_odd */
   int num;
    
   cout << "�п�J�@�ӥ����: ";
   cin >> num;
   
   if(num%2!=0)
      is_odd=true;	/* �p�Gnum�O�_�ơA�]�wis_odd��true */
   else
      is_odd=false; 	/* �p�Gnum�O���ơA�]�wis_odd��false */
      
   if(is_odd)
      cout << num << "�O�_��" << endl;
   else 
      cout << num << "�O����" << endl;    
   system("pause");
   return 0;
}

