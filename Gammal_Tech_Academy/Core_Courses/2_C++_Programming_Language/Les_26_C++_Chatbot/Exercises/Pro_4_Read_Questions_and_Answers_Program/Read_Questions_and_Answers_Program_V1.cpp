
//* Read Questions and Answers Program (Version 1).

/*
* Modify the previous program to read and display all questions and answers from the file.

! Output:
! File is open for reading.
! Question 1: What's your name?
! Answer 1: my name is: kifah
! Question 2: What's your name?
! Answer 2: my name is: kifah
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
    cout << "\n\nYou welcome in Read Questions and Answers Program (Version 1) ..\n"
         << endl;
}

// Open And Write in File 1 - Function.
void openAndWriteInFile1Fun(fstream &myFi)
{
    myFi.open("my_file.txt", ios::out);

    if (myFi.is_open())
    {
        cout << "File is open for reading." << endl;
        myFi << "Question 1: What's your name?" << endl;
        myFi << "Answer 1: my name is: kifah" << endl;
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
        myFi << "Question 2: What's your name?" << endl;
        myFi << "Answer 2: my name is: kifah" << endl;
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
    openAndWriteInFile1Fun(myFile);
    openAndWriteInFile2Fun(myFile);
    openAndReadFromFileFun(myFile);

    cout << "\n"
         << endl;
}
//* End Function ..
