/*Write a program that takes as input given lengths expressed in feet and inches.
The program should then 
convert and output the lengths in centimeters.
Assume that the given lengths in feet and inches are integer
Formular:
1 inch = 2.54 centimeters
1 foot = 12 inches
*/

#include <iostream>

using namespace std;

int main() {
	
	// input
	double inches, foot, icentimeters, fcentimeters, sumcentimeters;
	
	cout << "enter length in inches: ";
	cin >> inches;
	
	cout << "enter length in foot: ";
	cin >> foot;
	
	// process
	icentimeters = 2.54 * inches;
	fcentimeters = 12 * 2.54 * foot;
	sumcentimeters = icentimeters + fcentimeters;
	
	// output
	cout << "the corresponding length of inches in centimeter is: " << icentimeters << endl;
	
	cout << "the corresponding length of foot in centimeter is: " << fcentimeters << endl;
	
	cout << "the total centimeters is : " << sumcentimeters << endl;
	
	return 0;
}	
