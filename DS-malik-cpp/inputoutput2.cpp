#include <iostream>
using namespace std;

int main()
{
	
	int inum = 3;
	cout << "inum " << inum << endl;
	cout << "dinum " << static_cast<double>(inum) << endl;
	cout << showpoint <<  "number with .0s " <<static_cast(inum) << endl;
	
	return 0;
}
