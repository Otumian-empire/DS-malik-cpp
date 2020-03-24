/*
In a right triangle, the square of the length of
 one side is equal to the sum of the squares of 
the lengths of the other two sides.
Write a program that prompts the user to enter 
the lengths of three sides of a triangle and 
then outputs a message indicating whether the 
triangle is a right triangle.
*/

#include <iostream>
#include <cassert>

using namespace std;

double sq(double x) { return x * x; }

int main() {
	double hyp, sideA, sideB;
	
	cout << "enter the 3 sides of the triangle, with the hypotenuse first (longest side): ";
	cin >> hyp >> sideA >> sideB;
	
	assert(hyp);
	assert(sideA);
	assert(sideB);
	
	hyp = sq(hyp);
	sideA = sq(sideA);
	sideB = sq(sideB);
	
	if (hyp == (sideA + sideB)) {
		cout <<"T: "  << hyp << ':' << sideA << ':' << sideB <<" is Triangular " << endl;
	} else {
		cout <<"T: "  << hyp << ':' << sideA << ':' << sideB <<" is Non-Triangular " << endl;
	}
	
	return 0;
}