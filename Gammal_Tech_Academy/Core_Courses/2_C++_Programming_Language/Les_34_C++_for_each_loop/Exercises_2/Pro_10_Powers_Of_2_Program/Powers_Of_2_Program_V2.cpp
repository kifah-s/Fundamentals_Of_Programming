
//* Powers Of 2 Program (Version 2).

/*
* Write a program that takes input from the user for seven integers and uses the for_each loop to display the powers of 2 for each number.

! Input:
! Please, enter seven integers:
! int 1: 1
! int 2: 5
! int 3: 9
! int 4: 3
! int 5: 5
! int 6: 7
! int 7: 5

! Output:
! Power of 2 for 1: 1
! Power of 2 for 5: 3
! Power of 2 for 9: 6
! Power of 2 for 3: 15
! Power of 2 for 5: 39
! Power of 2 for 7: 3
! Power of 2 for 5: 9
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
#include <cmath>

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
    cout << "\n\nYou welcome in Powers Of 2 Program (Version 2) ..\n"
         << endl;
}

// Get Integers - Function.
vector<int> getIntegersFun()
{
    vector<int> myVec;
    int num = 0;

    cout << "Please, enter seven integers:" << endl;
    for (int i = 0; i < 7; i++)
    {
        cout << "int " << i + 1 << ": ";
        cin >> num;

        myVec.push_back(num);
    }

    return myVec;
}

// Print - Fuction.
void printFuc(int x)
{
    cout << "Power of 2 for " << x << ": " << pow(2, x) << endl;
}

// Using For Each - Function.
void usingForEachFun(vector<int> myVec)
{
    for_each(myVec.begin(), myVec.end(), printFuc);
}

// Result - Function.
void resultFun()
{
    // Declare Variables.
    vector<int> myVector;

    // Call Functions.
    printWelcomeMessageFun();
    myVector = getIntegersFun();
    usingForEachFun(myVector);

    cout << "\n"
         << endl;
}
//* End Function ..
