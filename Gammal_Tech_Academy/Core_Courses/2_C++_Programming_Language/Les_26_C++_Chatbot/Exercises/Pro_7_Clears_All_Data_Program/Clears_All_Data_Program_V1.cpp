
//* Clears All Data Program (Version 1).

/*
* Create a program that clears all the existing questions and answers from the file.

! Input & Output:
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
    cout << "\n\nYou welcome in Clears All Data Program (Version 1) ..\n"
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

// Clears All Data - Function.
void clearsAllDataFun(fstream &myFi)
{
    // myFi.open("my_file.txt", ios::out | ios::trunc);
    myFi.open("my_file.txt", ios::out);
    myFi.close();
    cout << "All data cleared from the file.";
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Declare Variables.
    fstream myFile("my_file.txt");

    // Call Functions.
    openAndWriteInFile1Fun(myFile);
    openAndWriteInFile2Fun(myFile);
    clearsAllDataFun(myFile);

    cout << "\n"
         << endl;
}
//* End Function ..
