#include <iostream>

using namespace std;

void selectionsort(int list[], int listlen);
void printbbsort(int blist[], int blistlen);

int main() {
	
	int list[] = {3, 5, 0,1, -5};
	int listlen = 5;
	printbbsort(list, listlen);
	selectionsort(list, listlen);
	printbbsort(list, listlen);
	
	cout << endl;
	
	
	int list1[] = {2, 56, 34, 25, 73, 46, 89, 10, 5, 16};
	int list1len = 10;
	
	printbbsort(list1, list1len);
	selectionsort(list1, list1len);
	printbbsort(list1, list1len);
	
	cout << 1 << " success " << endl;
	
	return 0;
}

void selectionsort(int list[], int listlen) {
	
	int temp = 0;
	// int pos = 0;
	
	for (int i = 0; i < (listlen - 1); ++i) {
		
		int pos = i;
		
		// here we look for the 
		for (int x = (1 + i); x < listlen; ++x) {
			if (list[pos] > list[x]) {
				pos = x;
			}
		}
		
		// the swapping takes place here
		if (pos != i) {
		    temp = list[pos];
		    list[pos] = list[i];
		    list[i] = temp;
		 }
		
		//pos = i; ++pos;
	}
}


// print functionfunctionfunction
void printbbsort(int blist[], int blistlen) {
	for (int x = 0; x < blistlen; ++x) {
		cout << blist[x] << (x < blistlen? ", ":"");
	}
	cout << endl;
}

// find the smallest in a list
int smval(int blist[], int blistlen) {
	
	int x;
	int smallest = blist[0];
	
	for (x = 1; x < blistlen; ++x) {
		if (smallest > blist[x]) {
			smallest = blist[x];
		}
	}
	
	return smallest;
}
