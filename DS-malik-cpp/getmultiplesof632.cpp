#include <iostream>

using namespace std;

int main() {

    for (int i = 0; i < 100; i++) {
        if (i % 2 == 0 && i % 3 == 0) {
            cout << i << " is a multiple of 2 and 3" <<endl;
        } else if (i % 3 == 0) {
            cout << i << " is a multiple of 3" <<endl;
        } else {
            cout << i << " is a multiple of 2" <<endl;
        }
    }
    return 0;
}
