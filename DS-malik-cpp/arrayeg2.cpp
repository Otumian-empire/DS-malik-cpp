/*
write a rogram to read five numbers, find their sum, and print the numbers in reverse order.
*/

#include <iostream>

using namespace std;

int main() {
	
	int fiveint[5];
	int sum5ints = 0;
	
	for (int i = 0; i < 5; ++i) {
		cout << "enter the " << i + 1 << " element: ";
		
		cin >> fiveint[i];
		
		sum5ints += fiveint[i];
		
	}
	
	cout << "the sum of ";
	
	for (int i = 0; i < 5; ++i) {
		cout << fiveint[i] << ", ";
	}
	
	cout << " are " << sum5ints;
	return 0;
}
