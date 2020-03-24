#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main() {
	//ifstream infile;
	//infile.open("hello.txt");
	ifstream infile1;
	infile1.open("ticketinfo.txt");
	//string name;
	int x, y;
	
	/*while(getline(infile, name)) {
		cout << name << endl;
	}*/
	
	if (infile1 >> x >> y) {
		cout << x << " ........... " << y << endl;
	} else {
		cout << "there is a problem..." << endl;
	}
	
	infile1.close();
	//infile.close();
	
	cout << 0;
	return 0;
}
