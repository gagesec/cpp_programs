/*

SHIPPING CHARGES

Programmer: Gage, Jon

Course: CSC119-145 Introduction to Programming C++ Spring 2022

Submission Date: 3/2/2022

Gets weight of a package and calculates the shipping cost

*/

//Include Directive - importing input/output library
#include <iostream>

//Include Directive - IO Manipulators
#include <iomanip>

//Use standard namespace
using namespace std;

//Declare Variables
void displayValues(double pkgWeight);
void displayError();
double pkgWeight;


//Main function entry point
int main()
{
    //Display Header
    cout << "      Fast Freight Shipping Company | Shipping Charges       " << endl;
    cout << "-------------------------------------------------------------" << endl;
    cout << "  Weight of Package                         Rate per Pound   " << endl;
    cout << "-------------------------------------------------------------" << endl;
    cout << "   2 pounds or less                            $1.10         " << endl;
    cout << "   Over 2 pounds but not more than 6 pounds    $2.20         " << endl;
    cout << "   Over 6 pounds but not more than 10 pounds   $3.70         " << endl;
    cout << "   Over 10 pounds                              $3.80         " << endl;
    cout << "-------------------------------------------------------------" << endl;
    cout << endl;


    //Get User Input
    cout << "     Enter Package Weight(lbs): ";
    cin >> pkgWeight;
    cout << endl;


    //Throw error if input is invalid
    if (pkgWeight < 0.1) {
        //Send to displayError Module
        displayError();
    } else {
        //Send to displayValues Module
        displayValues(pkgWeight);
    }

    return 0;
}

//Being displayValues Module
void displayValues(double pkgWeight) {



    //Format Values
    cout << fixed << setprecision(2);
    cout << "-------------------------------------------------------------" << endl;

    //Calculate value based on Weight

    //2 pounds or less
    if (pkgWeight <= 2){
        cout << "Shipping Cost: $" << pkgWeight * 1.1 << endl;
    }

    //Over 2 pounds but not more than 6 pounds
    if (pkgWeight > 2 && pkgWeight <= 6) {
        cout << "Shipping Cost: $" << pkgWeight * 2.2 << endl;
    }

    //Over 6 pounds but not more than 10 pounds
    if (pkgWeight > 6 && pkgWeight <= 10) {
        cout << "Shipping Cost: $" << pkgWeight * 3.7 << endl;
    }

    //Over 10 pounds
    if (pkgWeight > 10) {
        cout << "Shipping Cost: $" << pkgWeight * 3.8 << endl;
    }

    cout << "-------------------------------------------------------------" << endl;
}

//Begin Display Error
void displayError (){
    cout << "ERROR! Input is invalid!" << endl;
    cout << "Minimum Weight is: 0.1" << endl;
}
