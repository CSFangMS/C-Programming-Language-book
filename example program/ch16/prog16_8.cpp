// prog16_8, �Ĥ@�����O�{�� 
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin    		// �w�q�������OCWin
{
   public: 			// �]�w��Ʀ���������
     char id;
     int width; 
     int height;
     
     int area(void) 	// �w�q��Ʀ���area()�A�Ψӭp�⭱�n
     {
         return width*height;
     }
};

int main(void)
{
   CWin win1;   		// �ŧiCWin���O���A���ܼ�win1 
   win1.id='A';
   win1.width=50;	// �]�wwin1��width������50
   win1.height=40;	// �]�wwin1��height������40
   
   cout << "Window " << win1.id << ":" << endl;
   cout << "Area = " << win1.area() << endl;  // �p�⭱�n 
   cout << "sizeof(win1) = " << sizeof(win1) << "�Ӧ줸��" << endl;
   
   system("pause");
   return 0;
}

