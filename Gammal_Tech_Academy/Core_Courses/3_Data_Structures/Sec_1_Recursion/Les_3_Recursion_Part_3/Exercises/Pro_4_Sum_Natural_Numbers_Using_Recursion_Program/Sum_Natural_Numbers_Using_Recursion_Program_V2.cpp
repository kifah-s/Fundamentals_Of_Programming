
//* Sum Natural Numbers Using Recursion Program (Version 2).

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
    cout << "\n\nYou welcome in Sum Natural Numbers Using Recursion Program (Version 2) ..\n"
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
int sumNaturalNumbersRecFun(int num, int sumNatNum, int i = 0)
{
    // for (int i = 0; i <= num; i++)
    // {
    //     sumNatNum = sumNatNum + i;
    // }
    // return sumNatNum;

    if (i > num) // Base Case.
    {
        return sumNatNum;
    }
    else
    {
        // sumNatNum = sumNatNum + i;
        // sumNatNum += i;
        // i = i + 1;
        // i += 1;
        return sumNaturalNumbersRecFun(num, sumNatNum + i, i + 1); // Recursive Call.
    }
}

// Result - Function.
void resultFun()
{
    // Declare Variables.
    int myNumber = 0, sumNaturalNumbers = 0;

    // Call Functions.
    printWelcomeMessageFun();

    myNumber = getNumberFun();
    sumNaturalNumbers = sumNaturalNumbersRecFun(myNumber, sumNaturalNumbers);
    cout << "Sum of natural numbers up to " << myNumber << " is: " << sumNaturalNumbers << endl;

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
