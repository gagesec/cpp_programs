/*

Golf Scores

Programmer: Gage, Jon

Course: CSC119-145 Introduction to Programming C++ Spring 2022

Submission Date: 4/18/2022

Users enter players names and their golf score and writes the data to a txt file

*/

//Include Directive - importing input/output library
#include <iostream>

//Include Directive - IO Manipulators
#include <iomanip>

//Include Directive - Open/Write Files
#include <fstream>

//Include Directive - needed to convert string to int
#include <string>

//Use standard namespace
using namespace std;

//Config - File Location
string fileLocation = "golf2.txt";

//Declare Functions and Modules
void getInfo(string playerName[], int playerScore[], int SIZE);

//Main function entry point
int main()
{

    //Display Header
    cout << "               Golf Scores               " << endl;
    cout << "-----------------------------------------" << endl;
    cout << endl;

    //Get user input
    int X;
    cout << "Enter # Of Entries: ";
    cin >> X;
    cout << endl;

    //Declare Variables
    const int SIZE = X;
    string playerName[SIZE];
    int playerScore[SIZE];

    getInfo(playerName, playerScore, SIZE);

    ofstream outputFile;
    outputFile.open(fileLocation, ios::app);

    //Outputs error if file fails to open
    if(outputFile.fail())
    {
        cout << "Error! Failed to open file!" << endl;
        exit(1);
    }

    outputFile << "---------------------------------" << endl;
    outputFile << "---------------------------------" << endl;

    for(int i = 0; i < SIZE; i++)
    {
        outputFile << playerName[i] << ": " << playerScore[i] << endl;
        cout << playerName[i] << ": " << playerScore[i] << endl;
    }
    outputFile.close();
    cout << endl;
    cout << "Data exported successfully!" << endl;

    return 0;
}

void getInfo(string playerName[], int playerScore[], int SIZE)
{
    for(int i = 0; i < SIZE; i++)
    {
        cout << "Enter Player " << i + 1 << " Name: ";
        cin >> playerName[i];
        cout << endl;

        cout << "Enter Player " << i + 1 << " Score: ";
        cin >> playerScore[i];
        cout << endl;
    }
}
