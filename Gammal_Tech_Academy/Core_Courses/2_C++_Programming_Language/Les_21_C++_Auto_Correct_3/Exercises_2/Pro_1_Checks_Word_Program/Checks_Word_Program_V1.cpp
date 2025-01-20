
//* Checks Word Program (Version 1).

/*
* Write a program that checks if the word "apple" is in the dictionary.

* hello, hi, ok

! Output:
! The word "apple" is not in the dictionary.
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
    cout << "\n\nYou welcome in Checks Word Program (Version 1) ..\n"
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

// Checks Word - Function.
void checksWordFun(vector<string> myVec, string myWo)
{
    bool found = false;

    for (int i = 0; i < myVec.size(); i++)
    {
        if (myVec[i] == myWo)
        {
            found = true;
        }
    }

    if (found)
    {
        cout << "The word \"" << myWo << "\" is in the dictionary.";
    }
    else
    {
        cout << "The word \"" << myWo << "\" is not in the dictionary.";
    }
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Declare Variables.
    vector<string> myVector;
    string myWord = "apple";

    // Call Functions.
    myVector = addElementsToVectorFun(myVector);
    checksWordFun(myVector, myWord);

    cout << "\n"
         << endl;
}
//* End Function ..
