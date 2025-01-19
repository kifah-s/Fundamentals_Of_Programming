
//* Input A Dictionary Program (Version 1).

/*
* Write a program that allows the user to input a dictionary of misspelled and corrected words,
* The program should then prompt the user to enter a word,
* check for spelling mistakes, and replace the word if needed.

! Input:
! Please, enter a number of dictionary: 3

! enter misspelled word: tehr
! enter corrected word: the

! enter misspelled word: wrtie
! enter corrected word: write

! enter misspelled word: gree
! enter corrected word: green

! Please, enter a word: gree

! Output:
! Correct Word: green
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
    cout << "\n\nYou welcome in Input A Dictionary Program (Version 1) ..\n"
         << endl;
}

// Get Number Of Dictionary - Function.
int getNumberOfDictionaryFun(int numOfDic)
{
    cout << "Please, enter a number of dictionary: ";
    cin >> numOfDic;

    return numOfDic;
}

// Add Elements To Map - Function.
map<string, string> addElementsToMapFun(int numOfDic, map<string, string> myMap)
{
    string kay_misspelledWord, value_correctedWord;
    
    for (int i = 0; i < numOfDic; i++)
    {
        cout << "\nenter misspelled word: ";
        cin >> kay_misspelledWord;

        cout << "enter corrected word: ";
        cin >> value_correctedWord;

        myMap[kay_misspelledWord] = value_correctedWord;
    }

    return myMap;
}

// Get Word - Function.
string getWordFun(string w)
{
    cout << "\nPlease, enter a word: ";
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
    int numberOfDictionary = 0;

    // Call Functions.
    numberOfDictionary = getNumberOfDictionaryFun(numberOfDictionary);
    myMap = addElementsToMapFun(numberOfDictionary, myMap);
    word = getWordFun(word);
    word = correctsWordFun(myMap, word);

    cout << "\nCorrect word: " << word;

    cout << "\n"
         << endl;
}
//* End Function ..
