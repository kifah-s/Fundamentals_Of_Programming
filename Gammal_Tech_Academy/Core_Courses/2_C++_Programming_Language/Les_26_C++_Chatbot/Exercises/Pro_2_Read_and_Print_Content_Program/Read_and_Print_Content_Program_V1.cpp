
//* Read and Print Content Program (Version 1).

/*
* Modify the previous program to read and print the content from the file.

! Output:
! File is open for reading.
! Hello, My File.
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
    cout << "\n\nYou welcome in Read and Print Content Program (Version 1) ..\n"
         << endl;
}

// Open And Write in File - Function.
void openAndWriteInFileFun(fstream &myFi)
{
    myFi.open("my_file.txt", ios::out);

    if (myFi.is_open())
    {
        cout << "File is open for reading." << endl;
        myFi << "Hello, My File";
    }
    else
    {
        cout << "File is not open." << endl;
    }

    myFi.close();
}

// Open And Read From File - Function.
void openAndReadFromFileFun(fstream &myFi)
{
    myFi.open("my_file.txt", ios::in);

    string line;
    if (myFi.is_open())
    {
        while (getline(myFi, line))
        {
            cout << line << endl;
        }
    }
    else
    {
        cout << "Error: Could not open file!" << endl;
    }

    // Close the file
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
    openAndWriteInFileFun(myFile);
    openAndReadFromFileFun(myFile);

    cout << "\n"
         << endl;
}
//* End Function ..
