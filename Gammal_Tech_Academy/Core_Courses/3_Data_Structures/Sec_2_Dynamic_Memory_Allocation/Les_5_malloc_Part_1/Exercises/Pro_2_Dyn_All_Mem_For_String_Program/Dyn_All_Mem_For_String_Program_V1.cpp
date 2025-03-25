
//* Dynamically Allocates Memory For String Program (Version 1).

/*
* Write a program that dynamically allocates memory for a string,
* reads the string from the user, and then displays it.

! Input:
! Please, enter a string: Hello World

! Output:
! You entered: Hello World
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
#include <stdlib.h>

using namespace std;

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Dynamically Allocates Memory For String Program (Version 1) ..\n"
         << endl;
}

// Result - Function.
int resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Declare Pointer and Variables.
    char *stringPointer;
    int size = 50;

    stringPointer = (char *)malloc(size * sizeof(char));

    if (stringPointer == NULL)
    {
        cout << "Memory allocation failed." << endl;
        return 1; // Exit if allocation was unsuccessful.
    }
    
    cout << "Please, enter a string: ";
    cin.getline(stringPointer, size);
    
    cout << "Your Entered: " << stringPointer << endl;
    
    free(stringPointer);

    cout << endl
         << endl;

    return 0;
}
//* End Function ..

int main()
{
    // Call Functions.
    resultFun();

    return 0;
}
