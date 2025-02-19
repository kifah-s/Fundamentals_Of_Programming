
//* Converts String Program (Version 1).

/*
* Write a program that converts a string "2020" to an integer using the atoi function and prints the result.
* For example, the program should output "2021" when adding 1 to the converted integer.

! Output:
! 2021
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
    cout << "\n\nYou welcome in Converts String Program (Version 1) ..\n"
         << endl;
}

// Converts String - Function.
void convertsStringFun(string &str, int &num)
{
    num = atoi(str.c_str());
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

    cout << myNum + 1;
    
    

    cout << "\n"
         << endl;
}
//* End Function ..
