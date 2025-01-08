

//* Factorial Program (Version 1).

/*
* Create a program to calculate the factorial of a given number using a for

! Input:
! Please, enter a number: 4

! Output:
! Factorial: 24
*/

#include <iostream>

using namespace std;

void resultFun(int num, int fac);

int main()
{
    // Declare Variables.
    int number = 0, factorial = 1;

    // Call Functions.
    resultFun(number, factorial);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Factorial Program (Version 1) ..\n"
         << endl;
}

// Get Number - Function.
int getNumberFun(int num)
{
    cout << "Please, enter a number: ";
    cin >> num;

    return num;
}

// Factorial - Function.
int factorialFun(int num, int fac)
{
    for (int i = 1; i <= num; i++)
    {
        fac = fac * i;
    }

    return fac;
}

// Result - Function.
void resultFun(int num, int fac)
{
    printWelcomeMessageFun();
    num = getNumberFun(num);
    fac = factorialFun(num, fac);

    cout << "Factorial: " << fac << "\n\n"
         << endl;
}
//* End Function ..
