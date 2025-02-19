
//* NOT and Binary Representation Program (Version 1).

/*
* Write a program that prints the binary representation of a negative integer obtained by using bitwise NOT on the positive integer 5.
* For example, if the input is 5, the program should output the binary representation as "111111111111111111111111111111010".

! Output:
! -6
! 11111111111111111111111111111010
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
    cout << "\n\nYou welcome in NOT and Binary Representation Program (Version 1) ..\n"
         << endl;
}

// Bitwise NOT - Function.
void bitwiseNOTFun(int &n)
{
    n = (~n);
}

// Binary Representation - Function.
void binaryRepresentationFun(int n)
{
    for (int i = 31; i >= 0; i--)
    {
        if (n & (1 << i))
        {
            cout << "1";
        }
        else
        {
            cout << "0";
        }
    }
}

// Result - Function.
void resultFun()
{
    // Declare Variables.
    int num = 5;

    // Call Functions.
    printWelcomeMessageFun();
    
    bitwiseNOTFun(num);
    cout << num << endl;
    binaryRepresentationFun(num);

    cout << "\n"
         << endl;
}
//* End Function ..
