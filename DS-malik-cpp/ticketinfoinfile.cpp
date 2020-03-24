/*
The manager of a football stadium wants you to write a program that calculates the total ticket sales after each game.
There are four types of tickets — box, sideline,premium, and general admission.
After each game datails are stored in a file in the following form:

ticketPrice			numberOfTicketsSold...
Sample data are shown below:
250					5750
100 				28000
50 					35750
25 					18750

The first line in dicates that the ticket price is $250 and that 5750 tickets were sold at that price.
Output the number of tickets sold and the total sale amount.
Format your output with two decimal places.
*/

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main() {
	
	// ifstream variable
	ifstream inputdata;
	inputdata.open("ticketinfo.txt");
	
	// prices of the tickets
	int p250, p100, p50, p25;
	
	// number of tickets
	int np250, np100, np50, np25;
	
	// cost var of all tickets
	double sp250, sp100, sp50, sp25, stotal;
	
	// taking the data from the file ticketinfo.txt
	inputdata >> p250;
	
	cout << p250 << endl;
	//inputdata >> p100 >> np100;
	//inputdata >> p50 >> np50;
	//inputdata >> p25 >> np25;
	
	// computing the cost for all tickets
	//sp250 = p250 * np250;
	//sp100 = p100 * np100;
	//sp50 = p50 * np50;
	//sp25 = p25 * np25;
	
	// outputting the costs
	cout << left << setw(10) << setfill('.') << "cost" << setw(10) << "number of tickets" << endl;
	
	//cout << left << setw(10) << p250 << setw(10) << np250 << endl;
	
	
	cout << "success";
	
	return 0;
}
