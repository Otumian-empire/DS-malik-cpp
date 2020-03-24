#include <iostream>
//#include <string>
#include <iomanip>

using namespace std;

int main() {
	
	string hobby;
	int age;
	double weight, height;
	
	cout << setw(20) << "enter your hobhy: ";
	getline(cin, hobby);
	
	cout << "enter your age: ";
	cin >> age;
	
	cout << "enter weight and height separated a white space: ";
	cin >> weight >> height ;
	
	cout << left << hobby << endl << right << "age: " << age << endl << left << "weight and height: "  << weight << ", "<< height << endl ;
	
	return 0;
}
