/* Write a program that takes as input five numbers and outputs the mean
(average) and standard deviation of the numbers. If the numbers are x1 , x2 ,
x3 , x4 , and x5 , then the mean is x = (x1 + x2 + x3 + x4 + x5 )/5 and the
standard deviation is: 

s = square root (((x1 - x)^2 + (x2 - x)^2 + (x3 - x)^2 + (x4 - x)^2 + (x5 - x)^2)/5)

Your program must contain at least the following functions: a function that
calculates and returns the mean and a function that calculates the standard
deviation. */

#include <iostream>
#include <cmath>

using namespace std;

double mean(double x1, double x2, double x3, double x4, double x5);
double stdDeviation(double x1, double x2, double x3, double x4, double x5, double xmean);

int main()
{
    double x1, x2, x3, x4, x5, xmean, xStdDev;

    cout << "enter five numbers: ";
    cin >> x1 >> x2 >> x3 >> x4 >> x5;

    xmean = mean(x1, x2, x3, x4, x5);

    xStdDev = stdDeviation(x1, x2, x3, x4, x5, xmean);

    cout << "The mean and standard deviation of " << x1 << ", " << x2 << ", " << x3 << ", "
         << x4 << " and " << x5 << " is " << xmean << " and " << xStdDev << " respectively" << endl;

    return 0;
}

double mean(double x1, double x2, double x3, double x4, double x5)
{
    return (x1 + x2 + x3 + x4 + x5) / 5.0;
}

double stdDeviation(double x1, double x2, double x3, double x4, double x5, double xmean)
{
    double sqDiff = pow((x1 - xmean), 2) + pow((x2 - xmean), 2) + pow((x3 - xmean), 2) + pow((x4 - xmean), 2) + pow((x5 - xmean), 2);

    return sqrt(sqDiff / 5.0);
}
