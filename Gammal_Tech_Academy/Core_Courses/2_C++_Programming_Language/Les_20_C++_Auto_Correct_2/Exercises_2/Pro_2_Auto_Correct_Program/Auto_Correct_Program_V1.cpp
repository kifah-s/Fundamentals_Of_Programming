
//* Auto Correct Program (Version 1).

/*
* Write a program that uses a dictionary to auto correct a user-entered word,
* If the word is misspelled, the program should replace it with the correct version.

* program, writing, the

! Input:
! Please, enter a word: teh

! Output:
! Correct Word: the
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
    cout << "\n\nYou welcome in Auto Correct Program (Version 1) ..\n"
         << endl;
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
    map<string, string> myMap = {
        {"pogram", "program"},
        {"progam", "program"},
        {"witing", "writing"},
        {"writng", "writing"},
        {"hte", "the"},
        {"teh", "the"}};

    // Call Functions.
    word = getWordFun(word);
    word = correctsWordFun(myMap, word);

    cout << "\nCorrect word: " << word;

    cout << "\n"
         << endl;
}
//* End Function ..
