
//* Stoi and Binary Representation Program (Version 1).

/*
* Write a program that prints the binary representation of an integer obtained by using stoi on the string "2020".
* For example, the program should output "11111100100" for the integer 2020.

! Output:
! 00000000000000000000011111100100
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
    cout << "\n\nYou welcome in Stoi and Binary Representation Program (Version 1) ..\n"
         << endl;
}

// Converts String - Function.
void convertsStringFun(string &str, int &num)
{
    num = stoi(str);
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
    string myStr = "2020";
    int myNum = 0;

    // Call Functions.
    printWelcomeMessageFun();

    convertsStringFun(myStr, myNum);
    binaryRepresentationFun(myNum);

    cout << "\n"
         << endl;
}
//* End Function ..
