
//* Bitwise OR Operation Program (Version 1).

/*
* Write a program to perform bitwise OR operation between two numbers, 5 and 3.

! Output:
! Result 3 & 5: 7
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
    cout << "\n\nYou welcome in Bitwise OR Operation Program (Version 1) ..\n"
         << endl;
}

// Bitwise Or Operation - Function.
int bitwiseOROperationFun(int n1, int n2, int res)
{
    res = n1 | n2;

    return res;
}

// Result - Function.
void resultFun()
{
    // Declare Variables.
    int num_1 = 3, num_2 = 5, result = 0;

    // Call Functions.
    printWelcomeMessageFun();

    result = bitwiseOROperationFun(num_1, num_2, result);
    cout << "Result " << num_1 << " | " << num_2 << ": " << result;

    cout << "\n"
         << endl;
}
//* End Function ..
