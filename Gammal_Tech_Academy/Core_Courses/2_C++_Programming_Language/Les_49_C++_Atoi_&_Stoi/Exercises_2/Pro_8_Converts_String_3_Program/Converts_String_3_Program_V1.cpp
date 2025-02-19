
//* Converts String 3 Program (Version 1).

/*
* Write a program that converts a string "123" to an integer using stoi and prints the result.
* For example, the program should output "124" when adding 1 to the converted integer.

! Output:
! 124
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
    cout << "\n\nYou welcome in Converts String 3 Program (Version 1) ..\n"
         << endl;
}

// Converts String - Function.
void convertsStringFun(string &str, int &num)
{
    num = stoi(str);
}

// Result - Function.
void resultFun()
{
    // Declare Variables.
    string myStr = "123";
    int myNum = 0;

    // Call Functions.
    printWelcomeMessageFun();
    convertsStringFun(myStr, myNum);

    cout << myNum + 1;
    
    

    cout << "\n"
         << endl;
}
//* End Function ..
