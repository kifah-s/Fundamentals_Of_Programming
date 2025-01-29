
//* Number of Questions Program (Version 1).

/*
* Create a program that counts and displays the number of questions and answers in the file.

! Output:
! File is open for reading.
! Number of Questions and answers is: 4
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
    cout << "\n\nYou welcome in Number of Questions Program (Version 1) ..\n"
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
        myFi << "my name is: kifah" << endl;
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
        myFi << "my age is: 23" << endl;
    }
    else
    {
        cout << "File is not open." << endl;
    }

    myFi.close();
}

// Number of Questions - Function.
int numberofQuestionsFun(fstream &myFi)
{
    int cou = 0;
    string line;

    myFi.open("my_file.txt", ios::in);

    while (getline(myFi, line))
    {
        cou++;
    }

    myFi.close();

    return cou;
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Declare Variables.
    fstream myFile("my_file.txt");
    int counter = 0;

    // Call Functions.
    openAndWriteInFile1Fun(myFile);
    openAndWriteInFile2Fun(myFile);
    counter = numberofQuestionsFun(myFile);

    cout << "Number of Questions and answers is: " << counter;

    cout << "\n"
         << endl;
}
//* End Function ..
