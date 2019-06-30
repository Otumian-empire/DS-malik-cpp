#include <iostream>
using namespace std;

int main() {
	cout << "enter the multiple: ";
	int counter = 1;
	double number;
	cin >> number;
	
	for (counter; counter < 13; ++counter) {
		
	    cout << number << " x " << counter << " = " << number * counter << endl;
	    
	}
	
	return 0;
}
