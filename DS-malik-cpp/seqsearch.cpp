/*
searching algo, give the list, its length and what to find from the list
*/
#include <iostream>
using namespace std;

int seqsearch(int mylist[], int mylistlen, int item) {
	
	int loc = 0;
	while (loc < mylistlen) {
		if (mylist[loc] == item) {
			cout << item << " found" << endl;
			return loc;
		} else {
			++loc;
		}
		
	}
	cout << item << " not found" << endl;
	return -1;
}

int main() {
	
	int xl[] = {2, 4, 67, 99, 120, -23};
	int lenxl = 6;
	cout << seqsearch(xl, lenxl, 67)  << endl;
	cout << seqsearch(xl, lenxl, -23)  << endl;
	cout << seqsearch(xl, lenxl, 99)  << endl;
	cout << seqsearch(xl, lenxl, 6)  << endl;
	
	return 0;
}
