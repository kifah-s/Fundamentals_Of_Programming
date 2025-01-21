
//* Reverses Word Program (Version 1).

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
    cout << "\n\nYou welcome in Reverses Word Program (Version 1) ..\n"
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
void reversedWordFun(string w)
{
    cout << "Reversed Word: ";
    for (int i = w.size(); i >= 0; i--)
    {
        cout << w[i];
    }
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Declare Variables.
    string word;

    // Call Functions.
    word = getWordFun(word);
    reversedWordFun(word);

    cout << "\n"
         << endl;
}
//* End Function ..
