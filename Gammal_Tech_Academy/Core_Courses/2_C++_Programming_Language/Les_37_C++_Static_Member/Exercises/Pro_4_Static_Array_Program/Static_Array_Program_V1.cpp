
//* Static Array Program (Version 1).

/*
* Create a program that includes a function printArray which contains a static array.
* In the main function, call the printArray function twice and observe the behavior of the static array.

! Output:
! Calling the function with static array:
! Static Array Elements: 1 2 3 4 5
! Static Array Elements: 1 2 3 4 5
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
    cout << "\n\nYou welcome in Static Array Program (Version 1) ..\n"
         << endl;
}

// print Array - Function.
void printArrayFun()
{
    static int arr[] = {1, 2, 3, 4, 5};

    cout << "Static Array Elements: ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();
    
    printArrayFun();
    printArrayFun();
    printArrayFun();

    cout << "\n"
         << endl;
}
//* End Function ..
