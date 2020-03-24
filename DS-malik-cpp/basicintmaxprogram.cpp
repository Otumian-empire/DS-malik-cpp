#include <iostream>

using namespace std;

int main() {
	
	int x, y, maxn;
	
	cout << "enter x and y (int Val's), spaced: ";
	cin >> x >> y ;
	
	maxn = (x >= y)? x : y;
	
	cout << "the max value between " << x << " and " << y << ", is " << maxn << endl;
	
	return 0;
}
