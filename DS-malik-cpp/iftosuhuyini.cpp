#include <iostream>

using namespace std;

int main()
{
    int age;

    cout << "how old are you? ";
    cin >> age;

    if (age >= 18)
    {
        cout << "You are old enough to vote" << endl;
    }
    else
    {
        cout << "Hey you shall have the due right to vote in "
             << 18 - age << " years from now" << endl;
    }


    return 0;
}
