
//* Bitwise AND Operation Program (Version 1).

/*
* Write a program to perform bitwise AND operation between two numbers, 7 and 3.

! Output:
! Result 7 & 3: 3
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
    cout << "\n\nYou welcome in Bitwise AND Operation Program (Version 1) ..\n"
         << endl;
}

// Bitwise AND - Function.
int bitwiseANDOperationFun(int n1, int n2, int res)
{
    res = n1 & n2;

    return res;
}

// Result - Function.
void resultFun()
{
    // Declare Variables.
    int num_1 = 7, num_2 = 3, result = 0;

    // Call Functions.
    printWelcomeMessageFun();

    result = bitwiseANDOperationFun(num_1, num_2, result);
    cout << "Result " << num_1 << " & " << num_2 << ": " << result;

    cout << "\n"
         << endl;
}
//* End Function ..
