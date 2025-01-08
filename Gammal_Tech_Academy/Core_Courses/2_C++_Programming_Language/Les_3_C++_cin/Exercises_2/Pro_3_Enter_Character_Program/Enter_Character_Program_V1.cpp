

//* Enter Character Program (Version 1).

/*
* Write a program that prompts the user to enter a character,
* stores it in a char variable, and prints the entered character.

! Input:
! Please, enter a character: A

! Output:
! The character is A
*/

#include <iostream>

using namespace std;

void resultFun(char c);

int main()
{
    // Declare Variables.
    char myChar;

    // Call Functions.
    resultFun(myChar);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Enter Character Program (Version 1) ..\n"
         << endl;
}

// Get Char - Function.
char getCharFun(char c)
{
    cout << "Please, enter a character: ";
    cin >> c;

    return c;
}

// Print Char - Function.
void printCharFun(char c)
{
    cout << "\nThe character is: " << c << "\n\n"
         << endl;
}

// Result - Function.
void resultFun(char c)
{
    printWelcomeMessageFun();
    c = getCharFun(c);
    printCharFun(c);
}
//* End Function ..
