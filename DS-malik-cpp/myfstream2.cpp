#include <iostream>
#include <fstream>

using namespace std;

int main() {
	
	ofstream outfile;
	
	outfile.open("hello.txt", ios::app);
	
	outfile << endl;
	outfile << "hello there, i am a new text added through ofstream " << endl ;
	cout << "success" << endl;
	
	return 0;
}
