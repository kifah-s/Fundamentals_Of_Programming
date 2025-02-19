
//* Binary Representation and NOT Program (Version 1).

/*
* Modify the previous program to print the binary representation of the bitwise NOT operation on the positive integer 5.
* For example, if the input is 5, the program should output the binary representation as "11111111111111111111111111111010".

! Output:
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
    cout << "\n\nYou welcome in Binary Representation and NOT Program (Version 1) ..\n"
         << endl;
}

// Binary Representation - Function.
void binaryRepresentationFun(int n)
{
    n = (~n);

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
