/*

Golf Scores

Programmer: Gage, Jon

Course: CSC119-145 Introduction to Programming C++ Spring 2022

Submission Date: 4/18/2022

reads the file created from previous program
Change golf.txt to golf2.txt on line 32 to read file generated from previous program.

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
int processArraySize();
void processArray(string playerName[], int SIZE);

//Main function entry point
int main()
{

    //Display Header
    cout << "               Golf Scores               " << endl;
    cout << "-----------------------------------------" << endl;
    cout << endl;


    //Declare Variables
    const int SIZE = processArraySize();
    string playerName[SIZE];

    //Process lines from txt file into array
    processArray(playerName, SIZE);

    //Display Array Loop
    for(int i = 0; i < SIZE; i++)
    {
        cout << setw(25) << right << playerName[i] << endl;
    }

    return 0;
}

//Gets the number of lines in file and returns value to set array size
int processArraySize()
{
    //used to open txt file
    ifstream golfFile;

    //used to get line from txt file
    string line;

    //declare variable
    int count = 0;

    //opens txt file
    golfFile.open(fileLocation);

    //Outputs error if file fails to open
    if(golfFile.fail())
    {
        cout << "Error! Failed to open file!" << endl;
        exit(1);
    }

    //loops while not at end of document
    while(!golfFile.eof())
    {
        //gets line from txt file
        getline(golfFile, line);

        //increments per line
        count++;
    }
    //Close file
    golfFile.close();

    //returns last line number of document
    return count;
}

//Adds lines in txt file into array
void processArray(string playerName[], int SIZE)
{
    //used to open txt file
    ifstream golfFile;

    //get line from txt file
    string line;

    //declare variable
    int count = 0;

    //opens txt file
    golfFile.open(fileLocation);

    //Outputs error if file fails to open
    if(golfFile.fail())
    {
        cout << "Error! Failed to open file!" << endl;
        exit(1);
    }

    //loop that get each line and inserts into array
    for(int i = 0; i < SIZE; i++)
    {
        //gets line from txt file
        getline(golfFile, line);

        //inserts each line into array
        playerName[i] = line;

        //increments line count
        count++;
    }
    //Close file
    golfFile.close();
}

