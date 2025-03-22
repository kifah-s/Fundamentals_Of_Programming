
//* Power Of Two Using Recursion Program (Version 1).

/*
* Write a program to check if a given number is a power of two using recursion.

! Input:
! Please, enter a number: 15

! Output:
! 15 is not a power of two.
*/

#include <iostream>
#include <array>
#include <vector>
#include <string>
#include <cstring>
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
    cout << "\n\nYou welcome in Power Of Two Using Recursion Program (Version 1) ..\n"
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

// Check Power Of Two - Recursion Function.
bool checkPowerOfTwoRecFun(int num)
{
    if (num == 0)
    {
        return false;
    }
    else if (num == 1)
    {
        return true;
    }
    else if (num % 2 != 0)
    {
        return false;
    }
    else
    {
        return checkPowerOfTwoRecFun(num / 2);
    }
}

// Result - Function.
void resultFun()
{
    // Declare Variables.
    int number = 0;

    // Call Functions.
    printWelcomeMessageFun();

    number = getNumberFun();
    
    if (checkPowerOfTwoRecFun(number))
    {
        cout << number << " is a power of two." << endl;
    }
    else
    {
        cout << number << " is not a power of two." << endl;
    }

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
