#include <iostream>
#include <cassert>

using namespace std;

int main() {
	
	int num, denom, quo, rem;
	num = 12;
	denom = 0;
	quo = 2;
	rem = 1;
	//assert(num < denom)
	if(num > denom) {
		quo = num / denom;
		
		cout << quo << endl;
	} else {
		cout << "else " << quo << endl;
	}
	
	return 0;
}
