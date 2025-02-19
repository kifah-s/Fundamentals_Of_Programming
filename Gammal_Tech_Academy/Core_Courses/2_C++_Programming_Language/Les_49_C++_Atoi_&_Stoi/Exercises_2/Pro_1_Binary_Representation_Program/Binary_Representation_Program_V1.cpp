
//* Binary Representation Program (Version 1).

/*
* Write a program that prints the binary representation of a given positive integer, using bitwise operations.
* For example, if the input is 5, the program should output the binary representation as "00000000000000000000000000000101".

! Output:
! 00000000000000000000000000000101
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
    cout << "\n\nYou welcome in Binary Representation Program (Version 1) ..\n"
         << endl;
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
    binaryRepresentationFun(num);

    cout << "\n"
         << endl;
}
//* End Function ..
