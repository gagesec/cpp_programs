/*

Celcius to Fahrenheit Converter

Programmer: Gage, Jon

Course: CSC119-145 Introduction to Programming C++ Spring 2022

Submission Date: 2/17/2022

Converts Celcius Temperature to Fahrenheit

*/

//Include Directive - importing input/output library
#include <iostream>

//Use standard namespace
using namespace std;

//Main function entry point
int main() {

    //Declare variable for input
    int fahrenheitTemp, CelciusTemp;

    //Get User Input
    cout << "CELIUS TO FAHRENHEIT CONVERTER" << endl;
    cout << "------------------------------" << endl;
    cout << "Enter Temperature(Celsius): ";
    cin >> CelciusTemp;

    //Converts Celius To Fahrenheit
    fahrenheitTemp = (CelciusTemp * 9/5) + 32;

    //Display Fahrenheit Temperature
    cout << endl;
    cout << "Temperature(Fahrenheit): " << fahrenheitTemp << endl;
    cout << "------------------------------" << endl;

    return 0;
}
