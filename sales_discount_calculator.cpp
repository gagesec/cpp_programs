/*

SOFTWARE SALES

Programmer: Gage, Jon

Course: CSC119-145 Introduction to Programming C++ Spring 2022

Submission Date: 2/28/2022

Gets number of copies of software sold and displays
the original amount and applies applicable discounts.

*/

//Include Directive - importing input/output library
#include <iostream>

//Include Directive - IO Manipulators
#include <iomanip>

//Use standard namespace
using namespace std;

//
void displayValues(int softAmount);
void displayError();
double softPrice;

//Main function entry point
int main()
{
    //Display Header
    cout << "          SOFTWARE SALES          " << endl;
    cout << "----------------------------------" << endl;
    cout << "      DISCOUNTS(Copies Sold):     " << endl;
    cout << "             0 -  9:  0%          " << endl;
    cout << "            10 - 19: 20%          " << endl;
    cout << "            20 - 49: 30%          " << endl;
    cout << "            50 - 99: 40%          " << endl;
    cout << "        100 or More: 50%          " << endl;
    cout << "----------------------------------" << endl;


    //Get User Input
    int softAmount;
    cout << "Enter Copies Sold: ";
    cin >> softAmount;
    cout << endl;

    //Throw error if input is invalid
    if (softAmount < 1) {
        //Send to displayError Module
        displayError();
    } else {
        //Send to displayValues Module
        displayValues(softAmount);
    }

    return 0;
}

//Being displayValues Module
void displayValues(int softAmount) {

    //Set Price of Software
    softPrice = 99;

    //Format Values
    cout << setw(10) << fixed << setprecision(2);
    cout << "----------------------------------" << endl;

    //Calculate value based on Number of Copies Sold
    switch (softAmount)
    {

    //Do not provide discount if less than 10 copies sold
    case 0 ... 9:
        cout << "Original Price:  $" << softPrice * softAmount << endl;
        cout << "Discount (0%):   $-" << (softPrice * softAmount) * 0 << endl;
        cout << "         _________________________" << endl;
        cout << "         TOTAL:  $" << (softPrice * softAmount) - ((softPrice * softAmount) * 0) << endl;
        break;

    //Provide 20% Discount
    case 10 ... 19:
        cout << "Original Price:  $" << softPrice * softAmount << endl;
        cout << "Discount (20%): $-" << (softPrice * softAmount) * 0.2 << endl;
        cout << "         _________________________" << endl;
        cout << "         TOTAL:  $" << (softPrice * softAmount) - ((softPrice * softAmount) * 0.2) << endl;
        break;

    //Provide 30% Discount
    case 20 ... 49:
        cout << "Original Price:  $" << softPrice * softAmount << endl;
        cout << "Discount (30%): $-" << (softPrice * softAmount) * 0.3 << endl;
        cout << "         _________________________" << endl;
        cout << "         TOTAL:  $" << (softPrice * softAmount) - ((softPrice * softAmount) * 0.3) << endl;
        break;

    //Provide 40% Discount
    case 50 ... 99:
        cout << "Original Price:  $" << softPrice * softAmount << endl;
        cout << "Discount (40%): $-" << (softPrice * softAmount) * 0.4 << endl;
        cout << "         _________________________" << endl;
        cout << "         TOTAL:  $" << (softPrice * softAmount) - ((softPrice * softAmount) * 0.4) << endl;
        break;

    //Provide 50% Discount
    default:
        cout << "Original Price:  $" << softPrice * softAmount << endl;
        cout << "Discount (50%): $-" << (softPrice * softAmount) * 0.5 << endl;
        cout << "         _________________________" << endl;
        cout << "         TOTAL:  $" << (softPrice * softAmount) - ((softPrice * softAmount) * 0.5) << endl;
    }
    cout << "----------------------------------" << endl;
}

//Begin Display Error
void displayError (){
    cout << "ERROR! Input is invalid!" << endl;
    cout << "Minimum Copies Sold is: 1" << endl;
}
