

//* Sum Of Numbers Program (Version 1).

/*
* Create a program to calculate the sum of numbers from 1 to 10

! Output:
! Sum Of Numbers: 55
*/

#include <iostream>

using namespace std;

void resultFun(int sumOfNums);

int main()
{
    // Declare Variables.
    int sumOfNumbers = 0;

    // Call Functions.
    resultFun(sumOfNumbers);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Sum Of Numbers Program (Version 1) ..\n"
         << endl;
}

// Sum Of Numbers - Function.
int sumOfNumbersFun(int sumOfNums)
{
    for (int i = 1; i <= 10; i++)
    {
        sumOfNums = sumOfNums + i;
    }

    return sumOfNums;
}

// Result - Function.
void resultFun(int sumOfNums)
{
    printWelcomeMessageFun();
    sumOfNums = sumOfNumbersFun(sumOfNums);

    cout << "Sum Of Number: " << sumOfNums << "\n\n"
         << endl;
}
//* End Function ..
