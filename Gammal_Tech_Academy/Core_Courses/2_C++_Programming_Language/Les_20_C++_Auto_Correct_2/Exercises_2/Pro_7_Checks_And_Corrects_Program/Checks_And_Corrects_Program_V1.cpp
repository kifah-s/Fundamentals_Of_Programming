
//* Checks And Corrects Program (Version 1).

/*
* Write a program that checks and corrects the spelling of user-inputted words using a predefined dictionary,
* The program should prompt the user to enter a word, check for spelling mistakes, and replace the word if needed.

* elephant, giraffe, monkey

! Input:
! Please, enter a word: monky

! Output:
! Correct Word: monkey
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
    cout << "\n\nYou welcome in Checks And Corrects Program (Version 1) ..\n"
         << endl;
}

// Add Elements To Map - Function.
map<string, string> addElementsToMapFun(map<string, string> myMap)
{
    myMap["elphant"] = "elephant";
    myMap["girafe"] = "giraffe";
    myMap["monky"] = "monkey";

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
