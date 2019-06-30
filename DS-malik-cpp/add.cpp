#include <iostream>
using namespace std;

int add1(int);
int add2(int);
int add3(int);

int main()
{
	cout << add1(3) <<endl;
	cout << add2(3) <<endl;
	cout << add3(3) <<endl;
	return 0;
}

int add1(int x)
{
	return x + 1;
}	

int add2(int x)
{
	return x + 2;
}	

int add3(int x)
{
	return x + 3;
}	
