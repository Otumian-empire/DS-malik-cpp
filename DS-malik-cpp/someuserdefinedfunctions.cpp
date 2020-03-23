#include <iostream>

using namespace std;

int larger(int x, int y);
double larger(double x, double y);

int main()
{
    cout << "The larger number between 2 and 3 is " << larger(2, 3) << endl;
    cout << "The larger number between 2.5656 and 3.123 is " << larger(2.5656, 3.123) << endl;
    return 0;
}

int larger(int x, int y)
{
    int maxValue;

    if (x >= y)
    {
        maxValue = x;
    }
    else
    {
        maxValue = y;
    }

    return maxValue;
}


double larger(double x, double y)
{
    double maxValue;

    if (x >= y)
    {
        maxValue = x;
    }
    else
    {
        maxValue = y;
    }

    return maxValue;
}
