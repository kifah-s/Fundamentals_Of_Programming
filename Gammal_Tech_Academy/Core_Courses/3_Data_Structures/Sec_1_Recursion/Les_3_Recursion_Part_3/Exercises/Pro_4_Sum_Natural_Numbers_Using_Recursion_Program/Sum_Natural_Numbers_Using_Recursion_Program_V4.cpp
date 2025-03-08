
//* Sum Natural Numbers Using Recursion Program (Version 4).

/*
* Write a program to find the sum of natural numbers up to a given number using recursion.

! Input:
! Please, enter a number: 5

! Output:
! Sum of natural numbers up to 5 is: 15
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

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Sum Natural Numbers Using Recursion Program (Version 4) ..\n"
         << endl;
}

// Get Number - Function.
int getNumberFun()
{
    int num = 0;
    cout << "Please, enter a number: ";
    cin >> num;

    return num;
}

// Sum Natural Numbers - Recursion Function.
int sumNaturalNumbersRecFun(int num)
{
    // for (int i = 0; i <= num; i++)
    // {
    //     sumNatNum = sumNatNum + i;
    // }
    // return sumNatNum;

    if (num == 0) // Base Case.
    {
        return 0;
    }
    else
    {
        return num + sumNaturalNumbersRecFun(num - 1); // Recursive Call.
    }
}

// Result - Function.
void resultFun()
{
    // Declare Variables.
    int myNumber = 0;

    // Call Functions.
    printWelcomeMessageFun();

    myNumber = getNumberFun();
    cout << "Sum of natural numbers up to " << myNumber << " is: " << sumNaturalNumbersRecFun(myNumber) << endl;

    cout << endl
         << endl;
}
//* End Function ..

int main()
{
    // Call Functions.
    resultFun();

    return 0;
}
