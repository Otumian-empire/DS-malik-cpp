#include <iostream>
#include <fstream>
using namespace std;

int main() {
	
	ifstream infile;
	string s;
	
	// hello.txt is in the same dir as this file
	infile.open("hello.txt");
	
	while(getline(infile, s)) {
		cout << s << endl;
	}
	
	
	
	return 0;
}
