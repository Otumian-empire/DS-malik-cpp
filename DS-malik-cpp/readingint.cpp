#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int toint(string str);

int main() {
	
	/*string x;
	int ix;
	ifstream myf;
	myf.open("ticketinfo.txt");
	*/
	string x = "123";
	//cout << toint(x);
	char c;
	int i;
	int l;
	int len = x.length();
	for (int i = 0; len > i; --len) {
		l = len - 1;
		c = x[l];
		i = c;
		
		//cout << " len - > " << l <<  " x[" << l <<"] -> " << c <<" this pow = " << pow(10, l) << " given " <<  c << " = " << i * pow(10, l) << endl;
		
		cout << instanceof(i);
		
	}
	
	return 0;
}


int toint(string str) {
	int len = str.length();
	int intval = 0;
	for (int i: str) {
		cout << "intval = " << intval << ", len = "<< len << ", pow(10, len) " << pow(10, len) << endl;
		intval = (i * pow(10, len));
		--len;
		cout << "i = " << i << " and intval = " << intval << endl;
	}
	
	return intval;
	
}
