
//* Add New Questions Program (Version 1).

/*
* Modify the previous program to allow the user to add new questions and answers to the file.

! Input & Output:
! File is open for writing.
! Add a new question: how do you do?
! Add the Answer: i am doing well
! New question and answer added to the file.

! Output:
! what is your name?
! my name is: kifah

! how old are you
! my age is: 23

! how do you do?
! i am doing well
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
    cout << "\n\nYou welcome in Add New Questions Program (Version 1) ..\n"
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

// Add New Question - Function.
void addNewQuestionFun(fstream &myFi)
{
    string userQue, userAns;

    cout << "Add a new question: ";
    getline(cin, userQue);

    cout << "Add the answer: ";
    getline(cin, userAns);

    myFi.open("my_file.txt", ios::app);

    myFi << userQue << endl;
    myFi << userAns << endl
         << endl;

    myFi.close();

    cout << "New question and answer added to the file.";
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
    addNewQuestionFun(myFile);

    cout << "\n"
         << endl;
}
//* End Function ..
