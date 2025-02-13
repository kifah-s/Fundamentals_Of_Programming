
//* Vowel or Consonant Program (Version 2).

/*
* Create a program that takes a character as input and determines whether it is a vowel or a consonant.

! Input:
! Please, enter a character: *

! Output:
! Invalid input, Please, enter a character.
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
#include <fstream>

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
    cout << "\n\nYou welcome in Vowel or Consonant Program (Version 2) ..\n"
         << endl;
}

// Get Character - Function.
char getCharacterFun()
{
    char c;
    cout << "Please, enter a character: ";
    cin >> c;

    return c;
}

// Vowel Or Consonant - Function.
void vowelOrConsonantFun(char c)
{
    if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z')
    {
        // if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        // {
        //     cout << c << " is Vowel." << endl;
        // }
        // else
        // {
        //     cout << c << " is Consonant." << endl;
        // }
        switch (c)
        {
        case 'A':
        case 'a':
        case 'E':
        case 'e':
        case 'I':
        case 'i':
        case 'O':
        case 'o':
        case 'U':
        case 'u':
            cout << c << " is Vowel." << endl;
            break;

        default:
            cout << c << " is Consonant." << endl;
            break;
        }
    }
    else
    {
        cout << "Invalid input, Please, enter a character." << endl;
    }
}

// Result - Function.
void resultFun()
{
    // Declare Variables.
    char myChar;

    // Call Functions.
    printWelcomeMessageFun();
    myChar = getCharacterFun();
    vowelOrConsonantFun(myChar);

    cout << "\n"
         << endl;
}
//* End Function ..
