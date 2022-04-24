/*

Theater Seating Revenue with Input Validation

Programmer: Gage, Jon

Course: CSC119-145 Introduction to Programming C++ Spring 2022

Submission Date: 3/24/2022

User enters tickets sold for tiers a, b, and c, then displays gross income.

*/

//Include Directive - importing input/output library
#include <iostream>

//Include Directive - IO Manipulators
#include <iomanip>

//Use standard namespace
using namespace std;

//Set Prices
double aPrice = 20;//Section A Price
double bPrice = 15;//Section B Price
double cPrice = 10;//Section C Price

//Set Capacity
int aCap = 300;//Section A Capacity
int bCap = 500;//Section B Capacity
int cCap = 200;//Section C Capacity

//Declare Functions and Modules
double sum(int aTick, int bTick, int cTick);

//Begin Main Module
int main()
{


    //Display Header
    cout << "              Theatre Seating Revenue                " << endl;
    cout << "-----------------------------------------------------" << endl;
    cout << "                       PRICE | CAPACITY              " << endl;
    cout << "           Section A:   $" << aPrice << "  | " << aCap << endl;
    cout << "           Section B:   $" << bPrice << "  | " << bCap << endl;
    cout << "           Section C:   $" << cPrice << "  | " << cCap << endl;
    cout << "-----------------------------------------------------" << endl;
    cout << endl;


    //Declare Variables
    int aTick, bTick, cTick;
    cout << "SECTION A | Tickets Sold: ";
    cin >> aTick;
    cout << endl;

    while(aTick < 0 || aTick > aCap)
    {
        cout << "Error! Tickets Sold can not be less than 0 or more than " << aCap << "!" << endl;
        cout << endl;

        cout << "SECTION A | Tickets Sold: ";
        cin >> aTick;
        cout << endl;
    }

    cout << "SECTION B | Tickets Sold: ";
    cin >> bTick;
    cout << endl;

    while(bTick < 0 || bTick > bCap)
    {
        cout << "Error! Tickets Sold can not be less than 0 or more than " << bCap << "!" << endl;
        cout << endl;

        cout << "SECTION B | Tickets Sold: ";
        cin >> bTick;
        cout << endl;
    }

    cout << "SECTION C | Tickets Sold: ";
    cin >> cTick;
    cout << endl;

    while(cTick < 0 || cTick > cCap)
    {
        cout << "Error! Tickets Sold can not be less than 0 or more than " << cCap << "!" << endl;
        cout << endl;

        cout << "SECTION C | Tickets Sold: ";
        cin >> cTick;
        cout << endl;
    }

    double revenueA = sum(aTick, bTick, cTick);
    cout << "Revenue: " << setprecision(2) << fixed << "$" << revenueA << endl;


    return 0;
}

double sum(int aTick, int bTick, int cTick)
{
    double result = (aPrice * aTick) + (bPrice * bTick) + (cPrice * cTick);
    return result;
}
