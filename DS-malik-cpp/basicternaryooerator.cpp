#include <iostream>

using namespace std;

int main() {
	
	int x = 0;
	
	x = x > 19? x = 19 + x : x + 1;
	cout << x << endl;
	
	return 0;
}
