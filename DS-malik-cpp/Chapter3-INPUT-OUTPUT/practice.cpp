#include <iostream>
#include <cmath>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream iData;
    ofstream oData;

    string data;

    iData.open("hello.txt");
    oData.open("bye.txt", ios::app);

    getline(iData, data);

    oData << data << endl
          << "This was read from the hello.txt"
          << endl
          << "BYE" << endl;

    iData.close();
    oData.close();

    return 0;
}
