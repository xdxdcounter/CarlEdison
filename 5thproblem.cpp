#include<iostream>

 using namespace std;
 
 void linechar() 
 {
     for(int i = 1; i <= 20; i++) 
	 { 
         cout << "*";
     }
     cout << endl;
     cout << endl;
     
     for(int a = 1; a <= 20; a++) 
	 { 
         cout << "@";
     }
     cout << endl;
     cout << endl;
     
     for(int b = 1; b <= 10; b++) 
	 { 
         cout << "*";
     }
     cout << endl;
     cout << endl;
     
     for(int c = 1; c <= 15; c++) 
	 { 
         cout << "#";
     }
     cout << endl;
     cout << endl;
 }
 
 int main()
 {
     linechar();   
     return 0;
 }
