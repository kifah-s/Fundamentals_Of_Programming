
//* Input a Question Program (Version 2).

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
    cout << "\n\nYou welcome in Input a Question Program (Version 2) ..\n"
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
        myFi << "how old are you?" << endl;
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

// Storage File Content In Map - Function.
map<string, string> storageFileContentInMapFun(fstream &myFi)
{
    map<string, string> myMap;

    myFi.open("my_file.txt", ios::in);

    string que, ans;

    while (getline(myFi, que) && getline(myFi, ans))
    {
        myMap[que] = ans;
    }

    // Close the file
    myFi.close();

    return myMap;
}

// Check Answer - Function.
void checkAnswerFun(map<string, string> myMap, string userQue)
{
    // for (const auto &pair : myMap)
    // {
    //     if (pair.first == userQue)
    //     {
    //         cout << pair.second << endl;
    //     }
    // }

    if (myMap.find(userQue) != myMap.end())
    {
        cout << myMap[userQue] << endl;
    }
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Declare Variables.
    fstream myFile("my_file.txt");
    string userQuestion;
    map<string, string> myMap;

    // Call Functions.
    openAndWriteInFile1Fun(myFile);
    openAndWriteInFile2Fun(myFile);
    userQuestion = getUserQuestionFun();
    myMap = storageFileContentInMapFun(myFile);
    checkAnswerFun(myMap, userQuestion);

    cout << "\n"
         << endl;
}
//* End Function ..
