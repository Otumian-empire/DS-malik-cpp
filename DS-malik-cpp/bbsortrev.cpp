#include <iostream>

using namespace std;

void bbsort(int list[], int len);
void printlist(int list[], int len);

int main() {
	
	int list[] = {4, 9, 0, 6, -3};
	int len = 5;
	
	printlist(list, len);
	bbsort(list, len);
	printlist(list, len);
	
	int list1[] = {2, 56, 34, 25, 73, 46, 89, 10, 5, 16};
	int len1 = 10;
	
	printlist(list1, len1);
	bbsort(list1, len1);
	printlist(list1, len1);
	
	return 0;
}

void bbsort(int list[], int len) {
	int temp = 0;
	for (int i = 0; i < len; ++i) {
		for (int x = 0; x < (len - 1); ++x) {
			if (list[x] > list[x + 1]) {
				temp = list[x];
				list[x] = list[x + 1];
				list[x + 1] = temp;
			}
		}
	}
}

void printlist(int list[], int len) {
	for (int i = 0; i < len; ++i) {
		cout << list[i] << (i < (len - 1)? ", " : "");
	}
	cout << endl;
}
