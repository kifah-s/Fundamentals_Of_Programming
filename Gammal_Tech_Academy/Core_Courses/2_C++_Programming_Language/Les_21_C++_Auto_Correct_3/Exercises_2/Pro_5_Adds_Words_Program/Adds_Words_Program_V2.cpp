
//* Adds Words Program (Version 2).

/*
* Create a program that adds the words "yes" and "no" to the dictionary.

* hello, hi, ok

! Output:
! The words "yes" and "no" have been added to the dictionary.
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
    cout << "\n\nYou welcome in Adds Words Program (Version 2) ..\n"
         << endl;
}

// Add Elements To Vector - Function.
vector<string> addElementsToVectorFun(vector<string> myVec)
{
    // myVec = {"hello", "hi", "ok"};
    myVec.push_back("hello");
    myVec.push_back("hi");
    myVec.push_back("ok");

    return myVec;
}

// Print Vector Befor - Function.
void printVectorBeforFun(vector<string> myVec)
{
    cout << "Vector Befor Add New Words: ";
    for (int i = 0; i < myVec.size(); i++)
    {
        cout << myVec[i] << ", ";
    }
}

// Add New Word To Vector - Function.
vector<string> addNewWordToVectorFun(vector<string> myVec, string newWord)
{
    myVec.push_back(newWord);

    return myVec;
}

// Print Vector After - Function.
void printVectorAfterFun(vector<string> myVec)
{
    cout << "Vector After Add New Words: ";
    for (int i = 0; i < myVec.size(); i++)
    {
        cout << myVec[i] << ", ";
    }
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Declare Variables.
    vector<string> myVector;
    string myWord1 = "yes", myWord2 = "no";

    // Call Functions.
    myVector = addElementsToVectorFun(myVector);
    printVectorBeforFun(myVector);
    myVector = addNewWordToVectorFun(myVector, myWord1);
    myVector = addNewWordToVectorFun(myVector, myWord2);

    // Print Result.
    cout << "\n\nThe word \"" << myWord1 << "\"" << " and \"" << myWord2 << "\" has been added to the dictionary.\n"
         << endl;
    printVectorAfterFun(myVector);

    cout << "\n"
         << endl;
}
//* End Function ..
