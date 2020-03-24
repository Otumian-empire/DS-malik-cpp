#include <iostream>
//#include <string>

using namespace std;

int main() {
	
	string x, y;
	int pos;
	
	cout << "enter a string: ";
	getline(cin, x);
	
	cout << "str: " << x << endl;
	cout << "enter a str to find from " << x << ": " ;
	cin >> y;
	pos = x.find(y);
	cout << "\""<< y << "\" is at " << pos << endl;
	
	x.insert(pos, y + "\" is godly\" ");
	
	cout << x << endl;
	
	
	
	return 0;
}
