// prog16_11, ��Ʀ������h�� 
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin			// �w�q�������OCWin
{
   public:
     char id;
     int width;   
     int height;
     
     int area(void)	// �w�q��Ʀ���area()�A�Ψӭp�⭱�n
     {                 
        return width*height;
     }
     void show_area(void)
     {
        cout<<"Window "<< id <<", area=" << area() << endl;;
     }
     void set_data(char i,int w,int h)	// �Ĥ@��set_data()���
     {
        id=i;         
        width=w; 	
        height=h; 
     }
     void set_data(char i)  			// �ĤG��set_data()���
     {
        id=i;         
     } 
     void set_data(int w,int h)  		// �ĤT��set_data()���
     {
        width=w; 	
        height=h;         
     }          
};

int main(void)
{
   CWin win1,win2;   
   
   win1.set_data('A',50,40); 		// �I�s���T�Ӥ޼ƪ�set_data()
   win2.set_data('B');			// �I�s���@�Ӥ޼ƪ�set_data()
   win2.set_data(80,120);			// �I�s����Ӥ޼ƪ�set_data()
   
   win1.show_area(); 		// �Q��win1����I�sshow_area()
   win2.show_area();       // �Q��win2����I�sshow_area()
   
   system("pause");
   return 0;
}

