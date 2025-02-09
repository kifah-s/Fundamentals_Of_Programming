
//* Print Elements Program (Version 1).

/*
* Write a program that utilizes the for_each loop to print the elements of an integer array.
* The array contains five elements: {8, 15, 3, 10, 6}.

! Output:
! 8 15 3 10 6
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
    cout << "\n\nYou welcome in Print Elements Program (Version 1) ..\n"
         << endl;
}

// Print - Fuction.
void printFuc(int x)
{
    cout << x << " ";
}

// Using For Each - Function.
void usingForEachFun(int arr[])
{
    for_each(arr, arr + 5, printFuc);
}

// Result - Function.
void resultFun()
{
    // Declare Variables.
    int myArray[] = {8, 15, 3, 10, 6};

    // Call Functions.
    printWelcomeMessageFun();
    usingForEachFun(myArray);

    cout << "\n"
         << endl;
}
//* End Function ..
