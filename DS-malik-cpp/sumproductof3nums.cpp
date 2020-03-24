/*
Write the definition of a function that takes as input three numbers and returns the sum of the first two numbers multiplied by the third number. (Assume that the three numbers are of type double.)
*/

#include <iostream>

using namespace std;

double sumpro3int(double x, double y, double z);

int main() {
	double x, y, z;
	
	cout << "enter three numbers to return the sum of the first two numbers multiplied by the third number: ";
	
	cin >> x >> y >> z;
	
	cout << "the sumproduct of " << x << ", " << y << " and " << z  << " is: " << sumpro3int(x, y, z) << endl;
	
	
	return 0;
}

double sumpro3int(double x, double y, double z) {
	return (x + y) * z;
}