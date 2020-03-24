#include <iostream>
//#include <string>

using namespace std;

int main() {
	
	string x, rpltxt, newtxt;
	int posy, leny;
	
	cout << "enter a text: ";
	getline(cin, x);
	cout << x << endl;
	
	cout << "length of \"" << x << "\" is: " << x.length() << endl;
	
	cout << "enter a text you want to replace from \"" <<  x << "\": ";
	cin >> rpltxt;
	
	posy = x.find(rpltxt);
	leny = rpltxt.length();
	
	cout << "enter new text to replace \"" << rpltxt << "\": ";
	 cin >> newtxt;
	
	cout << x.replace(posy, leny, newtxt) << endl;
	
	return 0;
}
