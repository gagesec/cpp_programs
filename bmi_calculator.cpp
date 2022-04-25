/*

BODY MASS INDEX ENHANCEMENT

Programmer: Gage, Jon

Course: CSC119-145 Introduction to Programming C++ Spring 2022

Submission Date: 3/3/2022

Calculates users BMI then informs them if they are underweight or overweight

*/

//Include Directive - importing input/output library
#include <iostream>

//Include Directive - IO Manipulators
#include <iomanip>

//Include Directive - Math Library to add exponential functionality
#include <cmath>

//Use standard namespace
using namespace std;

//Declare Variables
void displayValues(int userHeight, int userWeight);
void displayError();
int userWeight, userHeight;


//Main function entry point
int main()
{
    //Display Header
    cout << "            BMI CALCULATOR              " << endl;
    cout << "----------------------------------------" << endl;
    cout << "             BMI                        " << endl;
    cout << "                                        " << endl;
    cout << "       Below  18.5    Underweight       " << endl;
    cout << "       18.5 - 24.9    Healthy           " << endl;
    cout << "       25.0 - 29.9    Overweight        " << endl;
    cout << "       18.5 or more   Obese             " << endl;
    cout << "----------------------------------------" << endl;
    cout << endl;


    //Get User Input
    cout << "Enter Weight: ";
    cin >> userWeight;
    cout << endl;
    cout << "Enter Height: ";
    cin >> userHeight;
    cout << endl;


    //Throw error if input is invalid
    if (userWeight < 1 || userHeight < 1) {
        //Send to displayError Module
        displayError();
    } else {
        //Send to displayValues Module
        displayValues(userWeight, userHeight);
    }

    return 0;
}

//Being displayValues Module
void displayValues(int userWeight, int userHeight) {


    //Format Values
    cout << fixed << setprecision(1);
    cout << "----------------------------------------" << endl;

    //Calculate values
    cout << "  Your BMI: " << (userWeight * 703) / pow(userHeight, 2)  << endl;

    //Tell user their BMI status
    int bmiStatus;
    bmiStatus = (userWeight * 703) / pow(userHeight, 2);

    //Below 18.5 | Underweight
    if (bmiStatus < 18.5) {
        cout << "BMI Status: Underweight";
    }

    //Between 18.5—24.9 | Healthy
    if (bmiStatus >= 18.5 && bmiStatus <= 24.9) {
       cout << "BMI Status: Healthy";
    }

    //Between 25.0—29.9 | Overweight
    if (bmiStatus >= 25.0 && bmiStatus <= 29.9) {
        cout << "BMI Status: Overweight";
    }

    //30.0 and Above | Overweight
    if (bmiStatus >= 30.0) {
        cout << "BMI Status: Obese";
    }

    cout << endl;
    cout << "----------------------------------------" << endl;
}

//Begin Display Error
void displayError (){
    cout << "ERROR! Input is invalid!" << endl;
    cout << "" << endl;
}
