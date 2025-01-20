
//* Checks Word 2 Program (Version 1).

/*
* Create a program that prompts the user to enter a word and checks if it is in the dictionary.

* hello, hi, ok

! Input:
! Please, enter a word: kifah

! Output:
! The word "kifah" is not in the dictionary.
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
    cout << "\n\nYou welcome in Checks Word 2 Program (Version 1) ..\n"
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

// Get Word - Function.
string getWordFun(string w)
{
    cout << "Please, enter a word: ";
    cin >> w;

    return w;
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
        cout << "\nThe word \"" << myWo << "\" is in the dictionary.";
    }
    else
    {
        cout << "\nThe word \"" << myWo << "\" is not in the dictionary.";
    }
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Declare Variables.
    vector<string> myVector;
    string myWord;

    // Call Functions.
    myVector = addElementsToVectorFun(myVector);
    myWord = getWordFun(myWord);
    checksWordFun(myVector, myWord);

    cout << "\n"
         << endl;
}
//* End Function ..
