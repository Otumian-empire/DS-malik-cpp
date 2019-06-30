#include <iostream>
//#include <string>

using namespace std;

int main() {
	// string functions
	string x, xapp;
	char xc;
	int y, xappn;
	
	cout << "enter a string and a char position: ";
	cin >> x >> y;
 
	cout << "str: " << x << endl;
	
	cout << "char at " << y << ": " << x.at(y) << endl;
 
    cout << "str[" << y << "]: " << x[y] << endl;
 
    cout << "enter the appending str: ";
    cin >> xapp;
 
    cout << "str.append(" << xapp << "): " << x.append(xapp) << endl;
 
    cout << "enter a char and the number of times the char should appended to str: ";
    cin >> xc >> xappn;
 
    cout << "str.append(" << xappn << ", " <<xapp << "): " << x.append(xappn, xc) << endl;
 
    x.clear();
   // y.clear();
    xapp.clear();
    // xappn.clear();
   // xc.clear();
 
 
	return 0;
}
