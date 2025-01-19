
//* Auto Correct 2 Program (Version 1).

/*
* Create a program that auto corrects user-inputted words using a predefined dictionary,
* The program should prompt the user to enter a word,
* check if it is misspelled, andreplace it with the correct version if needed.

* banana, orange, apple

! Input:
! Please, enter a word: banna

! Output:
! Correct Word: banana
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
    cout << "\n\nYou welcome in Auto Correct 2 Program (Version 1) ..\n"
         << endl;
}

// Add Elements To Map - Function.
map<string, string> addElementsToMapFun(map<string, string> myMap)
{
    myMap = {
        {"banna", "banana"},
        {"bnana", "banana"},
        {"orang", "orange"},
        {"orage", "orange"},
        {"aple", "apple"},
        {"appe", "apple"},
    };

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
