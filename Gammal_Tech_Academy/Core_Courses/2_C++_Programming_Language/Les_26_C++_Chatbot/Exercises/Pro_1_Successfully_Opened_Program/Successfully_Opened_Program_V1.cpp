
//* Successfully Opened Program (Version 1).

/*
* Create a program that opens a file for writing and prints a message if the file is successfully opened.

! Output:
! File is open for writing.
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
    cout << "\n\nYou welcome in Successfully Opened Program (Version 1) ..\n"
         << endl;
}

// Check Open File - Function.
void checkOpenFileFun(fstream &myFi)
{
    myFi.open("my_file.txt", ios::out);
    
    if (myFi.is_open())
    {
        cout << "File is open for writing.";
        myFi << "Hello, My File";
    }
    else
    {
        cout << "File is not open.";
    }

    myFi.close();
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Declare Variables.
    fstream myFile("my_file.txt");

    // Call Functions.
    checkOpenFileFun(myFile);

    cout << "\n"
         << endl;
}
//* End Function ..
