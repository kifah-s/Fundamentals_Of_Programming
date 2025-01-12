
//* Sum Natural Numbers Program (Version 1).

/*
* Write a program to calculate the sum of natural numbers up to a given positive integer,
* using the formula sum n * (n + 1) / 2


! Input:
! Please, enter a positive number: 7

! Output:
! Sum of natural number up to 7: 28
*/

#include <iostream>
#include <array>
#include <vector>
#include <string>
#include <algorithm>
#include <set>

using namespace std;

void resultFun(int num, int sum);

int main()
{
    // Declare Variables.
    int number = 0, sumOfNaturalNumber = 0;

    // Call Functions.
    resultFun(number, sumOfNaturalNumber);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Sum Natural Numbers Program (Version 1) ..\n"
         << endl;
}

// Get Number - Function.
int getNumberFun(int num)
{
    do
    {
        cout << "Please, enter a positive number: ";
        cin >> num;

    } while (num < 0);

    return num;
}

// Sum Of Natural Numbers - Function.
int sumOfNaturalNumbersFun(int num, int sum)
{
    sum = num * (num + 1) / 2;

    return sum;
}

// Result - Function.
void resultFun(int num, int sum)
{
    printWelcomeMessageFun();
    num = getNumberFun(num);
    sum = sumOfNaturalNumbersFun(num, sum);
    cout << "\nSum of natural numbers up to " << num << ": " << sum;

    cout << "\n"
         << endl;
}
//* End Function ..
