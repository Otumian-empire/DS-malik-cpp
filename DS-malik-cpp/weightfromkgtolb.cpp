/*
Write a program that prompts the user to enter the weight of a person in kilograms and outputs the equivalent weight in pounds.
 Output both the weights rounded to two decimal places.
(Note that 1 kilogram = 2.2 pounds.)
Format your output with two decimal places.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	// weight variables
	double wkilo, wpounds;
	
	// takibgvinout for weight in kilogram
	cout << "enter weight kilogram: ";
	cin >> wkilo;
	
	// computing equivalent weight in pounds
	// 1kg = 2.2lbs
	wpounds = wkilo * 2.2;
	
	// outputting the results of the computation
	cout << setprecision(4) << wkilo << "kg = " << wpounds << "pounds" << endl;
	
	return 0;
}
