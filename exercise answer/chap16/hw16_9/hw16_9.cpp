// hw16_9.cpp
#include <iostream>
#include <cstdlib>
using namespace std;
int max(int,int);
int max(int,int,int);
int main(void)
{
   cout << "max(5,9)=" << max(5,9) << endl; 
   cout << "max(15,9,23)=" << max(15,9,23) << endl; 
  
   system("pause");
   return 0;
}

int max(int a,int b)
{
   if(a>b)
      return a;
   else
      return b;
}

int max(int a,int b,int c)
{
   if(a>b && a>c)
      return a;
   else if(b>a && b>c)
      return b;
   else
      return c;
}

/* output--------
max(5,9)=9
max(15,9,23)=23
---------------*/
