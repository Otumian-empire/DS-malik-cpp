#include <iostream>
#include <cassert>

using namespace std;

int main() {
	
	int num, denom, quo, rem;
	num = 12;
	denom = 0;
	quo = 2;
	rem = 1;
	
	assert(denom); // this is a zero int
	quo = num / denom;
	cout << "num / denom = " << quo << endl;
	
	return 0;
}
