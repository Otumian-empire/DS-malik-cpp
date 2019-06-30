#include <iostream>
using namespace std;

void bubsort(int blist[], int blistlen);
void bswap(int x, int y);

int main() {
	
	int x, y;
	
	x = 23;
	y = 19;
	
	cout << "x: " << x << " and y: " << y << endl;
	
	bswap(x, y);
	
	
	cout << "swapping-> x: " << x << " and y: " << y << endl;
	return 0;
}

void bubsort(int blist[], int blistlen) {

}

void bswap(int *x, int *y) {
	int temp = 0;
	
	temp = y;
	y = x;
	x = temp;
}
