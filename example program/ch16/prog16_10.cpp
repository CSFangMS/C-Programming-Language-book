// prog16_10, �ǻ�������Ƹ� 
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin    		// �w�q�������OCWin
{
   public:
     char id;
     int width;   
     int height;
     
     int area(void) 	// �w�q��Ʀ���area()�A�Ψӭp�⭱�n
     {                 
        return width*height;
     }

     void set_data(char i,int w,int h)  // �w�qset_data()���
     {
        id=i;          	// �]�wid���� 
        width=w; 		// �]�wwidth����
        height=h; 	// �]�wheight����
     }
};

void show_area(CWin win)   // ��show_area()�w�q���@�몺���
{
   cout<<"Window "<<win.id<<", area="<<win.area()<< endl;
}

int main(void)
{
   CWin win1;   
   
   win1.set_data('B',50,40);  	// ��win1����I�sset_data()���
   show_area(win1);     		// �ǻ�win1�����show_area()��Ƹ�
   
   system("pause");
   return 0;
}

