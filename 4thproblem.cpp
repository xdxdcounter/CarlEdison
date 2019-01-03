#include<iostream>
#include<cstring>

using namespace std;

int main()
{
	char a;
	cout <<"Enter a character: ";
	cin >> a;
	
	char b;
	cout <<"Enter another character: ";
	cin >> b;
	int al = int(a);
	int bl = int(b);
	
	  if(al > bl) 
	  {
        int temp = bl;
        bl = al;
        al = temp;
        for(int i = al; i <= bl; i++) {
            char c = i;
            cout << c;
        }
    } else {
        for(int i = al; i <= bl; i++) {
            char c = i;
            cout << c;
        }
    }
    return 0;
}
