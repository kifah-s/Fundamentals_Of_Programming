
//* Input a Question Program (Version 1).

/*
* Create a program that lets the user input a question and get the corresponding answer from the file.

! Input & Output:
! File is open for reading.
! Ask me a question: what is your name?
! Answer: my name is: kifah
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
    cout << "\n\nYou welcome in Input a Question Program (Version 1) ..\n"
         << endl;
}

// Open And Write in File 1 - Function.
void openAndWriteInFile1Fun(fstream &myFi)
{
    myFi.open("my_file.txt", ios::out);

    if (myFi.is_open())
    {
        cout << "File is open for reading." << endl;
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

// Get User Question - Function.
string getUserQuestionFun()
{
    string userQue;

    cout << "Ask me a question: ";
    getline(cin, userQue);

    return userQue;
}

// Check Answer - Function.
void checkAnswerFun(fstream &myFi, string userQue)
{
    myFi.open("my_file.txt", ios::in);

    // string que, ans;
    // if (myFi.is_open())
    // {
    //     while (getline(myFi, que) && getline(myFi, ans))
    //     {
    //         if (que == userQue)
    //         {
    //             cout << ans << endl;
    //         }
    //     }
    // }
    // else
    // {
    //     cout << "Error: Could not open file!" << endl;
    // }
    
    string que, ans;
    if (myFi.is_open())
    {
        while (getline(myFi, que))
        {
            if (que == userQue)
            {
                getline(myFi, ans);
                cout << ans << endl;
            }
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
    string userQuestion;

    // Call Functions.
    openAndWriteInFile1Fun(myFile);
    openAndWriteInFile2Fun(myFile);
    userQuestion = getUserQuestionFun();
    checkAnswerFun(myFile, userQuestion);

    cout << "\n"
         << endl;
}
//* End Function ..
