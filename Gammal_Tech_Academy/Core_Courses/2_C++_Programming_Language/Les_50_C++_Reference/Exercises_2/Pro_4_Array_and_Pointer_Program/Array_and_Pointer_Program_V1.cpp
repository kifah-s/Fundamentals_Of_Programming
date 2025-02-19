
//* Array and Pointer Program (Version 1).

/*
* Write a program that declares an array, uses a pointer to iterate through the array, and prints each element.

! Output:
! Element 1: 1
! Element 2: 2
! Element 3: 3
! Element 4: 4
! Element 5: 5
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
    cout << "\n\nYou welcome in Array and Pointer Program (Version 1) ..\n"
         << endl;
}

// Print Elements - Function.
void printElementsFun(int s, int *p)
{
    for (int i = 0; i < s; i++)
    {
        cout << "Element " << i + 1 << ": " << *p << endl;
        p++;
    }
    
}

// Result - Function.
void resultFun()
{
    // Declare Variables.
    int size = 5, myArray[size] = {1, 2, 3, 4, 5};
    int *pot = myArray;

    // Call Functions.
    printWelcomeMessageFun();

    printElementsFun(size, pot);

    cout << "\n"
         << endl;
}
//* End Function ..
