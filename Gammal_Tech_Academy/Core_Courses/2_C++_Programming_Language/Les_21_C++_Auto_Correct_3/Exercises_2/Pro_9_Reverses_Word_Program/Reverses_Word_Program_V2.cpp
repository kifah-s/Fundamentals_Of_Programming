
//* Reverses Word Program (Version 2).

/*
* Write a program that reverses a word entered by the user and prints the result.

! Input:
! Please enter word: hello

! Output:
! Reversed Word: olleh
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
    cout << "\n\nYou welcome in Reverses Word Program (Version 2) ..\n"
         << endl;
}

// Get Word - Function.
string getWordFun(string w)
{
    cout << "Please enter word: ";
    cin >> w;

    return w;
}

// Reversed Word - Function.
string reversedWordFun(string w)
{
    reverse(w.begin(), w.end());

    return w;
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Declare Variables.
    string word, reverseWord;

    // Call Functions.
    word = getWordFun(word);
    reverseWord = reversedWordFun(word);

    // Print Result.
    cout << "Reversed Word: " << reverseWord;

    cout << "\n"
         << endl;
}
//* End Function ..
