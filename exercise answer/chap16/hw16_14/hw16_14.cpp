/* hw16_14.cpp */
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin
{
   private:
     char id;
     int width;
     int height;   
     int area(void)
     {
        return width*height;
     }
     
     public:
     void set_data(char i,int w,int h)
     {
        id=i;
        width=w;
        height=h;
     }
     void show_area(void)
     {
        cout << "Window " << id << ", area=" << area() << endl;
     }
};

int main(void)
{  
   CWin win1;   
   win1.set_data('A',5,12);   
   win1.show_area();
   
   system("pause");
   return 0;
}

/* output-----------
Window A, area=60
------------------*/
