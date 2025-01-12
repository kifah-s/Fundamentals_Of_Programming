

//* Stop Program (Version 1).

/*
* Write a program that takes Input Strings until a Condition word equal "stop".


! Input & Output:
! Please, enter a string (Enter "stop" to stop): kifah
! Entered string: kifah
! Please, enter a string (Enter "stop" to stop): saloum
! Entered string: saloum
! Please, enter a string (Enter "stop" to stop): stop
*/

#include <iostream>
#include <string>
#include <algorithm>
#include <array>
#include <vector>
#include <set>

using namespace std;

void resultFun(string myStr);

int main()
{
    // Declare Variables.
    string myString;

    // Call Functions.
    resultFun(myString);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Stop Program (Version 1) ..\n"
         << endl;
}

// Get  String - Function.
string getStringFun(string myStr)
{
    cout << "Please, enter a string OR (enter \"stop\" to stop): ";
    cin >> myStr;

    return myStr;
}

// Check Word - Function.
void checkWordFun(string myStr)
{
    myStr = getStringFun(myStr);
    while (myStr != "stop")
    {
        cout << "Entered string: " << myStr << endl;
        myStr = getStringFun(myStr);
    }
}

// Result - Function.
void resultFun(string myStr)
{
    printWelcomeMessageFun();
    checkWordFun(myStr);

    cout << "\n\n"
         << endl;
}
//* End Function ..
