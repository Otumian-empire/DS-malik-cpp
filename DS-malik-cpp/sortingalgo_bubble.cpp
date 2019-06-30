// my bubblesort algorithm

#include <iostream>

using namespace std;

void bbsort(int blist[], int blistlen);
void printbbsort(int blist[], int blistlen);

int main() {
	
	/*
	int blist1[] = {32, 54, 12, 2, 80};
	bbsort(blist1, 5);
	printbbsort(blist1);
	
	int blist2[] = {32, -54, 2, 2, -80};
	bbsort(blist2, 5);
	printbbsort(blist2);
	
	int blist3[] = {3, 5, 1, 2, 0};
	bbsort(blist3, 5);
	printbbsort(blist3);
	*/
	
	int list[] = {2, 56, 34, 25, 73, 46, 89, 10, 5, 16};
	printbbsort(list, 10);
	bbsort(list, 10);
	printbbsort(list, 10);
	
	return 0;
}

void bbsort(int blist[], int blistlen) {
	
	int temp = 0;
	
	for (int x = 1; x < blistlen; ++x) {
	    for (int i = 1; i < blistlen; ++i) {
		    if (blist[i - 1] > blist[i]) {
			    temp = blist[i];
			    blist[i] = blist[i - 1];
			    blist[i - 1] = temp;
		    }
	    }
	}
	
}

void printbbsort(int blist[], int blistlen) {
	for (int x = 0; x < blistlen; ++x) {
		cout << blist[x] << endl;
	}
	
	cout << endl;
}
