
//* Checks And Corrects 3 Program (Version 1).

/*
* Write a program that auto corrects user-inputted words using a predefined dictionary,
* The program should prompt the user to enter a word,
* check for spelling mistakes, and replace the word if needed.

* computer, intelligent, programming

! Input:
! Please, enter a word: home

! Output:
! No Correction needed: home
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
    cout << "\n\nYou welcome in Checks And Corrects 3 Program (Version 1) ..\n"
         << endl;
}

// Add Elements To Map - Function.
map<string, string> addElementsToMapFun(map<string, string> myMap)
{
    myMap["hmoe"] = "home";

    return myMap;
}

// Get Word - Function.
string getWordFun(string w)
{
    cout << "Please, enter a word: ";
    cin >> w;

    return w;
}

// Corrects Word - Function.
void correctsWordFun(map<string, string> myMap, string w)
{
    if (myMap.find(w) != myMap.end())
    {
        // w = myMap[w];
        cout << "\nCorrect word: " << myMap[w];
    }
    else
    {
        cout << "\nNo Correction needed.";
    }
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Declare Variables.
    string word;
    map<string, string> myMap;

    // Call Functions.
    myMap = addElementsToMapFun(myMap);
    word = getWordFun(word);
    correctsWordFun(myMap, word);

    cout << "\n"
         << endl;
}
//* End Function ..
