/*

Multiplication Table

Programmer: Gage, Jon

Course: CSC119-145 Introduction to Programming C++ Spring 2022

Submission Date: 3/11/2022

Calculates a multiplication Table

*/

//Include Directive - importing input/output library
#include <iostream>

//Include Directive - IO Manipulator
#include <iomanip>

//Use standard namespace
using namespace std;

//Declare Variables
void calInput();
void calInputTable();


//Main function entry point
int main()
{
    int chooseOption;
    //Display Header
    cout << "                      Multiplication Table                    " << endl;
    cout << "---------------------------------------------------------------" << endl;
    cout << endl;

    //Send User To Display Values Module
    cout << "                      1) Multiply Per Line " << endl;
    cout << "                      2) Display As Table  " << endl;
    cout << endl;
    cout << "                      Choose Option: ";
    cin >> chooseOption;
    cout << endl;
    cout << "---------------------------------------------------------------" << endl;

    //Send user to module based on chosen option
    if (chooseOption == 1)
    {
        cout << "(Multiply Per Line)" << endl;
        cout << "---------------------------------------------------------------" << endl;
        calInput();
    }


    if (chooseOption == 2)
    {
        cout << "(Display As Table)" << endl;
        cout << "---------------------------------------------------------------" << endl;
        calInputTable();
    }

    else if (chooseOption < 1 || chooseOption > 2)
    {
        cout << "Invalid Input! Defaulting to (Display As Table)!" << endl;
        cout << "---------------------------------------------------------------" << endl;
        calInputTable();
    }

    return 0;
}

//Begin CalInput Module
void calInput()
{

    //Declare Variables
    int aNum = 1;
    int outPut;

    //Calculate Multiplication Table by incrementing variable (a) until it reaches 12, then increment (aNum) until it reaches 12
    for (int a = 0; a <= 12; a++)
    {

        //Peforms Multiplication Calculation
        outPut = aNum * a;

        //Formats the Multiply Per Line Display
        cout << setw(24) << aNum << " * " << a << " = " << outPut << endl;

        //Break the loop after calculations get to 12 * 12
        if(aNum == 12 && a == 12)
        {
            break;

        //Resets (a) counter after it reaches 12, Increments (aNum)
        }
        else if (a == 12)
        {
            a = 0;
            aNum++;
        }
    }

    //Footer
    cout << endl;
    cout << "---------------------------------------------------------------" << endl;
}

//Begin CalInput Version 2 Module
void calInputTable()
{

    //Declare Variables
    int aNum = 1;
    int outPut;
    int width = 5;

    //Calculate Multiplication Table and format in table view
    for (int a=1; a <= 12; a++)
    {

        //Perform Multiplication Calculation
        outPut = aNum * a;

        //Set Width in between numbers and only end line when (a) loops to 12 and increments (aNum)
        cout << setw(width) << outPut << setw(width);

        //Break the loop after calculations get to 12 * 12
        if(aNum == 12 && a == 12)
        {
            break;
        }

        //Resets (a) counter, Increments (aNum), And Ends line
        else if (a == 12)
        {
            a = 0;
            aNum++;
            cout << endl;
            cout << endl;
        }
    }

    //Footer
    cout << endl;
    cout << "---------------------------------------------------------------" << endl;
}
