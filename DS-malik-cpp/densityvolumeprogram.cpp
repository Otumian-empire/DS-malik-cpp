/*
Write a program that accepts as input the mass, in grams, and density, 
in grams per cubic centimeters, and outputs the volume of the object 
using the formula: density = mass / volume. Format your output to two decimal places.
*/


#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	
	// input=: density and mass
	// process=: volume = mass / density
	// output=: volume
	
	double density, mass, volume;
	
	cout << "enter mass in grams: ";
	cin >> mass;
	
	cout << "enter density in grams per cubic centimenter: ";
	cin >> density;
	
	volume = mass / density;
	
	cout << "An object of mass and density, " << fixed << showpoint << setprecision(2) << mass << " gram(s) and " << density << " grams per cubic centimeters has a volume of " << volume << " cubic centimeters " << endl;
	
	return 0;
}
