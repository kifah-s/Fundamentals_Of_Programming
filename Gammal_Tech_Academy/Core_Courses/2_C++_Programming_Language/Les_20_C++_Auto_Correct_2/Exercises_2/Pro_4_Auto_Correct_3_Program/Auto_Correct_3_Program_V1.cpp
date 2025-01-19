
//* Auto Correct 3 Program (Version 1).

/*
* Write a program that checks and corrects the spelling of a user-entered word using a predefined dictionary,
* The corrected word should be displayed if there is a spelling mistake.

* carrot, tomato, potato

! Input:
! Please, enter a word: carot

! Output:
! Correct Word: carrot
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
    cout << "\n\nYou welcome in Auto Correct 3 Program (Version 1) ..\n"
         << endl;
}

// Add Elements To Map - Function.
map<string, string> addElementsToMapFun(map<string, string> myMap)
{
    myMap = {{"carot", "carrot"},
             {"tomto", "tomato"},
             {"ptato", "potato"}};

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
