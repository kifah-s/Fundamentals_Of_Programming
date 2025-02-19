
//* Converts String 5 Program (Version 1).

/*
* Write a program that converts a string "8" to an integer using stoi and prints the result squared.
* For example, the program should output "64".

! Output:
! 64
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
    cout << "\n\nYou welcome in Converts String 5 Program (Version 1) ..\n"
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
    string myStr = "8";
    int myNum = 0;

    // Call Functions.
    printWelcomeMessageFun();
    convertsStringFun(myStr, myNum);

    cout << myNum * myNum;
    
    

    cout << "\n"
         << endl;
}
//* End Function ..
