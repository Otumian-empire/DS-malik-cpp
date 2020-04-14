/* In a right triangle, the square of the length of one side is equal to the sum of
the squares of the lengths of the other two sides. Write a program that
prompts the user to enter the lengths of three sides of a triangle and then
outputs a message indicating whether the triangle is a right triangle. */

#include <iostream>

using namespace std;

int main()
{
    double hSide, side1, side2, e = 0.000001;

    cout << "enter the longest side: ";
    cin >> hSide;

    cout << "enter the other 2 sides (white space separated): ";
    cin >> side1 >> side2;

    hSide *= hSide;
    side1 *= side1;
    side2 *= side2;

    double temp = (side1 + side2) - hSide;

    temp = (temp < 0) ? temp * -1 : temp;

    if (temp <= e)
        cout << "Triangle is a right angle" << endl;
    else
        cout << "Triangle is not a right angle" << endl;

    return 0;
}
