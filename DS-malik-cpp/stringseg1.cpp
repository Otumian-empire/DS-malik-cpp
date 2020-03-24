#include <iostream>
//#include <string>

using namespace std;

int main() {
	
	string x;
	getline(cin, x);
	cout << x << endl;
	x = x + " and i love programming ";
	cout << x << endl;
	cout << x[0] << endl;
	
	return 0;
}
