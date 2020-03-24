/* Newton’s law states that the force, F, between two bodies of masses P and
Q is given by:
    F = k (P*Q)/d^2
in which k is the gravitational constant and d is the distance between the
bodies. The value of k is approximately 6.67E-8 dyn. cm^2 /g^2 . Write a program that
prompts the user to input the masses of the bodies and the
distance between the bodies. The program then outputs the force between
the bodies.*/

#include <iostream>
#include <cmath>

using namespace std;

double newtonsForce(double massOne, double massTwo, double distance);

int main()
{
    double P, Q, d, F;

    cout << "Enter the mass of the first body: ";
    cin >> P;

    cout << "Enter the mass of the second body: ";
    cin >> Q;

    cout << "Enter the distance between the bodies: ";
    cin >> d;

    cout << "The force between the masses, " << P << " and " << Q
         << " at " << d << " apart is " << newtonsForce(P, Q, d) << endl;

    return 0;
}

double newtonsForce(double massOne, double massTwo, double distance)
{
    const double k = 6.67E-8;

    return k * (massOne * massTwo) / pow(distance, 2);
}
