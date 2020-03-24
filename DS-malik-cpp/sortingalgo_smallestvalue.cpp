#include <iostream>

using namespace std;

// int ssort(int blist[], int blistlen, int x);
void printbbsort(int blist[], int blistlen);
int smallestval(int list[], int len, int pos);

int main() {
	
	// int list[] = {2, 6, 3, 5, 3, 4, 8, 0, 5, 6};
	// printbbsort(list, 10);
	// cout << "the smallest is: " << ssort(list, 10, 1) << endl;
	
	
	int list2[] = {2, -6, 0, -5, -103};
	printbbsort(list2, 5);
	cout << "the smallest is: " << smallestval(list2, 5, 0) << endl;

	
	// int list3[] = {2, -6, 3, -5, -3, 4, 8, 0, 5, 6};
	// printbbsort(list3, 10);
	// cout << "the smallest is: " << ssort(list3, 10, 5) << endl;
	
	// printbbsort(list, 10);
	
	return 0;
}

/*
int ssort(int blist[], int blistlen, int x = 1) {
	int smallest = blist[0];
	
	for (x; x < blistlen; ++x) {
		if (smallest > blist[x]) {
			smallest = blist[x];
		}
	}
	
	return smallest;
	
}
*/

int smallestval(int list[], int len, int pos) {
	int smallval = pos;
	
	for (pos; pos < len - 1; ++pos) {
		if (list[smallval] < list[pos + 1]) {
			
		} 
	}
	
	return smallval;
}

void printbbsort(int blist[], int blistlen) {
	for (int x = 0; x < blistlen; ++x) {
		cout << blist[x] << endl;
	}
	cout << endl;
}
