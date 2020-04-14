/* Write a program that prompts the user to input a number. The program
should then output the number and a message saying whether the number is
positive, negative, or zero. */

#include <iostream>

using namespace std;

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    cout << num << " is ";

    if (num > 0)
        cout << "positive";
    else if (num < 0)
        cout << "negative";
    else
        cout << "zero";

    cout << endl;

    return 0;
}