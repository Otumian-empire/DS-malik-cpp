#include <iostream>

using namespace std;

int main() {
	
	int xarr[5];
	for (int x = 0; x < 5; ++x) {
		xarr[x] = x * 2;
	}
	
	for (int x = 0; x < 5; ++x) {
		cout << x << ": " << xarr[x] << endl;
	}
	
	
	return 0;
}
