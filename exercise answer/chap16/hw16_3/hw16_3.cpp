// hw16_3.cpp
#include <iostream>  // 把iostream這個檔案含括進來
#include <cstdlib>   // 把cstdlib這個檔案含括進來
using namespace std;
int main(void)       // 主函數main()從這兒開始
{  
   int num;				// 宣告整數變數num
   num=2;		 		// 把num的值設為2
   cout << "I have "<< num << " cats." << endl; // 印出字串與num的內容 
   cout << "You have "<< num << " cats, too." << endl; // 印出字串與num的內容   
   system("pause");  // 呼叫dos裡的pause指令，用來暫停程式的執行
   return 0;
}

/* output--------------
I have 2 cats.
You have 2 cats, too.
---------------------*/
