
//* Converts String 2 Program (Version 1).

/*
* Modify the previous program to use stoi instead of atoi for converting the string "2020" to an integer.

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
    cout << "\n\nYou welcome in Converts String 2 Program (Version 1) ..\n"
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
