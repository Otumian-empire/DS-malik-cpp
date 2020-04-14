/* Write a program that prompts the user to input three numbers.The program
    should then output the numbers in ascending order. */

#include <iostream>
using namespace std;

int main()
{
    int x, y, z, temp = 0;

    cout << "Enter 3 numbers separated by a white space: ";
    cin >> x >> y >> z;

    if (x > y)
    {
        temp = y;
        y = x;
        x = temp;
    }

    temp = 0;

    if (x > z)
    {
        temp = z;
        z = x;
        x = temp;
    }

    temp = 0;

    if (y > z)
    {
        temp = z;
        z = y;
        y = temp;
    }

    cout << x << " " << y << " " << z << endl;

    return 0;
}