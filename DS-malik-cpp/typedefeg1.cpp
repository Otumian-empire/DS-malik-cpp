#include <iostream>

using namespace std;

int main() {
	
	
	typedef int Number;
	typedef double Decimal;
	typedef string Text;
	typedef char Character;
	typedef bool Boolean;
	
	Number n;
	Decimal d;
	Text t;
	Character c;
	Boolean b;
	
	cin >> n >> d >> t >> c >> b;
	cout << n << endl
	     << d << endl
	     << t << endl
	     << c << endl
	     << b << endl;
	     
	return 0;
}
