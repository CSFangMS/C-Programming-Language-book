/* hw16_17.cpp */
#include <iostream>
#include <cstdlib>
using namespace std;
class CRectangle
{
   private:
     int width;
     int height;
    
   public:
     CRectangle(int w,int h)
     {
        width=w;
        height=h;
     }
     CRectangle(void)
     {
        width=10;
        height=8;
     }
     void show(void)
     {
        cout << "width=" << width;
        cout << ", height=" << height << endl;
     }
};

int main(void)
{  
   CRectangle rec1(5,3);
   CRectangle rec2;   
    
   rec1.show();
   rec2.show();
   
   system("pause");
   return 0;
}

/* output-----------
width=5, height=3
width=10, height=8
------------------*/
