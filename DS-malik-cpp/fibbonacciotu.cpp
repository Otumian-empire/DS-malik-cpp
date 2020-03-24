#include <iostream>
#include <fstream>

using namespace std;

int main() {
	ofstream ost;
	ost.open("fiboutputtext.txt");
	
	long long int prevA, prevB, fibNum, nthFib, counter;
	
	prevA = 0;
	prevB = 1;
	
	counter = 3;
	
	ost << "enter the number of fib: ";
	cout << "enter the number of fib: ";
	
	cin >> nthFib;
	ost << nthFib << endl;
	
	cout << prevA << endl << prevB << endl;
	ost << prevA << endl << prevB << endl;
	
		
	while (counter <= nthFib) {
		fibNum = prevA + prevB;
		cout << fibNum << endl;
		ost << fibNum << endl;
		
		prevA = prevB;
		prevB = fibNum;
		
		++counter;
	}
	
	return 0;
}
