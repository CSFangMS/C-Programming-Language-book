// prog16_5, ��Ʀh�����d��--�޼ƭӼƬۦP�A�����A���P
#include <iostream>
#include <cstdlib>
using namespace std;
void show(int);			// show(int)���쫬
void show(double); 		// show(double)���쫬
int main(void)
{
   int a=26;
   double b=3.14;
   show(a);				// �ǤJ��ƨ�show()��Ƹ�
   show(b); 				// �ǤJ����ׯB�I�ƨ�show()��Ƹ�
     
   system("pause");
   return 0;
}
void show(int num)   		// show()��ơA�i�����@�Ӿ��
{
   cout << num << "�O�@�Ӿ��" << endl;
}
void show(double num)	// show()��ơA�i�����@�ӭ���ׯB�I��
{
   cout<< num << "�O�@�ӭ���ׯB�I��" << endl;
}
