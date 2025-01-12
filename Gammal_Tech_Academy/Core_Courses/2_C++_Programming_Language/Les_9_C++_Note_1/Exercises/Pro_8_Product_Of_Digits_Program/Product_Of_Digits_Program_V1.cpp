
//* Product Of Digits Program (Version 1).

/*
* Create a program to find the product of digits of a given number using a for.


! Input:
! Please, enter a number: 8423

! Output:
! Product of digits: 192
*/

#include <iostream>
#include <array>
#include <vector>
#include <string>
#include <algorithm>
#include <set>

using namespace std;

void resultFun(int num, int pro);

int main()
{
    // Declare Variables.
    int number = 0, productOfNumber = 1;

    // Call Functions.
    resultFun(number, productOfNumber);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Product Of Digits Program (Version 1) ..\n"
         << endl;
}

// Get Number - Function.
int getNumberFun(int num)
{
    cout << "Please, enter a number: ";
    cin >> num;

    return num;
}

// Calculate Product Of Digits - Function.
int calculateProductOfDigitsFun(int num, int pro)
{
    num = getNumberFun(num);

    int dig = 0;
    for (; num > 0;)
    {
        dig = num % 10;
        pro = pro * dig;
        num = num / 10;
    }

    return pro;
}

// Result - Function.
void resultFun(int num, int pro)
{
    printWelcomeMessageFun();
    pro = calculateProductOfDigitsFun(num, pro);

    cout << "\nProduct of digits: " << pro;

    cout << "\n"
         << endl;
}
//* End Function ..
