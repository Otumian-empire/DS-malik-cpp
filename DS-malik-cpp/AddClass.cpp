class AddClass {
	public:
		AddClass(int param1, int param2) {
			this->param1 = param1;
			this->param2 = param2;
		};
	
		
		AddClass() {}
	
	private:
		int param1;
		int param2;
	
	public : 
		int getParam1() {
			return param1;
		}
	
		int getParam2() {
			return param2;
		}
};

#include <iostream>
using namespace std;


int main() {
	AddClass a = AddClass(33, 12);
	cout << a.getParam1() << endl;
	cout << a.getParam2() << endl;
	
	
	return 0;
}
