
//* Checks And Corrects 2 Program (Version 1).

/*
* Develop a program that autocorrects user-inputted words using a predefined dictionary,
* The program should prompt the user to enter a word,
* check for spelling mistakes, and replace it with the correct version if necessary.

* computer, intelligent, programming

! Input:
! Please, enter a word: programing

! Output:
! Correct Word: programming
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
    cout << "\n\nYou welcome in Checks And Corrects 2 Program (Version 1) ..\n"
         << endl;
}

// Add Elements To Map - Function.
map<string, string> addElementsToMapFun(map<string, string> myMap)
{
    myMap["computre"] = "computer";
    myMap["intellignt"] = "intelligent";
    myMap["programing"] = "programming";

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
string correctsWordFun(map<string, string> myMap, string w)
{
    if (myMap.find(w) != myMap.end())
    {
        w = myMap[w];
    }

    return w;
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
    word = correctsWordFun(myMap, word);

    cout << "\nCorrect word: " << word;

    cout << "\n"
         << endl;
}
//* End Function ..
