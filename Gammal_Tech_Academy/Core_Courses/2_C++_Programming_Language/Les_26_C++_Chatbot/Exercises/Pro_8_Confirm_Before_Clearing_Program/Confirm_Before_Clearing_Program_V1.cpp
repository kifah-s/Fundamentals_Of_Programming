
//* Confirm Before Clearing Program (Version 1).

/*
* Modify the previous program to confirm before clearing all data from the file.

! Input:
! Are you sure you want to clear all data from the file ( y/n ):
! File is open for writing.
! All data cleared from the file.
*/

#include <iostream>
#include <array>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <utility>
#include <map>
#include <cctype>
#include <fstream>

using namespace std;

void resultFun();

int main()
{
    // Call Functions.
    resultFun();

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Confirm Before Clearing Program (Version 1) ..\n"
         << endl;
}

// Open And Write in File 1 - Function.
void openAndWriteInFile1Fun(fstream &myFi)
{
    myFi.open("my_file.txt", ios::out);

    if (myFi.is_open())
    {
        cout << "File is open for writing." << endl;
        myFi << "what is your name?" << endl;
        myFi << "my name is: kifah" << endl
             << endl;
    }
    else
    {
        cout << "File is not open." << endl;
    }

    myFi.close();
}

// Open And Write in File 2 - Function.
void openAndWriteInFile2Fun(fstream &myFi)
{
    myFi.open("my_file.txt", ios::app);

    if (myFi.is_open())
    {
        myFi << "how old are you" << endl;
        myFi << "my age is: 23" << endl
             << endl;
    }
    else
    {
        cout << "File is not open." << endl;
    }

    myFi.close();
}

// Confirm Before Clearing - Function.
char confirmBeforeClearingFun()
{
    char ans;
    cout << "Are you sure you want to clear all data from the file ( y/n ): ";
    cin >> ans;

    return ans;
}

// Clears All Data - Function.
void clearsAllDataFun(fstream &myFi, char ans)
{
    if (ans == 'y' || ans == 'Y')
    {
        // myFi.open("my_file.txt", ios::out | ios::trunc);
        myFi.open("my_file.txt", ios::out);
        myFi.close();
        cout << "All data cleared from the file.";
    }
    else
    {
        cout << "All data not cleared from the file.";
    }
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Declare Variables.
    fstream myFile("my_file.txt");
    char answer;

    // Call Functions.
    openAndWriteInFile1Fun(myFile);
    openAndWriteInFile2Fun(myFile);
    answer = confirmBeforeClearingFun();
    clearsAllDataFun(myFile, answer);

    cout << "\n"
         << endl;
}
//* End Function ..
