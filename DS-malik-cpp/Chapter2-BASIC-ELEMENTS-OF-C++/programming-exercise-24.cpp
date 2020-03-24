/* One metric ton is approximately 2205 pounds. Write a program that
prompts the user to input the amount of rice, in pounds, in a bag. The
program outputs the number of bags needed to store one metric ton of rice. */

/*
1 ton = 2205 pounds
but the problem is that, if a bag holds about say x pounds of rice in a bag,
then there'd be 2205/x number of bags of rice to store one metric ton of rice
*/
#include <iostream>

using namespace std;

int main()
{
    double oneTon = 2205, amountOfRice;

    cout << "enter the amount of rice in a bag, in pounds: ";
    cin >> amountOfRice;

    cout << oneTon / amountOfRice
         << " bags of rice is needed to store one metric ton of rice." << endl;

    return 0;
}