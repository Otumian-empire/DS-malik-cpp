#include <iostream>

using namespace std;

int main()
{
    int userInput, secretNumber, numOfTrials;

    secretNumber = 12;
    numOfTrials = 5;


    while (numOfTrials > 0)
    {
        cout << "guess the secret number: ";
        cin >> userInput;

        if (secretNumber == userInput)
        {
            cout << "Hurray, you guessed right" << endl;
            break;
        }
        else if (numOfTrials > secretNumber)
        {
            cout << "you guessed too high" << endl;
        }
        else
        {
            cout << "you guessed too low" << endl;
        }

        numOfTrials -= 1;

    }

    return 0;
}
