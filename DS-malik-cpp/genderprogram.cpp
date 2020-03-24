/*
Write C++ statements that output Male if the gender is 'M', Female if the gender is 'F', and invalid gender otherwise.
*/

#include <iostream>

using namespace std;

int main() {
	string gender;
	char inisex;
	
	cout << "enter the initial of your gender? ";
	cin >> inisex;
	
	switch (inisex) {
		case 'm':
		    gender = "Male";
		    break;
		case 'f':
		    gender = "Female";
		    break;
		default:
		    gender = "Unknown";
		    break;
	}
	
	cout << "Gender: " << gender << "(" << inisex << ")" << endl;
	
	return 0;
}
