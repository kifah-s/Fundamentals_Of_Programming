

//* Sum Of Numbers 2 Program (Version 1).

/*
* Write a program to calculate the sum of natural numbers up to a given positive integer using the formula sum n * (n + 1) / 2

! Input:
! Please, enter a positive number: 7

! Output:
! Sum of numbers up to 7: 28
*/

#include <iostream>

using namespace std;

void resultFun(int num, int sumOfNums);

int main()
{
    // Declare Variables.
    int num = 0, sumOfNumbers = 0;

    // Call Functions.
    resultFun(num, sumOfNumbers);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Sum Of Numbers 2 Program (Version 1) ..\n"
         << endl;
}

// Get Number - Function.
int getNumberFun(int num)
{
    cout << "Please, enter a positive number: ";
    cin >> num;

    return num;
}

// Sum Of Numbers - Function.
int sumOfNumbersFun(int num, int sumOfNums)
{
    sumOfNums = num * (num + 1) / 2;
    // sumOfNums = 7 * (7 + 1) / 2;

    return sumOfNums;
}

// Result - Function.
void resultFun(int num, int sumOfNums)
{
    printWelcomeMessageFun();
    num = getNumberFun(num);
    sumOfNums = sumOfNumbersFun(num, sumOfNums);

    cout << "Sum Of Number: " << sumOfNums << "\n\n"
         << endl;
}
//* End Function ..
