

//* Converts To ASCII Program (Version 2).

/*
* Create a program that takes a character as input,
* converts it to its ASCII value, and prints the result.

! Input:
! Please, enter character: G

! Output:
! ASCII Value: 71
*/

#include <iostream>

using namespace std;

void resultFun(char myChar);

int main()
{
    // Declare Variables.
    char myCharacter;

    // Call Functions.
    resultFun(myCharacter);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Converts To ASCII Program (Version 2) ..\n"
         << endl;
}

// Get Character - Function.
char getCharacterFun(char myChar)
{
    cout << "Please, enter character: ";
    cin >> myChar;

    return myChar;
}

// Result - Function.
void resultFun(char myChar)
{
    printWelcomeMessageFun();
    myChar = getCharacterFun(myChar);

    cout << "\nASCII Value: " << (int)myChar << "\n\n"
         << endl;
}
//* End Function ..
