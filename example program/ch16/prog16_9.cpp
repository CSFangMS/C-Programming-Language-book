// prog16_9, ��Ʀ������ۤ��I�s
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin    	// �w�q�������OCWin
{
   public:
     char id;
     int width;   
     int height;
     
     int area(void) 		// �w�q��Ʀ���area()�A�Ψӭp�⭱�n
     {                 
        return width*height;
     }
     void show_area(void)	// �w�q��Ʀ���show_area()�A�Ψ���ܭ��n
     {
        cout<<"Window "<< id <<", area=" << area() << endl;
     }
};

int main(void)
{
   CWin win1;   
   
   win1.id='A';
   win1.width=50;		
   win1.height=40;
   win1.show_area();  	// �I�sshow()��� 
   
   system("pause");
   return 0;
}

