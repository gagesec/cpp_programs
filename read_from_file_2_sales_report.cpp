/*

Sales Report

Programmer: Gage, Jon

Course: CSC119-145 Introduction to Programming C++ Spring 2022

Submission Date: 4/20/2022

Imports data from a text file into parallel arrays, calculates totals, then prints the output

*/

//Include Directive - importing input/output library
#include <iostream>

//Include Directive - IO Manipulators
#include <iomanip>

//Include Directive - Open/Write Files
#include <fstream>

//Include Directive - needed to convert string to int
#include <string>

//Include Directive - Locale
#include <locale>

//Use standard namespace
using namespace std;

//Declare Functions and Modules
int processArraySize();
void processData(int id[], double sales[], int SIZE);

//Main function entry point
int main()
{
    //Display Header
    cout << "            Brewster's Used Cars, Inc.         " << endl;
    cout << "-----------------------------------------------" << endl;
    cout << "                  Sales Report                 " << endl;
    cout << "-----------------------------------------------" << endl;
    cout << endl;

    //Declare Variables
    const int SIZE = processArraySize();
    int id[SIZE];
    double sales[SIZE];

    //Import data in text file
    processData(id, sales, SIZE);

    //Used to separate id's in table
    double separator = id[0];

    //Format Numbers - adds comma separators to sales variable
    struct threes : std::numpunct<char>
    {
        std::string do_grouping() const { return "\3"; }
    };

    //PRINT
    cout << "   Salesperson ID" << " |     " << "Sale Amount" << endl;
    cout << "_______________________________________________" << endl;

    //Declare Variables
    double total;
    double grandTotal;
    int lastId;

    //Start Print loop
    for(int i = 0; i < SIZE; i++)
    {
        //if id is greater than separator
        if(id[i] > separator)
        {
            //change value to current id
            separator = id[i];

            //decrease i by 1 so the loop displays all entries
            i--;

            //Output for total sales for current id
            cout << "_______________________________________________" << endl;
            cout << endl;
            cout << "Total Sales for ID " << id[i - 1] << ": $ " << total << endl;
            cout << "_______________________________________________" << endl;

            //reset total for next id
            total = 0;
        }
        //if id is not greater than separator
        else
        {
            //display current id
            cout << endl;
            cout << setw(11) << right << id[i] << "       |     ";

            //used to add comma separators in sales value for formatting
            std::cout.imbue(std::locale(std::cout.getloc(), new threes));

            //display sales output for current id
            std::cout << setprecision(2) << fixed << "$" << setw(10) << right << sales[i] << endl;
        }

        //if id equals separator
        if(id[i] == separator)
        {
            //add sum of sales for current id
            total += sales[i];

            //add sum of all sales
            grandTotal += sales[i];
        }
        //captures last id when the loop breaks to display info for last id
        lastId = id[i];
    }
    //Display total for last id
    cout << "_______________________________________________" << endl;
    cout << endl;
    cout << "Total Sales for ID " << lastId << ": $ " << total << endl;

    //Display grand total sales
    cout << "_______________________________________________" << endl;
    cout << endl;
    cout << "    Total of All Sales: $" << grandTotal << endl;
    cout << "_______________________________________________" << endl;

    return 0;
}


//Gets the number of lines in file and returns value to set array size
int processArraySize()
{
    //used to open txt file
    ifstream brewsterFile;

    //used to get line from txt file
    string line;

    //declare variable
    int count = 0;

    //opens txt file
    brewsterFile.open("brewster.txt");

    //Outputs error if file fails to open
    if(brewsterFile.fail())
    {
        cout << "Error! Failed to open file!" << endl;
        exit(1);
    }

    //loops while not at end of document
    while(!brewsterFile.eof())
    {
        //gets line from txt file
        getline(brewsterFile, line);

        //increments per line
        count++;
    }
    //Close File
    brewsterFile.close();

    //returns last line number of document
    return count;
}

//Begin processing data from text file
void processData(int id[], double sales[], int SIZE)
{
    //Declare Variables
    ifstream brewsterFile;
    string getId;
    string getSale;

    //Opens brewster.txt file
    brewsterFile.open("brewster.txt");

    //Outputs error if file fails to open
    if(brewsterFile.fail())
    {
        cout << "Error! Failed to open file!" << endl;
        exit(1);
    }

    //Start importing data from text file into arrays
    for(int i = 0; i < SIZE; i++)
    {
        //associates values from text file with arrays and imports the values
        brewsterFile >> getId >> getSale;

        //imports and converts strings from text file to their proper int and double variables
        id[i] = stoi(getId);
        sales[i] = stod(getSale);
    }
    //Close File
    brewsterFile.close();

}
