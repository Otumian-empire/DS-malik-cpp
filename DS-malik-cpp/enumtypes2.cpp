#include <iostream>

using namespace std;

int main() {
	
	cout << "start" << endl;
	char fchar;
	enum colors {
		RED,
		YELLOW,
		GREEN,
		BLACK
	};
	
	cout << "enter first character of color name: ";
	cin >> fchar;
	
	colors myc;
	
	switch(fchar) {
		case 'R':
		case 'r':
		    myc = RED;
		    break;
		case 'G':
		case 'g':
		    myc = GREEN;
		    break;
		case 'Y':
		case 'y':
		    myc = YELLOW;
		    break;
		case 'B':
		case 'b':
		    myc = BLACK;
		    break;
		default:
		    cout << "unknown color name initial..." << endl;
		    break;
	}
	
	
	cout << "output color: " << myc << endl;
	
	cout << "end" << endl;
	
	return 0;
}
