/*
Newton’s law states that the force, F, between two bodies of masses M1 and M2 is given by: 
	F=k(M1M2)/ d^2; in which k is the gravitational constant and d is the distance between the bodies. 
The value of k is approximately 6.67*10^-8 dyn. cm^2/g^2.

Write a program that prompts the user to input the masses of the bodies and the distance between the bodies. 
The program then outputs the force between the bodies.
*/
#include <iostream>
#include <cmath>

using namespace std;

const double GRAVITATIONAL_CONSTANT =  6.67*pow(10, -8);
int main() {
	
	//f, k, m1, m2, d
	double force, firstMass, secondMass, distance;
	
	cout << "enter the first mass, m1: ";
	cin >> firstMass;
	
	cout << "enter the second mass, m2: ";
	cin >> secondMass;
	
	cout << "enter the distance between the two masses, d: ";
	cin >> distance;
	
	force = GRAVITATIONAL_CONSTANT * (firstMass * secondMass) / pow(distance, 2);
	
	cout << "the gravitational force acting on the masses, " << firstMass << "kg, " << secondMass << "kg, and " << distance << "m of distance apart is " << force << "N" << endl;
	
	return 0;
}	
