
//* Maximum Program (Version 1).

/*
* Write a program that takes three numbers as input and determines the maximum among them.

! Input:
! Please, enter three numbers:
! num 1: 5
! num 2: 7
! num 3: 2

! Output:
! Maximum number: 7
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
    cout << "\n\nYou welcome in Maximum Program (Version 1) ..\n"
         << endl;
}

// Get First Number - Function.
float getFirstNumberFun()
{
    float n = 0;
    cout << "Please enter tow numbers:" << endl;
    cout << "num 1: ";
    cin >> n;

    return n;
}

// Get Second Number - Function.
float getSecondNumberFun()
{
    float n = 0;
    cout << "num 2: ";
    cin >> n;

    return n;
}

// Get Third Number - Function.
float getThirdNumberFun()
{
    float n = 0;
    cout << "num 3: ";
    cin >> n;

    return n;
}

// Maximum - Function.
float maximumFun(float n1, float n2, float n3)
{
    float max = 0;

    if (n1 > n2 && n1 > n3)
    {
        max = n1;
    }
    else if (n2 > n1 && n2 > n3)
    {
        max = n2;
    }
    else
    {
        max = n3;
    }

    return max;
}

// Result - Function.
void resultFun()
{
    // Declare Variables.
    float num1 = 0, num2 = 0, num3 = 0, maximum = 0;

    // Call Functions.
    printWelcomeMessageFun();
    num1 = getFirstNumberFun();
    num2 = getSecondNumberFun();
    num3 = getThirdNumberFun();
    maximum = maximumFun(num1, num2, num3);

    cout << "Maximum: " << maximum;

    cout << "\n"
         << endl;
}
//* End Function ..
