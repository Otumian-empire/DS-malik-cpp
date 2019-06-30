#include <iostream>
using namespace std;

int addnum(int num);

int main() {

    int num = 1;
    cout << "first line: " << addnum(num) << endl;
    // cout << "second line: " << addnum(num) << endl;
    // cout << "third line: " << addnum(num) << endl;
    num += 5;
    cout << "second line: " << num << endl;

    return 0;
}

int addnum(int num) {
    num += 1;
    return num;
}