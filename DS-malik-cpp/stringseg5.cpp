#include <iostream>
//#include <string>

using namespace std;

int main() {
	
	int spos, epos;
	string x, startstr, endstr, subx;
	
	subx = "";
	
	getline(cin, x);
	cout << x << endl;
	
	cout << "enter the starting string in \"" << x << "\": ";
	cin >> startstr;
	
	cout << "enter the ending string in \"" << x << "\": ";
	cin >> endstr;
	
	spos = x.find(startstr);
	epos = x.find(endstr);
	
	// cout << spos << " - " << epos << endl;
	
	for (int i = spos; i < epos; ++i) {
		subx += x[i];
	}
	
	// cout << subx << " is of length: " << subx.length() << endl;
	
	cout << x.substr(spos, subx.length()) << endl;
	
	return 0;
}
