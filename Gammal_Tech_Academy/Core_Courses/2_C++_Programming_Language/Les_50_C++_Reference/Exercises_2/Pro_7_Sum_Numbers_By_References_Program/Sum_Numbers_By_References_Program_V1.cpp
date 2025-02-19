
//* Sum Numbers By References Program (Version 1).

/*
* Write a program that uses references to calculate the sum of two numbers.

! Output:
! Sum: 14
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
    cout << "\n\nYou welcome in Sum Numbers By References Program (Version 1) ..\n"
         << endl;
}

// Sum Numbers By Reference - Function.
void sumNumbersReferenceFun(int &n1, int &n2, int &s)
{
    s = n1 + n2;
}

// Result - Function.
void resultFun()
{
    // Declare Variables.
    int num1 = 7, num2 = 7, sum = 0;

    // Call Functions.
    printWelcomeMessageFun();

    sumNumbersReferenceFun(num1, num2, sum);
    cout << "Sum: " << sum;

    cout << "\n"
         << endl;
}
//* End Function ..
