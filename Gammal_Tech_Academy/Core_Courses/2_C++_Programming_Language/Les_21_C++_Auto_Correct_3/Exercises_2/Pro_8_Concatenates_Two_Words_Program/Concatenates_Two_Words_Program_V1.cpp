
//* Concatenates Two Words Program (Version 1).

/*
* Create a program that concatenates two words entered by the user and prints the result.

! Input:
! Please enter first word: kifah
! Please enter second word: saloum

! Output:
! Concatenates Words: kifah saloum
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
    cout << "\n\nYou welcome in Concatenates Two Words Program (Version 1) ..\n"
         << endl;
}

// Get First Word - Function.
string getFirstWordFun(string firWo)
{
    cout << "Please enter first word: ";
    cin >> firWo;

    return firWo;
}

// Get Second Word - Function.
string getSecondWordFun(string secWo)
{
    cout << "Please enter second word: ";
    cin >> secWo;

    return secWo;
}

// Concatenates Words - Function.
string concatenatesWordsFun(string conWo, string firWo, string secWo)
{
    conWo = firWo + " " + secWo;

    return conWo;
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Declare Variables.
    string firstWord, secondWord, concatenatesWords;

    // Call Functions.
    firstWord = getFirstWordFun(firstWord);
    secondWord = getSecondWordFun(secondWord);
    concatenatesWords = concatenatesWordsFun(concatenatesWords, firstWord, secondWord);

    // Print Result.
    cout << "Concatenates Words: " << concatenatesWords;

    cout << "\n"
         << endl;
}
//* End Function ..
