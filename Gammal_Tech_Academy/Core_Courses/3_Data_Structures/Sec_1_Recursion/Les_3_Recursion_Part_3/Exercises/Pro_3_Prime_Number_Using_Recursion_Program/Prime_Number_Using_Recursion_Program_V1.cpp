
//* Prime Number Using Recursion Program (Version 1).

/*
* Write a program that takes a positive integer 'num' as input from the user.
* The program should determine and display whether 'num' is a prime number or not using recursion.

! Input:
! Please, enter a positive integer: 5

! Output:
! 5 is a prime number.
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
    cout << "\n\nYou welcome in Prime Number Using Recursion Program (Version 1) ..\n"
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

// Check Number - Recursion Function.
bool checkNumberRecFun(int num, int cou, bool priNum)
{
    // bool priNum = true;
    // for (int i = 2; i < num; i++)
    // {
    //     if (num % i == 0)
    //     {
    //         priNum = false;
    //     }
    // }
    // return priNum;

    if (cou == num) // Base Case.
    {
        return priNum;
    }
    else
    {
        if (num % cou == 0)
        {
            priNum = false;
        }

        return checkNumberRecFun(num, cou + 1, priNum); // Recursive Call.
    }
}

// Prime Or Not - Function.
void primeOrNotFun(int num, int cou, bool priNum)
{
    if (checkNumberRecFun(num, cou, priNum))
    {
        cout << num << " is a prime number." << endl;
    }
    else
    {
        cout << num << " is not a prime number." << endl;
    }
}

// Result - Function.
void resultFun()
{
    // Declare Variables.
    int myNumber = 0;
    int counter = 2;
    bool primeNumber = true;

    // Call Functions.
    printWelcomeMessageFun();

    myNumber = getNumberFun();
    primeOrNotFun(myNumber, counter, primeNumber);

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
