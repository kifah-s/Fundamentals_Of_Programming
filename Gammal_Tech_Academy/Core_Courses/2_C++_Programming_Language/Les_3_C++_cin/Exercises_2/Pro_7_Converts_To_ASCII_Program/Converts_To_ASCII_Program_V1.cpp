

//* Converts To ASCII Program (Version 1).

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

void resultFun(char myChar, int myNum);

int main()
{
    // Declare Variables.
    char myCharacter;
    int myNumber = 0;

    // Call Functions.
    resultFun(myCharacter, myNumber);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Converts To ASCII Program (Version 1) ..\n"
         << endl;
}

// Get Character - Function.
char getCharacterFun(char myChar)
{
    cout << "Please, enter character: ";
    cin >> myChar;

    return myChar;
}

// Converts To ASCII - Function.
int convertsToASCIIFun(char myChar, int myNum)
{
    myNum = myChar;

    return myNum;
}

// Result - Function.
void resultFun(char myChar, int myNum)
{
    printWelcomeMessageFun();
    myChar = getCharacterFun(myChar);
    myNum = convertsToASCIIFun(myChar, myNum);

    cout << "\nASCII Value: " << myNum << "\n\n"
         << endl;
}
//* End Function ..
