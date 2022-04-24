/*

Leftover Pizza

Programmer: Gage, Jon

Course: CSC119-145 Introduction to Programming C++ Spring 2022

Submission Date: 2/17/2022

Calculates leftover pizza

*/

//Include Directive - importing input/output library
#include <iostream>

//Use standard namespace
using namespace std;

//Main function entry point
int main() {

    //Declare variable for input
    int totalPizza, slicesPerPerson, slicesPerPizza, headCount, leftoverPizza;

    //Get user input
    cout << " LEFTOVER PIZZA CALCULATOR!" << endl;
    cout << "____________________________________" << endl;
    cout << endl;
    cout << "Enter number of Pizzas to order: ";
    cin >> totalPizza;
    cout << endl;
    cout << "Enter number of slices per pizza: ";
    cin >> slicesPerPizza;
    cout << endl;
    cout << "Enter how many people will be attending: ";
    cin >> headCount;
    cout << endl;
    cout << "____________________________________" << endl;

    //Calculate leftover Pizza
    slicesPerPerson = 3;
    leftoverPizza = (totalPizza * slicesPerPizza) - (headCount * slicesPerPerson);

    //If amount of left over pizza is less than 0, suggest user to add more pizzas, otherwise display leftover slices of pizza
    if ( leftoverPizza < 0) {
        cout << "Insufficient amount of Pizzas will be ordered! Add more Pizzas!";
    } else {
        cout << "Amount of pizza leftover: ";
        cout << leftoverPizza << endl;
    }

    return 0;
}
