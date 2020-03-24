/*
One metric ton is approximately 2205 pounds.
Write a program that prompts the user to input the amount of rice, in pounds, in a bag.
The program outputs the number of bags needed to store one metric ton of rice.

1ton = 2205pounds
*/
#include <iostream>

using namespace std;

const double TONS_POUNDS = 2205;

int main()
{
	double amountOfRicePounds, amountOfRiceTons;
	
	cout << "enter the amount of rice, in pounds, in a bag: ";
	cin >> amountOfRicePounds;
	
	amountOfRiceTons = amountOfRicePounds * TONS_POUNDS;
	
	cout << "There are " << amountOfRiceTons << "metric tons of rice" << endl;
	
	
	return 0;
}	
