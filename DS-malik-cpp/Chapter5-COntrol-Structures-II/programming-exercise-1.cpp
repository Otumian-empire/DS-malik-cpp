/* Write a program that prompts the user to input an integer and then outputs
both the individual digits of the number and the sum of the digits. For
example, it should output the individual digits of 3456 as 3 4 5 6 , output
the individual digits of 8030 as 8 0 3 0 , output the individual digits of
2345526 as 2 3 4 5 5 2 6 , output the individual digits of 4000 as 4 0 0
0 , and output the individual digits of -2345 as 2 3 4 5 . */

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // int x, y = 10, temp = 0, xSum = 0;

    // cout << "enter a int value: ";
    // cin >> x;

    // x = abs(x);

    // temp = x;

    // while (x > y)
    // {
    //     while (temp > y)
    //     {
    //         temp = x / y;
    //         y *= 10;
    //         temp = x;
    //     }

    //     cout << temp << " ";
    //     xSum += temp;

    //     x = x - (temp * y);

    //     temp = x;
    //     y = 10;
    // }

    // cout << x << " " << xSum + x << endl;

    // mist
    int stack[100], n = 0;
    int x = 123, y = 10, temp = 0, xSum = 0;

    cout << "enter a int value: ";
    cin >> x;

    x = abs(x);

    temp = x;

    while (temp > 0)
    {
        stack[n++] = temp % y;
        temp = temp / y;
    }

    cout << endl;
    for (int i = n - 1; i >= 0; i--)
    {
        xSum += stack[i];
        cout << stack[i] << " ";
    }

    cout << xSum << endl;

    return 0;
}
