/* hw16_11.cpp */
#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;
class CWin
{
   public:
     char id;
     int width;
     int height;
     char title[50];
     
     void set_title(char t[])
     {
        strcpy(title,t);
     }
     void display(void)
     {
        cout << "title=" << title << endl;
     }
     int area(void)
     {
        return width*height;
     }
};

int main(void)
{  
   CWin win1;
   win1.id='A';
   win1.width=50;
   win1.height=40;
   win1.set_title("My window");
   win1.display();   
   cout << "Window " << win1.id << ":" << endl;  
   cout << "Area = " << win1.area() << endl;
   
   system("pause");
   return 0;
}

/* output---------
title=My window
Window A:
Area = 2000
----------------*/
