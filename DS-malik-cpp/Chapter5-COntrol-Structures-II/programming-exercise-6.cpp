/* Write a program that reads a set of integers and then finds and prints the sum
of the even and odd integers. */

#include <iostream>

using namespace std;

int main()
{
    int sizeOfNumbers = 10, evenSum = 0, oddSum = 0, temp = 0;

    cout << "Enter a set of positive number numbers \n(enter a negative to end the set)" << endl;

    for (int i = 0; i < sizeOfNumbers; i++)
    {
        cin >> temp;

        if (temp < 0)
        {
            break;
        }

        if (temp % 2 == 0)
        {
            evenSum += temp;
        }
        else
        {
            oddSum += temp;
        }
    }

    cout << "The sum of even numbers is " << evenSum << " and that of the odds is " << oddSum << endl;

    return 0;
}