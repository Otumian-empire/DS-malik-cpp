#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	double x, y, z;
	
	//cout << setprecision(3) << 0.0043 << endl;
	
	cin >> x >> y >> z;
	cout << setprecision(2);
	cout << "x =" << x << endl;
	cout << "y =" << y << endl;
	cout << "z =" << z << endl;
	
	cout << "using fixed: " << fixed 
	<< "x: " << x << endl 
	<< "y: " << y << endl 
	<< "z: " << z << endl;
	
	cout << "using scientific: " << scientific 
	<< "x: " << x << endl 
	<< "y: " << y << endl 
	<< "z: " << z << endl;
	
	cout << "using setprecision: " << setprecision(2) 
	<< "x: " << x << endl 
	<< "y: " << y << endl 
	<< "z: " << z << endl;
	
	return 0;
}
