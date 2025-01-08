

//* Multiplies By 2 Program (Version 1).

/*
* Create a program that takes an integer as input,
* multiplies it by 2, and prints the result.

! Input:
! Please, enter a number: 6

! Output:
! Multiplies 6 by 2 is: 12
*/

#include <iostream>

void resultFun(int num, int res);

using namespace std;

int main()
{
    // Declare Variables.
    int number = 0, result = 0;

    // Call Functions.
    resultFun(number, result);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Multiplies By 2 Program (Version 1) ..\n"
         << endl;
}

// Get Number - Function.
int getNumberFun(int num)
{
    cout << "Please, enter a number: ";
    cin >> num;

    return num;
}

// Multiplies By 2 - Function.
int multipliesBy2Fun(int num, int res)
{
    res = num * 2;
    return res;
}

// Result - Function.
void resultFun(int num, int res)
{
    printWelcomeMessageFun();
    num = getNumberFun(num);
    res = multipliesBy2Fun(num, res);

    cout << "\nMultiplies " << num << " by 2 is: " << res << "\n\n"
         << endl;
}
//* End Function ..
