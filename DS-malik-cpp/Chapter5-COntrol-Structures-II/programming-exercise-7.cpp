/* Write a program that prompts the user to input a positive integer. It should then
output a message indicating whether the number is a prime number. (Note: An
even number is prime if it is 2. An odd integer is prime if it is not divisible by
any odd integer less than or equal to the square root of the number.) */

#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(unsigned int num);

int main()
{
    int positiveInteger;

    cout << "Enter a positive integer: ";
    cin >> positiveInteger;

    while (positiveInteger < 0)
    {
        cout << "Please enter a positive integer: \nOr press `Ctrl + C` to quit.";
        cin >> positiveInteger;
    }

    cout << positiveInteger << " is ";

    if (!isPrime(positiveInteger))
    {
        cout << "not ";
    }

    cout << "prime" << endl;

    return 0;
}

bool isPrime(unsigned int num)
{
    if (num < 2)
    {
        return 0;
    }

    if (num == 2)
    {
        return 1;
    }

    if (num % 2 == 1)
    {
        for (int i = 3; i <= sqrt(num); i += 2)
        {
            if (num % i == 0)
            {
                return 0;
            }
        }

        return 1;
    }

    return 0;
}
